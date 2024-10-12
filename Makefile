# **************************************************************************** #make
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/10/12 17:16:48 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Objdir
BUILD_DIR = $(shell realpath ./build)
BASE_PATH = $(shell pwd)

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
	#CFLAGS_ADDITIONAL	+= -DPRINT_BACKTRACE
endif
ifeq ($(shell uname), Darwin)
	PMAKE = -j$(shell sysctl -n hw.ncpu)
	#CFLAGS_ADDITIONAL	+= -DNVALGRIND
endif
endif

CFLAGS_ADDITIONAL	+= -DNVALGRIND

# TODO: REMOVE THIS WHEN FINISHING THIS:
# CFLAGS_ADDITIONAL	+= -fsanitize=memory -fno-omit-frame-pointer  -fsanitize-memory-track-origins #-fuse-ld=lld -ffunction-sections -fdata-sections -Wl,--allow-multiple
# CFLAGS_ADDITIONAL	+= -O0 
# CFLAGS_ADDITIONAL	+= -Wno-cpp -Wno-type-limits -Wno-unused-command-line-argument
# CFLAGS_ADDITIONAL	+= -gcolumn-info -g3 -fno-builtin
# CFLAGS_ADDITIONAL	+= '-DERROR=((void)printf("ERROR HERE: " __FILE__ ":%d in %s\n", __LINE__, __func__), 1)'
# CFLAGS_ADDITIONAL	+= -O2
# CFLAGS_ADDITIONAL	+= -fuse-ld=gold -Wl,--print-symbol-counts -Wl,/tmp/symbols_count.log
# CFLAGS_ADDITIONAL	+= -fuse-ld=lld -ffunction-sections -fdata-sections -Wl,--gc-sections -Wl,-O3
# CFLAGS_ADDITIONAL	+= -I$(shell realpath ./includes) -I$(shell realpath ./output/include)

export CFLAGS_ADDITIONAL
export CC
export BASE_PATH
export BUILD_DIR


# All (make all)
all: 
	@$(MAKE) --no-print-directory header
	@$(MAKE) --no-print-directory -f ./Minishell.mk $(PMAKE)
	@$(MAKE) --no-print-directory footer

bonus: 
	@$(MAKE) --no-print-directory header
	@$(MAKE) --no-print-directory -f ./Minishell.mk $(PMAKE) bonus
	@$(MAKE) --no-print-directory footer

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

build_filelist:
	@$(MAKE) --no-print-directory -C ./stdme/ 		build_filelist
	@$(MAKE) --no-print-directory -C ./allocator/ 	build_filelist
	@$(MAKE) --no-print-directory -C ./ast/ 		build_filelist
	@$(MAKE) --no-print-directory -C ./exec/ 		build_filelist
	@$(MAKE) --no-print-directory -C ./line/ 		build_filelist
	@$(MAKE) --no-print-directory -C ./parser/		build_filelist
	@$(MAKE) --no-print-directory -f ./Minishell.mk	build_filelist
	
#	phony
.PHONY: all bonus clean fclean re header footer build_filelist
