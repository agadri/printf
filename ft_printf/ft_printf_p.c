/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:03:50 by adegadri          #+#    #+#             */
/*   Updated: 2021/08/06 18:36:01 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(int i, int *icount, const char *str, va_list arg)
{
	unsigned long long int n;

	if (str[i] == 'p')
	{
		ft_putstr(icount, "0x");
		n = (unsigned int)va_arg(arg, unsigned long long);
		if (!n)
			ft_putchar(icount, '0');
		if (n)
			ft_putnbr_base(icount, n, "0123456789abcdef");
		i++;
		return (i);
	}
	else
		return (i);
}
