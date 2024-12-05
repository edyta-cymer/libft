/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:40:17 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/16 20:38:54 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isnum(str[i]) && str[i] != '\0')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}
