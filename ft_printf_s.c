/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:43:20 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/23 19:02:20 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(int i, int *icount, char *str, va_list arg)
{
	char	*s;

	if (str[i] == 's')
	{
		s = va_arg(arg, char *);
		if (!s)
			s = "(null)";
		while (*s != '\0')
		{
			ft_putchar(icount, *s);
			s++;
		}
		i++;
		return (i);
	}
	else
		return (i);
}
