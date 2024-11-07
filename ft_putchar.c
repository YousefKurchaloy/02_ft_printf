/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:40:06 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/31 20:31:12 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_putchar is a function that takes a character
// and a pointer to an unsigned integer.
// ft_putchar will write the character to the standard output
// and increment the counter.
// the counter is used to keep track of the number of printed characters,
// it's only incremented in this function.
void	ft_putchar(char c, unsigned int *counter)
{
	write(1, &c, 1);
	*counter += 1;
}
