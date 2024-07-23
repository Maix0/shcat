# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/07/23 20:58:57 by maiboyer         ###   ########.fr        #
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
	@$(MAKE) --no-print-directory -f Parser.mk	build_filelist
	@$(MAKE) --no-print-directory -f Grammar.mk	build_filelist


.PHONY: all bonus clean fclean re libparser.a libgmr.a build_filelist
