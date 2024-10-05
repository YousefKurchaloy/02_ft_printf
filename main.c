/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:01:19 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/05 11:28:16 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	num;
	int	rtrn;
	int ft_rtrn;

	num = -100;
	rtrn = printf("%p\n", &num);
	ft_rtrn = ft_printf("%p\n", &num);
	printf("return: %d %d\n", rtrn, ft_rtrn);
	return (0);
}
