/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:12:56 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/23 19:28:01 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fonction(int i, int *icount, char *str, va_list arg)
{
	if (str[i] == '%')
	{
		i++;
		if (str[i] == 'c')
			i = ft_printf_c(i, icount, str, arg);
		if (str[i] == 's')
			i = ft_printf_s(i, icount, str, arg);
		if (str[i] == 'p')
			i = ft_printf_p(i, icount, str, arg);
		if (str[i] == 'd')
			i = ft_printf_d(i, icount, str, arg);
		if (str[i] == 'i')
			i = ft_printf_i(i, icount, str, arg);
		if (str[i] == 'u')
			i = ft_printf_u(i, icount, str, arg);
		if (str[i] == 'x' || str[i] == 'X')
			i = ft_printf_x(i, icount, str, arg);
		if (str[i] == '%')
			i = ft_printf_o(i, icount, str);
	}
	else
		ft_putchar(icount, str[i++]);
	return (i);
}
