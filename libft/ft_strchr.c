/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:16:05 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/28 12:27:45 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
const char *ft_strchr(const char *s, int c)
{
    while (*s != (char)c)
    {
        if (*s == '\0')
            return NULL;
        s++;
    }
    return s;
}

// int main(void)
// {
//     const char s[]="mojir%etu";
//     const char *res;
//     int c='%';
//     res=ft_strchr(s,c);
//     printf("\n%s",res);
// }