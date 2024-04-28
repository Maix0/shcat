/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2154.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10770(t_small_parse_table_array *v)
{
	v->a[215400] = state(3326);
	v->a[215401] = 9;
	v->a[215402] = sym_subscript;
	v->a[215403] = sym__arithmetic_expression;
	v->a[215404] = sym__arithmetic_literal;
	v->a[215405] = sym__arithmetic_parenthesized_expression;
	v->a[215406] = sym_string;
	v->a[215407] = sym_number;
	v->a[215408] = sym_simple_expansion;
	v->a[215409] = sym_expansion;
	v->a[215410] = sym_command_substitution;
	v->a[215411] = 18;
	v->a[215412] = actions(3);
	v->a[215413] = 1;
	v->a[215414] = sym_comment;
	v->a[215415] = actions(8306);
	v->a[215416] = 1;
	v->a[215417] = anon_sym_DOLLAR_LBRACK;
	v->a[215418] = actions(8308);
	v->a[215419] = 1;
	small_parse_table_10771(v);
}

void	small_parse_table_10771(t_small_parse_table_array *v)
{
	v->a[215420] = anon_sym_DOLLAR;
	v->a[215421] = actions(8312);
	v->a[215422] = 1;
	v->a[215423] = anon_sym_DQUOTE;
	v->a[215424] = actions(8316);
	v->a[215425] = 1;
	v->a[215426] = aux_sym_number_token1;
	v->a[215427] = actions(8318);
	v->a[215428] = 1;
	v->a[215429] = aux_sym_number_token2;
	v->a[215430] = actions(8320);
	v->a[215431] = 1;
	v->a[215432] = anon_sym_DOLLAR_LBRACE;
	v->a[215433] = actions(8322);
	v->a[215434] = 1;
	v->a[215435] = anon_sym_DOLLAR_LPAREN;
	v->a[215436] = actions(8324);
	v->a[215437] = 1;
	v->a[215438] = anon_sym_BQUOTE;
	v->a[215439] = actions(8326);
	small_parse_table_10772(v);
}

void	small_parse_table_10772(t_small_parse_table_array *v)
{
	v->a[215440] = 1;
	v->a[215441] = anon_sym_DOLLAR_BQUOTE;
	v->a[215442] = actions(8336);
	v->a[215443] = 1;
	v->a[215444] = sym__brace_start;
	v->a[215445] = actions(10282);
	v->a[215446] = 1;
	v->a[215447] = sym_word;
	v->a[215448] = actions(10288);
	v->a[215449] = 1;
	v->a[215450] = sym__comment_word;
	v->a[215451] = actions(8302);
	v->a[215452] = 2;
	v->a[215453] = anon_sym_LPAREN_LPAREN;
	v->a[215454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215455] = actions(8328);
	v->a[215456] = 2;
	v->a[215457] = anon_sym_LT_LPAREN;
	v->a[215458] = anon_sym_GT_LPAREN;
	v->a[215459] = actions(10284);
	small_parse_table_10773(v);
}

void	small_parse_table_10773(t_small_parse_table_array *v)
{
	v->a[215460] = 2;
	v->a[215461] = sym_test_operator;
	v->a[215462] = sym__special_character;
	v->a[215463] = actions(10286);
	v->a[215464] = 3;
	v->a[215465] = sym__bare_dollar;
	v->a[215466] = sym_raw_string;
	v->a[215467] = sym_ansi_c_string;
	v->a[215468] = state(5428);
	v->a[215469] = 9;
	v->a[215470] = sym_arithmetic_expansion;
	v->a[215471] = sym_brace_expression;
	v->a[215472] = sym_string;
	v->a[215473] = sym_translated_string;
	v->a[215474] = sym_number;
	v->a[215475] = sym_simple_expansion;
	v->a[215476] = sym_expansion;
	v->a[215477] = sym_command_substitution;
	v->a[215478] = sym_process_substitution;
	v->a[215479] = 18;
	small_parse_table_10774(v);
}

void	small_parse_table_10774(t_small_parse_table_array *v)
{
	v->a[215480] = actions(3);
	v->a[215481] = 1;
	v->a[215482] = sym_comment;
	v->a[215483] = actions(5610);
	v->a[215484] = 1;
	v->a[215485] = anon_sym_DOLLAR;
	v->a[215486] = actions(5616);
	v->a[215487] = 1;
	v->a[215488] = aux_sym_number_token1;
	v->a[215489] = actions(5618);
	v->a[215490] = 1;
	v->a[215491] = aux_sym_number_token2;
	v->a[215492] = actions(5622);
	v->a[215493] = 1;
	v->a[215494] = anon_sym_DOLLAR_LPAREN;
	v->a[215495] = actions(5632);
	v->a[215496] = 1;
	v->a[215497] = sym__brace_start;
	v->a[215498] = actions(8944);
	v->a[215499] = 1;
	small_parse_table_10775(v);
}

/* EOF small_parse_table_2154.c */
