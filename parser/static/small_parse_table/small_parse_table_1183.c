/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1183.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5915(t_small_parse_table_array *v)
{
	v->a[118300] = sym_arithmetic_expansion;
	v->a[118301] = sym_brace_expression;
	v->a[118302] = sym_string;
	v->a[118303] = sym_number;
	v->a[118304] = sym_simple_expansion;
	v->a[118305] = sym_expansion;
	v->a[118306] = sym_command_substitution;
	v->a[118307] = 16;
	v->a[118308] = actions(3);
	v->a[118309] = 1;
	v->a[118310] = sym_comment;
	v->a[118311] = actions(1546);
	v->a[118312] = 1;
	v->a[118313] = aux_sym_number_token1;
	v->a[118314] = actions(1548);
	v->a[118315] = 1;
	v->a[118316] = aux_sym_number_token2;
	v->a[118317] = actions(1552);
	v->a[118318] = 1;
	v->a[118319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5916(v);
}

void	small_parse_table_5916(t_small_parse_table_array *v)
{
	v->a[118320] = actions(1560);
	v->a[118321] = 1;
	v->a[118322] = sym__brace_start;
	v->a[118323] = actions(6169);
	v->a[118324] = 1;
	v->a[118325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118326] = actions(6173);
	v->a[118327] = 1;
	v->a[118328] = anon_sym_DQUOTE;
	v->a[118329] = actions(6175);
	v->a[118330] = 1;
	v->a[118331] = anon_sym_DOLLAR_LBRACE;
	v->a[118332] = actions(6177);
	v->a[118333] = 1;
	v->a[118334] = anon_sym_BQUOTE;
	v->a[118335] = actions(6179);
	v->a[118336] = 1;
	v->a[118337] = anon_sym_DOLLAR_BQUOTE;
	v->a[118338] = actions(6933);
	v->a[118339] = 1;
	small_parse_table_5917(v);
}

void	small_parse_table_5917(t_small_parse_table_array *v)
{
	v->a[118340] = sym_word;
	v->a[118341] = actions(6935);
	v->a[118342] = 1;
	v->a[118343] = sym__special_character;
	v->a[118344] = actions(6939);
	v->a[118345] = 1;
	v->a[118346] = sym__comment_word;
	v->a[118347] = actions(6953);
	v->a[118348] = 1;
	v->a[118349] = anon_sym_DOLLAR;
	v->a[118350] = actions(6937);
	v->a[118351] = 3;
	v->a[118352] = sym_test_operator;
	v->a[118353] = sym__bare_dollar;
	v->a[118354] = sym_raw_string;
	v->a[118355] = state(842);
	v->a[118356] = 7;
	v->a[118357] = sym_arithmetic_expansion;
	v->a[118358] = sym_brace_expression;
	v->a[118359] = sym_string;
	small_parse_table_5918(v);
}

void	small_parse_table_5918(t_small_parse_table_array *v)
{
	v->a[118360] = sym_number;
	v->a[118361] = sym_simple_expansion;
	v->a[118362] = sym_expansion;
	v->a[118363] = sym_command_substitution;
	v->a[118364] = 16;
	v->a[118365] = actions(3);
	v->a[118366] = 1;
	v->a[118367] = sym_comment;
	v->a[118368] = actions(2541);
	v->a[118369] = 1;
	v->a[118370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118371] = actions(2547);
	v->a[118372] = 1;
	v->a[118373] = anon_sym_DQUOTE;
	v->a[118374] = actions(2551);
	v->a[118375] = 1;
	v->a[118376] = aux_sym_number_token1;
	v->a[118377] = actions(2553);
	v->a[118378] = 1;
	v->a[118379] = aux_sym_number_token2;
	small_parse_table_5919(v);
}

void	small_parse_table_5919(t_small_parse_table_array *v)
{
	v->a[118380] = actions(2555);
	v->a[118381] = 1;
	v->a[118382] = anon_sym_DOLLAR_LBRACE;
	v->a[118383] = actions(2557);
	v->a[118384] = 1;
	v->a[118385] = anon_sym_DOLLAR_LPAREN;
	v->a[118386] = actions(2559);
	v->a[118387] = 1;
	v->a[118388] = anon_sym_BQUOTE;
	v->a[118389] = actions(2561);
	v->a[118390] = 1;
	v->a[118391] = anon_sym_DOLLAR_BQUOTE;
	v->a[118392] = actions(2567);
	v->a[118393] = 1;
	v->a[118394] = sym__brace_start;
	v->a[118395] = actions(6282);
	v->a[118396] = 1;
	v->a[118397] = sym_word;
	v->a[118398] = actions(6284);
	v->a[118399] = 1;
	small_parse_table_5920(v);
}

/* EOF small_parse_table_1183.c */
