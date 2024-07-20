/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:49:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/20 13:45:21 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
# define STATE_H

# include "app/node.h"
# include "me/hashmap/hashmap_env.h"
# include "me/os/process.h"
# include "me/types.h"

typedef struct s_parser
{
	t_first_parser	*parser;
}					t_parser;

typedef struct s_state
{
	t_str			prompt;
	t_str			str_input;
	t_str			*strs_input;
	t_str			*path;
	t_parser		parser;
	t_hashmap_env	*env;
	t_node			current_node;
	t_process		ret;
}					t_state;

#endif /* STATE_H */
