/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:48:04 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/24 18:44:33 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		nbr++;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		len;
	long	nbr;

	nbr = (long)n;
	len = ft_nbrlen(nbr);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	if (nbr == 0)
		dst[0] = '0';
	if (nbr < 0)
	{
		dst[0] = '-';
		nbr = -nbr;
	}
	dst[len] = '\0';
	while (nbr)
	{
		len--;
		dst[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (dst);
}
