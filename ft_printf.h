/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:18:07 by adegadri          #+#    #+#             */
/*   Updated: 2021/07/27 14:18:16 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(int *icount, char c);
void	ft_putstr(int *icount, char *str);
void	ft_putnbr(int *icount, long long n);
int		ft_strlen(char *str);
void	ft_putnbr_base(int *icount, unsigned long long n);
int		ft_printf_c(int i, int *icount, char *str, va_list arg);
int		ft_printf_s(int i, int *icount, char *str, va_list arg);
int		ft_printf_p(int i, int *icount, char *str, va_list arg);
int		ft_printf_d(int i, int *icount, char *str, va_list arg);
int		ft_printf_i(int i, int *icount, char *str, va_list arg);
int		ft_printf_u(int i, int *icount, char *str, va_list arg);
int		ft_printf_x(int i, int *icount, char *str, va_list arg);
int		ft_printf_o(int i, int *icount, char *str);
int		countnumbers(long nb, char *base);
char	*ft_itoa_base(unsigned int nb, char *base);
int		ft_fonction(int i, int *icount, char *str, va_list arg);
int		ft_printf(char *str, ...);
#endif
