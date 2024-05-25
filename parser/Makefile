# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/05/25 16:29:29 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR		=	../build
SRC_DIR			=   ./

BONUS_FLAGS		=
NAME			=	libgmr.a
LIB_NAME		?=
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	cc
CFLAGS			=	-Wall -Wextra -Werror -MMD -I./includes -I../includes -I../output/include
#CFLAGS 			+= -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-return=runtime -fno-common -fsanitize-address-use-after-scope
include ./Filelist.mk

SRC_FILES		+= ./src/combined ./src/scanner
SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/gmr/,$(SRC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/gmr/,$(SRC_FILES)))

INCLUDES		=	
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

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

$(NAME): $(TARGET)

$(TARGET): $(OBJ)
	@#echo "ar rcs $(BUILD_DIR)/$(NAME) <OBJS...>"
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/gmr/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Compiling\t$(END)$(GREEN)$<$(END)'
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@- $(foreach LIB,$(LIBS), \
		make clean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	$(if $(LIB_NAME),,\
		rm -rf $(BUILD_DIR) \
	)

fclean: clean
	@- $(foreach LIB,$(LIBS), \
		make fclean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	rm -f $(BUILD_DIR)/$(NAME)

re:
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all

generate_filelist:
	@/usr/bin/env zsh -c "tree -iFf --noreport $(SRC_DIR) | rg '^$(SRC_DIR)/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./source_files.list

-include $(DEPS)
