/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:41:41 by ecymer            #+#    #+#             */
/*   Updated: 2024/03/28 13:41:43 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	trim_len;
	size_t	i;
	char	*new;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	len_s1 = ft_strlen((char *)s1) - 1;
	while (i < ft_strlen((char *)s1) && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (len_s1 > i && ft_strchr(set, s1[len_s1]) != NULL)
		len_s1--;
	trim_len = len_s1 - i + 1;
	new = (char *)malloc((trim_len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1 + i, trim_len);
	new[trim_len] = '\0';
	return (new);
}
/*
int    main(void)
{
    char    *s = "xl";
    char    *f = "l ";
    printf("%s", ft_strtrim(s, f));
    return (0);
}
*/
