/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:10:51 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:03:06 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int *icount, unsigned long long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (!n)
		return ;
	if (n >= 16)
	{
		ft_putnbr_base(icount, n / 16);
		ft_putchar(icount, base[n % 16]);
	}
	else
		ft_putchar(icount, n + '0');
}
