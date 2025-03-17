/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:46:58 by moboulan          #+#    #+#             */
/*   Updated: 2025/03/17 21:26:44 by moboulan         ###   ########.fr       */
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

// long	ft_atoi(const char *str)
// {
// 	long	num;
// 	int		right_most;
// 	int		sign;

// 	num = 0;
// 	sign = 1;
// 	if (*str == '+')
// 		str++;
// 	else if (*str == '-')
// 	{
// 		sign = -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		right_most = (*str - '0') * sign;
// 		printf("%ld\n", num);
// 		if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && right_most > 7))
// 			return (2147483648);
// 		if (num < (INT_MIN / 10) || (num == (INT_MIN / 10) && right_most < -8))
// 			return (2147483648);
// 		num = num * 10 + right_most;
// 		str++;
// 	}
// 	return (num);
// }