/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:03:50 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 13:57:02 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(int i, int *icount, char *str, va_list arg)
{
	unsigned long long	n;

	if (str[i] == 'p')
	{
		ft_putstr(icount, "0x");
		n = va_arg(arg, unsigned long long);
		if (n == 0)
		{
			ft_putchar(icount, '0');
		}
		ft_putnbr_base(icount, n);
		i++;
		return (i);
	}
	else
		return (i);
}
