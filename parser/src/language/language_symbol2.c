/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_symbol2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:46:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:46:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/parser.h"

void	ts_language_aliases_for_symbol(const t_language *self,
		t_symbol original_symbol, const t_symbol **start, const t_symbol **end)
{
	t_u32		idx;
	t_symbol	symbol;
	t_u16		count;

	*start = &self->public_symbol_map[original_symbol];
	*end = *start + 1;
	idx = 0;
	while (true)
	{
		symbol = self->alias_map[idx++];
		if (symbol == 0 || symbol > original_symbol)
			break ;
		count = self->alias_map[idx++];
		if (symbol == original_symbol)
		{
			*start = &self->alias_map[idx];
			*end = &self->alias_map[idx + count];
			break ;
		}
		idx += count;
	}
}

bool	ts_language_is_symbol_external(const t_language *self, t_symbol symbol)
{
	return (0 < symbol && symbol < self->external_token_count + 1);
}
