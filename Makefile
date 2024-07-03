# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/07/03 20:37:35 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Objdir
BUILD_DIR = $(shell realpath ./build)

# Colors
GREEN = \033[32m
CYAN = \033[36m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m
BOLD = \033[1m
ITALIC = \033[3m
UNDERLINE = \033[4m

# Rules
SRC_DIR = ./sources
GEN_DIR = ./output
NAME = minishell

# PMAKE_DISABLE =
PMAKE =
ifndef PMAKE_DISABLE
ifeq ($(shell uname), Linux)
	PMAKE = -j$(shell grep -c ^processor /proc/cpuinfo)
endif
ifeq ($(shell uname), Darwin)
	PMAKE = -j$(shell sysctl -n hw.ncpu)
endif
endif

# All (make all)
all: 
	@$(MAKE) --no-print-directory header            "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)"
	@$(MAKE) --no-print-directory -f./Minishell.mk  "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)" $(PMAKE)
	@$(MAKE) --no-print-directory footer            "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)"

bonus: 
	@$(MAKE) --no-print-directory header            "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)"
	@$(MAKE) --no-print-directory -f./Minishell.mk  "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)" $(PMAKE) bonus
	@$(MAKE) --no-print-directory footer            "BUILD_DIR=$(BUILD_DIR)" "BASE_PATH=$(shell pwd)"

#	Header
header:
	@clear
	@echo -e ''
	@echo -e '$(GOLD)            *******     ****** ******* $(END)'
	@echo -e '$(GOLD)          ******        ***    ******* $(END)'
	@echo -e '$(GOLD)      *******           *      ******* $(END)'
	@echo -e '$(GOLD)     ******                  *******   $(END)'
	@echo -e '$(GOLD)  *******                  *******     $(END)'
	@echo -e '$(GOLD) *******************    *******      * $(END)'
	@echo -e '$(GOLD) *******************    *******    *** $(END)'
	@echo -e '$(GOLD)              ******    ******* ****** $(END)'
	@echo -e '$(GOLD)              ******                   $(END)'
	@echo -e '$(GOLD)              ******                   $(END)'
	@echo -e '$(GREY)          Made by maiboyerlpb x rparodi$(END)'

#	Footer
footer:
	@echo -e '$(GOLD)                                  _    $(END)'
	@echo -e '$(GOLD)                                 | \   $(END)'
	@echo -e '$(GOLD)                                 | |   $(END)'
	@echo -e '$(GOLD)                                 | |   $(END)'
	@echo -e '$(GOLD)            |\      $(CYAN)$(BOLD)$(UNDERLINE)shcat$(END)$(GOLD)        | |   $(END)'
	@echo -e '$(GOLD)           /, ~\                / /    $(END)'
	@echo -e '$(GOLD)          X     `-.....-------./ /     $(END)'
	@echo -e '$(GOLD)           ~-. ~  ~              |     $(END)'
	@echo -e '$(GOLD)              \             /    |     $(END)'
	@echo -e '$(GOLD)               \  /_     ___\   /      $(END)'
	@echo -e '$(GOLD)               | /\ ~~~~~   \ |        $(END)'
	@echo -e '$(GOLD)               | | \        || |       $(END)'
	@echo -e '$(GOLD)               | |\ \       || )       $(END)'
	@echo -e '$(GOLD)              (_/ (_/      ((_/        $(END)'
	@echo -e '            $(GREY)The compilation is $(END)$(GOLD)finished$(END)'
	@echo -e '                 $(GREY)Have a good $(END)$(GOLD)correction$(END)'


# Clean (make clean)
clean:
	@echo -e '$(GREY) Removing $(END)$(RED)Objects$(END)'
	@echo -e '$(GREY) Removing $(END)$(RED)Objects Folder$(END)'
	@$(RM) -r $(BUILD_DIR)

# Clean (make fclean)
fclean: clean
	@echo -e '$(GREY) Removing $(END)$(RED)Program$(END)'
	@$(RM) $(NAME)
	@echo ""

# Restart (make re)
re: header 
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all

tokei:
	/bin/sh -c 'tokei -tC,C\ Header -e tree-sitter-sh'

generate_filelist:
	@/usr/bin/env zsh -c "tree -iFf --noreport $(SRC_DIR) | rg '^$(SRC_DIR)/(.*\.c)\$$' --replace '\$$1' | sort -u" > ./src.list
	@/usr/bin/env zsh -c "tree -iFf --noreport $(GEN_DIR) | rg '^$(GEN_DIR)/(.*\.c)\$$' --replace '\$$1' | sort -u" > ./gen.list
#	phony
.PHONY: all bonus clean fclean re header footer generate_filelist
