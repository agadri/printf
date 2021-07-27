/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:19:13 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/20 19:18:38 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int i, int *icount, char *str, va_list arg)
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
