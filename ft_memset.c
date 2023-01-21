/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:09 by pmartin-          #+#    #+#             */
/*   Updated: 2023/01/21 20:06:35 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memset(void *b. int c, size_t len)
{
    size_t  i;
    unsigned char   *ptr;
    
    i = 0;
    ptr = (unsigned char *)b;
    while (i < len)
        ptr[i++] = (unsigned char)c;
    return(b);
}