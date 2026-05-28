/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 00:01:32 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/29 00:10:06 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_puthex_big(unsigned int n)
{
    int  count;
    char base[] = "0123456789ABCDEF";

    count = 0;
    if (n >= 16)
        count += ft_puthex_big(n / 16);
    write(1, &base[n % 16], 1);
    count++;
    return (count);
}
