/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshish <yalshish@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:27:21 by yalshish          #+#    #+#             */
/*   Updated: 2024/09/19 17:38:21 by yalshish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, unsigned int *counter);
void	ft_putstr(char *str, unsigned int *counter);
void	ft_putnbr(long n, int base, int hexcase, unsigned int *counter);
int		ft_printf(const char *str, ...);
#endif
