/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:36:40 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/09 20:53:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "parser/api.h"
#include <stdio.h>

t_const_str	 ts_node_field_name_for_child(t_parse_node self, t_u32 child_index);
t_const_str	 ts_node_type(t_parse_node self);
t_node		 build_node(t_parse_node current, t_const_str input);
t_parse_node ts_node_named_child(t_parse_node parent, t_usize idx);
t_symbol	 ts_node_symbol(t_parse_node self);
t_u32		 ts_node_end_byte(t_parse_node self);
t_u32		 ts_node_named_child_count(t_parse_node self);
t_u32		 ts_node_start_byte(t_parse_node self);
t_u64		 ts_language_field_id_for_name(t_language *lang, t_const_str name, t_u64 name_len);

t_language *tree_sitter_bash(void);

t_node *build_childs(t_parse_node parent, t_const_str input, t_usize count)
{
	t_node		*ret;
	t_usize		 idx;
	t_parse_node child;

	ret = mem_alloc_array(sizeof(*ret), count);
	if (ret == NULL)
		return (NULL);
	idx = 0;
	while (idx < count)
	{
		child = ts_node_named_child(parent, idx);
		ret[idx] = build_node(child, input);
		ret[idx].field_str = ts_node_field_name_for_child(parent, idx);
		ret[idx].field = ts_language_field_id_for_name(tree_sitter_bash(), ret[idx].field_str, str_len(ret[idx].field_str));
		idx++;
	}
	return (ret);
}

t_node build_node(t_parse_node curr, t_const_str input)
{
	t_node out;

	out.kind = ts_node_symbol(curr);
	out.kind_str = ts_node_type(curr);
	out.start = ts_node_start_byte(curr);
	out.end = ts_node_end_byte(curr);
	out.input = input;
	out.single_str = NULL;
	out.field_str = NULL;
	out.childs_count = ts_node_named_child_count(curr);
	if (out.childs_count == 0)
		out.childs = NULL;
	else
		out.childs = build_childs(curr, input, out.childs_count);
	return (out);
}

t_str node_getstr(t_node *node)
{
	t_usize start;
	t_usize end;
	t_str	ret;

	if (node->single_str == NULL)
	{
		start = node->start;
		end = node->end;
		if (start > end)
			return (NULL);
		ret = mem_alloc(end - start + 1);
		str_l_copy(ret, node->input + start, end - start + 1);
		node->single_str = ret;
	}
	return (node->single_str);
}

void free_node(t_node self)
{
	t_usize idx;

	if (self.single_str)
		mem_free(self.single_str);
	idx = 0;
	while (idx < self.childs_count)
		free_node(self.childs[idx++]);
	if (self.childs_count != 0)
		mem_free(self.childs);
}
