/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:44:15 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/30 18:44:19 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	s_fill_str(char *str, int n, int len, int sign)
{
	str[len] = '\0';
	if (sign == 1)
	{
		str[0] = '-';
		n = -n;
		len--;
	}
	else if (len == 0)
	{
		str[0] = '0';
		return ;
	}
	while (len > 0)
	{
		len--;
		str[len + sign] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = s_get_len(n);
	if (n < 0)
		sign = 1;
	else
		sign = 0;
	ans = (char *)malloc((len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	s_fill_str(ans, n, len, sign);
	return (ans);
}
