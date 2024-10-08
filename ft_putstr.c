/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:40:41 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/06 13:21:16 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_putstr is a function that takes a string
// and a pointer to an unsigned integer.
// ft_putstr will print the string using the ft_putchar function.
void	ft_putstr(char *str, unsigned int *counter)
{
	if (str == NULL)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, counter);
		str++;
	}
}
