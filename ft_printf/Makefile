#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegadri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 18:07:33 by adegadri          #+#    #+#              #
#    Updated: 2021/08/04 04:48:48 by adegadri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

CC =	gcc

FLAGS   = -Wall -Wextra -Werror

DEL =	/bin/rm -f

SRCS =  ft_printf.c \
		ft_fonction.c \
		ft_printf_c.c \
		ft_printf_s.c \
		ft_printf_p.c \
		ft_printf_d.c \
		ft_printf_i.c \
		ft_printf_u.c \
		ft_printf_x.c \
		ft_printf_o.c \
		ft_putnbr_base.c \
		lib.c \

INCLUDES = ft_printf.h \

SRCS_O  = ${SRCS:.c=.o}

all:    $(NAME)

LIBC    = ar -rcs

%.o: %.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${SRCS_O} ${INCLUDES}
	${LIBC} $(NAME) $(SRCS_O)

fclean: clean
	$(DEL) $(NAME)

clean:
	$(DEL) $(SRCS_O)

re: fclean all
