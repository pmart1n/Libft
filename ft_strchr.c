/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:08:49 by pmartin-          #+#    #+#             */
/*   Updated: 2023/01/29 20:44:26 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *) s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (0);
}
