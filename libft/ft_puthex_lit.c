/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 23:52:32 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/29 00:10:23 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_puthex_lit(unsigned int n)
{
    int  count;
    char base[] = "0123456789abcdef";

    count = 0;
    if (n >= 16)
        count += ft_puthex_lit(n / 16);
    write(1, &base[n % 16], 1);
    count++;
    return (count);
}
