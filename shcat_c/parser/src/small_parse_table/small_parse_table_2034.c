/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2034.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10170(t_small_parse_table_array *v)
{
	v->a[203400] = aux_sym_number_token1;
	v->a[203401] = actions(326);
	v->a[203402] = 1;
	v->a[203403] = aux_sym_number_token2;
	v->a[203404] = actions(328);
	v->a[203405] = 1;
	v->a[203406] = anon_sym_DOLLAR_LBRACE;
	v->a[203407] = actions(330);
	v->a[203408] = 1;
	v->a[203409] = anon_sym_DOLLAR_LPAREN;
	v->a[203410] = actions(332);
	v->a[203411] = 1;
	v->a[203412] = anon_sym_BQUOTE;
	v->a[203413] = actions(334);
	v->a[203414] = 1;
	v->a[203415] = anon_sym_DOLLAR_BQUOTE;
	v->a[203416] = actions(344);
	v->a[203417] = 1;
	v->a[203418] = sym__brace_start;
	v->a[203419] = actions(9400);
	small_parse_table_10171(v);
}

void	small_parse_table_10171(t_small_parse_table_array *v)
{
	v->a[203420] = 1;
	v->a[203421] = sym_word;
	v->a[203422] = actions(9406);
	v->a[203423] = 1;
	v->a[203424] = sym__comment_word;
	v->a[203425] = actions(312);
	v->a[203426] = 2;
	v->a[203427] = anon_sym_LPAREN_LPAREN;
	v->a[203428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203429] = actions(336);
	v->a[203430] = 2;
	v->a[203431] = anon_sym_LT_LPAREN;
	v->a[203432] = anon_sym_GT_LPAREN;
	v->a[203433] = actions(9402);
	v->a[203434] = 2;
	v->a[203435] = sym_test_operator;
	v->a[203436] = sym__special_character;
	v->a[203437] = actions(9404);
	v->a[203438] = 3;
	v->a[203439] = sym__bare_dollar;
	small_parse_table_10172(v);
}

void	small_parse_table_10172(t_small_parse_table_array *v)
{
	v->a[203440] = sym_raw_string;
	v->a[203441] = sym_ansi_c_string;
	v->a[203442] = state(1037);
	v->a[203443] = 9;
	v->a[203444] = sym_arithmetic_expansion;
	v->a[203445] = sym_brace_expression;
	v->a[203446] = sym_string;
	v->a[203447] = sym_translated_string;
	v->a[203448] = sym_number;
	v->a[203449] = sym_simple_expansion;
	v->a[203450] = sym_expansion;
	v->a[203451] = sym_command_substitution;
	v->a[203452] = sym_process_substitution;
	v->a[203453] = 21;
	v->a[203454] = actions(71);
	v->a[203455] = 1;
	v->a[203456] = sym_comment;
	v->a[203457] = actions(3064);
	v->a[203458] = 1;
	v->a[203459] = sym_variable_name;
	small_parse_table_10173(v);
}

void	small_parse_table_10173(t_small_parse_table_array *v)
{
	v->a[203460] = actions(9278);
	v->a[203461] = 1;
	v->a[203462] = anon_sym_LPAREN;
	v->a[203463] = actions(9280);
	v->a[203464] = 1;
	v->a[203465] = anon_sym_BANG;
	v->a[203466] = actions(9286);
	v->a[203467] = 1;
	v->a[203468] = anon_sym_TILDE;
	v->a[203469] = actions(9288);
	v->a[203470] = 1;
	v->a[203471] = anon_sym_DOLLAR;
	v->a[203472] = actions(9290);
	v->a[203473] = 1;
	v->a[203474] = anon_sym_DQUOTE;
	v->a[203475] = actions(9292);
	v->a[203476] = 1;
	v->a[203477] = aux_sym_number_token1;
	v->a[203478] = actions(9294);
	v->a[203479] = 1;
	small_parse_table_10174(v);
}

void	small_parse_table_10174(t_small_parse_table_array *v)
{
	v->a[203480] = aux_sym_number_token2;
	v->a[203481] = actions(9296);
	v->a[203482] = 1;
	v->a[203483] = anon_sym_DOLLAR_LBRACE;
	v->a[203484] = actions(9298);
	v->a[203485] = 1;
	v->a[203486] = anon_sym_DOLLAR_LPAREN;
	v->a[203487] = actions(9300);
	v->a[203488] = 1;
	v->a[203489] = anon_sym_BQUOTE;
	v->a[203490] = actions(9302);
	v->a[203491] = 1;
	v->a[203492] = anon_sym_DOLLAR_BQUOTE;
	v->a[203493] = actions(9408);
	v->a[203494] = 1;
	v->a[203495] = aux_sym__simple_variable_name_token1;
	v->a[203496] = state(2801);
	v->a[203497] = 1;
	v->a[203498] = sym__arithmetic_binary_expression;
	v->a[203499] = state(2803);
	small_parse_table_10175(v);
}

/* EOF small_parse_table_2034.c */
