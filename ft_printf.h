/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:27:21 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/17 14:52:59 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, unsigned int *counter);
void	ft_putstr(char *str, unsigned int *counter);
void	ft_putnbr(int n, int base, int hexcase, unsigned int *counter);
#endif

