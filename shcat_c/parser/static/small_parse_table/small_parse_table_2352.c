/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2352.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11760(t_small_parse_table_array *v)
{
	v->a[235200] = sym_string;
	v->a[235201] = sym_translated_string;
	v->a[235202] = sym_number;
	v->a[235203] = sym_simple_expansion;
	v->a[235204] = sym_expansion;
	v->a[235205] = sym_command_substitution;
	v->a[235206] = sym_process_substitution;
	v->a[235207] = 18;
	v->a[235208] = actions(3);
	v->a[235209] = 1;
	v->a[235210] = sym_comment;
	v->a[235211] = actions(4767);
	v->a[235212] = 1;
	v->a[235213] = anon_sym_DOLLAR_LBRACK;
	v->a[235214] = actions(4773);
	v->a[235215] = 1;
	v->a[235216] = anon_sym_DQUOTE;
	v->a[235217] = actions(4777);
	v->a[235218] = 1;
	v->a[235219] = aux_sym_number_token1;
	small_parse_table_11761(v);
}

void	small_parse_table_11761(t_small_parse_table_array *v)
{
	v->a[235220] = actions(4779);
	v->a[235221] = 1;
	v->a[235222] = aux_sym_number_token2;
	v->a[235223] = actions(4781);
	v->a[235224] = 1;
	v->a[235225] = anon_sym_DOLLAR_LBRACE;
	v->a[235226] = actions(4783);
	v->a[235227] = 1;
	v->a[235228] = anon_sym_DOLLAR_LPAREN;
	v->a[235229] = actions(4785);
	v->a[235230] = 1;
	v->a[235231] = anon_sym_BQUOTE;
	v->a[235232] = actions(4787);
	v->a[235233] = 1;
	v->a[235234] = anon_sym_DOLLAR_BQUOTE;
	v->a[235235] = actions(4793);
	v->a[235236] = 1;
	v->a[235237] = sym__brace_start;
	v->a[235238] = actions(10264);
	v->a[235239] = 1;
	small_parse_table_11762(v);
}

void	small_parse_table_11762(t_small_parse_table_array *v)
{
	v->a[235240] = sym_word;
	v->a[235241] = actions(10270);
	v->a[235242] = 1;
	v->a[235243] = sym__comment_word;
	v->a[235244] = actions(11086);
	v->a[235245] = 1;
	v->a[235246] = anon_sym_DOLLAR;
	v->a[235247] = actions(4765);
	v->a[235248] = 2;
	v->a[235249] = anon_sym_LPAREN_LPAREN;
	v->a[235250] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235251] = actions(4789);
	v->a[235252] = 2;
	v->a[235253] = anon_sym_LT_LPAREN;
	v->a[235254] = anon_sym_GT_LPAREN;
	v->a[235255] = actions(10266);
	v->a[235256] = 2;
	v->a[235257] = sym_test_operator;
	v->a[235258] = sym__special_character;
	v->a[235259] = actions(10268);
	small_parse_table_11763(v);
}

void	small_parse_table_11763(t_small_parse_table_array *v)
{
	v->a[235260] = 3;
	v->a[235261] = sym__bare_dollar;
	v->a[235262] = sym_raw_string;
	v->a[235263] = sym_ansi_c_string;
	v->a[235264] = state(5387);
	v->a[235265] = 9;
	v->a[235266] = sym_arithmetic_expansion;
	v->a[235267] = sym_brace_expression;
	v->a[235268] = sym_string;
	v->a[235269] = sym_translated_string;
	v->a[235270] = sym_number;
	v->a[235271] = sym_simple_expansion;
	v->a[235272] = sym_expansion;
	v->a[235273] = sym_command_substitution;
	v->a[235274] = sym_process_substitution;
	v->a[235275] = 18;
	v->a[235276] = actions(3);
	v->a[235277] = 1;
	v->a[235278] = sym_comment;
	v->a[235279] = actions(3343);
	small_parse_table_11764(v);
}

void	small_parse_table_11764(t_small_parse_table_array *v)
{
	v->a[235280] = 1;
	v->a[235281] = aux_sym_number_token1;
	v->a[235282] = actions(3345);
	v->a[235283] = 1;
	v->a[235284] = aux_sym_number_token2;
	v->a[235285] = actions(3349);
	v->a[235286] = 1;
	v->a[235287] = anon_sym_DOLLAR_LPAREN;
	v->a[235288] = actions(3359);
	v->a[235289] = 1;
	v->a[235290] = sym__brace_start;
	v->a[235291] = actions(9046);
	v->a[235292] = 1;
	v->a[235293] = anon_sym_DOLLAR_LBRACK;
	v->a[235294] = actions(9050);
	v->a[235295] = 1;
	v->a[235296] = anon_sym_DQUOTE;
	v->a[235297] = actions(9054);
	v->a[235298] = 1;
	v->a[235299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11765(v);
}

/* EOF small_parse_table_2352.c */
