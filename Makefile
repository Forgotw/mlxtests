# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsohler@student.42.fr <lsohler>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 11:07:23 by lsohler@stu       #+#    #+#              #
#    Updated: 2022/12/19 10:58:00 by lsohler@stu      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
INCLUDE		= includes/
INCLUDEMLX	= includes/minilibx_opengl_20191021/
SRC_DIR		= src/
LIBFT_DIR	= libft/
GNL_DIR		= gnl/ 
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs
MLX			= -L includes/minilibx_opengl_20191021/ -lmlx -framework OpenGL -framework AppKit

SRCF		= main.c src/sl_init.c

SRCS		= $(addprefix $(PRINTF_LIB), $(SRCF))

all:		
				$(CC) $(FLAGS) -I $(INCLUDEMLX) -I $(INCLUDE) $(SRCF) -o $(NAME) $(MLX)

clean:
				$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY: all clean fclean re