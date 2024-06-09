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
	v->a[13200] = actions(73);
	v->a[13201] = 1;
	v->a[13202] = aux_sym_number_token2;
	v->a[13203] = actions(75);
	v->a[13204] = 1;
	v->a[13205] = anon_sym_DOLLAR_LBRACE;
	v->a[13206] = actions(77);
	v->a[13207] = 1;
	v->a[13208] = anon_sym_DOLLAR_LPAREN;
	v->a[13209] = actions(79);
	v->a[13210] = 1;
	v->a[13211] = anon_sym_BQUOTE;
	v->a[13212] = actions(81);
	v->a[13213] = 1;
	v->a[13214] = sym_file_descriptor;
	v->a[13215] = actions(83);
	v->a[13216] = 1;
	v->a[13217] = sym_variable_name;
	v->a[13218] = actions(238);
	v->a[13219] = 1;
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = sym_word;
	v->a[13221] = actions(240);
	v->a[13222] = 1;
	v->a[13223] = anon_sym_BANG;
	v->a[13224] = state(132);
	v->a[13225] = 1;
	v->a[13226] = aux_sym__statements_repeat1;
	v->a[13227] = state(185);
	v->a[13228] = 1;
	v->a[13229] = sym_command_name;
	v->a[13230] = state(297);
	v->a[13231] = 1;
	v->a[13232] = sym_variable_assignment;
	v->a[13233] = state(582);
	v->a[13234] = 1;
	v->a[13235] = sym_concatenation;
	v->a[13236] = state(614);
	v->a[13237] = 1;
	v->a[13238] = aux_sym_command_repeat1;
	v->a[13239] = state(769);
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = 1;
	v->a[13241] = sym_file_redirect;
	v->a[13242] = state(1133);
	v->a[13243] = 1;
	v->a[13244] = aux_sym_redirected_statement_repeat2;
	v->a[13245] = state(1142);
	v->a[13246] = 1;
	v->a[13247] = sym_pipeline;
	v->a[13248] = state(2041);
	v->a[13249] = 1;
	v->a[13250] = sym__statement_not_pipeline;
	v->a[13251] = state(2134);
	v->a[13252] = 1;
	v->a[13253] = sym__statements;
	v->a[13254] = actions(11);
	v->a[13255] = 2;
	v->a[13256] = anon_sym_while;
	v->a[13257] = anon_sym_until;
	v->a[13258] = actions(61);
	v->a[13259] = 2;
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = anon_sym_LT_AMP_DASH;
	v->a[13261] = anon_sym_GT_AMP_DASH;
	v->a[13262] = state(397);
	v->a[13263] = 6;
	v->a[13264] = sym_arithmetic_expansion;
	v->a[13265] = sym_string;
	v->a[13266] = sym_number;
	v->a[13267] = sym_simple_expansion;
	v->a[13268] = sym_expansion;
	v->a[13269] = sym_command_substitution;
	v->a[13270] = actions(59);
	v->a[13271] = 8;
	v->a[13272] = anon_sym_LT;
	v->a[13273] = anon_sym_GT;
	v->a[13274] = anon_sym_GT_GT;
	v->a[13275] = anon_sym_AMP_GT;
	v->a[13276] = anon_sym_AMP_GT_GT;
	v->a[13277] = anon_sym_LT_AMP;
	v->a[13278] = anon_sym_GT_AMP;
	v->a[13279] = anon_sym_GT_PIPE;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = state(1071);
	v->a[13281] = 12;
	v->a[13282] = sym_redirected_statement;
	v->a[13283] = sym_for_statement;
	v->a[13284] = sym_while_statement;
	v->a[13285] = sym_if_statement;
	v->a[13286] = sym_case_statement;
	v->a[13287] = sym_function_definition;
	v->a[13288] = sym_compound_statement;
	v->a[13289] = sym_subshell;
	v->a[13290] = sym_list;
	v->a[13291] = sym_negated_command;
	v->a[13292] = sym_command;
	v->a[13293] = sym_variable_assignments;
	v->a[13294] = 34;
	v->a[13295] = actions(3);
	v->a[13296] = 1;
	v->a[13297] = sym_comment;
	v->a[13298] = actions(9);
	v->a[13299] = 1;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
