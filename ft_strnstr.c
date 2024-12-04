/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:34:51 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/28 00:29:46 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i + ft_strlen(needle) <= len)
	{
		if (ft_strncmp((haystack + i), needle, ft_strlen(needle)) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
