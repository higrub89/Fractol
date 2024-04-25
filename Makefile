# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42.madrid>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 20:49:44 by rhiguita          #+#    #+#              #
#    Updated: 2024/04/25 22:25:18 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = fractol

LIBFT = libft/libft.a
MLX = mlx/libmlx.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = ar
REMOVE = rm -f

SRCS = main.c \

OBJS = (SRCS:.c=.o)

all: $(NAME)

$(NAME): $(MLX) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -L$(MLX) -lft $(MLX_F) -o $(NAME)
	@echo "\033[0;36mCompilation of $(NAME) complete.\033[0m"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

norm:
	@norminette $(SRCS) 

clean:
	@make -C $(LIBFT) clean	
	@make -C $(MLX) clean
	@$(REMOVE) $(OBJS)
	@echo "\033[0;33mObject files removed.\033[0m"

fclean: clean 
	@make -C $(LIBFT) fclean
	@$(REMOVE) $(NAME)	

re: fclean all

.PHONY: all clean fclean re norm

