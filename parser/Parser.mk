# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Parser.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/06/30 16:23:47 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME			= 	parser

BUILD_DIR		=	../build
SRC_DIR			=   ./nnsrc
GEN_DIR 		=   ./generic

BONUS_FLAGS		=
NAME			=	lib$(ANAME).a
LIB_NAME		?=
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	cc
CFLAGS			=	-Wall -Wextra -Werror -MMD -I./includes -I../includes -I../output/include -g3 -I$(SRC_DIR)
#CFLAGS 			+= -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-return=runtime -fno-common -fsanitize-address-use-after-scope

SRC_FILES		=	lib
GEN_FILES		=

SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES))) $(addsuffix .c,$(addprefix $(GEN_DIR)/,$(GEN_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES))) $(addsuffix .o,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(GEN_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES))) $(addsuffix .d,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(GEN_FILES)))

INCLUDES		=	
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(TARGET)

$(TARGET): $(OBJ)
	@#echo "ar rcs $(BUILD_DIR)/$(NAME) <OBJS...>"
	@echo -e '$(GREY) Linking\t$(END)$(GREEN)$(NAME)$(END)'
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/$(ANAME)/%.o: $(SRC_DIR)/%.c
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

-include $(DEPS)
