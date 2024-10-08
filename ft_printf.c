/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:26:16 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/06 11:00:15 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_pf_format is a function that takes a character
// and a variable number of arguments and a pointer to an unsigned integer.
// ft_pf_format will check the character
// and call the appropriate function to print the argument.
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

// ft_print is a variadic function that takes a string
// and a variable number of arguments.
// ft_printf will iterate over the string
// and check if the current character is a '%' sign
// if it is,
// it will call the ft_pf_format function to print the formatted argument.
// if it is not,
// it will call the ft_putchar function to print the character.
// ft_printf will return the number of printed characters.
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
			ft_pf_format(*str, args, &counter);
		}
		else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(args);
	return (counter);
}
