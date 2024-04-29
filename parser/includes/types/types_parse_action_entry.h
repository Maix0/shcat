/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parse_action_entry.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:01:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:03:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSE_ACTION_ENTRY_H
# define TYPES_PARSE_ACTION_ENTRY_H

# include "me/types.h"
# include "parser/types/types_parse_actions.h"

struct									s_parse_actions_entry_entry
{
	t_u8								count;
	bool								reusable;
};

typedef union u_parse_actions_entry
{
	t_parse_actions						action;
	struct s_parse_actions_entry_entry	entry;
}										t_parse_action_entry;

#endif /* TYPES_PARSE_ACTION_ENTRY_H */
