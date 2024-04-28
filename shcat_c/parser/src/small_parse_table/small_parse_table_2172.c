/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2172.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10860(t_small_parse_table_array *v)
{
	v->a[217200] = state(2314);
	v->a[217201] = 9;
	v->a[217202] = sym_arithmetic_expansion;
	v->a[217203] = sym_brace_expression;
	v->a[217204] = sym_string;
	v->a[217205] = sym_translated_string;
	v->a[217206] = sym_number;
	v->a[217207] = sym_simple_expansion;
	v->a[217208] = sym_expansion;
	v->a[217209] = sym_command_substitution;
	v->a[217210] = sym_process_substitution;
	v->a[217211] = 18;
	v->a[217212] = actions(3);
	v->a[217213] = 1;
	v->a[217214] = sym_comment;
	v->a[217215] = actions(7958);
	v->a[217216] = 1;
	v->a[217217] = anon_sym_DOLLAR_LBRACK;
	v->a[217218] = actions(7964);
	v->a[217219] = 1;
	small_parse_table_10861(v);
}

void	small_parse_table_10861(t_small_parse_table_array *v)
{
	v->a[217220] = anon_sym_DQUOTE;
	v->a[217221] = actions(7968);
	v->a[217222] = 1;
	v->a[217223] = aux_sym_number_token1;
	v->a[217224] = actions(7970);
	v->a[217225] = 1;
	v->a[217226] = aux_sym_number_token2;
	v->a[217227] = actions(7972);
	v->a[217228] = 1;
	v->a[217229] = anon_sym_DOLLAR_LBRACE;
	v->a[217230] = actions(7974);
	v->a[217231] = 1;
	v->a[217232] = anon_sym_DOLLAR_LPAREN;
	v->a[217233] = actions(7976);
	v->a[217234] = 1;
	v->a[217235] = anon_sym_BQUOTE;
	v->a[217236] = actions(7978);
	v->a[217237] = 1;
	v->a[217238] = anon_sym_DOLLAR_BQUOTE;
	v->a[217239] = actions(7988);
	small_parse_table_10862(v);
}

void	small_parse_table_10862(t_small_parse_table_array *v)
{
	v->a[217240] = 1;
	v->a[217241] = sym__brace_start;
	v->a[217242] = actions(9860);
	v->a[217243] = 1;
	v->a[217244] = sym_word;
	v->a[217245] = actions(9868);
	v->a[217246] = 1;
	v->a[217247] = sym__comment_word;
	v->a[217248] = actions(10354);
	v->a[217249] = 1;
	v->a[217250] = anon_sym_DOLLAR;
	v->a[217251] = actions(7954);
	v->a[217252] = 2;
	v->a[217253] = anon_sym_LPAREN_LPAREN;
	v->a[217254] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217255] = actions(7980);
	v->a[217256] = 2;
	v->a[217257] = anon_sym_LT_LPAREN;
	v->a[217258] = anon_sym_GT_LPAREN;
	v->a[217259] = actions(9864);
	small_parse_table_10863(v);
}

void	small_parse_table_10863(t_small_parse_table_array *v)
{
	v->a[217260] = 2;
	v->a[217261] = sym_test_operator;
	v->a[217262] = sym__special_character;
	v->a[217263] = actions(9866);
	v->a[217264] = 3;
	v->a[217265] = sym__bare_dollar;
	v->a[217266] = sym_raw_string;
	v->a[217267] = sym_ansi_c_string;
	v->a[217268] = state(4357);
	v->a[217269] = 9;
	v->a[217270] = sym_arithmetic_expansion;
	v->a[217271] = sym_brace_expression;
	v->a[217272] = sym_string;
	v->a[217273] = sym_translated_string;
	v->a[217274] = sym_number;
	v->a[217275] = sym_simple_expansion;
	v->a[217276] = sym_expansion;
	v->a[217277] = sym_command_substitution;
	v->a[217278] = sym_process_substitution;
	v->a[217279] = 18;
	small_parse_table_10864(v);
}

void	small_parse_table_10864(t_small_parse_table_array *v)
{
	v->a[217280] = actions(3);
	v->a[217281] = 1;
	v->a[217282] = sym_comment;
	v->a[217283] = actions(7958);
	v->a[217284] = 1;
	v->a[217285] = anon_sym_DOLLAR_LBRACK;
	v->a[217286] = actions(7964);
	v->a[217287] = 1;
	v->a[217288] = anon_sym_DQUOTE;
	v->a[217289] = actions(7968);
	v->a[217290] = 1;
	v->a[217291] = aux_sym_number_token1;
	v->a[217292] = actions(7970);
	v->a[217293] = 1;
	v->a[217294] = aux_sym_number_token2;
	v->a[217295] = actions(7972);
	v->a[217296] = 1;
	v->a[217297] = anon_sym_DOLLAR_LBRACE;
	v->a[217298] = actions(7974);
	v->a[217299] = 1;
	small_parse_table_10865(v);
}

/* EOF small_parse_table_2172.c */
