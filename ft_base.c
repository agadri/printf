/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:13:30 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:42:30 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	countnumbers(long nb, char *base)
{
	int	i;
	int	baselen;

	i = 0;
	baselen = ft_strlen(base);
	while (nb)
	{
		nb /= baselen;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(unsigned int nb, char *base)
{
	char		*result;
	int			i;
	long int	nbr;

	nbr = nb;
	result = malloc(sizeof(char) * countnumbers(nbr, base) + 1);
	if (!result || !nb)
		return (NULL);
	i = countnumbers(nbr, base);
	result[i--] = '\0';
	while (i >= 0)
	{
		result[i--] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
	}
	return (result);
}
