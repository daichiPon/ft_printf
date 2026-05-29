/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 09:50:12 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/29 08:53:57 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_format(t_printf p, va_list *args)
{
    if (*p.now_format == 'c')
        return ft_putchar(va_arg(*args, int));
    else if (*p.now_format == 's')
        return ft_putstr(va_arg(*args, char *));
    else if (*p.now_format == 'd' || *p.now_format == 'i')
        return ft_putnbr(va_arg(*args, int));
    else if (*p.now_format == 'u')
        return ft_putnbr_u(va_arg(*args, unsigned int));
    else if (*p.now_format == 'x')
        return ft_puthex_lit(va_arg(*args, unsigned int));
    else if (*p.now_format == 'X')
        return ft_puthex_big(va_arg(*args, unsigned int));
    else if (*p.now_format == 'p')
        return ft_puthex_p(va_arg(*args, void *));
    else if (*p.now_format == '%')
        return ft_putchar('%');
    return 0;
}
