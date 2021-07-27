/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:29:10 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:04:53 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(int i, int *icount, char *str, va_list arg)
{
	int	n;

	if (str[i] == 'i')
	{
		n = va_arg(arg, int);
		ft_putnbr(icount, n);
		i++;
	}
	return (i);
}
