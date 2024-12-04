/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:16:36 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/27 13:12:43 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	dstsize;

	dstsize = ft_strlen(s1) + 1;
	dst = (char *)malloc(sizeof(char) * dstsize);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, dstsize);
	return (dst);
}
