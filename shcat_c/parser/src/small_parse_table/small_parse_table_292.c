/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_292.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1460(t_small_parse_table_array *v)
{
	v->a[29200] = aux_sym_number_token1;
	v->a[29201] = actions(4439);
	v->a[29202] = 1;
	v->a[29203] = aux_sym_number_token2;
	v->a[29204] = actions(4442);
	v->a[29205] = 1;
	v->a[29206] = anon_sym_DOLLAR_LBRACE;
	v->a[29207] = actions(4445);
	v->a[29208] = 1;
	v->a[29209] = anon_sym_DOLLAR_LPAREN;
	v->a[29210] = actions(4448);
	v->a[29211] = 1;
	v->a[29212] = anon_sym_BQUOTE;
	v->a[29213] = actions(4451);
	v->a[29214] = 1;
	v->a[29215] = anon_sym_DOLLAR_BQUOTE;
	v->a[29216] = actions(4457);
	v->a[29217] = 1;
	v->a[29218] = sym_test_operator;
	v->a[29219] = actions(4460);
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = 1;
	v->a[29221] = sym__brace_start;
	v->a[29222] = state(2671);
	v->a[29223] = 1;
	v->a[29224] = aux_sym__literal_repeat1;
	v->a[29225] = actions(4418);
	v->a[29226] = 2;
	v->a[29227] = anon_sym_LPAREN_LPAREN;
	v->a[29228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29229] = actions(4433);
	v->a[29230] = 2;
	v->a[29231] = sym_raw_string;
	v->a[29232] = sym_ansi_c_string;
	v->a[29233] = actions(4454);
	v->a[29234] = 2;
	v->a[29235] = anon_sym_LT_LPAREN;
	v->a[29236] = anon_sym_GT_LPAREN;
	v->a[29237] = state(851);
	v->a[29238] = 2;
	v->a[29239] = sym_concatenation;
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = aux_sym_for_statement_repeat1;
	v->a[29241] = actions(2214);
	v->a[29242] = 7;
	v->a[29243] = anon_sym_PIPE;
	v->a[29244] = anon_sym_LT;
	v->a[29245] = anon_sym_GT;
	v->a[29246] = anon_sym_LT_LT;
	v->a[29247] = anon_sym_AMP_GT;
	v->a[29248] = anon_sym_LT_AMP;
	v->a[29249] = anon_sym_GT_AMP;
	v->a[29250] = state(2369);
	v->a[29251] = 9;
	v->a[29252] = sym_arithmetic_expansion;
	v->a[29253] = sym_brace_expression;
	v->a[29254] = sym_string;
	v->a[29255] = sym_translated_string;
	v->a[29256] = sym_number;
	v->a[29257] = sym_simple_expansion;
	v->a[29258] = sym_expansion;
	v->a[29259] = sym_command_substitution;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = sym_process_substitution;
	v->a[29261] = actions(2216);
	v->a[29262] = 12;
	v->a[29263] = sym_file_descriptor;
	v->a[29264] = sym_variable_name;
	v->a[29265] = anon_sym_PIPE_PIPE;
	v->a[29266] = anon_sym_AMP_AMP;
	v->a[29267] = anon_sym_GT_GT;
	v->a[29268] = anon_sym_PIPE_AMP;
	v->a[29269] = anon_sym_AMP_GT_GT;
	v->a[29270] = anon_sym_GT_PIPE;
	v->a[29271] = anon_sym_LT_AMP_DASH;
	v->a[29272] = anon_sym_GT_AMP_DASH;
	v->a[29273] = anon_sym_LT_LT_DASH;
	v->a[29274] = anon_sym_LT_LT_LT;
	v->a[29275] = 6;
	v->a[29276] = actions(3);
	v->a[29277] = 1;
	v->a[29278] = sym_comment;
	v->a[29279] = actions(4389);
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = 1;
	v->a[29281] = aux_sym_concatenation_token1;
	v->a[29282] = actions(4413);
	v->a[29283] = 1;
	v->a[29284] = sym__concat;
	v->a[29285] = state(838);
	v->a[29286] = 1;
	v->a[29287] = aux_sym_concatenation_repeat1;
	v->a[29288] = actions(1281);
	v->a[29289] = 5;
	v->a[29290] = sym_file_descriptor;
	v->a[29291] = sym_test_operator;
	v->a[29292] = sym__bare_dollar;
	v->a[29293] = sym__brace_start;
	v->a[29294] = aux_sym_heredoc_redirect_token1;
	v->a[29295] = actions(1271);
	v->a[29296] = 42;
	v->a[29297] = anon_sym_LPAREN_LPAREN;
	v->a[29298] = anon_sym_SEMI;
	v->a[29299] = anon_sym_PIPE_PIPE;
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
