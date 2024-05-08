# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/05/08 16:01:18 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Objdir
OBJDIRNAME = ./build

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

# Rules
SRC_DIR = ./sources
GEN_DIR = ./output
NAME = minishell

# All (make all)
all: 
	@$(MAKE) --no-print-directory header            OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd)
	@$(MAKE) --no-print-directory -f./Minishell.mk  OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd)
	@$(MAKE) --no-print-directory footer            OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd)

bonus: 
	@$(MAKE) --no-print-directory header            OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd)
	@$(MAKE) --no-print-directory -f./Minishell.mk  OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd) bonus
	@$(MAKE) --no-print-directory footer            OBJDIRNAME=$(OBJDIRNAME) BASE_PATH=$(shell pwd)

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

# Clean (make clean)
clean:
	@echo -e '$(GREY) Removing $(END)$(RED)Objects$(END)'
	@echo -e '$(GREY) Removing $(END)$(RED)Objects Folder$(END)'
	@$(RM) -r $(OBJDIRNAME)

# Clean (make fclean)
fclean: clean
	@echo -e '$(GREY) Removing $(END)$(RED)Program$(END)'
	@$(RM) $(NAME)
	@echo ""

# Restart (make re)
re: header 
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all

generate_filelist:
	@/usr/bin/env zsh -c "tree -iFf --noreport $(SRC_DIR) | rg '^$(SRC_DIR)/(.*\.c)\$$' --replace '\$$1' | sort -u" > ./src.list
	@/usr/bin/env zsh -c "tree -iFf --noreport $(GEN_DIR) | rg '^$(GEN_DIR)/(.*\.c)\$$' --replace '\$$1' | sort -u" > ./gen.list
#	phony
.PHONY: all bonus clean fclean re
