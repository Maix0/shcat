/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15(t_small_parse_table_array *v)
{
	v->a[300] = actions(63);
	v->a[301] = 1;
	v->a[302] = anon_sym_DOLLAR_LBRACE;
	v->a[303] = actions(65);
	v->a[304] = 1;
	v->a[305] = anon_sym_DOLLAR_LPAREN;
	v->a[306] = actions(67);
	v->a[307] = 1;
	v->a[308] = anon_sym_BQUOTE;
	v->a[309] = actions(69);
	v->a[310] = 1;
	v->a[311] = sym_file_descriptor;
	v->a[312] = actions(71);
	v->a[313] = 1;
	v->a[314] = sym_variable_name;
	v->a[315] = actions(75);
	v->a[316] = 1;
	v->a[317] = anon_sym_fi;
	v->a[318] = state(2);
	v->a[319] = 1;
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = aux_sym__terminated_statement;
	v->a[321] = state(183);
	v->a[322] = 1;
	v->a[323] = sym_command_name;
	v->a[324] = state(342);
	v->a[325] = 1;
	v->a[326] = sym_variable_assignment;
	v->a[327] = state(655);
	v->a[328] = 1;
	v->a[329] = aux_sym_command_repeat1;
	v->a[330] = state(661);
	v->a[331] = 1;
	v->a[332] = sym_concatenation;
	v->a[333] = state(665);
	v->a[334] = 1;
	v->a[335] = sym_file_redirect;
	v->a[336] = state(1192);
	v->a[337] = 1;
	v->a[338] = sym_pipeline;
	v->a[339] = state(1198);
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = 1;
	v->a[341] = aux_sym_redirected_statement_repeat2;
	v->a[342] = state(1901);
	v->a[343] = 1;
	v->a[344] = sym__statement_not_pipeline;
	v->a[345] = state(1943);
	v->a[346] = 1;
	v->a[347] = sym_else_clause;
	v->a[348] = actions(11);
	v->a[349] = 2;
	v->a[350] = anon_sym_while;
	v->a[351] = anon_sym_until;
	v->a[352] = actions(61);
	v->a[353] = 2;
	v->a[354] = sym_raw_string;
	v->a[355] = sym_number;
	v->a[356] = state(1773);
	v->a[357] = 2;
	v->a[358] = sym_elif_clause;
	v->a[359] = aux_sym_if_statement_repeat1;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = state(455);
	v->a[361] = 5;
	v->a[362] = sym_arithmetic_expansion;
	v->a[363] = sym_string;
	v->a[364] = sym_simple_expansion;
	v->a[365] = sym_expansion;
	v->a[366] = sym_command_substitution;
	v->a[367] = actions(53);
	v->a[368] = 7;
	v->a[369] = anon_sym_LT;
	v->a[370] = anon_sym_GT;
	v->a[371] = anon_sym_GT_GT;
	v->a[372] = anon_sym_LT_AMP;
	v->a[373] = anon_sym_GT_AMP;
	v->a[374] = anon_sym_GT_PIPE;
	v->a[375] = anon_sym_LT_GT;
	v->a[376] = state(1075);
	v->a[377] = 12;
	v->a[378] = sym_redirected_statement;
	v->a[379] = sym_for_statement;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = sym_while_statement;
	v->a[381] = sym_if_statement;
	v->a[382] = sym_case_statement;
	v->a[383] = sym_function_definition;
	v->a[384] = sym_compound_statement;
	v->a[385] = sym_subshell;
	v->a[386] = sym_list;
	v->a[387] = sym_negated_command;
	v->a[388] = sym_command;
	v->a[389] = sym__variable_assignments;
	v->a[390] = 35;
	v->a[391] = actions(3);
	v->a[392] = 1;
	v->a[393] = sym_comment;
	v->a[394] = actions(9);
	v->a[395] = 1;
	v->a[396] = anon_sym_for;
	v->a[397] = actions(13);
	v->a[398] = 1;
	v->a[399] = anon_sym_if;
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
