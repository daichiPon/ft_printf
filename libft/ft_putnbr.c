/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:49:23 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 12:16:24 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int	ft_putnbr(int n)
{
    long	nb;
    char	c;
    int		count;

    count = 0;
    nb = n;
    if (nb < 0)
    {
        write(1, "-", 1);
        count++;
        nb = -nb;
    }
    if (nb >= 10)
        count += ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
    return count + 1;
}
