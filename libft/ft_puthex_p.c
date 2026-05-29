/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 08:54:16 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/29 17:51:50 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_puthex_addr(unsigned long n)
{
    int  count;
    char base[] = "0123456789abcdef";

    count = 0;
    if (n >= 16)
        count += ft_puthex_addr(n / 16);
    write(1, &base[n % 16], 1);
    count++;
    return (count);
}

int ft_puthex_p(void *n)
{
    int            count;
    unsigned long  addr;

    addr = (unsigned long)n;
    count = 0;
    write(1, "0x", 2);
    count += 2;
    count += ft_puthex_addr(addr);
    return (count);
}


// int main(void)
// {
//     char n[]="moji";
//     ft_puthex_p(n);
//     return 0;
// }