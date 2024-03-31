/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:32:51 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/18 19:39:18 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr_src;
	size_t	i;

	i = 0;
	ptr_src = malloc(ft_strlen(src) + 1);
	if (ptr_src)
	{
		while (src[i] != '\0')
		{
			ptr_src[i] = src[i];
			i++;
		}
	}
	else
		return (NULL);
	ptr_src[i] = '\0';
	return (ptr_src);
}
