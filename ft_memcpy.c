/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:52:50 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/30 16:50:36 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (len > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		len--;
	}
	return (dst);
}
/*

int		main(void)
{
	char	src[] = "";
	char	dst[10] = "gggg";
	size_t	len = 2;
	char	*result = ft_memcpy(dst, src, len);
	printf("%s\n", result);
	return (0);
}
*/
