/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:01:19 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/21 13:03:36 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	unsigned long long counter;
	void *num;

	counter = -2147483647;
	num = &counter;
	ft_printf("pointer: %p\n", num);
	printf("og pf pointer: %p\n", num);
	return (counter);
}
