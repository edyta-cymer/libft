/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:20:39 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/21 23:38:39 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*tmp_src;

	tmp_src = (char *)src;
	dest = (char *)dst;
	if (tmp_src < dest)
	{
		while (len--)
		{
			dest[len] = tmp_src[len];
		}
	}
	else
		ft_memcpy(dest, tmp_src, len);
	return (dst);
}
