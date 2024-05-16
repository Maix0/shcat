# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/05/16 17:37:10 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

OBJDIRNAME ?=

# Flags
CFLAGS 	= -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD -lreadline  -I./includes -I./output/include -I./stdme/output/include -rdynamic -Wl,-E
# CFLAGS += -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-return=runtime -fno-common -fsanitize-address-use-after-scope
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
GEN_DIR = ./output

SRC =	$(addprefix $(SRC_DIR)/,$(shell cat ./src.list)) $(addprefix $(GEN_DIR)/,$(shell cat ./gen.list))
# Name
NAME = minishell
LIBDIRNAME = libft
SRCDIRNAME = sources

# Commands
CC ?= clang
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
	@$(MAKE) -C ./allocator/ LIB_NAME="$(shell realpath ./parser)/" -j "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" libaq.a
	@$(MAKE) -C ./parser/ LIB_NAME="$(shell realpath ./parser)/" -j "BUILD_DIR=$(shell realpath ./$(OBJDIRNAME))" libgmr.a
	@$(MAKE) -f./Minishell.mk $(NAME)

# Bonus (make bonus)
bonus: $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libgmr.a $(OBJDIRNAME)/libaq.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@echo -e '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)'
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -D DEBUG=42 -o $(NAME) $(OBJ) -L$(OBJDIRNAME) -lgmr -lme -laq -lme

# Dependences for all
$(NAME): $(OBJ) $(LIB_OBJ) $(OBJDIRNAME)/libgmr.a $(OBJDIRNAME)/libme.a $(OBJDIRNAME)/libaq.a
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(LIBDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB_OBJ) -L$(OBJDIRNAME) -lgmr -lme -laq -lme

# Creating the objects
$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Compiling\t$(END)$(GREEN)$<$(END)'
	@$(CC) $(CFLAGS) -o $@ -c $<

-include	${OBJ:.o=.d}
