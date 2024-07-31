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
	v->a[13200] = 1;
	v->a[13201] = aux_sym__terminated_statement;
	v->a[13202] = state(271);
	v->a[13203] = 1;
	v->a[13204] = sym_command_name;
	v->a[13205] = state(284);
	v->a[13206] = 1;
	v->a[13207] = sym_variable_assignment;
	v->a[13208] = state(482);
	v->a[13209] = 1;
	v->a[13210] = aux_sym_command_repeat1;
	v->a[13211] = state(600);
	v->a[13212] = 1;
	v->a[13213] = sym_file_redirect;
	v->a[13214] = state(602);
	v->a[13215] = 1;
	v->a[13216] = sym_concatenation;
	v->a[13217] = state(1005);
	v->a[13218] = 1;
	v->a[13219] = sym_pipeline;
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = state(1068);
	v->a[13221] = 1;
	v->a[13222] = aux_sym_redirected_statement_repeat2;
	v->a[13223] = state(1609);
	v->a[13224] = 1;
	v->a[13225] = sym__statement_not_pipeline;
	v->a[13226] = actions(11);
	v->a[13227] = 2;
	v->a[13228] = anon_sym_while;
	v->a[13229] = anon_sym_until;
	v->a[13230] = actions(59);
	v->a[13231] = 2;
	v->a[13232] = sym_raw_string;
	v->a[13233] = sym_number;
	v->a[13234] = state(425);
	v->a[13235] = 5;
	v->a[13236] = sym_arithmetic_expansion;
	v->a[13237] = sym_string;
	v->a[13238] = sym_simple_expansion;
	v->a[13239] = sym_expansion;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = sym_command_substitution;
	v->a[13241] = actions(51);
	v->a[13242] = 7;
	v->a[13243] = anon_sym_LT;
	v->a[13244] = anon_sym_GT;
	v->a[13245] = anon_sym_GT_GT;
	v->a[13246] = anon_sym_LT_AMP;
	v->a[13247] = anon_sym_GT_AMP;
	v->a[13248] = anon_sym_GT_PIPE;
	v->a[13249] = anon_sym_LT_GT;
	v->a[13250] = state(938);
	v->a[13251] = 12;
	v->a[13252] = sym_redirected_statement;
	v->a[13253] = sym_for_statement;
	v->a[13254] = sym_while_statement;
	v->a[13255] = sym_if_statement;
	v->a[13256] = sym_case_statement;
	v->a[13257] = sym_function_definition;
	v->a[13258] = sym_compound_statement;
	v->a[13259] = sym_subshell;
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = sym_list;
	v->a[13261] = sym_negated_command;
	v->a[13262] = sym_command;
	v->a[13263] = sym__variable_assignments;
	v->a[13264] = 29;
	v->a[13265] = actions(3);
	v->a[13266] = 1;
	v->a[13267] = sym_comment;
	v->a[13268] = actions(9);
	v->a[13269] = 1;
	v->a[13270] = anon_sym_for;
	v->a[13271] = actions(13);
	v->a[13272] = 1;
	v->a[13273] = anon_sym_if;
	v->a[13274] = actions(15);
	v->a[13275] = 1;
	v->a[13276] = anon_sym_case;
	v->a[13277] = actions(17);
	v->a[13278] = 1;
	v->a[13279] = anon_sym_LPAREN;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = actions(19);
	v->a[13281] = 1;
	v->a[13282] = anon_sym_LBRACE;
	v->a[13283] = actions(41);
	v->a[13284] = 1;
	v->a[13285] = sym_word;
	v->a[13286] = actions(49);
	v->a[13287] = 1;
	v->a[13288] = anon_sym_BANG;
	v->a[13289] = actions(53);
	v->a[13290] = 1;
	v->a[13291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13292] = actions(55);
	v->a[13293] = 1;
	v->a[13294] = anon_sym_DOLLAR;
	v->a[13295] = actions(57);
	v->a[13296] = 1;
	v->a[13297] = anon_sym_DQUOTE;
	v->a[13298] = actions(61);
	v->a[13299] = 1;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
