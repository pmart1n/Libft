/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 01:18:11 by pmartin-          #+#    #+#             */
/*   Updated: 2023/02/08 22:16:39 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_atoi(const	char *nptr)
{
	int	result;
	int	sign;
	int	num;

	sign = 1;
	result = 0;
	while (nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == 32))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (nptr && *nptr >= '0' && *nptr <= '9')
	{
		num = *nptr - '0';
		result *= 10;
		result += num;
		nptr++;
	}
	result = sign * result;
	return (result);
}
