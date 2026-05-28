/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:45:32 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 12:20:31 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_putstr(char *s)
{
    size_t i;
    i=0;
    while(s[i])
    {
        write(1,&s[i],1);
        i++;
    }
    return i;
}