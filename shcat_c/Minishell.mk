# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/04/28 18:17:52 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

OBJDIRNAME ?=

# Flags
CFLAGS = -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD -lreadline -L$(OBJDIRNAME) -lme -lgmr -I./includes -I./stdme/includes -I./parser_src/includes 

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

.PHONY: $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libgmr.a

all: $(NAME)

# Bonus (make bonus)
bonus: $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libgmr.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@printf '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)\n'
	@cc $(CFLAGS) -D DEBUG=42 -o $(NAME) $(OBJ)

# Dependences for all
$(NAME): $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libgmr.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@cc $(CFLAGS) -o $(NAME) $(OBJ) $(LIB_OBJ)

# Creating the objects
$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
	@cc $(CFLAGS) -o $@ -c $<

$(OBJDIRNAME)/libme.a:
	@$(MAKE) --no-print-directory -C ./stdme/ LIB_NAME="$(realpath ./$(stdme))/" "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" libme.a

$(OBJDIRNAME)/libgmr.a:
	@$(MAKE) --no-print-directory -C ./parser/ LIB_NAME="$(realpath ./$(stdme))/" "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" libgmr.a

-include	${OBJ:.o=.d}
