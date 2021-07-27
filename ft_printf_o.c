/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:47:52 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:05:34 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_o(int i, int *icount, char *str)
{
	int	j;

	j = 0;
	if (str[i] == '%')
	{	
		j = i - 1;
		if (str[j] == '%')
			ft_putchar(icount, '%');
		i++;
	}
	return (i);
}
