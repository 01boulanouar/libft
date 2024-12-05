/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:37:45 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/05 23:42:37 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	srcsize;
	size_t	dstsize;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	srcsize = ft_strlen(s1);
	dstsize = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (srcsize + dstsize + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, srcsize + 1);
	ft_strlcat(dst, s2, srcsize + dstsize + 1);
	return (dst);
}
