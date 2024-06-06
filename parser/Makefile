# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/06/06 23:17:20 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR ?= ../build/

all:
	@$(MAKE) --no-print-directory -f Parser.mk "LIB_NAME=$(shell realpath .)/" "BUILD_DIR=$(shell realpath $(BUILD_DIR))" libparser.a 
	@#$(MAKE) --no-print-directory -f Grammar.mk "LIB_NAME=$(shell realpath .)/" "BUILD_DIR=$(shell realpath $(BUILD_DIR))" libgmr.a 

libparser.a:
	@$(MAKE) --no-print-directory -f Parser.mk "LIB_NAME=$(shell realpath .)/" "BUILD_DIR=$(shell realpath $(BUILD_DIR))" libparser.a 

libgmr.a:
	@$(MAKE) --no-print-directory -f Grammar.mk "LIB_NAME=$(shell realpath .)/" "BUILD_DIR=$(shell realpath $(BUILD_DIR))" libgmr.a 

build_filelist:
	@rm Filelist.mk
	@printf '%-78s\\\n' "SRC_FILES =" > Filelist.mk
	@tree static -ifF | rg 'static/(.*)\.c$$' --replace '$$1' | sed -re 's/^(.*)_([0-9]+)$$/\1|\2/g' | sort -t'|' --key=1,1 --key=2,2n | sed -e's/|/_/'  | sed -e 's/^.*$$/&.c/' | xargs printf '%-78s\\\n' >> Filelist.mk
	@echo "" >> Filelist.mk

.PHONY: all bonus clean fclean re libparser.a libgmr.a build_filelist
