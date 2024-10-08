/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:01:19 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/08 15:04:15 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = -100;
    int rtrn, ft_rtrn;

    // Test character conversion
    rtrn = printf("Character: %c\n", 'A');
    ft_rtrn = ft_printf("Character: %c\n", 'A');
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test string conversion
    rtrn = printf("String: %s\n", "Hello, World!");
    ft_rtrn = ft_printf("String: %s\n", "Hello, World!");
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test string conversion with NULL
    rtrn = printf("String: %s\n", NULL);
    ft_rtrn = ft_printf("String: %s\n", NULL);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test pointer conversion
    rtrn = printf("Pointer: %p\n", &num);
    ft_rtrn = ft_printf("Pointer: %p\n", &num);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test decimal integer conversion
    rtrn = printf("Decimal: %d\n", 12345);
    ft_rtrn = ft_printf("Decimal: %d\n", 12345);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test integer conversion
    rtrn = printf("Integer: %i\n", -12345);
    ft_rtrn = ft_printf("Integer: %i\n", -12345);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test unsigned integer conversion
    rtrn = printf("Unsigned: %u\n", 12345);
    ft_rtrn = ft_printf("Unsigned: %u\n", 12345);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test hexadecimal conversion (lowercase)
    rtrn = printf("Hex (lowercase): %x\n", 12345);
    ft_rtrn = ft_printf("Hex (lowercase): %x\n", 12345);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test hexadecimal conversion (uppercase)
    rtrn = printf("Hex (uppercase): %X\n", 12345);
    ft_rtrn = ft_printf("Hex (uppercase): %X\n", 12345);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Test percent sign conversion
    rtrn = printf("Percent: %%\n");
    ft_rtrn = ft_printf("Percent: %%\n");
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Edge case: zero value
    rtrn = printf("Zero: %d\n", 0);
    ft_rtrn = ft_printf("Zero: %d\n", 0);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Edge case: large number
    rtrn = printf("Large number: %u\n", 4294967295U);
    ft_rtrn = ft_printf("Large number: %u\n", 4294967295U);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Edge case: negative number
    rtrn = printf("Negative number: %d\n", -2147483648);
    ft_rtrn = ft_printf("Negative number: %d\n", -2147483648);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Edge case: hexadecimal zero
    rtrn = printf("Hex zero: %x\n", 0);
    ft_rtrn = ft_printf("Hex zero: %x\n", 0);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    // Edge case: null pointer
    rtrn = printf("Null pointer: %p\n", NULL);
    ft_rtrn = ft_printf("Null pointer: %p\n", NULL);
    printf("return: %d %d\n", rtrn, ft_rtrn);

    return 0;
}
