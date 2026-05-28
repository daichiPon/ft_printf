/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 23:35:31 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 23:44:35 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_putnbr_u(unsigned int n)
{
    int   count;
    char  c;

    count = 0;
    if (n >= 10)
        count += ft_putnbr_u(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
    count++;
    return (count);
}
