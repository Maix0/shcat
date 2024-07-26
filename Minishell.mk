# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Minishell.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 17:28:30 by maiboyer          #+#    #+#              #
#    Updated: 2024/07/26 13:52:19 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Functions

link_group = -Wl,--start-group $(1) -Wl,--end-group

# Variables
ANAME = sh
BUILD_DIR ?= $(shell realpath ./build/)

# TODO: ADD THIS WHEN FINISHING THIS:
# CFLAGS_ADDITIONAL += -DNVALGRIND

# TODO: REMOVE THIS WHEN FINISHING THIS:
CFLAGS_ADDITIONAL	+= -DPRINT_BACKTRACE
CFLAGS_ADDITIONAL	+= -gcolumn-info
CFLAGS_ADDITIONAL	+= '-DERROR=((void)printf("ERROR HERE: " __FILE__ ":%d in %s\n", __LINE__, __func__), 1)'


# Flags
CFLAGS 	= -Werror -Wextra -Wall -Wno-unused-command-line-argument -g3 -MMD  -I./includes -I./output/include -I./stdme/output/include -rdynamic -Wl,-E
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

LIBS_NAMES = me gmr aq ast parser line exec
LIBS_FILES = $(addprefix $(BUILD_DIR)/, $(addsuffix .a, $(addprefix lib, $(LIBS_NAMES))))
LIBS_FLAGS = $(addprefix -l, $(LIBS_NAMES))

all:
	@$(MAKE) -C ./stdme/ 					"LIB_NAME=$(shell realpath ./stdme)/"		libme.a
	@$(MAKE) -C ./allocator/ 				"LIB_NAME=$(shell realpath ./allocator)/"	libaq.a
	@$(MAKE) -C ./ast/ 						"LIB_NAME=$(shell realpath ./ast)/"			libast.a
	@$(MAKE) -C ./exec/ 					"LIB_NAME=$(shell realpath ./exec)/"		libexec.a
	@$(MAKE) -C ./line/ 					"LIB_NAME=$(shell realpath ./line)/"		libline.a
	@$(MAKE) -C ./parser/ -f ./Grammar.mk	"LIB_NAME=$(shell realpath ./parser)/"		libgmr.a
	@$(MAKE) -C ./parser/ -f ./Parser.mk	"LIB_NAME=$(shell realpath ./parser)/"		libparser.a
	@$(MAKE) -f./Minishell.mk 															$(NAME)


# Bonus (make bonus)
bonus: $(OBJ) $(LIBS_FILES)
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BUILD_DIR)/$(SRCDIRNAME)
	@echo -e '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)'
	@echo -e '$(GREY) Linking \t$(END)$(GOLD)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -DDEBUG=1 -o $(NAME) $(OBJ) -L$(BUILD_DIR) $(call link_group,$(LIBS_FLAGS))

# Dependences for all
$(NAME): $(OBJ) $(LIBS_FILES)
	@echo -e '$(GREY) Linking \t$(END)$(GOLD)$(NAME)$(END)'
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(BUILD_DIR) $(call link_group,$(LIBS_FLAGS))

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

-include	$(DEP)
