/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:17:21 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/23 16:49:00 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int *icount, char c)
{
	write(1, &c, 1);
	(*icount)++;
}

void	ft_putstr(int *icount, char *str)
{
	if (!str)
		return ;
	while (*str != '\0')
	{
		ft_putchar(icount, *str);
		str++;
	}
}

void	ft_putnbr(int *icount, long long n)
{
	if (n == -2147483648)
	{
		ft_putstr(icount, "-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar(icount, '-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(icount, n / 10);
		ft_putchar(icount, n % 10 + '0');
	}
	else
		ft_putchar(icount, n + '0');
}
