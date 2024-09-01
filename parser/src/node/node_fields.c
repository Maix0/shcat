/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_fields.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:15:23 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:25:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/node.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/tree.h"

t_const_str	ts_node__field_name_from_language(TSNode self,
		t_u32 structural_child_index)
{
	const TSFieldMapEntry	*field_map;
	const TSFieldMapEntry	*field_map_end;

	ts_language_field_map(self.tree->language,
		ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	while (field_map != field_map_end)
	{
		if (!field_map->inherited
			&& field_map->child_index == structural_child_index)
			return (self.tree->language->field_names[field_map->field_id]);
		field_map++;
	}
	return (NULL);
}

TSFieldId	ts_node__field_id_from_language(TSNode self,
		t_u32 structural_child_index)
{
	const TSFieldMapEntry	*field_map;
	const TSFieldMapEntry	*field_map_end;

	ts_language_field_map(self.tree->language,
		ts_node__subtree(self)->production_id, &field_map, &field_map_end);
	while (field_map != field_map_end)
	{
		if (!field_map->inherited
			&& field_map->child_index == structural_child_index)
			return (field_map->field_id);
		field_map++;
	}
	return (0);
}
