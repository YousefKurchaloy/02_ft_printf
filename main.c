/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:01:19 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/28 04:15:49 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int counter;
	void *num;

	counter = 2147483646;
	num = &counter;
	ft_printf("ft_printf: %  +   d\n", counter);
	printf("printf:%d\n", counter);
	return (counter);
}
