/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:44:14 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/23 11:09:17 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		r;

	r = 0;
	i = 0;
	while (r == 0 && i < n)
	{
		r = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		i++;
	}
	return (r);
}
