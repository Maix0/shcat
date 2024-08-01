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
	v->a[300] = anon_sym_fi;
	v->a[301] = state(19);
	v->a[302] = 1;
	v->a[303] = aux_sym__terminated_statement;
	v->a[304] = state(185);
	v->a[305] = 1;
	v->a[306] = sym_command_name;
	v->a[307] = state(231);
	v->a[308] = 1;
	v->a[309] = sym_variable_assignment;
	v->a[310] = state(411);
	v->a[311] = 1;
	v->a[312] = aux_sym_command_repeat1;
	v->a[313] = state(551);
	v->a[314] = 1;
	v->a[315] = sym_file_redirect;
	v->a[316] = state(555);
	v->a[317] = 1;
	v->a[318] = sym_concatenation;
	v->a[319] = state(1070);
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = 1;
	v->a[321] = sym_pipeline;
	v->a[322] = state(1126);
	v->a[323] = 1;
	v->a[324] = aux_sym_redirected_statement_repeat2;
	v->a[325] = state(1561);
	v->a[326] = 1;
	v->a[327] = sym__statement_not_pipeline;
	v->a[328] = state(1729);
	v->a[329] = 1;
	v->a[330] = sym_else_clause;
	v->a[331] = actions(11);
	v->a[332] = 2;
	v->a[333] = anon_sym_while;
	v->a[334] = anon_sym_until;
	v->a[335] = actions(59);
	v->a[336] = 2;
	v->a[337] = sym_raw_string;
	v->a[338] = sym_number;
	v->a[339] = state(1456);
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = 2;
	v->a[341] = sym_elif_clause;
	v->a[342] = aux_sym_if_statement_repeat1;
	v->a[343] = actions(51);
	v->a[344] = 3;
	v->a[345] = anon_sym_LT;
	v->a[346] = anon_sym_GT;
	v->a[347] = anon_sym_GT_GT;
	v->a[348] = state(401);
	v->a[349] = 5;
	v->a[350] = sym_arithmetic_expansion;
	v->a[351] = sym_string;
	v->a[352] = sym_simple_expansion;
	v->a[353] = sym_expansion;
	v->a[354] = sym_command_substitution;
	v->a[355] = state(905);
	v->a[356] = 12;
	v->a[357] = sym_redirected_statement;
	v->a[358] = sym_for_statement;
	v->a[359] = sym_while_statement;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = sym_if_statement;
	v->a[361] = sym_case_statement;
	v->a[362] = sym_function_definition;
	v->a[363] = sym_compound_statement;
	v->a[364] = sym_subshell;
	v->a[365] = sym_list;
	v->a[366] = sym_negated_command;
	v->a[367] = sym_command;
	v->a[368] = sym__variable_assignments;
	v->a[369] = 34;
	v->a[370] = actions(3);
	v->a[371] = 1;
	v->a[372] = sym_comment;
	v->a[373] = actions(9);
	v->a[374] = 1;
	v->a[375] = anon_sym_for;
	v->a[376] = actions(13);
	v->a[377] = 1;
	v->a[378] = anon_sym_if;
	v->a[379] = actions(15);
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = 1;
	v->a[381] = anon_sym_case;
	v->a[382] = actions(17);
	v->a[383] = 1;
	v->a[384] = anon_sym_LPAREN;
	v->a[385] = actions(19);
	v->a[386] = 1;
	v->a[387] = anon_sym_LBRACE;
	v->a[388] = actions(41);
	v->a[389] = 1;
	v->a[390] = sym_word;
	v->a[391] = actions(45);
	v->a[392] = 1;
	v->a[393] = anon_sym_elif;
	v->a[394] = actions(47);
	v->a[395] = 1;
	v->a[396] = anon_sym_else;
	v->a[397] = actions(49);
	v->a[398] = 1;
	v->a[399] = anon_sym_BANG;
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
