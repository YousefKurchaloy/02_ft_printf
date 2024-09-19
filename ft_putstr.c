/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:40:41 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/18 21:19:54 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, unsigned int *counter)
{
	if(str == NULL)
	{
		ft_putstr("(null)", counter);
		return;
	}
	while (*str)
	{
		ft_putchar(*str, counter);
		str++;
	}
}
