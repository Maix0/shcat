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
	v->a[13200] = sym_expansion;
	v->a[13201] = sym_command_substitution;
	v->a[13202] = actions(167);
	v->a[13203] = 7;
	v->a[13204] = anon_sym_LT;
	v->a[13205] = anon_sym_GT;
	v->a[13206] = anon_sym_GT_GT;
	v->a[13207] = anon_sym_LT_AMP;
	v->a[13208] = anon_sym_GT_AMP;
	v->a[13209] = anon_sym_GT_PIPE;
	v->a[13210] = anon_sym_LT_GT;
	v->a[13211] = state(1074);
	v->a[13212] = 12;
	v->a[13213] = sym_redirected_statement;
	v->a[13214] = sym_for_statement;
	v->a[13215] = sym_while_statement;
	v->a[13216] = sym_if_statement;
	v->a[13217] = sym_case_statement;
	v->a[13218] = sym_function_definition;
	v->a[13219] = sym_compound_statement;
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = sym_subshell;
	v->a[13221] = sym_list;
	v->a[13222] = sym_negated_command;
	v->a[13223] = sym_command;
	v->a[13224] = sym__variable_assignments;
	v->a[13225] = 31;
	v->a[13226] = actions(3);
	v->a[13227] = 1;
	v->a[13228] = sym_comment;
	v->a[13229] = actions(9);
	v->a[13230] = 1;
	v->a[13231] = anon_sym_for;
	v->a[13232] = actions(13);
	v->a[13233] = 1;
	v->a[13234] = anon_sym_if;
	v->a[13235] = actions(15);
	v->a[13236] = 1;
	v->a[13237] = anon_sym_case;
	v->a[13238] = actions(17);
	v->a[13239] = 1;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = anon_sym_LPAREN;
	v->a[13241] = actions(19);
	v->a[13242] = 1;
	v->a[13243] = anon_sym_LBRACE;
	v->a[13244] = actions(55);
	v->a[13245] = 1;
	v->a[13246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13247] = actions(57);
	v->a[13248] = 1;
	v->a[13249] = anon_sym_DOLLAR;
	v->a[13250] = actions(59);
	v->a[13251] = 1;
	v->a[13252] = anon_sym_DQUOTE;
	v->a[13253] = actions(63);
	v->a[13254] = 1;
	v->a[13255] = anon_sym_DOLLAR_LBRACE;
	v->a[13256] = actions(65);
	v->a[13257] = 1;
	v->a[13258] = anon_sym_DOLLAR_LPAREN;
	v->a[13259] = actions(67);
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = 1;
	v->a[13261] = anon_sym_BQUOTE;
	v->a[13262] = actions(211);
	v->a[13263] = 1;
	v->a[13264] = sym_word;
	v->a[13265] = actions(213);
	v->a[13266] = 1;
	v->a[13267] = anon_sym_BANG;
	v->a[13268] = actions(219);
	v->a[13269] = 1;
	v->a[13270] = sym_file_descriptor;
	v->a[13271] = actions(221);
	v->a[13272] = 1;
	v->a[13273] = sym_variable_name;
	v->a[13274] = state(120);
	v->a[13275] = 1;
	v->a[13276] = aux_sym__statements_repeat1;
	v->a[13277] = state(177);
	v->a[13278] = 1;
	v->a[13279] = sym_command_name;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = state(208);
	v->a[13281] = 1;
	v->a[13282] = sym_variable_assignment;
	v->a[13283] = state(584);
	v->a[13284] = 1;
	v->a[13285] = sym_concatenation;
	v->a[13286] = state(639);
	v->a[13287] = 1;
	v->a[13288] = aux_sym_command_repeat1;
	v->a[13289] = state(682);
	v->a[13290] = 1;
	v->a[13291] = sym_file_redirect;
	v->a[13292] = state(1073);
	v->a[13293] = 1;
	v->a[13294] = sym_pipeline;
	v->a[13295] = state(1158);
	v->a[13296] = 1;
	v->a[13297] = aux_sym_redirected_statement_repeat2;
	v->a[13298] = state(1906);
	v->a[13299] = 1;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
