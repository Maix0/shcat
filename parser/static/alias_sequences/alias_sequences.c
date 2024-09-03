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
[21] = {
[1] = sym_string_content,
},
[23] = {
[0] = anon_sym_AT,
},
[25] = {
[1] = anon_sym_AT,
},
[37] = {
[2] = sym_string_content,
},
[38] = {
[3] = sym_word,
},
[39] = {
[0] = sym_regex,
},
[42] = {
[1] = anon_sym_AT,
},
[50] = {
[0] = sym_word,
},
[61] = {
[1] = sym_word,
},
}};

const t_alias_sequences_array	*create_alias_sequences(void)
{
	return (&g_t_alias_sequences_array);
}
