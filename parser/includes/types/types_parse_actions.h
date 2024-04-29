/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parse_actions.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:58:36 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:00:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSE_ACTIONS_H
# define TYPES_PARSE_ACTIONS_H

# include "me/types.h"
# include "parser/types/types_state_id.h"
# include "parser/types/types_symbol.h"

struct								s_parse_action_shift
{
	t_u8							type;
	t_state_id						state;
	bool							extra;
	bool							repetition;
};

struct								s_parse_action_reduce
{
	t_u8							type;
	t_u8							child_count;
	t_symbol						symbol;
	t_i16							dynamic_precedence;
	t_u16							production_id;
};

typedef union u_parse_actions
{
	struct s_parse_action_shift		shift;
	struct s_parse_action_reduce	reduce;
	t_u8							type;
}									t_parse_actions;

#endif /* TYPES_PARSE_ACTIONS_H */
