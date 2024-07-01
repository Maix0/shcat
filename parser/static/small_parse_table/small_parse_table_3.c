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
	v->a[300] = actions(61);
	v->a[301] = 1;
	v->a[302] = anon_sym_DOLLAR;
	v->a[303] = actions(63);
	v->a[304] = 1;
	v->a[305] = anon_sym_DQUOTE;
	v->a[306] = actions(67);
	v->a[307] = 1;
	v->a[308] = anon_sym_DOLLAR_LBRACE;
	v->a[309] = actions(69);
	v->a[310] = 1;
	v->a[311] = anon_sym_DOLLAR_LPAREN;
	v->a[312] = actions(71);
	v->a[313] = 1;
	v->a[314] = anon_sym_BQUOTE;
	v->a[315] = actions(73);
	v->a[316] = 1;
	v->a[317] = sym_file_descriptor;
	v->a[318] = actions(75);
	v->a[319] = 1;
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = sym_variable_name;
	v->a[321] = actions(79);
	v->a[322] = 1;
	v->a[323] = anon_sym_fi;
	v->a[324] = state(3);
	v->a[325] = 1;
	v->a[326] = aux_sym__terminated_statement;
	v->a[327] = state(189);
	v->a[328] = 1;
	v->a[329] = sym_command_name;
	v->a[330] = state(273);
	v->a[331] = 1;
	v->a[332] = sym_variable_assignment;
	v->a[333] = state(650);
	v->a[334] = 1;
	v->a[335] = sym_concatenation;
	v->a[336] = state(712);
	v->a[337] = 1;
	v->a[338] = sym_file_redirect;
	v->a[339] = state(713);
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = 1;
	v->a[341] = aux_sym_command_repeat1;
	v->a[342] = state(1196);
	v->a[343] = 1;
	v->a[344] = sym_pipeline;
	v->a[345] = state(1333);
	v->a[346] = 1;
	v->a[347] = aux_sym_redirected_statement_repeat2;
	v->a[348] = state(2103);
	v->a[349] = 1;
	v->a[350] = sym__statement_not_pipeline;
	v->a[351] = state(2136);
	v->a[352] = 1;
	v->a[353] = sym_else_clause;
	v->a[354] = actions(11);
	v->a[355] = 2;
	v->a[356] = anon_sym_while;
	v->a[357] = anon_sym_until;
	v->a[358] = actions(57);
	v->a[359] = 2;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = anon_sym_LT_AMP_DASH;
	v->a[361] = anon_sym_GT_AMP_DASH;
	v->a[362] = actions(65);
	v->a[363] = 2;
	v->a[364] = sym_raw_string;
	v->a[365] = sym_number;
	v->a[366] = state(1990);
	v->a[367] = 2;
	v->a[368] = sym_elif_clause;
	v->a[369] = aux_sym_if_statement_repeat1;
	v->a[370] = state(443);
	v->a[371] = 5;
	v->a[372] = sym_arithmetic_expansion;
	v->a[373] = sym_string;
	v->a[374] = sym_simple_expansion;
	v->a[375] = sym_expansion;
	v->a[376] = sym_command_substitution;
	v->a[377] = actions(55);
	v->a[378] = 6;
	v->a[379] = anon_sym_LT;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = anon_sym_GT;
	v->a[381] = anon_sym_GT_GT;
	v->a[382] = anon_sym_LT_AMP;
	v->a[383] = anon_sym_GT_AMP;
	v->a[384] = anon_sym_GT_PIPE;
	v->a[385] = state(1187);
	v->a[386] = 12;
	v->a[387] = sym_redirected_statement;
	v->a[388] = sym_for_statement;
	v->a[389] = sym_while_statement;
	v->a[390] = sym_if_statement;
	v->a[391] = sym_case_statement;
	v->a[392] = sym_function_definition;
	v->a[393] = sym_compound_statement;
	v->a[394] = sym_subshell;
	v->a[395] = sym_list;
	v->a[396] = sym_negated_command;
	v->a[397] = sym_command;
	v->a[398] = sym__variable_assignments;
	v->a[399] = 36;
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
