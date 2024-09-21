/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:43:36 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/21 13:03:47 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthexp(unsigned long ptr, unsigned int *counter)
{
    if (ptr == 0)
    {
        ft_putstr("(nil)", counter);
        return;
    }
    ft_putstr("0x", counter);
    ft_putnbr(ptr, 16, 0, counter);
}
