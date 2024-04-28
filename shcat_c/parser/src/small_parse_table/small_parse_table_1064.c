/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1064.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5320(t_small_parse_table_array *v)
{
	v->a[106400] = sym_parenthesized_expression;
	v->a[106401] = sym_concatenation;
	v->a[106402] = state(2500);
	v->a[106403] = 9;
	v->a[106404] = sym_arithmetic_expansion;
	v->a[106405] = sym_brace_expression;
	v->a[106406] = sym_string;
	v->a[106407] = sym_translated_string;
	v->a[106408] = sym_number;
	v->a[106409] = sym_simple_expansion;
	v->a[106410] = sym_expansion;
	v->a[106411] = sym_command_substitution;
	v->a[106412] = sym_process_substitution;
	v->a[106413] = 27;
	v->a[106414] = actions(71);
	v->a[106415] = 1;
	v->a[106416] = sym_comment;
	v->a[106417] = actions(363);
	v->a[106418] = 1;
	v->a[106419] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_5321(v);
}

void	small_parse_table_5321(t_small_parse_table_array *v)
{
	v->a[106420] = actions(367);
	v->a[106421] = 1;
	v->a[106422] = anon_sym_DOLLAR;
	v->a[106423] = actions(371);
	v->a[106424] = 1;
	v->a[106425] = anon_sym_DQUOTE;
	v->a[106426] = actions(375);
	v->a[106427] = 1;
	v->a[106428] = aux_sym_number_token1;
	v->a[106429] = actions(377);
	v->a[106430] = 1;
	v->a[106431] = aux_sym_number_token2;
	v->a[106432] = actions(379);
	v->a[106433] = 1;
	v->a[106434] = anon_sym_DOLLAR_LBRACE;
	v->a[106435] = actions(381);
	v->a[106436] = 1;
	v->a[106437] = anon_sym_DOLLAR_LPAREN;
	v->a[106438] = actions(385);
	v->a[106439] = 1;
	small_parse_table_5322(v);
}

void	small_parse_table_5322(t_small_parse_table_array *v)
{
	v->a[106440] = anon_sym_DOLLAR_BQUOTE;
	v->a[106441] = actions(391);
	v->a[106442] = 1;
	v->a[106443] = sym__brace_start;
	v->a[106444] = actions(1093);
	v->a[106445] = 1;
	v->a[106446] = anon_sym_LPAREN;
	v->a[106447] = actions(1095);
	v->a[106448] = 1;
	v->a[106449] = anon_sym_BANG;
	v->a[106450] = actions(1103);
	v->a[106451] = 1;
	v->a[106452] = anon_sym_TILDE;
	v->a[106453] = actions(5809);
	v->a[106454] = 1;
	v->a[106455] = anon_sym_BQUOTE;
	v->a[106456] = actions(5916);
	v->a[106457] = 1;
	v->a[106458] = sym__special_character;
	v->a[106459] = actions(6175);
	small_parse_table_5323(v);
}

void	small_parse_table_5323(t_small_parse_table_array *v)
{
	v->a[106460] = 1;
	v->a[106461] = sym_word;
	v->a[106462] = actions(6179);
	v->a[106463] = 1;
	v->a[106464] = sym_test_operator;
	v->a[106465] = state(2445);
	v->a[106466] = 1;
	v->a[106467] = aux_sym__literal_repeat1;
	v->a[106468] = state(3397);
	v->a[106469] = 1;
	v->a[106470] = sym__expression;
	v->a[106471] = actions(352);
	v->a[106472] = 2;
	v->a[106473] = anon_sym_LPAREN_LPAREN;
	v->a[106474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106475] = actions(387);
	v->a[106476] = 2;
	v->a[106477] = anon_sym_LT_LPAREN;
	v->a[106478] = anon_sym_GT_LPAREN;
	v->a[106479] = actions(1099);
	small_parse_table_5324(v);
}

void	small_parse_table_5324(t_small_parse_table_array *v)
{
	v->a[106480] = 2;
	v->a[106481] = anon_sym_PLUS_PLUS2;
	v->a[106482] = anon_sym_DASH_DASH2;
	v->a[106483] = actions(1101);
	v->a[106484] = 2;
	v->a[106485] = anon_sym_DASH2;
	v->a[106486] = anon_sym_PLUS2;
	v->a[106487] = actions(6177);
	v->a[106488] = 2;
	v->a[106489] = sym_raw_string;
	v->a[106490] = sym_ansi_c_string;
	v->a[106491] = state(2594);
	v->a[106492] = 2;
	v->a[106493] = sym_ternary_expression;
	v->a[106494] = sym_postfix_expression;
	v->a[106495] = state(2834);
	v->a[106496] = 4;
	v->a[106497] = sym_binary_expression;
	v->a[106498] = sym_unary_expression;
	v->a[106499] = sym_parenthesized_expression;
	small_parse_table_5325(v);
}

/* EOF small_parse_table_1064.c */
