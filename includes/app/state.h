/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 17:28:52 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
# define STATE_H

# include "ast/ast.h"
# include "me/hashmap/hashmap_env.h"
# include "me/os/os.h"
# include "me/types.h"
# include "parser/inner/node.h"

typedef struct s_state	t_state;

struct s_state
{
	t_const_str		prompt;
	t_str			str_input;
	t_hashmap_env	*env;
	t_hashmap_env	*tmp_var;
	t_parser		*parser;
	t_ast_node		ast;
};

#endif /* STATE_H */
