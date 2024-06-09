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
	v->a[300] = anon_sym_LBRACE;
	v->a[301] = actions(49);
	v->a[302] = 1;
	v->a[303] = sym_word;
	v->a[304] = actions(53);
	v->a[305] = 1;
	v->a[306] = anon_sym_elif;
	v->a[307] = actions(55);
	v->a[308] = 1;
	v->a[309] = anon_sym_else;
	v->a[310] = actions(57);
	v->a[311] = 1;
	v->a[312] = anon_sym_BANG;
	v->a[313] = actions(63);
	v->a[314] = 1;
	v->a[315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[316] = actions(65);
	v->a[317] = 1;
	v->a[318] = anon_sym_DOLLAR;
	v->a[319] = actions(67);
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = 1;
	v->a[321] = anon_sym_DQUOTE;
	v->a[322] = actions(69);
	v->a[323] = 1;
	v->a[324] = sym_raw_string;
	v->a[325] = actions(71);
	v->a[326] = 1;
	v->a[327] = aux_sym_number_token1;
	v->a[328] = actions(73);
	v->a[329] = 1;
	v->a[330] = aux_sym_number_token2;
	v->a[331] = actions(75);
	v->a[332] = 1;
	v->a[333] = anon_sym_DOLLAR_LBRACE;
	v->a[334] = actions(77);
	v->a[335] = 1;
	v->a[336] = anon_sym_DOLLAR_LPAREN;
	v->a[337] = actions(79);
	v->a[338] = 1;
	v->a[339] = anon_sym_BQUOTE;
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = actions(81);
	v->a[341] = 1;
	v->a[342] = sym_file_descriptor;
	v->a[343] = actions(83);
	v->a[344] = 1;
	v->a[345] = sym_variable_name;
	v->a[346] = actions(87);
	v->a[347] = 1;
	v->a[348] = anon_sym_fi;
	v->a[349] = state(21);
	v->a[350] = 1;
	v->a[351] = aux_sym__terminated_statement;
	v->a[352] = state(190);
	v->a[353] = 1;
	v->a[354] = sym_command_name;
	v->a[355] = state(299);
	v->a[356] = 1;
	v->a[357] = sym_variable_assignment;
	v->a[358] = state(582);
	v->a[359] = 1;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = sym_concatenation;
	v->a[361] = state(587);
	v->a[362] = 1;
	v->a[363] = aux_sym_command_repeat1;
	v->a[364] = state(718);
	v->a[365] = 1;
	v->a[366] = sym_file_redirect;
	v->a[367] = state(1212);
	v->a[368] = 1;
	v->a[369] = sym_pipeline;
	v->a[370] = state(1213);
	v->a[371] = 1;
	v->a[372] = aux_sym_redirected_statement_repeat2;
	v->a[373] = state(2035);
	v->a[374] = 1;
	v->a[375] = sym__statement_not_pipeline;
	v->a[376] = state(2184);
	v->a[377] = 1;
	v->a[378] = sym_else_clause;
	v->a[379] = actions(11);
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = 2;
	v->a[381] = anon_sym_while;
	v->a[382] = anon_sym_until;
	v->a[383] = actions(61);
	v->a[384] = 2;
	v->a[385] = anon_sym_LT_AMP_DASH;
	v->a[386] = anon_sym_GT_AMP_DASH;
	v->a[387] = state(1901);
	v->a[388] = 2;
	v->a[389] = sym_elif_clause;
	v->a[390] = aux_sym_if_statement_repeat1;
	v->a[391] = state(397);
	v->a[392] = 6;
	v->a[393] = sym_arithmetic_expansion;
	v->a[394] = sym_string;
	v->a[395] = sym_number;
	v->a[396] = sym_simple_expansion;
	v->a[397] = sym_expansion;
	v->a[398] = sym_command_substitution;
	v->a[399] = actions(59);
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
