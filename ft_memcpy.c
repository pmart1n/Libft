/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:23:57 by pmartin-          #+#    #+#             */
/*   Updated: 2023/01/21 20:42:45 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memcpy(void *restrict dest; const void *restrict src, size_t n)
 {
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char)*dst;
    str2 = (unsigned char)*srt;
    if (!n || dest == src)
        return (dest);
    while (n--)
        *str1++ = *str2++;
    return (dest);
}