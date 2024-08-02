# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Grammar.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/08/02 18:57:50 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME			= 	gmr

BUILD_DIR		=	../build
SRC_DIR			=	./static

BONUS_FLAGS		=
NAME			=	lib$(ANAME).a
LIB_NAME		?=
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	cc
CFLAGS			=	-Wall -Wextra -Werror -MMD -I./includes -I../includes -I../output/include
CFLAGS			+=	$(CFLAGS_ADDITIONAL)

-include Filelist.$(ANAME).mk

SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES)))

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
	@echo -e '$(GREY) Linking \t$(END)$(GOLD)$(NAME)$(END)'
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/$(ANAME)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(GREY) Building\t$(END)$(GREEN)$<$(END)'
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

build_filelist:
	@rm -f Filelist.$(ANAME).mk
	@printf '%-78s\\\n' "SRC_FILES =" > Filelist.$(ANAME).mk
	@tree static -ifF | rg 'static/(.*)\.c$$' --replace '$$1' | sed -re 's/^(.*)_([0-9]+)$$/\1|\2/g' | sort -t'|' --key=1,1 --key=2,2n | sed -e's/|/_/' | xargs printf '%-78s\\\n' >> Filelist.$(ANAME).mk
	@echo "" >> Filelist.$(ANAME).mk
	@echo -e '$(GREY) Populating $(GREEN) Filelist.$(ANAME).mk$(END)'

%.h: ;

-include $(DEPS)
