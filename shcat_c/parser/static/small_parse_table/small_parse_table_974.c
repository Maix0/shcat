/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_974.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4870(t_small_parse_table_array *v)
{
	v->a[97400] = 1;
	v->a[97401] = sym__brace_start;
	v->a[97402] = actions(5807);
	v->a[97403] = 1;
	v->a[97404] = sym__special_character;
	v->a[97405] = actions(5809);
	v->a[97406] = 1;
	v->a[97407] = anon_sym_BQUOTE;
	v->a[97408] = state(2641);
	v->a[97409] = 1;
	v->a[97410] = aux_sym__literal_repeat1;
	v->a[97411] = state(2962);
	v->a[97412] = 1;
	v->a[97413] = sym__expression;
	v->a[97414] = actions(183);
	v->a[97415] = 2;
	v->a[97416] = anon_sym_PLUS_PLUS2;
	v->a[97417] = anon_sym_DASH_DASH2;
	v->a[97418] = actions(185);
	v->a[97419] = 2;
	small_parse_table_4871(v);
}

void	small_parse_table_4871(t_small_parse_table_array *v)
{
	v->a[97420] = anon_sym_DASH2;
	v->a[97421] = anon_sym_PLUS2;
	v->a[97422] = actions(352);
	v->a[97423] = 2;
	v->a[97424] = anon_sym_LPAREN_LPAREN;
	v->a[97425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97426] = actions(373);
	v->a[97427] = 2;
	v->a[97428] = sym_raw_string;
	v->a[97429] = sym_ansi_c_string;
	v->a[97430] = actions(387);
	v->a[97431] = 2;
	v->a[97432] = anon_sym_LT_LPAREN;
	v->a[97433] = anon_sym_GT_LPAREN;
	v->a[97434] = state(3071);
	v->a[97435] = 6;
	v->a[97436] = sym_binary_expression;
	v->a[97437] = sym_ternary_expression;
	v->a[97438] = sym_unary_expression;
	v->a[97439] = sym_postfix_expression;
	small_parse_table_4872(v);
}

void	small_parse_table_4872(t_small_parse_table_array *v)
{
	v->a[97440] = sym_parenthesized_expression;
	v->a[97441] = sym_concatenation;
	v->a[97442] = state(2521);
	v->a[97443] = 9;
	v->a[97444] = sym_arithmetic_expansion;
	v->a[97445] = sym_brace_expression;
	v->a[97446] = sym_string;
	v->a[97447] = sym_translated_string;
	v->a[97448] = sym_number;
	v->a[97449] = sym_simple_expansion;
	v->a[97450] = sym_expansion;
	v->a[97451] = sym_command_substitution;
	v->a[97452] = sym_process_substitution;
	v->a[97453] = 26;
	v->a[97454] = actions(71);
	v->a[97455] = 1;
	v->a[97456] = sym_comment;
	v->a[97457] = actions(187);
	v->a[97458] = 1;
	v->a[97459] = anon_sym_TILDE;
	small_parse_table_4873(v);
}

void	small_parse_table_4873(t_small_parse_table_array *v)
{
	v->a[97460] = actions(350);
	v->a[97461] = 1;
	v->a[97462] = sym_word;
	v->a[97463] = actions(359);
	v->a[97464] = 1;
	v->a[97465] = anon_sym_LPAREN;
	v->a[97466] = actions(361);
	v->a[97467] = 1;
	v->a[97468] = anon_sym_BANG;
	v->a[97469] = actions(363);
	v->a[97470] = 1;
	v->a[97471] = anon_sym_DOLLAR_LBRACK;
	v->a[97472] = actions(367);
	v->a[97473] = 1;
	v->a[97474] = anon_sym_DOLLAR;
	v->a[97475] = actions(371);
	v->a[97476] = 1;
	v->a[97477] = anon_sym_DQUOTE;
	v->a[97478] = actions(375);
	v->a[97479] = 1;
	small_parse_table_4874(v);
}

void	small_parse_table_4874(t_small_parse_table_array *v)
{
	v->a[97480] = aux_sym_number_token1;
	v->a[97481] = actions(377);
	v->a[97482] = 1;
	v->a[97483] = aux_sym_number_token2;
	v->a[97484] = actions(379);
	v->a[97485] = 1;
	v->a[97486] = anon_sym_DOLLAR_LBRACE;
	v->a[97487] = actions(381);
	v->a[97488] = 1;
	v->a[97489] = anon_sym_DOLLAR_LPAREN;
	v->a[97490] = actions(385);
	v->a[97491] = 1;
	v->a[97492] = anon_sym_DOLLAR_BQUOTE;
	v->a[97493] = actions(389);
	v->a[97494] = 1;
	v->a[97495] = sym_test_operator;
	v->a[97496] = actions(391);
	v->a[97497] = 1;
	v->a[97498] = sym__brace_start;
	v->a[97499] = actions(5807);
	small_parse_table_4875(v);
}

/* EOF small_parse_table_974.c */
