/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_symbol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:43:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:51:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/types.h"
#include "parser/api.h"
#include "parser/language.h"
#include "parser/parser.h"

TSSymbolMetadata	ts_language_symbol_metadata(const TSLanguage *self,
		TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return ((TSSymbolMetadata){.visible = true, .named = true});
	else if (symbol == ts_builtin_sym_error_repeat)
		return ((TSSymbolMetadata){.visible = false, .named = false});
	else
		return (self->symbol_metadata[symbol]);
}

TSSymbol	ts_language_public_symbol(const TSLanguage *self, TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return (symbol);
	return (self->public_symbol_map[symbol]);
}

t_const_str	ts_language_symbol_name(const TSLanguage *self, TSSymbol symbol)
{
	if (symbol == ts_builtin_sym_error)
		return ("ERROR");
	else if (symbol == ts_builtin_sym_error_repeat)
		return ("_ERROR");
	else if (symbol < ts_language_symbol_count(self))
		return (self->symbol_names[symbol]);
	else
		return (NULL);
}

TSSymbol	ts_language_symbol_for_name(const TSLanguage *self,
		t_const_str string, t_u32 length, bool is_named)
{
	TSSymbolMetadata	metadata;
	t_u16				count;
	TSSymbol			i;
	t_const_str			symbol_name;

	if (str_n_compare(string, "ERROR", length))
		return (ts_builtin_sym_error);
	count = (t_u16)ts_language_symbol_count(self);
	i = 0;
	while (i < count)
	{
		metadata = ts_language_symbol_metadata(self, i);
		if ((!metadata.visible && !metadata.supertype)
			|| metadata.named != is_named)
		{
			i++;
			continue ;
		}
		symbol_name = self->symbol_names[i];
		if (str_n_compare(symbol_name, string, length) && !symbol_name[length])
			return (self->public_symbol_map[i]);
		i++;
	}
	return (0);
}

TSSymbolType	ts_language_symbol_type(const TSLanguage *self, TSSymbol symbol)
{
	TSSymbolMetadata	metadata;

	metadata = ts_language_symbol_metadata(self, symbol);
	if (metadata.named && metadata.visible)
		return (TSSymbolTypeRegular);
	else if (metadata.visible)
		return (TSSymbolTypeAnonymous);
	else
		return (TSSymbolTypeAuxiliary);
}
