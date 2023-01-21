/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:40:57 by pmartin-          #+#    #+#             */
/*   Updated: 2023/01/21 20:50:40 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *tmp;
    char *dest;

    tmp = (char *)src;
    dest = (char *)dst;
    if (tmp < dest)
    {
            while (n--)
                    dest[n] = tmp[n];
    }
    else
        ft_memcpy(dest, tmp, n);
    return (dst);
}