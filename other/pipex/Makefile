# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/01/06 18:59:45 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define_module = $(addprefix $(1)/, $(2))

BUILD_DIR		=	build
SRC_DIR			=	src
INCLUDE_DIR		=	include output/include
LIBS_DIR		=	.
GENERIC_DIR		=	output/src
GENERIC_INCLUDE	=	output/include

BONUS_FLAGS		=	
NAME			=	pipex
LIB_NAME		?=	
TARGET			=	$(NAME)
CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror -g2 -lme -L$(BUILD_DIR) -Wno-unused-command-line-argument -MMD -Wno-unused-parameter -Wno-unused-variable
BONUS_FILES		=	
LIBS_NAME		=	mecstd
SUBJECT_URL		=	'https://cdn.intra.42.fr/pdf/pdf/105445/en.subject.pdf'

GENERIC_FILES	=	$(shell cat generic_files.list)
SRC_FILES		=	$(shell cat source_files.list)

BONUS			=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(BONUS_FILES)))
SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES))) \
					$(addsuffix .c,$(addprefix $(GENERIC_DIR)/,$(GENERIC_FILES)))
BONUS_OBJ		=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(BONUS_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(SRC_FILES))) \
					$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(SRC_FILES))) \
					$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))
LIBS			=	$(addprefix $(LIBS_DIR)/,$(LIBS_NAME))
INCLUDES		=	$(addprefix -I,$(foreach P,$(INCLUDE_DIR) $(GENERIC_INCLUDE) $(LIBS) $(addsuffix /include,$(LIBS)) vendor $(addsuffix /vendor,$(LIBS)),$(realpath $(P))))
COL_GRAY		=	\\e[90m
COL_WHITE		=	\\e[37m
COL_GREEN		=	\\e[32m
COL_BOLD		=	\\e[1m
COL_RESET		=	\\e[0m

.PHONY: all
.PHONY: libs_build
.PHONY: bonus
.PHONY: clean
.PHONY: fclean
.PHONY: re
.PHONY: format
.PHONY: subject
.PHONY: submit
.PHONY: so

all: $(NAME)

bonus: fclean
bonus:	BONUS_FLAGS = -DBONUS=1
bonus:	all

get_lib:
	@printf $(LIB_NAME)/$(NAME)

$(NAME): $(OBJ) libs_build
	@printf \\n$(COL_GRAY)Building\ Output\ $(COL_WHITE)$(COL_BOLD)%-28s$(COL_RESET)\  \
		$(NAME)
	@$(CC) $(INCLUDES) $(OBJ) $(CFLAGS) $(BONUS_FLAGS) -o $(NAME)
	@#ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)
	@printf $(COL_GREEN)done$(COL_RESET)\\n

libs_build:
	@- $(foreach LIB,$(LIBS),\
		mkdir -p $(BUILD_DIR); \
		printf \\n; \
		printf $(COL_GRAY)Building\ library\ $(COL_RESET); \
		printf $(COL_WHITE)$(COL_BOLD)%-25s$(COL_RESET)\\n $(LIB); \
		make LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory all; \
		printf \\n; \
	)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@printf $(COL_GRAY)Building\ $(COL_BOLD)$(COL_WHITE)%-50s\  $(LIB_NAME)$<
	@$(CC) $(CFLAGS) $(WERROR) $(BONUS_FLAGS) $(INCLUDES) -c $< -o $@
	@printf $(COL_RESET)$(COL_GREEN)done$(COL_RESET)\\n

$(BUILD_DIR)/%.o: $(GENERIC_DIR)/%.c
	@mkdir -p $(dir $@)
	@printf $(COL_GRAY)Building\ $(COL_BOLD)$(COL_WHITE)%-50s\  $(LIB_NAME)$<
	@$(CC) $(CFLAGS) $(WERROR) $(BONUS_FLAGS) $(INCLUDES) -c $< -o $@
	@printf $(COL_RESET)$(COL_GREEN)done$(COL_RESET)\\n

clean:
	@- $(foreach LIB,$(LIBS), \
		make clean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@- $(if $(LIB_NAME),,\
		printf $(COL_WHITE)Clearing\ Artefacts\ ; \
		printf $(COL_GRAY)\%-25s$(COL_RESET)\  \($(BUILD_DIR)\); \
		rm -rf $(BUILD_DIR); \
		printf $(COL_GREEN)done$(COL_RESET)\\n; \
	)
	@echo >/dev/null

fclean: clean
	@- $(foreach LIB,$(LIBS), \
		make fclean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@printf $(COL_WHITE)Clearing\ Output\ $(COL_GRAY)%-28s$(COL_RESET)\  \
		\($(LIB_NAME)$(NAME)\)
	@rm -f $(BUILD_DIR)$(NAME)
	@printf $(COL_GREEN)done$(COL_RESET)\\n

re: fclean all

format:
	@zsh -c "c_formatter_42 **/*.c **/*.h"

subject: subject.txt
	@bat --plain subject.txt

subject.txt:
	@curl $(SUBJECT_URL) | pdftotext -layout -nopgbrk - subject.txt

fuck_raphael:
	@echo "Oh que oui~~~\net jte nioc"

generate_filelist:
	@/usr/bin/env zsh -c "tree -iFf --noreport output | rg '^output/src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./generic_files.list
	@/usr/bin/env zsh -c "tree -iFf --noreport src | rg '^src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./source_files.list

-include $(DEPS)
