/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias_sequences.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_alias_sequences.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_alias_sequences_array	g_t_alias_sequences_array = {.a = {
[6] = {
[1] = anon_sym_AT,
},
[7] = {
[0] = anon_sym_AT,
},
[20] = {
[1] = sym_string_content,
},
[22] = {
[0] = anon_sym_AT,
},
[24] = {
[1] = anon_sym_AT,
},
[33] = {
[2] = sym_string_content,
},
[34] = {
[3] = sym_word,
},
[35] = {
[0] = sym_regex,
},
[38] = {
[1] = anon_sym_AT,
},
[39] = {
[0] = sym_word,
},
[41] = {
[1] = sym_word,
},
}};

const t_alias_sequences_array	*create_alias_sequences(void)
{
	return (&g_t_alias_sequences_array);
}
