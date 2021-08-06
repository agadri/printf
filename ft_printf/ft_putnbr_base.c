/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:10:51 by adegadri          #+#    #+#             */
/*   Updated: 2021/08/06 17:32:11 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int *icount, unsigned int n, char *base)
{
	if (n >= 16)
	{
		ft_putnbr_base(icount, n / 16, base);
		ft_putnbr_base(icount, n % 16, base);
	}
	else
	{
		ft_putchar(icount, base[n]);
	}
}