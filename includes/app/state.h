/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/03 15:51:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
# define STATE_H

# include "app/node.h"
# include "me/hashmap/hashmap_env.h"
# include "me/os/os.h"
# include "me/types.h"
# include "ast/ast.h"

typedef struct s_state t_state;

struct s_state
{
	t_const_str		prompt;
	t_str			str_input;
	t_hashmap_env	*env;
	t_hashmap_env	*tmp_var;
	t_node			current_node;
	t_first_parser	*parser;
	t_ast_node		ast;
};

#endif /* STATE_H */
