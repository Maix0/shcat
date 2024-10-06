# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/10/06 14:33:24 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Functions

link_group = -Wl,--start-group $(1) -Wl,--end-group

# Variables
ANAME = sh
BUILD_DIR ?= $(shell realpath ./build/)

ifeq ($(MAKECMDGOALS), bonus)
    CFLAGS_ADDITIONAL += -DBONUS=1
    BUILD_DIR := $(BUILD_DIR)/bonus
	NAME := $(NAME)_bonus 
endif

export CFLAGS_ADDITIONAL
export CC
export BASE_PATH
export BUILD_DIR

# Flags
CFLAGS 	= -Werror -Wextra -Wall -Wno-unused-command-line-argument -MMD -I./includes -I./output/include -I./stdme/output/include -rdynamic -Wl,-E
CFLAGS  += $(CFLAGS_ADDITIONAL)


SRC_DIR = sources
GEN_DIR = output

-include Filelist.$(ANAME).mk

SRC =	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES)) $(addprefix $(GEN_DIR)/,$(GEN_FILES)))
OBJ =	$(addsuffix .o,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES) $(GEN_FILES)))
DEP =	$(addsuffix .d,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES) $(GEN_FILES)))
NAME = minishell

# Commands
CC ?= clang
RM = rm -rf

# Objects

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

.PHONY: all bonus build_filelist re clean fclean

LIBS_NAMES = me aq ast parser line exec sh
LIBS_FILES = $(addprefix $(BUILD_DIR)/, $(addsuffix .a, $(addprefix lib, $(LIBS_NAMES))))
LIBS_FLAGS = $(addprefix -l, $(LIBS_NAMES))

all:
	@$(MAKE) -C ./stdme/ 		"LIB_NAME=$(shell realpath ./stdme)/"		libme.a
	@$(MAKE) -C ./allocator/	"LIB_NAME=$(shell realpath ./allocator)/"	libaq.a
	#@$(MAKE) -C ./ast/ 			"LIB_NAME=$(shell realpath ./ast)/"			libast.a
	@$(MAKE) -C ./exec/ 		"LIB_NAME=$(shell realpath ./exec)/"		libexec.a
	@$(MAKE) -C ./line/ 		"LIB_NAME=$(shell realpath ./line)/"		libline.a
	@$(MAKE) -C ./parser/ 		"LIB_NAME=$(shell realpath ./parser)/"		libparser.a
	@$(MAKE) -f./Minishell.mk 												lib$(ANAME).a
	@$(MAKE) -f./Minishell.mk 	"NAME=$(NAME)"								$(NAME)

bonus: all

# Dependences for all
$(NAME): $(LIBS_FILES)
	@echo -e '$(GREY) Linking \t$(END)$(GOLD)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -o $(NAME) -L$(BUILD_DIR) $(call link_group,$(LIBS_FLAGS))

# REMOVE THIS ONE DAY
libast.a: $(BUILD_DIR)/libast.a
$(BUILD_DIR)/libast.a: 
	@echo -e '$(GREY) Mocking \t$(END)$(GOLD)libast.a$(END)'
	@ar rcs $(BUILD_DIR)/libast.a

lib$(ANAME).a: $(BUILD_DIR)/lib$(ANAME).a

$(BUILD_DIR)/lib$(ANAME).a: $(OBJ)
	@ar rcs $(BUILD_DIR)/lib$(ANAME).a $(OBJ)


# Creating the objects
$(BUILD_DIR)/$(ANAME)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Building\t$(END)$(GREEN)$<$(END)'
	@$(CC) $(CFLAGS) -o $@ -c $<

$(BUILD_DIR)/$(ANAME)/%.o: $(GEN_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Building\t$(END)$(GREEN)$<$(END)'
	@$(CC) $(CFLAGS) -o $@ -c $<

build_filelist:
	@rm -f Filelist.$(ANAME).mk
	@printf '%-78s\\\n' "SRC_FILES =" > Filelist.$(ANAME).mk
	@tree $(SRC_DIR) -ifF | rg '$(SRC_DIR)/(.*)\.c$$' --replace '$$1' | sed -re 's/^(.*)_([0-9]+)$$/\1|\2/g' | sort -t'|' --key=1,1 --key=2,2n | sed -e's/|/_/' | xargs printf '%-78s\\\n' >> Filelist.$(ANAME).mk
	@echo "" >> Filelist.$(ANAME).mk
	@printf '%-78s\\\n' "GEN_FILES =" >> Filelist.$(ANAME).mk
	@tree $(GEN_DIR) -ifF | rg '$(GEN_DIR)/(.*)\.c$$' --replace '$$1' | sed -re 's/^(.*)_([0-9]+)$$/\1|\2/g' | sort -t'|' --key=1,1 --key=2,2n | sed -e's/|/_/' | xargs printf '%-78s\\\n' >> Filelist.$(ANAME).mk
	@echo "" >> Filelist.$(ANAME).mk
	@echo -e '$(GREY) Populating $(GREEN) Filelist.$(ANAME).mk$(END)'

%.h: ;

-include	$(DEP)
