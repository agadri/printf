/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:41:52 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/23 15:34:30 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(int i, int *icount, char *str, va_list arg)
{
	int		n;
	char	*s;

	if (str[i] == 'x')
	{
		n = va_arg(arg, unsigned int);
		s = ft_itoa_base(n, "0123456789abcdef");
		ft_putstr(icount, s);
		free(s);
		i++;
		return (i);
	}
	if (str[i] == 'X')
	{
		n = va_arg(arg, unsigned int);
		s = ft_itoa_base(n, "0123456789ABCDEF");
		ft_putstr(icount, s);
		free(s);
		i++;
		return (i);
	}
	else
		return (i);
}
