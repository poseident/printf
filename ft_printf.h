/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <bschweit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:36:05 by bschweit          #+#    #+#             */
/*   Updated: 2023/10/30 14:12:55 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putnbr_flag(int nb);
int		ft_printf(const char *format, ...);
void	ft_arg(char c, va_list ap, int *i);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_uint(unsigned int nb);
int		ft_hex(unsigned long nb, int sign);
#endif
