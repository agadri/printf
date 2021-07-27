/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:36:01 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/23 16:27:53 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(int i, int *icount, char *str, va_list arg)
{
	unsigned int	n;

	if (str[i] == 'u')
	{
		n = va_arg(arg, unsigned int);
		ft_putnbr(icount, n);
		i++;
		return (i);
	}
	return (i);
}
