/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2332.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11660(t_small_parse_table_array *v)
{
	v->a[233200] = actions(8882);
	v->a[233201] = 1;
	v->a[233202] = anon_sym_DQUOTE;
	v->a[233203] = actions(8886);
	v->a[233204] = 1;
	v->a[233205] = anon_sym_DOLLAR_LBRACE;
	v->a[233206] = actions(8888);
	v->a[233207] = 1;
	v->a[233208] = anon_sym_BQUOTE;
	v->a[233209] = actions(8890);
	v->a[233210] = 1;
	v->a[233211] = anon_sym_DOLLAR_BQUOTE;
	v->a[233212] = actions(10522);
	v->a[233213] = 1;
	v->a[233214] = sym_word;
	v->a[233215] = actions(10528);
	v->a[233216] = 1;
	v->a[233217] = sym__comment_word;
	v->a[233218] = actions(11026);
	v->a[233219] = 1;
	small_parse_table_11661(v);
}

void	small_parse_table_11661(t_small_parse_table_array *v)
{
	v->a[233220] = anon_sym_DOLLAR;
	v->a[233221] = actions(8876);
	v->a[233222] = 2;
	v->a[233223] = anon_sym_LPAREN_LPAREN;
	v->a[233224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233225] = actions(8892);
	v->a[233226] = 2;
	v->a[233227] = anon_sym_LT_LPAREN;
	v->a[233228] = anon_sym_GT_LPAREN;
	v->a[233229] = actions(10524);
	v->a[233230] = 2;
	v->a[233231] = sym_test_operator;
	v->a[233232] = sym__special_character;
	v->a[233233] = actions(10526);
	v->a[233234] = 3;
	v->a[233235] = sym__bare_dollar;
	v->a[233236] = sym_raw_string;
	v->a[233237] = sym_ansi_c_string;
	v->a[233238] = state(1120);
	v->a[233239] = 9;
	small_parse_table_11662(v);
}

void	small_parse_table_11662(t_small_parse_table_array *v)
{
	v->a[233240] = sym_arithmetic_expansion;
	v->a[233241] = sym_brace_expression;
	v->a[233242] = sym_string;
	v->a[233243] = sym_translated_string;
	v->a[233244] = sym_number;
	v->a[233245] = sym_simple_expansion;
	v->a[233246] = sym_expansion;
	v->a[233247] = sym_command_substitution;
	v->a[233248] = sym_process_substitution;
	v->a[233249] = 21;
	v->a[233250] = actions(71);
	v->a[233251] = 1;
	v->a[233252] = sym_comment;
	v->a[233253] = actions(9364);
	v->a[233254] = 1;
	v->a[233255] = anon_sym_LPAREN;
	v->a[233256] = actions(9366);
	v->a[233257] = 1;
	v->a[233258] = anon_sym_BANG;
	v->a[233259] = actions(9372);
	small_parse_table_11663(v);
}

void	small_parse_table_11663(t_small_parse_table_array *v)
{
	v->a[233260] = 1;
	v->a[233261] = anon_sym_TILDE;
	v->a[233262] = actions(9374);
	v->a[233263] = 1;
	v->a[233264] = anon_sym_DOLLAR;
	v->a[233265] = actions(9376);
	v->a[233266] = 1;
	v->a[233267] = anon_sym_DQUOTE;
	v->a[233268] = actions(9378);
	v->a[233269] = 1;
	v->a[233270] = aux_sym_number_token1;
	v->a[233271] = actions(9380);
	v->a[233272] = 1;
	v->a[233273] = aux_sym_number_token2;
	v->a[233274] = actions(9382);
	v->a[233275] = 1;
	v->a[233276] = anon_sym_DOLLAR_LBRACE;
	v->a[233277] = actions(9384);
	v->a[233278] = 1;
	v->a[233279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11664(v);
}

void	small_parse_table_11664(t_small_parse_table_array *v)
{
	v->a[233280] = actions(9386);
	v->a[233281] = 1;
	v->a[233282] = anon_sym_BQUOTE;
	v->a[233283] = actions(9388);
	v->a[233284] = 1;
	v->a[233285] = anon_sym_DOLLAR_BQUOTE;
	v->a[233286] = actions(9392);
	v->a[233287] = 1;
	v->a[233288] = sym_variable_name;
	v->a[233289] = actions(11028);
	v->a[233290] = 1;
	v->a[233291] = aux_sym__simple_variable_name_token1;
	v->a[233292] = state(3391);
	v->a[233293] = 1;
	v->a[233294] = sym__arithmetic_binary_expression;
	v->a[233295] = state(3396);
	v->a[233296] = 1;
	v->a[233297] = sym__arithmetic_ternary_expression;
	v->a[233298] = state(3398);
	v->a[233299] = 1;
	small_parse_table_11665(v);
}

/* EOF small_parse_table_2332.c */
