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
	v->a[300] = anon_sym_BANG;
	v->a[301] = actions(59);
	v->a[302] = 1;
	v->a[303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[304] = actions(61);
	v->a[305] = 1;
	v->a[306] = anon_sym_DOLLAR;
	v->a[307] = actions(63);
	v->a[308] = 1;
	v->a[309] = anon_sym_DQUOTE;
	v->a[310] = actions(67);
	v->a[311] = 1;
	v->a[312] = anon_sym_DOLLAR_LBRACE;
	v->a[313] = actions(69);
	v->a[314] = 1;
	v->a[315] = anon_sym_DOLLAR_LPAREN;
	v->a[316] = actions(71);
	v->a[317] = 1;
	v->a[318] = anon_sym_BQUOTE;
	v->a[319] = actions(73);
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = 1;
	v->a[321] = sym_file_descriptor;
	v->a[322] = actions(75);
	v->a[323] = 1;
	v->a[324] = sym_variable_name;
	v->a[325] = actions(79);
	v->a[326] = 1;
	v->a[327] = anon_sym_fi;
	v->a[328] = state(24);
	v->a[329] = 1;
	v->a[330] = aux_sym__terminated_statement;
	v->a[331] = state(191);
	v->a[332] = 1;
	v->a[333] = sym_command_name;
	v->a[334] = state(279);
	v->a[335] = 1;
	v->a[336] = sym_variable_assignment;
	v->a[337] = state(624);
	v->a[338] = 1;
	v->a[339] = sym_concatenation;
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = state(726);
	v->a[341] = 1;
	v->a[342] = sym_file_redirect;
	v->a[343] = state(733);
	v->a[344] = 1;
	v->a[345] = aux_sym_command_repeat1;
	v->a[346] = state(1223);
	v->a[347] = 1;
	v->a[348] = sym_pipeline;
	v->a[349] = state(1307);
	v->a[350] = 1;
	v->a[351] = aux_sym_redirected_statement_repeat2;
	v->a[352] = state(2117);
	v->a[353] = 1;
	v->a[354] = sym__statement_not_pipeline;
	v->a[355] = state(2190);
	v->a[356] = 1;
	v->a[357] = sym_else_clause;
	v->a[358] = actions(11);
	v->a[359] = 2;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = anon_sym_while;
	v->a[361] = anon_sym_until;
	v->a[362] = actions(57);
	v->a[363] = 2;
	v->a[364] = anon_sym_LT_AMP_DASH;
	v->a[365] = anon_sym_GT_AMP_DASH;
	v->a[366] = actions(65);
	v->a[367] = 2;
	v->a[368] = sym_raw_string;
	v->a[369] = sym_number;
	v->a[370] = state(2003);
	v->a[371] = 2;
	v->a[372] = sym_elif_clause;
	v->a[373] = aux_sym_if_statement_repeat1;
	v->a[374] = state(420);
	v->a[375] = 5;
	v->a[376] = sym_arithmetic_expansion;
	v->a[377] = sym_string;
	v->a[378] = sym_simple_expansion;
	v->a[379] = sym_expansion;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = sym_command_substitution;
	v->a[381] = actions(55);
	v->a[382] = 8;
	v->a[383] = anon_sym_LT;
	v->a[384] = anon_sym_GT;
	v->a[385] = anon_sym_GT_GT;
	v->a[386] = anon_sym_AMP_GT;
	v->a[387] = anon_sym_AMP_GT_GT;
	v->a[388] = anon_sym_LT_AMP;
	v->a[389] = anon_sym_GT_AMP;
	v->a[390] = anon_sym_GT_PIPE;
	v->a[391] = state(1140);
	v->a[392] = 12;
	v->a[393] = sym_redirected_statement;
	v->a[394] = sym_for_statement;
	v->a[395] = sym_while_statement;
	v->a[396] = sym_if_statement;
	v->a[397] = sym_case_statement;
	v->a[398] = sym_function_definition;
	v->a[399] = sym_compound_statement;
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
