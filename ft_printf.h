/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:27:21 by yalshish          #+#    #+#             */
/*   Updated: 2024/10/06 10:53:33 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, unsigned int *counter);
void	ft_putstr(char *str, unsigned int *counter);
void	ft_putnbr(long long n, int base, int hexcase, unsigned int *counter);
void	ft_puthexp(unsigned long ptr_address, unsigned int *counter);
void	ft_puthex(unsigned long n, unsigned int *counter);
int		ft_printf(const char *str, ...);

#endif
