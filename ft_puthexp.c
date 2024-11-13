/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:43:36 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/06 10:59:12 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_puthexp is a function that takes an unsigned long integer
// and a pointer to an unsigned integer.
// ft_puthexp will print "0x"
// followed by ptr_address's hexadecimal representation.
// if "ptr_address" is 0, ft_puthexp will print "(nil)".
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

// ft_puthex is a function that takes an unsigned long integer
// and a pointer to an unsigned integer.
// ft_puthex will print the number in hexadecimal using the ft_putchar function.
void	ft_puthex(unsigned long num, unsigned int *counter)
{
	while (num >= 16)
	{
		ft_puthex(num / 16, counter);
		num = num % 16;
	}
	if (num < 10)
		ft_putchar(num + '0', counter);
	else if (num < 16)
		ft_putchar(num - 10 + 'a', counter);
}
