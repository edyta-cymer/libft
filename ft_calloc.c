/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:24:40 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/17 16:38:56 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (count && n && count > (UINT_MAX / n))
		return (NULL);
	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	s_zero(memory, count * n);
	return (memory);
}
