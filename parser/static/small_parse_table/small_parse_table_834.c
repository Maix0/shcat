/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_834.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4170(t_small_parse_table_array *v)
{
	v->a[83400] = sym_word;
	v->a[83401] = 27;
	v->a[83402] = actions(71);
	v->a[83403] = 1;
	v->a[83404] = sym_comment;
	v->a[83405] = actions(187);
	v->a[83406] = 1;
	v->a[83407] = anon_sym_TILDE;
	v->a[83408] = actions(350);
	v->a[83409] = 1;
	v->a[83410] = sym_word;
	v->a[83411] = actions(359);
	v->a[83412] = 1;
	v->a[83413] = anon_sym_LPAREN;
	v->a[83414] = actions(361);
	v->a[83415] = 1;
	v->a[83416] = anon_sym_BANG;
	v->a[83417] = actions(363);
	v->a[83418] = 1;
	v->a[83419] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4171(v);
}

void	small_parse_table_4171(t_small_parse_table_array *v)
{
	v->a[83420] = actions(367);
	v->a[83421] = 1;
	v->a[83422] = anon_sym_DOLLAR;
	v->a[83423] = actions(371);
	v->a[83424] = 1;
	v->a[83425] = anon_sym_DQUOTE;
	v->a[83426] = actions(375);
	v->a[83427] = 1;
	v->a[83428] = aux_sym_number_token1;
	v->a[83429] = actions(377);
	v->a[83430] = 1;
	v->a[83431] = aux_sym_number_token2;
	v->a[83432] = actions(379);
	v->a[83433] = 1;
	v->a[83434] = anon_sym_DOLLAR_LBRACE;
	v->a[83435] = actions(381);
	v->a[83436] = 1;
	v->a[83437] = anon_sym_DOLLAR_LPAREN;
	v->a[83438] = actions(385);
	v->a[83439] = 1;
	small_parse_table_4172(v);
}

void	small_parse_table_4172(t_small_parse_table_array *v)
{
	v->a[83440] = anon_sym_DOLLAR_BQUOTE;
	v->a[83441] = actions(389);
	v->a[83442] = 1;
	v->a[83443] = sym_test_operator;
	v->a[83444] = actions(391);
	v->a[83445] = 1;
	v->a[83446] = sym__brace_start;
	v->a[83447] = actions(5807);
	v->a[83448] = 1;
	v->a[83449] = sym__special_character;
	v->a[83450] = actions(5809);
	v->a[83451] = 1;
	v->a[83452] = anon_sym_BQUOTE;
	v->a[83453] = actions(5972);
	v->a[83454] = 1;
	v->a[83455] = sym__regex_no_space;
	v->a[83456] = state(2641);
	v->a[83457] = 1;
	v->a[83458] = aux_sym__literal_repeat1;
	v->a[83459] = state(2989);
	small_parse_table_4173(v);
}

void	small_parse_table_4173(t_small_parse_table_array *v)
{
	v->a[83460] = 1;
	v->a[83461] = sym__expression;
	v->a[83462] = actions(183);
	v->a[83463] = 2;
	v->a[83464] = anon_sym_PLUS_PLUS2;
	v->a[83465] = anon_sym_DASH_DASH2;
	v->a[83466] = actions(185);
	v->a[83467] = 2;
	v->a[83468] = anon_sym_DASH2;
	v->a[83469] = anon_sym_PLUS2;
	v->a[83470] = actions(352);
	v->a[83471] = 2;
	v->a[83472] = anon_sym_LPAREN_LPAREN;
	v->a[83473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83474] = actions(373);
	v->a[83475] = 2;
	v->a[83476] = sym_raw_string;
	v->a[83477] = sym_ansi_c_string;
	v->a[83478] = actions(387);
	v->a[83479] = 2;
	small_parse_table_4174(v);
}

void	small_parse_table_4174(t_small_parse_table_array *v)
{
	v->a[83480] = anon_sym_LT_LPAREN;
	v->a[83481] = anon_sym_GT_LPAREN;
	v->a[83482] = state(3071);
	v->a[83483] = 6;
	v->a[83484] = sym_binary_expression;
	v->a[83485] = sym_ternary_expression;
	v->a[83486] = sym_unary_expression;
	v->a[83487] = sym_postfix_expression;
	v->a[83488] = sym_parenthesized_expression;
	v->a[83489] = sym_concatenation;
	v->a[83490] = state(2521);
	v->a[83491] = 9;
	v->a[83492] = sym_arithmetic_expansion;
	v->a[83493] = sym_brace_expression;
	v->a[83494] = sym_string;
	v->a[83495] = sym_translated_string;
	v->a[83496] = sym_number;
	v->a[83497] = sym_simple_expansion;
	v->a[83498] = sym_expansion;
	v->a[83499] = sym_command_substitution;
	small_parse_table_4175(v);
}

/* EOF small_parse_table_834.c */
