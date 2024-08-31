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

#include "parser/_inner/node.h"
#include "parser/language.h"
#include "parser/tree.h"

t_u32	ts_node_start_byte(TSNode self)
{
	return (self.start_byte);
}

const TSLanguage	*ts_node_language(TSNode self)
{
	return (self.tree->language);
}

TSPoint	ts_node_start_point(TSNode self)
{
	return ((TSPoint){self.start_row, self.start_col});
}

t_u32	ts_node__alias(const TSNode *self)
{
	return (self->alias);
}

Subtree	ts_node__subtree(TSNode self)
{
	return (*(const Subtree *)self.id);
}
