/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/09 16:23:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
#define STATE_H

#include "app/node.h"
#include "me/hashmap/hashmap_env.h"
#include "me/types.h"
#include "me/os/process.h"

typedef struct s_parser
{
	t_first_parser *parser;
} t_parser;

typedef struct s_utils
{
	t_str			name_shell;
	t_str			str_input;
	t_str			*strs_input;
	t_str			*path;
	t_parser		parser;
	t_hashmap_env	*env;
	t_node			current_node;
	t_process		ret;
} t_utils;

#endif /* STATE_H */
