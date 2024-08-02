/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/02 22:26:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
# define STATE_H

# include "app/node.h"
# include "me/hashmap/hashmap_env.h"
# include "me/os/os.h"
# include "me/types.h"

typedef struct s_state t_state;
typedef struct s_parser t_parser;

struct s_parser
{
	t_first_parser	*parser;
};


struct s_state
{
	t_str			prompt;
	t_str			str_input;
	t_str			*strs_input;
	t_str			*path;
	t_parser		parser;
	t_hashmap_env	*env;
	t_hashmap_env	*tmp_var;
	t_node			current_node;
	t_process		ret;
};

#endif /* STATE_H */
