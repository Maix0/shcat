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
	v->a[300] = actions(65);
	v->a[301] = 1;
	v->a[302] = anon_sym_BQUOTE;
	v->a[303] = actions(67);
	v->a[304] = 1;
	v->a[305] = sym_variable_name;
	v->a[306] = actions(71);
	v->a[307] = 1;
	v->a[308] = anon_sym_fi;
	v->a[309] = state(24);
	v->a[310] = 1;
	v->a[311] = aux_sym__terminated_statement;
	v->a[312] = state(271);
	v->a[313] = 1;
	v->a[314] = sym_command_name;
	v->a[315] = state(291);
	v->a[316] = 1;
	v->a[317] = sym_variable_assignment;
	v->a[318] = state(482);
	v->a[319] = 1;
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = aux_sym_command_repeat1;
	v->a[321] = state(600);
	v->a[322] = 1;
	v->a[323] = sym_file_redirect;
	v->a[324] = state(602);
	v->a[325] = 1;
	v->a[326] = sym_concatenation;
	v->a[327] = state(992);
	v->a[328] = 1;
	v->a[329] = sym_pipeline;
	v->a[330] = state(1068);
	v->a[331] = 1;
	v->a[332] = aux_sym_redirected_statement_repeat2;
	v->a[333] = state(1609);
	v->a[334] = 1;
	v->a[335] = sym__statement_not_pipeline;
	v->a[336] = state(1790);
	v->a[337] = 1;
	v->a[338] = sym_else_clause;
	v->a[339] = actions(11);
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = 2;
	v->a[341] = anon_sym_while;
	v->a[342] = anon_sym_until;
	v->a[343] = actions(59);
	v->a[344] = 2;
	v->a[345] = sym_raw_string;
	v->a[346] = sym_number;
	v->a[347] = state(1489);
	v->a[348] = 2;
	v->a[349] = sym_elif_clause;
	v->a[350] = aux_sym_if_statement_repeat1;
	v->a[351] = state(425);
	v->a[352] = 5;
	v->a[353] = sym_arithmetic_expansion;
	v->a[354] = sym_string;
	v->a[355] = sym_simple_expansion;
	v->a[356] = sym_expansion;
	v->a[357] = sym_command_substitution;
	v->a[358] = actions(51);
	v->a[359] = 7;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = anon_sym_LT;
	v->a[361] = anon_sym_GT;
	v->a[362] = anon_sym_GT_GT;
	v->a[363] = anon_sym_LT_AMP;
	v->a[364] = anon_sym_GT_AMP;
	v->a[365] = anon_sym_GT_PIPE;
	v->a[366] = anon_sym_LT_GT;
	v->a[367] = state(949);
	v->a[368] = 12;
	v->a[369] = sym_redirected_statement;
	v->a[370] = sym_for_statement;
	v->a[371] = sym_while_statement;
	v->a[372] = sym_if_statement;
	v->a[373] = sym_case_statement;
	v->a[374] = sym_function_definition;
	v->a[375] = sym_compound_statement;
	v->a[376] = sym_subshell;
	v->a[377] = sym_list;
	v->a[378] = sym_negated_command;
	v->a[379] = sym_command;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = sym__variable_assignments;
	v->a[381] = 34;
	v->a[382] = actions(3);
	v->a[383] = 1;
	v->a[384] = sym_comment;
	v->a[385] = actions(9);
	v->a[386] = 1;
	v->a[387] = anon_sym_for;
	v->a[388] = actions(13);
	v->a[389] = 1;
	v->a[390] = anon_sym_if;
	v->a[391] = actions(15);
	v->a[392] = 1;
	v->a[393] = anon_sym_case;
	v->a[394] = actions(17);
	v->a[395] = 1;
	v->a[396] = anon_sym_LPAREN;
	v->a[397] = actions(19);
	v->a[398] = 1;
	v->a[399] = anon_sym_LBRACE;
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
