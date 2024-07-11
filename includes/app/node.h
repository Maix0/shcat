/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:35:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/29 14:46:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
# define NODE_H

# include "me/types.h"
# include "parser/api.h"

typedef struct s_node
{
	t_u64			kind;
	t_const_str		kind_str;
	t_const_str		field_str;
	t_u64			field;
	t_const_str		input;
	t_str			single_str;
	t_usize			start;
	t_usize			end;
	t_usize			childs_count;
	struct s_node	*childs;
}					t_node;

t_node				build_node(t_parse_node curr, t_const_str input);
t_str				node_getstr(t_node *node);
void				free_node(t_node self);

#endif /* NODE_H */
