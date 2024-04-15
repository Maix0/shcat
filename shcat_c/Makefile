# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/04/13 20:18:33 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables

# Name
NAME = minishell 
LIBDIRNAME = libft
SRCDIRNAME = sources

# Commands
CC = cc
RM = rm -rf

# Flags
CFLAGS = -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD -lreadline

# Sources
LIB =	./libft/ft_bzero.c \
		./libft/ft_calloc.c \
		./libft/ft_memset.c \
		./libft/ft_split.c \
		./libft/ft_strcmp.c \
		./libft/ft_strdup.c \
		./libft/ft_strlcpy.c \
		./libft/ft_strjoin.c \
		./libft/ft_strlen.c

SRC =	./sources/ft_cmd.c \
		./sources/ft_echo.c \
		./sources/ft_exit.c \
		./sources/ft_pwd.c \
		./sources/main.c

# Objects
OBJDIRNAME = ./objects
OBJ = $(addprefix $(OBJDIRNAME)/,$(SRC:.c=.o))
LIB_OBJ = $(addprefix $(OBJDIRNAME)/,$(LIB:.c=.o))

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

# Rules

# All (make all)
all: header $(NAME) footer

# Bonus (make bonus)
bonus: header $(OBJ) $(LIB_OBJ) footer
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@printf '$(GREY) Creating $(END)$(GREEN)$(OBJDIRNAME)$(END)\n'
	@printf '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)\n'
	@cc $(CFLAGS) -D DEBUG=42 -o $(NAME) $(OBJ) ./stdme/build/libft.a

# Clean (make clean)
clean:
	@printf '$(GREY) Removing $(END)$(RED)Objects$(END)\n'
	@printf '$(GREY) Removing $(END)$(RED)Objects Folder$(END)\n'
	@$(RM) $(OBJDIRNAME)

# Clean (make fclean)
fclean: clean
	@printf '$(GREY) Removing $(END)$(RED)Program$(END)\n'
	@$(RM) $(NAME)
	@echo ""

# Restart (make re)
re: header fclean all

# Dependences for all
$(NAME): $(OBJ) $(LIB_OBJ)
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@printf '$(GREY) Creating $(END)$(GREEN)$(OBJDIRNAME)$(END)\n'
	@cc $(CFLAGS) -o $(NAME) $(OBJ) $(LIB_OBJ)

# Creating the objects
$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
	@cc $(CFLAGS) -o $@ -c $<

#	Header
header:
		@clear
		@printf '\n\n'
		@printf '$(GOLD)            *******     ****** ******* $(END)\n'
		@printf '$(GOLD)          ******        ***    ******* $(END)\n'
		@printf '$(GOLD)      *******           *      ******* $(END)\n'
		@printf '$(GOLD)     ******                  ******* $(END)\n'
		@printf '$(GOLD)  *******                  ******* $(END)\n'
		@printf '$(GOLD) *******************    *******      * $(END)\n'
		@printf '$(GOLD) *******************    *******    *** $(END)\n'
		@printf '$(GOLD)              ******    ******* ****** $(END)\n'
		@printf '$(GOLD)              ******  $(END)\n'
		@printf '$(GOLD)              ******  $(END)\n'
		@printf '$(GREY)                                      Made by maiboyerlpb x rparodi$(END)\n\n'

#	Footer
footer:
		@printf "$(GOLD)                    shcat\n"
		@printf "$(GOLD)                   ,_     _,$(END)\n"
		@printf "$(GOLD)                   | \\___//|$(END)\n"
		@printf "$(GOLD)                   |=6   6=|$(END)\n"
		@printf "$(GOLD)                   \\=._Y_.=/$(END)\n"
		@printf "$(GOLD)                    )  \`  (    ,$(END)\n"
		@printf "$(GOLD)                   /       \\  (('$(END)\n"
		@printf "$(GOLD)                   |       |   ))$(END)\n"
		@printf "$(GOLD)                  /| |   | |\\_//$(END)\n"
		@printf "$(GOLD)                  \\| |._.| |/-\`$(END)\n"
		@printf "$(GOLD)                   '\"'   '\"'$(END)\n"
		@printf '              $(GREY)The compilation is$(END) $(GOLD)finish$(END)\n               $(GREY)Have a good $(END)$(GOLD)correction !$(END)\n'

pull:
	@printf "$(GREEN)Pulling Submodules$(END)\n"
	@git submodule init
	@git submodule update

#	Phony
.PHONY: all bonus clean fclean re

-include	${OBJ:.o=.d}
