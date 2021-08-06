/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:25:11 by adegadri          #+#    #+#             */
/*   Updated: 2021/08/05 18:27:12 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int i, int *icount, const char *str, va_list arg)
{
	int	n;

	if (str[i] == 'd')
	{
		n = va_arg(arg, int);
		ft_putnbr(icount, n);
		i++;
		return (i);
	}
	else
		return (i);
}
