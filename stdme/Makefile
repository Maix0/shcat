# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/05/07 13:14:26 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR		?=	build
SRC_DIR			=	src
INCLUDE_DIR		=	include output/include
LIBS_DIR		=	.
GENERIC_DIR		=	output/src
GENERIC_INCLUDE	=	output/include

NAME			=	libme.a
LIB_NAME		?=	
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	clang
CFLAGS			=	-Wno-unused-command-line-argument -Wall -Werror -Wextra -g3 -L$(BUILD_DIR) -MMD
BONUS_FILES		=	
LIBS_NAME		=	
SUBJECT_URL		=	

GENERIC_FILES	=	$(shell cat gen.list)
SRC_FILES		=	$(shell cat src.list)

BONUS			=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(BONUS_FILES)))
SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES))) \
					$(addsuffix .c,$(addprefix $(GENERIC_DIR)/,$(GENERIC_FILES)))
BONUS_OBJ		=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(BONUS_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(SRC_FILES) )) \
					$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(SRC_FILES))) \
					$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))
LIBS			=	$(addprefix $(LIBS_DIR)/,$(LIBS_NAME))
INCLUDES		=	$(addprefix -I,$(foreach P,$(INCLUDE_DIR) $(GENERIC_INCLUDE) $(LIBS) $(addsuffix /include,$(LIBS)) vendor $(addsuffix /vendor,$(LIBS)),$(realpath $(P))))
COL_GRAY		=	\033[90m
COL_WHITE		=	\033[37m
COL_GREEN		=	\033[32m
COL_BOLD		=	\033[1m
COL_RESET		=	\033[0m

.PHONY = all bonus clean re subject

all: $(NAME)

$(NAME): $(TARGET)

$(TARGET): $(OBJ)
	@echo -e '$(COL_GRAY) Linking\t$(COL_GREEN)$(TARGET)$(COL_RESET)'
	@#$(CC) $(INCLUDES) $(OBJ) $(CFLAGS) -o $(NAME)
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(COL_GRAY) Building\t$(COL_GREEN)$<$(COL_RESET)'
	@$(CC) $(CFLAGS) $(WERROR) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/%.o: $(GENERIC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(COL_GRAY) Building\t$(COL_GREEN)$<$(COL_RESET)'
	@$(CC) $(CFLAGS) $(WERROR) $(INCLUDES) -c $< -o $@

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
		make fclean LIB_NAME=$(LIB)/ BUILD_DIR=$(shell realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@printf $(COL_WHITE)Clearing\ Output\ $(COL_GRAY)%-28s$(COL_RESET)\  \
		\($(LIB_NAME)$(NAME)\)
	@rm -f $(BUILD_DIR)$(NAME)
	@printf $(COL_GREEN)done$(COL_RESET)\\n

re: fclean all

subject: subject.txt
	bat --plain ./subject.txt

subject.txt:
	@curl $(SUBJECT_URL) | pdftotext -layout -nopgbrk -q - subject.txt

generate_filelist::
	@/usr/bin/env zsh -c "tree -iFf --noreport output | rg '^output/src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./gen.list
	@/usr/bin/env zsh -c "tree -iFf --noreport src | rg '^src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./src.list

-include $(DEPS)
