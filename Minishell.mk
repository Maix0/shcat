# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/06/09 19:08:50 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Functions

link_group = -Wl,--start-group $(1) -Wl,--end-group

# Variables

BUILD_DIR ?= $(shell realpath ./build/)

# Flags
CFLAGS 	= -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD -lreadline  -I./includes -I./output/include -I./stdme/output/include -rdynamic -Wl,-E
# CFLAGS += -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-return=runtime -fno-common -fsanitize-address-use-after-scope
# Sources
# LIB =	./libft/ft_bzero.c \
# 		./libft/ft_calloc.c \
# 		./libft/ft_memset.c \
# 		./libft/ft_split.c \
# 		./libft/ft_strcmp.c \
# 		./libft/ft_strdup.c \
# 		./libft/ft_strlcpy.c \
# 		./libft/ft_strjoin.c \
# 		./libft/ft_strlen.c

SRC_DIR = sources
GEN_DIR = output

SRC =	$(addprefix $(SRC_DIR)/,$(shell cat ./src.list)) $(addprefix $(GEN_DIR)/,$(shell cat ./gen.list))
NAME = minishell

# Commands
CC ?= clang
RM = rm -rf

# Objects
OBJ = $(addprefix $(BUILD_DIR)/sh/,$(SRC:.c=.o))

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

.PHONY: all Bonus

LIBS_NAMES = me gmr aq ast parser
LIBS_FILES = $(addprefix $(BUILD_DIR)/, $(addsuffix .a, $(addprefix lib, $(LIBS_NAMES))))
LIBS_FLAGS = $(addprefix -l, $(LIBS_NAMES))

all:
	@$(MAKE) -C ./stdme/ 					"LIB_NAME=$(shell realpath ./stdme)/"		"BUILD_DIR=$(BUILD_DIR)" libme.a
	@$(MAKE) -C ./allocator/ 				"LIB_NAME=$(shell realpath ./allocator)/"	"BUILD_DIR=$(BUILD_DIR)" libaq.a
	@$(MAKE) -C ./ast/ 						"LIB_NAME=$(shell realpath ./ast)/"			"BUILD_DIR=$(BUILD_DIR)" libast.a
	@$(MAKE) -C ./parser/ -f./Grammar.mk	"LIB_NAME=$(shell realpath ./parser)/"		"BUILD_DIR=$(BUILD_DIR)" libgmr.a
	@$(MAKE) -C ./parser/ -f./Parser.mk		"LIB_NAME=$(shell realpath ./parser)/"		"BUILD_DIR=$(BUILD_DIR)" libparser.a
	@$(MAKE) -f./Minishell.mk $(NAME)


# Bonus (make bonus)
bonus: $(OBJ) $(LIBS_FILES)
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BUILD_DIR)/$(SRCDIRNAME)
	@echo -e '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)'
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -DDEBUG=1 -o $(NAME) $(OBJ) -L$(BUILD_DIR) $(call link_group,$(LIBS_FLAGS))

# Dependences for all
$(NAME): $(OBJ) $(LIBS_FILES)
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(BUILD_DIR) $(call link_group,$(LIBS_FLAGS))

# Creating the objects
$(BUILD_DIR)/sh/%.o: %.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Compiling\t$(END)$(GREEN)$<$(END)'
	@$(CC) $(CFLAGS) -o $@ -c $<

-include	${OBJ:.o=.d}
