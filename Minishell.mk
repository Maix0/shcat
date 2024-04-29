# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/04/29 13:46:19 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

OBJDIRNAME ?=

# Flags
CFLAGS = -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD -lreadline  -I./includes
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

SRC_DIR = ./sources
SRC =	$(addprefix $(SRC_DIR)/,$(shell cat ./src.list))
# Name
NAME = minishell
LIBDIRNAME = libft
SRCDIRNAME = sources

# Commands
CC = cc
RM = rm -rf

# Objects
OBJ = $(addprefix $(OBJDIRNAME)/,$(SRC:.c=.o))
LIB_OBJ = $(addprefix $(OBJDIRNAME)/,$(LIB:.c=.o))

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

.PHONY: all bonus

all:
	@$(MAKE) -C ./stdme/ LIB_NAME="$(shell realpath ./stdme)/" "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" CC=$(CC) libme.a
	@$(MAKE) -C ./parser/ LIB_NAME="$(shell realpath ./parser)/" "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" libgmr.a
	@$(MAKE) -f./Minishell.mk $(NAME)

# Bonus (make bonus)
bonus: $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libgmr.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@printf '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)\n'
	@cc $(CFLAGS) -D DEBUG=42 -o $(NAME) $(OBJ) -L$(OBJDIRNAME) -lme -lgmr

# Dependences for all
$(NAME): $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libgmr.a $(OBJDIRNAME)/libme.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@echo "$(GREY) Linking $(END)$(GREEN)$(NAME)$(END)"
	@cc $(CFLAGS) -o $(NAME) $(OBJ) $(LIB_OBJ) -L$(OBJDIRNAME) -lme -lgmr

# Creating the objects
$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
	@cc $(CFLAGS) -o $@ -c $<

-include	${OBJ:.o=.d}
