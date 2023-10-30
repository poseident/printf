/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <bschweit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:15:17 by bschweit          #+#    #+#             */
/*   Updated: 2023/10/30 14:19:35 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_flag(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += (ft_putstr("-2147483648"));
		return (len);
	}
	if (nb < 0)
	{
		len += (ft_putchar('-'));
		nb = -nb;
	}
	else if (nb > 0)
		len += (ft_putchar('+'));
	if (nb > 9)
	{
		len += (ft_putnbr(nb / 10));
		len += (ft_putnbr(nb % 10));
	}
	else
		len += (ft_putchar(nb + 48));
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += (ft_putstr("-2147483648"));
		return (len);
	}
	if (nb < 0)
	{
		len += (ft_putchar('-'));
		nb = -nb;
	}
	if (nb > 9)
	{
		len += (ft_putnbr(nb / 10));
		len += (ft_putnbr(nb % 10));
	}
	else
		len += (ft_putchar(nb + 48));
	return (len);
}

int	ft_uint(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += (ft_uint(nb / 10));
		len += (ft_uint(nb % 10));
	}
	else
		len += (ft_putchar(nb + 48));
	return (len);
}

int	ft_hex(unsigned long nb, int sign)
{
	int	len;

	len = 0;
	if (nb >= 16)
		len += ft_hex(nb / 16, sign);
	if (nb % 16 < 10)
		len += ft_putchar((nb % 16) + 48);
	else
	{
		if (sign == 1)
			len += ft_putchar((nb % 16) + 87);
		else
			len += ft_putchar((nb % 16) + 55);
	}
	return (len);
}
