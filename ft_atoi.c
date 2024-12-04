/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:46:58 by moboulan          #+#    #+#             */
/*   Updated: 2024/10/28 00:21:47 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					signe;

	num = 0;
	signe = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signe *= -1;
	}
	while (ft_isdigit(*str))
	{
		if (num >= LLONG_MAX)
		{
			if (signe)
				return (0);
			else
				return (-1);
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)num * signe);
}
