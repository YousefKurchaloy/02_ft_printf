/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:26:16 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/28 04:22:05 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_format(char c, va_list args, unsigned int *counter)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), 10, 0, counter);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), 10, 0, counter);
	else if (c == 'x')
		ft_putnbr(va_arg(args, unsigned int), 16, 0, counter);
	else if (c == 'X')
		ft_putnbr(va_arg(args, unsigned int), 16, 1, counter);
	else if (c == 'p')
		ft_puthexp(va_arg(args, unsigned long int), counter);
	else if (c == '%')
		ft_putchar('%', counter);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	counter;

	if (!str)
		return (-1);
	va_start(args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			pf_flags(&str, &counter);
			ft_pf_format(*str, args, &counter);
		}
		else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(args);
	return (counter);
}

void	pf_flags(const char **str, unsigned int *counter)
{
	char	last_flag;

	last_flag = 0;
	while(**str == '+' || **str == '#' || **str == ' ')
	{
		if(**str == ' ')
			last_flag = ' ';
		else if(**str == '+')
			last_flag = '+';
		else if(**str == '#')
			last_flag = '#';
		str++;
		counter++;
	}
	return ;
}
