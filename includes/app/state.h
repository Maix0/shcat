/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/02 15:51:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
#define STATE_H

#include "app/node.h"
#include "me/types.h"

typedef struct s_parser
{
	t_first_parser *parser;
} t_parser;

typedef struct s_utils
{
	t_str	 name_shell;
	t_str	 str_input;
	t_str	*strs_input;
	t_str	*path;
	t_str	*envp;
	t_parser parser;
	t_node	 current_node;
} t_utils;

#endif /* STATE_H */
