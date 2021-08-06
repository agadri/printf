/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:19:13 by adegadri          #+#    #+#             */
/*   Updated: 2021/08/05 18:27:06 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int i, int *icount,const char *str, va_list arg)
{
	int	c;

	if (str[i] == 'c')
	{
		c = va_arg(arg, int);
		ft_putchar(icount, c);
		i++;
		return (i);
	}
	else
		return (i);
}
