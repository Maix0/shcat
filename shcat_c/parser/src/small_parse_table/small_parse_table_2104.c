/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2104.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10520(t_small_parse_table_array *v)
{
	v->a[210400] = sym_arithmetic_expansion;
	v->a[210401] = sym_brace_expression;
	v->a[210402] = sym_string;
	v->a[210403] = sym_translated_string;
	v->a[210404] = sym_number;
	v->a[210405] = sym_simple_expansion;
	v->a[210406] = sym_expansion;
	v->a[210407] = sym_command_substitution;
	v->a[210408] = sym_process_substitution;
	v->a[210409] = 18;
	v->a[210410] = actions(3);
	v->a[210411] = 1;
	v->a[210412] = sym_comment;
	v->a[210413] = actions(5405);
	v->a[210414] = 1;
	v->a[210415] = anon_sym_DOLLAR_LBRACK;
	v->a[210416] = actions(5411);
	v->a[210417] = 1;
	v->a[210418] = anon_sym_DQUOTE;
	v->a[210419] = actions(5415);
	small_parse_table_10521(v);
}

void	small_parse_table_10521(t_small_parse_table_array *v)
{
	v->a[210420] = 1;
	v->a[210421] = aux_sym_number_token1;
	v->a[210422] = actions(5417);
	v->a[210423] = 1;
	v->a[210424] = aux_sym_number_token2;
	v->a[210425] = actions(5419);
	v->a[210426] = 1;
	v->a[210427] = anon_sym_DOLLAR_LBRACE;
	v->a[210428] = actions(5421);
	v->a[210429] = 1;
	v->a[210430] = anon_sym_DOLLAR_LPAREN;
	v->a[210431] = actions(5423);
	v->a[210432] = 1;
	v->a[210433] = anon_sym_BQUOTE;
	v->a[210434] = actions(5425);
	v->a[210435] = 1;
	v->a[210436] = anon_sym_DOLLAR_BQUOTE;
	v->a[210437] = actions(5431);
	v->a[210438] = 1;
	v->a[210439] = sym__brace_start;
	small_parse_table_10522(v);
}

void	small_parse_table_10522(t_small_parse_table_array *v)
{
	v->a[210440] = actions(9958);
	v->a[210441] = 1;
	v->a[210442] = sym_word;
	v->a[210443] = actions(9960);
	v->a[210444] = 1;
	v->a[210445] = anon_sym_DOLLAR;
	v->a[210446] = actions(9966);
	v->a[210447] = 1;
	v->a[210448] = sym__comment_word;
	v->a[210449] = actions(5403);
	v->a[210450] = 2;
	v->a[210451] = anon_sym_LPAREN_LPAREN;
	v->a[210452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210453] = actions(5427);
	v->a[210454] = 2;
	v->a[210455] = anon_sym_LT_LPAREN;
	v->a[210456] = anon_sym_GT_LPAREN;
	v->a[210457] = actions(9962);
	v->a[210458] = 2;
	v->a[210459] = sym_test_operator;
	small_parse_table_10523(v);
}

void	small_parse_table_10523(t_small_parse_table_array *v)
{
	v->a[210460] = sym__special_character;
	v->a[210461] = actions(9964);
	v->a[210462] = 3;
	v->a[210463] = sym__bare_dollar;
	v->a[210464] = sym_raw_string;
	v->a[210465] = sym_ansi_c_string;
	v->a[210466] = state(5541);
	v->a[210467] = 9;
	v->a[210468] = sym_arithmetic_expansion;
	v->a[210469] = sym_brace_expression;
	v->a[210470] = sym_string;
	v->a[210471] = sym_translated_string;
	v->a[210472] = sym_number;
	v->a[210473] = sym_simple_expansion;
	v->a[210474] = sym_expansion;
	v->a[210475] = sym_command_substitution;
	v->a[210476] = sym_process_substitution;
	v->a[210477] = 20;
	v->a[210478] = actions(71);
	v->a[210479] = 1;
	small_parse_table_10524(v);
}

void	small_parse_table_10524(t_small_parse_table_array *v)
{
	v->a[210480] = sym_comment;
	v->a[210481] = actions(2863);
	v->a[210482] = 1;
	v->a[210483] = anon_sym_DOLLAR;
	v->a[210484] = actions(2869);
	v->a[210485] = 1;
	v->a[210486] = aux_sym_number_token1;
	v->a[210487] = actions(2871);
	v->a[210488] = 1;
	v->a[210489] = aux_sym_number_token2;
	v->a[210490] = actions(2875);
	v->a[210491] = 1;
	v->a[210492] = anon_sym_DOLLAR_LPAREN;
	v->a[210493] = actions(2885);
	v->a[210494] = 1;
	v->a[210495] = sym__brace_start;
	v->a[210496] = actions(9940);
	v->a[210497] = 1;
	v->a[210498] = anon_sym_DOLLAR_LBRACK;
	v->a[210499] = actions(9942);
	small_parse_table_10525(v);
}

/* EOF small_parse_table_2104.c */
