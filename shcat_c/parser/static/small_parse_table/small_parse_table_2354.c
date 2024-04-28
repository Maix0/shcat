/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2354.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11770(t_small_parse_table_array *v)
{
	v->a[235400] = state(5387);
	v->a[235401] = 9;
	v->a[235402] = sym_arithmetic_expansion;
	v->a[235403] = sym_brace_expression;
	v->a[235404] = sym_string;
	v->a[235405] = sym_translated_string;
	v->a[235406] = sym_number;
	v->a[235407] = sym_simple_expansion;
	v->a[235408] = sym_expansion;
	v->a[235409] = sym_command_substitution;
	v->a[235410] = sym_process_substitution;
	v->a[235411] = 18;
	v->a[235412] = actions(3);
	v->a[235413] = 1;
	v->a[235414] = sym_comment;
	v->a[235415] = actions(9754);
	v->a[235416] = 1;
	v->a[235417] = sym_word;
	v->a[235418] = actions(9758);
	v->a[235419] = 1;
	small_parse_table_11771(v);
}

void	small_parse_table_11771(t_small_parse_table_array *v)
{
	v->a[235420] = anon_sym_DOLLAR_LBRACK;
	v->a[235421] = actions(9764);
	v->a[235422] = 1;
	v->a[235423] = anon_sym_DQUOTE;
	v->a[235424] = actions(9768);
	v->a[235425] = 1;
	v->a[235426] = aux_sym_number_token1;
	v->a[235427] = actions(9770);
	v->a[235428] = 1;
	v->a[235429] = aux_sym_number_token2;
	v->a[235430] = actions(9772);
	v->a[235431] = 1;
	v->a[235432] = anon_sym_DOLLAR_LBRACE;
	v->a[235433] = actions(9774);
	v->a[235434] = 1;
	v->a[235435] = anon_sym_DOLLAR_LPAREN;
	v->a[235436] = actions(9776);
	v->a[235437] = 1;
	v->a[235438] = anon_sym_BQUOTE;
	v->a[235439] = actions(9778);
	small_parse_table_11772(v);
}

void	small_parse_table_11772(t_small_parse_table_array *v)
{
	v->a[235440] = 1;
	v->a[235441] = anon_sym_DOLLAR_BQUOTE;
	v->a[235442] = actions(9782);
	v->a[235443] = 1;
	v->a[235444] = sym__comment_word;
	v->a[235445] = actions(9784);
	v->a[235446] = 1;
	v->a[235447] = sym__brace_start;
	v->a[235448] = actions(11092);
	v->a[235449] = 1;
	v->a[235450] = anon_sym_DOLLAR;
	v->a[235451] = actions(9756);
	v->a[235452] = 2;
	v->a[235453] = anon_sym_LPAREN_LPAREN;
	v->a[235454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235455] = actions(9762);
	v->a[235456] = 2;
	v->a[235457] = sym_test_operator;
	v->a[235458] = sym__special_character;
	v->a[235459] = actions(9780);
	small_parse_table_11773(v);
}

void	small_parse_table_11773(t_small_parse_table_array *v)
{
	v->a[235460] = 2;
	v->a[235461] = anon_sym_LT_LPAREN;
	v->a[235462] = anon_sym_GT_LPAREN;
	v->a[235463] = actions(9766);
	v->a[235464] = 3;
	v->a[235465] = sym__bare_dollar;
	v->a[235466] = sym_raw_string;
	v->a[235467] = sym_ansi_c_string;
	v->a[235468] = state(6225);
	v->a[235469] = 9;
	v->a[235470] = sym_arithmetic_expansion;
	v->a[235471] = sym_brace_expression;
	v->a[235472] = sym_string;
	v->a[235473] = sym_translated_string;
	v->a[235474] = sym_number;
	v->a[235475] = sym_simple_expansion;
	v->a[235476] = sym_expansion;
	v->a[235477] = sym_command_substitution;
	v->a[235478] = sym_process_substitution;
	v->a[235479] = 18;
	small_parse_table_11774(v);
}

void	small_parse_table_11774(t_small_parse_table_array *v)
{
	v->a[235480] = actions(3);
	v->a[235481] = 1;
	v->a[235482] = sym_comment;
	v->a[235483] = actions(2044);
	v->a[235484] = 1;
	v->a[235485] = aux_sym_number_token1;
	v->a[235486] = actions(2046);
	v->a[235487] = 1;
	v->a[235488] = aux_sym_number_token2;
	v->a[235489] = actions(2050);
	v->a[235490] = 1;
	v->a[235491] = anon_sym_DOLLAR_LPAREN;
	v->a[235492] = actions(2064);
	v->a[235493] = 1;
	v->a[235494] = sym__brace_start;
	v->a[235495] = actions(8344);
	v->a[235496] = 1;
	v->a[235497] = anon_sym_DOLLAR_LBRACK;
	v->a[235498] = actions(8348);
	v->a[235499] = 1;
	small_parse_table_11775(v);
}

/* EOF small_parse_table_2354.c */
