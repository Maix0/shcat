/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_field.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:47:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:48:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/parser.h"

t_const_str	ts_language_field_name_for_id(const TSLanguage *self, TSFieldId id)
{
	t_u32	count;

	count = ts_language_field_count(self);
	if (count && id <= count)
		return (self->field_names[id]);
	else
		return (NULL);
}

TSFieldId	ts_language_field_id_for_name(const TSLanguage *self,
		t_const_str name, t_u32 name_length)
{
	t_u16		count;
	TSSymbol	i;
	bool		res;

	count = (t_u16)ts_language_field_count(self);
	i = 1;
	while (i < count + 1)
	{
		if (str_n_compare(name, self->field_names[i], name_length)
			&& self->field_names[i][name_length] == 0)
			return (i);
		i++;
	}
	return (0);
}

void	ts_language_field_map(const TSLanguage *self, t_u32 production_id,
		const TSFieldMapEntry **start, const TSFieldMapEntry **end)
{
	TSFieldMapSlice	slice;

	if (self->field_count == 0)
	{
		*start = NULL;
		*end = NULL;
		return ;
	}
	slice = self->field_map_slices[production_id];
	*start = &self->field_map_entries[slice.index];
	*end = &self->field_map_entries[slice.index] + slice.length;
}
