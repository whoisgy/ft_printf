# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gualee <gualee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 16:24:04 by gualee            #+#    #+#              #
#    Updated: 2022/09/21 21:03:34 by gualee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc

CFlAGS	= -Wall -Wextra -Werror -c -I.

SRCS	=	ft_printf.c\
			srcs/ft_print_char.c\
			srcs/ft_print_hex.c\
			srcs/ft_print_nbr.c\
			srcs/ft_print_percent.c\
			srcs/ft_print_ptr.c\
			srcs/ft_print_str.c\
			srcs/ft_print_unsigned_nbr.c\

LIBFTOBJS	= libft/ft_itoa.o\
				libft/ft_putchar_fd.o\
				libft/ft_putstr_fd.o\

		
OBJS	= ft_printf.o\
			ft_print_char.o\
			ft_print_hex.o\
			ft_print_nbr.o\
			ft_print_percent.o\
			ft_print_ptr.o\
			ft_print_str.o\
			ft_print_unsigned_nbr.o\

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	ar rcs $(NAME) $(OBJS) $(LIBFTOBJS)
	@echo "$(GREEN) printf go wheeeeeeeeeeeeeeeeee $(DEF_COLOR)"

%.o : srcs/%.c
	@echo "$(CYAN)"
	$(CC) $(CFLAGS) -Ilibft -I. -c $<

clean : 
		@echo "$(MAGENTA) start clean "
		@echo "\n"
		make clean -C libft
		${RM} ${OBJS}
		@echo "\n"
		@echo "$(GREEN) done clean done clean done clean done clean  $(DEF_COLOR)"
		
fclean : clean
	make fclean -C libft
	${RM} ${NAME}
	@echo "$(GREEN) done fclean done fclean done fclean done clean hehe $(DEF_COLOR)"

re : fclean all

.PHONY : all clean fclean re 