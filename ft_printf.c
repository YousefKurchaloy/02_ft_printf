/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:26:16 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/13 23:39:22 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_format(char c, unsigned int *counter)
{
	if (c == 'c')
		ft_putchar(c, counter);
	else if (c == 's')
		ft_putstr(c, counter);
	else if (c == 'd' || c == 'i')
		ft_putnbr(c, 10, 0, counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	unsigned int	*counter;

	va_start(args, format);
	*counter = 0;
	while(*format)
	{
		if(format == '%')
		{


		}
		format++;
	}
}

