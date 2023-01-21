/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartin- <pmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:39:48 by pmartin-          #+#    #+#             */
/*   Updated: 2023/01/21 18:42:14 by pmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int ft_isascii.c(int c)
{
    if(c >= 0 && <= 127)
        return(1);
    return(0);
}