# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/07/14 10:18:49 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR		?=	../build
SRC_DIR			=	src
INCLUDE_DIR		=	include/ output/include/ ../includes/ ../output/include/ ../stdme/output/include/
LIBS_DIR		=	. 
GENERIC_DIR		=	output/src
GENERIC_INCLUDE	=	output/include


BASE_PATH		?=	$(shell pwd)
NAME			=	libexec.a
LIB_NAME		?=	
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	clang
CFLAGS			=	-Wno-unused-command-line-argument -Wall -Werror -Wextra -g3 -L$(BUILD_DIR) -MMD -rdynamic -DBASE_PATH='"$(BASE_PATH)/"'
# CFLAGS 			+=  -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-return=runtime -fno-common -fsanitize-address-use-after-scope
BONUS_FILES		=	
LIBS_NAME		=	
SUBJECT_URL		=	

SRC_FILES		=	$(shell cat src.list)

SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/exec/,$(SRC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/exec/,$(SRC_FILES)))

LIBS			=	$(addprefix $(LIBS_DIR)/,$(LIBS_NAME))
INCLUDES		=	$(addprefix -I,$(foreach P,$(INCLUDE_DIR) $(LIBS) $(addsuffix /include,$(LIBS)) vendor $(addsuffix /vendor,$(LIBS)),$(realpath $(P))))
COL_BOLD		=	\033[1m
COL_GOLD		=	\033[93m
COL_GRAY		=	\033[90m
COL_GREEN		=	\033[32m
COL_RESET		=	\033[0m
COL_WHITE		=	\033[37m

# TODO: REMOVE FOR RENDU !!!!!
CFLAGS += -DPRINT_BACKTRACE


.PHONY = all bonus clean re subject

all: $(NAME)

$(NAME): $(TARGET)

$(TARGET): $(OBJ)
	@echo -e '$(COL_GRAY) Linking \t$(COL_GOLD)$(TARGET)$(COL_RESET)'
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/exec/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(COL_GRAY) Building\t$(COL_GREEN)$<$(COL_RESET)'
	@$(CC) $(CFLAGS) $(WERROR) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/exec/%.o: $(GENERIC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(COL_GRAY) Building\t$(COL_GREEN)$<$(COL_RESET)'
	@$(CC) $(CFLAGS) $(WERROR) $(INCLUDES) -c $< -o $@

clean:
	@- $(foreach LIB,$(LIBS), \
		make clean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@- $(if $(LIB_NAME),,echo -e '$(COL_WHITE)Clearing Artefacts';rm -rf $(BUILD_DIR))

fclean: clean
	@- $(foreach LIB,$(LIBS), \
		make fclean LIB_NAME=$(LIB)/ BUILD_DIR=$(shell realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@echo -e '$(COL_WHITE)Clearing Output $(COL_GRAY)$(LIB_NAME)$(NAME)'
	@rm -f $(BUILD_DIR)$(NAME)

re: fclean all

subject: subject.txt
	bat --plain ./subject.txt

subject.txt:
	@curl $(SUBJECT_URL) | pdftotext -layout -nopgbrk -q - subject.txt

generate_filelist::
	@/usr/bin/env zsh -c "tree -iFf --noreport output | rg '^output/src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./gen.list
	@/usr/bin/env zsh -c "tree -iFf --noreport src | rg '^src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./src.list

-include $(DEPS)
