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
	v->a[13200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13201] = actions(55);
	v->a[13202] = 1;
	v->a[13203] = anon_sym_DOLLAR;
	v->a[13204] = actions(57);
	v->a[13205] = 1;
	v->a[13206] = anon_sym_DQUOTE;
	v->a[13207] = actions(61);
	v->a[13208] = 1;
	v->a[13209] = anon_sym_DOLLAR_LBRACE;
	v->a[13210] = actions(63);
	v->a[13211] = 1;
	v->a[13212] = anon_sym_DOLLAR_LPAREN;
	v->a[13213] = actions(65);
	v->a[13214] = 1;
	v->a[13215] = anon_sym_BQUOTE;
	v->a[13216] = actions(67);
	v->a[13217] = 1;
	v->a[13218] = sym_variable_name;
	v->a[13219] = state(39);
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = 1;
	v->a[13221] = aux_sym__terminated_statement;
	v->a[13222] = state(185);
	v->a[13223] = 1;
	v->a[13224] = sym_command_name;
	v->a[13225] = state(237);
	v->a[13226] = 1;
	v->a[13227] = sym_variable_assignment;
	v->a[13228] = state(411);
	v->a[13229] = 1;
	v->a[13230] = aux_sym_command_repeat1;
	v->a[13231] = state(551);
	v->a[13232] = 1;
	v->a[13233] = sym_file_redirect;
	v->a[13234] = state(555);
	v->a[13235] = 1;
	v->a[13236] = sym_concatenation;
	v->a[13237] = state(1059);
	v->a[13238] = 1;
	v->a[13239] = sym_pipeline;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = state(1126);
	v->a[13241] = 1;
	v->a[13242] = aux_sym_redirected_statement_repeat2;
	v->a[13243] = state(1561);
	v->a[13244] = 1;
	v->a[13245] = sym__statement_not_pipeline;
	v->a[13246] = actions(11);
	v->a[13247] = 2;
	v->a[13248] = anon_sym_while;
	v->a[13249] = anon_sym_until;
	v->a[13250] = actions(59);
	v->a[13251] = 2;
	v->a[13252] = sym_raw_string;
	v->a[13253] = sym_number;
	v->a[13254] = actions(51);
	v->a[13255] = 3;
	v->a[13256] = anon_sym_LT;
	v->a[13257] = anon_sym_GT;
	v->a[13258] = anon_sym_GT_GT;
	v->a[13259] = state(401);
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = 5;
	v->a[13261] = sym_arithmetic_expansion;
	v->a[13262] = sym_string;
	v->a[13263] = sym_simple_expansion;
	v->a[13264] = sym_expansion;
	v->a[13265] = sym_command_substitution;
	v->a[13266] = state(949);
	v->a[13267] = 12;
	v->a[13268] = sym_redirected_statement;
	v->a[13269] = sym_for_statement;
	v->a[13270] = sym_while_statement;
	v->a[13271] = sym_if_statement;
	v->a[13272] = sym_case_statement;
	v->a[13273] = sym_function_definition;
	v->a[13274] = sym_compound_statement;
	v->a[13275] = sym_subshell;
	v->a[13276] = sym_list;
	v->a[13277] = sym_negated_command;
	v->a[13278] = sym_command;
	v->a[13279] = sym__variable_assignments;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = 27;
	v->a[13281] = actions(3);
	v->a[13282] = 1;
	v->a[13283] = sym_comment;
	v->a[13284] = actions(7);
	v->a[13285] = 1;
	v->a[13286] = sym_word;
	v->a[13287] = actions(9);
	v->a[13288] = 1;
	v->a[13289] = anon_sym_for;
	v->a[13290] = actions(13);
	v->a[13291] = 1;
	v->a[13292] = anon_sym_if;
	v->a[13293] = actions(15);
	v->a[13294] = 1;
	v->a[13295] = anon_sym_case;
	v->a[13296] = actions(17);
	v->a[13297] = 1;
	v->a[13298] = anon_sym_LPAREN;
	v->a[13299] = actions(19);
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
