/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:37:45 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/28 00:28:48 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	srcsize;
	size_t	dstsize;

	srcsize = ft_strlen(s1);
	dstsize = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (srcsize + dstsize + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, srcsize + 1);
	ft_strlcat(dst, s2, srcsize + dstsize + 1);
	return (dst);
}
