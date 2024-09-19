/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_getter_funcs2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:00 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:29:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

t_u32	ts_node_start_byte(t_node self)
{
	return (self.start_byte);
}

const t_language	*ts_node_language(t_node self)
{
	return (self.tree->language);
}

t_point	ts_node_start_point(t_node self)
{
	return ((t_point){self.start_row, self.start_col});
}

t_u32	ts_node__alias(const t_node *self)
{
	return (self->alias);
}

t_subtree	ts_node__subtree(t_node self)
{
	return (*(const t_subtree *)self.id);
}
