/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:41:52 by adegadri          #+#    #+#             */
/*   Updated: 2021/08/06 15:10:52 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(int i, int *icount, const char *str, va_list arg)
{
	unsigned int		n;
 
	if (str[i] == 'x')
	{
		n = va_arg(arg, unsigned int);
		ft_putnbr_base(icount, n, "0123456789abcdef");
		i++;
		return (i);
	}
	if (str[i] == 'X')
	{
		n = va_arg(arg, unsigned int);
		ft_putnbr_base(icount, n, "0123456789ABCDEF");
		i++;
		return (i);
	}
	else
		return (i);
}
