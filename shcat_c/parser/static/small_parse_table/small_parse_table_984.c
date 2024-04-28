/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_984.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4920(t_small_parse_table_array *v)
{
	v->a[98400] = anon_sym_DOLLAR_LBRACK;
	v->a[98401] = actions(367);
	v->a[98402] = 1;
	v->a[98403] = anon_sym_DOLLAR;
	v->a[98404] = actions(371);
	v->a[98405] = 1;
	v->a[98406] = anon_sym_DQUOTE;
	v->a[98407] = actions(375);
	v->a[98408] = 1;
	v->a[98409] = aux_sym_number_token1;
	v->a[98410] = actions(377);
	v->a[98411] = 1;
	v->a[98412] = aux_sym_number_token2;
	v->a[98413] = actions(379);
	v->a[98414] = 1;
	v->a[98415] = anon_sym_DOLLAR_LBRACE;
	v->a[98416] = actions(381);
	v->a[98417] = 1;
	v->a[98418] = anon_sym_DOLLAR_LPAREN;
	v->a[98419] = actions(385);
	small_parse_table_4921(v);
}

void	small_parse_table_4921(t_small_parse_table_array *v)
{
	v->a[98420] = 1;
	v->a[98421] = anon_sym_DOLLAR_BQUOTE;
	v->a[98422] = actions(389);
	v->a[98423] = 1;
	v->a[98424] = sym_test_operator;
	v->a[98425] = actions(391);
	v->a[98426] = 1;
	v->a[98427] = sym__brace_start;
	v->a[98428] = actions(5807);
	v->a[98429] = 1;
	v->a[98430] = sym__special_character;
	v->a[98431] = actions(5809);
	v->a[98432] = 1;
	v->a[98433] = anon_sym_BQUOTE;
	v->a[98434] = state(2641);
	v->a[98435] = 1;
	v->a[98436] = aux_sym__literal_repeat1;
	v->a[98437] = state(2961);
	v->a[98438] = 1;
	v->a[98439] = sym__expression;
	small_parse_table_4922(v);
}

void	small_parse_table_4922(t_small_parse_table_array *v)
{
	v->a[98440] = actions(183);
	v->a[98441] = 2;
	v->a[98442] = anon_sym_PLUS_PLUS2;
	v->a[98443] = anon_sym_DASH_DASH2;
	v->a[98444] = actions(185);
	v->a[98445] = 2;
	v->a[98446] = anon_sym_DASH2;
	v->a[98447] = anon_sym_PLUS2;
	v->a[98448] = actions(352);
	v->a[98449] = 2;
	v->a[98450] = anon_sym_LPAREN_LPAREN;
	v->a[98451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98452] = actions(373);
	v->a[98453] = 2;
	v->a[98454] = sym_raw_string;
	v->a[98455] = sym_ansi_c_string;
	v->a[98456] = actions(387);
	v->a[98457] = 2;
	v->a[98458] = anon_sym_LT_LPAREN;
	v->a[98459] = anon_sym_GT_LPAREN;
	small_parse_table_4923(v);
}

void	small_parse_table_4923(t_small_parse_table_array *v)
{
	v->a[98460] = state(3071);
	v->a[98461] = 6;
	v->a[98462] = sym_binary_expression;
	v->a[98463] = sym_ternary_expression;
	v->a[98464] = sym_unary_expression;
	v->a[98465] = sym_postfix_expression;
	v->a[98466] = sym_parenthesized_expression;
	v->a[98467] = sym_concatenation;
	v->a[98468] = state(2521);
	v->a[98469] = 9;
	v->a[98470] = sym_arithmetic_expansion;
	v->a[98471] = sym_brace_expression;
	v->a[98472] = sym_string;
	v->a[98473] = sym_translated_string;
	v->a[98474] = sym_number;
	v->a[98475] = sym_simple_expansion;
	v->a[98476] = sym_expansion;
	v->a[98477] = sym_command_substitution;
	v->a[98478] = sym_process_substitution;
	v->a[98479] = 26;
	small_parse_table_4924(v);
}

void	small_parse_table_4924(t_small_parse_table_array *v)
{
	v->a[98480] = actions(71);
	v->a[98481] = 1;
	v->a[98482] = sym_comment;
	v->a[98483] = actions(187);
	v->a[98484] = 1;
	v->a[98485] = anon_sym_TILDE;
	v->a[98486] = actions(350);
	v->a[98487] = 1;
	v->a[98488] = sym_word;
	v->a[98489] = actions(359);
	v->a[98490] = 1;
	v->a[98491] = anon_sym_LPAREN;
	v->a[98492] = actions(361);
	v->a[98493] = 1;
	v->a[98494] = anon_sym_BANG;
	v->a[98495] = actions(363);
	v->a[98496] = 1;
	v->a[98497] = anon_sym_DOLLAR_LBRACK;
	v->a[98498] = actions(367);
	v->a[98499] = 1;
	small_parse_table_4925(v);
}

/* EOF small_parse_table_984.c */
