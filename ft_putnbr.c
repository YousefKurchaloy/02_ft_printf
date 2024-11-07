/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:42:43 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/06 10:57:16 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_putnbr is a function that takes a long long integer, a base, a hexcase,
// and a pointer to an unsigned integer.
// ft_putnbr will print the number in the specified base using the ft_putchar
// function.
// if hexcase is 0, the number will be printed in lowercase.
// else the number will be printed in uppercase.
void	ft_putnbr(long long num, int base, int hexcase, unsigned int *counter)
{
	if (num < 0)
	{
		ft_putchar('-', counter);
		num = -num;
	}
	while (num >= base)
	{
		ft_putnbr(num / base, base, hexcase, counter);
		num = num % base;
	}
	if (num < 10)
		ft_putchar(num + '0', counter);
	else if (num < 16)
	{
		if (hexcase == 0)
			ft_putchar(num - 10 + 'a', counter);
		else
			ft_putchar(num - 10 + 'A', counter);
	}
}
