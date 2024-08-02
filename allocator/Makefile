# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/08/02 18:57:11 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME 			=	aq

BUILD_DIR		?=	../build
SRC_DIR			=	src
INCLUDE_DIR		=	include output/include ../stdme/include
LIBS_DIR		=	. 

BASE_PATH		?=	$(shell pwd)
NAME			=	lib$(ANAME).a
LIB_NAME		?=	
TARGET			=	$(BUILD_DIR)/$(NAME)
CC				?=	clang
CFLAGS			=	-Wno-unused-command-line-argument -Wall -Werror -Wextra -L$(BUILD_DIR) -MMD -rdynamic -DBASE_PATH='"$(BASE_PATH)/"'
CFLAGS 			+=	$(CFLAGS_ADDITIONAL)

LIBS_NAME		=	
SUBJECT_URL		=	

-include Filelist.$(ANAME).mk

SRC				=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES)))
OBJ				=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES)))
DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/$(ANAME)/,$(SRC_FILES)))

LIBS			=	$(addprefix $(LIBS_DIR)/,$(LIBS_NAME))
INCLUDES		=	$(addprefix -I,$(foreach P,$(INCLUDE_DIR) $(LIBS) $(addsuffix /include,$(LIBS)) vendor $(addsuffix /vendor,$(LIBS)),$(realpath $(P))))
COL_BOLD		=	\033[1m
COL_GOLD		=	\033[93m
COL_GRAY		=	\033[90m
COL_GREEN		=	\033[32m
COL_RESET		=	\033[0m
COL_WHITE		=	\033[37m

.PHONY = all bonus clean re subject

all: $(NAME)

$(NAME): $(TARGET)

$(TARGET): $(OBJ)
	@echo -e '$(COL_GRAY) Linking \t$(COL_GOLD)$(TARGET)$(COL_RESET)'
	@ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/$(ANAME)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e '$(COL_GRAY) Building\t$(COL_GREEN)$<$(COL_RESET)'
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

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

build_filelist:
	@rm -f Filelist.$(ANAME).mk
	@printf '%-78s\\\n' "SRC_FILES =" > Filelist.$(ANAME).mk
	@tree $(SRC_DIR) -ifF | rg '$(SRC_DIR)/(.*)\.c$$' --replace '$$1' | sed -re 's/^(.*)_([0-9]+)$$/\1|\2/g' | sort -t'|' --key=1,1 --key=2,2n | sed -e's/|/_/' | xargs printf '%-78s\\\n' >> Filelist.$(ANAME).mk
	@echo "" >> Filelist.$(ANAME).mk
	@echo -e '$(COL_GRAY) Populating $(COL_GREEN) Filelist.$(ANAME).mk$(END)'

%.h: ;

-include $(DEPS)
