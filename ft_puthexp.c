/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:43:36 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/28 02:44:32 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexp(unsigned long ptr_address, unsigned int *counter)
{
	if (ptr_address == 0)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ft_putstr("0x", counter);
	ft_puthex(ptr_address, counter);
}

void	ft_puthex(unsigned long n, unsigned int *counter)
{
	unsigned long	num;

	num = n;
	while (num >= 16)
	{
		ft_puthex(num / 16, counter);
		num = num % 16;
	}
	if (num < 10)
		ft_putchar(num + '0', counter);
	else
		ft_putchar(num - 10 + 'a', counter);
}
