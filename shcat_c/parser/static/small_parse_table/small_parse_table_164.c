/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_164.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_820(t_small_parse_table_array *v)
{
	v->a[16400] = 1;
	v->a[16401] = sym__arithmetic_postfix_expression;
	v->a[16402] = state(3150);
	v->a[16403] = 1;
	v->a[16404] = sym__expression;
	v->a[16405] = actions(1129);
	v->a[16406] = 2;
	v->a[16407] = anon_sym_LPAREN_LPAREN;
	v->a[16408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16409] = actions(1165);
	v->a[16410] = 2;
	v->a[16411] = anon_sym_LT_LPAREN;
	v->a[16412] = anon_sym_GT_LPAREN;
	v->a[16413] = actions(1183);
	v->a[16414] = 2;
	v->a[16415] = sym_raw_string;
	v->a[16416] = sym_ansi_c_string;
	v->a[16417] = actions(3054);
	v->a[16418] = 2;
	v->a[16419] = anon_sym_PLUS_PLUS2;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = anon_sym_DASH_DASH2;
	v->a[16421] = actions(3056);
	v->a[16422] = 2;
	v->a[16423] = anon_sym_DASH2;
	v->a[16424] = anon_sym_PLUS2;
	v->a[16425] = state(2397);
	v->a[16426] = 4;
	v->a[16427] = sym_string;
	v->a[16428] = sym_number;
	v->a[16429] = sym_simple_expansion;
	v->a[16430] = sym_expansion;
	v->a[16431] = state(2456);
	v->a[16432] = 4;
	v->a[16433] = sym_arithmetic_expansion;
	v->a[16434] = sym_brace_expression;
	v->a[16435] = sym_translated_string;
	v->a[16436] = sym_process_substitution;
	v->a[16437] = state(2743);
	v->a[16438] = 4;
	v->a[16439] = sym_subscript;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = sym__arithmetic_expression;
	v->a[16441] = sym__arithmetic_literal;
	v->a[16442] = sym__arithmetic_parenthesized_expression;
	v->a[16443] = state(2594);
	v->a[16444] = 6;
	v->a[16445] = sym_binary_expression;
	v->a[16446] = sym_ternary_expression;
	v->a[16447] = sym_unary_expression;
	v->a[16448] = sym_postfix_expression;
	v->a[16449] = sym_parenthesized_expression;
	v->a[16450] = sym_concatenation;
	v->a[16451] = 21;
	v->a[16452] = actions(3);
	v->a[16453] = 1;
	v->a[16454] = sym_comment;
	v->a[16455] = actions(3213);
	v->a[16456] = 1;
	v->a[16457] = anon_sym_DQUOTE;
	v->a[16458] = actions(3475);
	v->a[16459] = 1;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = anon_sym_DOLLAR_LBRACK;
	v->a[16461] = actions(3477);
	v->a[16462] = 1;
	v->a[16463] = anon_sym_DOLLAR;
	v->a[16464] = actions(3479);
	v->a[16465] = 1;
	v->a[16466] = sym__special_character;
	v->a[16467] = actions(3481);
	v->a[16468] = 1;
	v->a[16469] = aux_sym_number_token1;
	v->a[16470] = actions(3483);
	v->a[16471] = 1;
	v->a[16472] = aux_sym_number_token2;
	v->a[16473] = actions(3485);
	v->a[16474] = 1;
	v->a[16475] = anon_sym_DOLLAR_LBRACE;
	v->a[16476] = actions(3487);
	v->a[16477] = 1;
	v->a[16478] = anon_sym_DOLLAR_LPAREN;
	v->a[16479] = actions(3489);
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = 1;
	v->a[16481] = anon_sym_BQUOTE;
	v->a[16482] = actions(3491);
	v->a[16483] = 1;
	v->a[16484] = anon_sym_DOLLAR_BQUOTE;
	v->a[16485] = actions(3495);
	v->a[16486] = 1;
	v->a[16487] = sym_test_operator;
	v->a[16488] = actions(3497);
	v->a[16489] = 1;
	v->a[16490] = sym__brace_start;
	v->a[16491] = state(2024);
	v->a[16492] = 1;
	v->a[16493] = aux_sym__literal_repeat1;
	v->a[16494] = actions(3473);
	v->a[16495] = 2;
	v->a[16496] = anon_sym_LPAREN_LPAREN;
	v->a[16497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16498] = actions(3493);
	v->a[16499] = 2;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
