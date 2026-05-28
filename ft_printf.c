/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 04:07:23 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 18:00:06 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    t_printf    p;
    va_list     args;
    int         count;

    count = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            p.now_format = format;
            count += check_format(p, args);
        }
        else
        {
            write(1, format, 1);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}

int main(void)
{
    int d;
    d=1002;
    ft_printf("偽物-%dだよ",d);
    printf("\n本物-%dだよ",d);
}