/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_132.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_660(t_small_parse_table_array *v)
{
	v->a[13200] = anon_sym_DOLLAR_LBRACE;
	v->a[13201] = actions(69);
	v->a[13202] = 1;
	v->a[13203] = anon_sym_DOLLAR_LPAREN;
	v->a[13204] = actions(71);
	v->a[13205] = 1;
	v->a[13206] = anon_sym_BQUOTE;
	v->a[13207] = actions(220);
	v->a[13208] = 1;
	v->a[13209] = sym_word;
	v->a[13210] = actions(222);
	v->a[13211] = 1;
	v->a[13212] = anon_sym_BANG;
	v->a[13213] = actions(230);
	v->a[13214] = 1;
	v->a[13215] = sym_file_descriptor;
	v->a[13216] = actions(232);
	v->a[13217] = 1;
	v->a[13218] = sym_variable_name;
	v->a[13219] = state(126);
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = 1;
	v->a[13221] = aux_sym__statements_repeat1;
	v->a[13222] = state(184);
	v->a[13223] = 1;
	v->a[13224] = sym_command_name;
	v->a[13225] = state(268);
	v->a[13226] = 1;
	v->a[13227] = sym_variable_assignment;
	v->a[13228] = state(647);
	v->a[13229] = 1;
	v->a[13230] = sym_concatenation;
	v->a[13231] = state(802);
	v->a[13232] = 1;
	v->a[13233] = sym_file_redirect;
	v->a[13234] = state(828);
	v->a[13235] = 1;
	v->a[13236] = aux_sym_command_repeat1;
	v->a[13237] = state(1314);
	v->a[13238] = 1;
	v->a[13239] = sym_pipeline;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = state(1331);
	v->a[13241] = 1;
	v->a[13242] = aux_sym_redirected_statement_repeat2;
	v->a[13243] = state(2252);
	v->a[13244] = 1;
	v->a[13245] = sym__statement_not_pipeline;
	v->a[13246] = state(2431);
	v->a[13247] = 1;
	v->a[13248] = sym__statements;
	v->a[13249] = actions(11);
	v->a[13250] = 2;
	v->a[13251] = anon_sym_while;
	v->a[13252] = anon_sym_until;
	v->a[13253] = actions(226);
	v->a[13254] = 2;
	v->a[13255] = anon_sym_LT_AMP_DASH;
	v->a[13256] = anon_sym_GT_AMP_DASH;
	v->a[13257] = actions(228);
	v->a[13258] = 2;
	v->a[13259] = sym_raw_string;
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = sym_number;
	v->a[13261] = state(294);
	v->a[13262] = 5;
	v->a[13263] = sym_arithmetic_expansion;
	v->a[13264] = sym_string;
	v->a[13265] = sym_simple_expansion;
	v->a[13266] = sym_expansion;
	v->a[13267] = sym_command_substitution;
	v->a[13268] = actions(224);
	v->a[13269] = 8;
	v->a[13270] = anon_sym_LT;
	v->a[13271] = anon_sym_GT;
	v->a[13272] = anon_sym_GT_GT;
	v->a[13273] = anon_sym_AMP_GT;
	v->a[13274] = anon_sym_AMP_GT_GT;
	v->a[13275] = anon_sym_LT_AMP;
	v->a[13276] = anon_sym_GT_AMP;
	v->a[13277] = anon_sym_GT_PIPE;
	v->a[13278] = state(1188);
	v->a[13279] = 12;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = sym_redirected_statement;
	v->a[13281] = sym_for_statement;
	v->a[13282] = sym_while_statement;
	v->a[13283] = sym_if_statement;
	v->a[13284] = sym_case_statement;
	v->a[13285] = sym_function_definition;
	v->a[13286] = sym_compound_statement;
	v->a[13287] = sym_subshell;
	v->a[13288] = sym_list;
	v->a[13289] = sym_negated_command;
	v->a[13290] = sym_command;
	v->a[13291] = sym__variable_assignments;
	v->a[13292] = 32;
	v->a[13293] = actions(3);
	v->a[13294] = 1;
	v->a[13295] = sym_comment;
	v->a[13296] = actions(9);
	v->a[13297] = 1;
	v->a[13298] = anon_sym_for;
	v->a[13299] = actions(13);
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
