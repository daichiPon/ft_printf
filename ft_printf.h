/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 04:11:41 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 12:37:49 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

typedef struct p_printf
{
    const char *now_format;
    char *now_value;
    char *now_type;
}             t_printf ;


#include <stdarg.h>
#include <stdio.h>
#include "libft/libft.h"

int check_format(t_printf p,va_list args);

#endif