/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:42:43 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/17 15:04:45 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int base, int hexcase, unsigned int *counter)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-', counter);
		num = -num;
	}
	while (num >= base)
	{
		ft_putnbr(num / base, base, 0, counter);
		num = num % base;
	}
	if (num < 10)
		ft_putchar(num + '0', counter);
	else
	{
		if (hexcase == 0)
			ft_putchar(num - 10 + 'a', counter);
		else
			ft_putchar(num - 10 + 'A', counter);
	}
}