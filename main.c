/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:01:19 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/19 17:27:49 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	unsigned int	counter;
	int				num;

	counter = ft_printf("Hello, World!\n");
	num = -42;
	ft_printf("pointer: %X\n", num);
	printf("og pf pointer: %X\n", num);
	return (counter);
}
