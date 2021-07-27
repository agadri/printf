/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:02:50 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:16:11 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_printf(char *str, ...)
{
	int		i;
	int		icount;
	va_list	arg;

	i = 0;
	icount = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		i = ft_fonction(i, &icount, str, arg);
	}
	va_end(arg);
	return (icount);
}
