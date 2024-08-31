/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_fields.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:15:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:15:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/_inner/node.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/tree.h"

t_const_str ts_node__field_name_from_language(TSNode self, t_u32 structural_child_index)
{
	const TSFieldMapEntry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language, ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	for (; field_map != field_map_end; field_map++)
	{
		if (!field_map->inherited && field_map->child_index == structural_child_index)
			return self.tree->language->field_names[field_map->field_id];
	}
	return NULL;
}

TSFieldId ts_node__field_id_from_language(TSNode self, t_u32 structural_child_index)
{
	const TSFieldMapEntry *field_map, *field_map_end;
	ts_language_field_map(self.tree->language, ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	for (; field_map != field_map_end; field_map++)
	{
		if (!field_map->inherited && field_map->child_index == structural_child_index)
			return field_map->field_id;
	}
	return 0;
}
