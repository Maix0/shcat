/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2044.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10220(t_small_parse_table_array *v)
{
	v->a[204400] = 1;
	v->a[204401] = sym__brace_start;
	v->a[204402] = actions(9198);
	v->a[204403] = 1;
	v->a[204404] = anon_sym_DOLLAR_LBRACK;
	v->a[204405] = actions(9202);
	v->a[204406] = 1;
	v->a[204407] = anon_sym_DQUOTE;
	v->a[204408] = actions(9206);
	v->a[204409] = 1;
	v->a[204410] = anon_sym_DOLLAR_LBRACE;
	v->a[204411] = actions(9208);
	v->a[204412] = 1;
	v->a[204413] = anon_sym_BQUOTE;
	v->a[204414] = actions(9210);
	v->a[204415] = 1;
	v->a[204416] = anon_sym_DOLLAR_BQUOTE;
	v->a[204417] = actions(9224);
	v->a[204418] = 1;
	v->a[204419] = sym__special_character;
	small_parse_table_10221(v);
}

void	small_parse_table_10221(t_small_parse_table_array *v)
{
	v->a[204420] = actions(9464);
	v->a[204421] = 1;
	v->a[204422] = sym_word;
	v->a[204423] = actions(9468);
	v->a[204424] = 1;
	v->a[204425] = sym_test_operator;
	v->a[204426] = state(1401);
	v->a[204427] = 1;
	v->a[204428] = aux_sym__literal_repeat1;
	v->a[204429] = state(1573);
	v->a[204430] = 1;
	v->a[204431] = sym_concatenation;
	v->a[204432] = actions(9196);
	v->a[204433] = 2;
	v->a[204434] = anon_sym_LPAREN_LPAREN;
	v->a[204435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204436] = actions(9212);
	v->a[204437] = 2;
	v->a[204438] = anon_sym_LT_LPAREN;
	v->a[204439] = anon_sym_GT_LPAREN;
	small_parse_table_10222(v);
}

void	small_parse_table_10222(t_small_parse_table_array *v)
{
	v->a[204440] = actions(9466);
	v->a[204441] = 2;
	v->a[204442] = sym_raw_string;
	v->a[204443] = sym_ansi_c_string;
	v->a[204444] = state(1109);
	v->a[204445] = 9;
	v->a[204446] = sym_arithmetic_expansion;
	v->a[204447] = sym_brace_expression;
	v->a[204448] = sym_string;
	v->a[204449] = sym_translated_string;
	v->a[204450] = sym_number;
	v->a[204451] = sym_simple_expansion;
	v->a[204452] = sym_expansion;
	v->a[204453] = sym_command_substitution;
	v->a[204454] = sym_process_substitution;
	v->a[204455] = 21;
	v->a[204456] = actions(71);
	v->a[204457] = 1;
	v->a[204458] = sym_comment;
	v->a[204459] = actions(9364);
	small_parse_table_10223(v);
}

void	small_parse_table_10223(t_small_parse_table_array *v)
{
	v->a[204460] = 1;
	v->a[204461] = anon_sym_LPAREN;
	v->a[204462] = actions(9366);
	v->a[204463] = 1;
	v->a[204464] = anon_sym_BANG;
	v->a[204465] = actions(9372);
	v->a[204466] = 1;
	v->a[204467] = anon_sym_TILDE;
	v->a[204468] = actions(9374);
	v->a[204469] = 1;
	v->a[204470] = anon_sym_DOLLAR;
	v->a[204471] = actions(9376);
	v->a[204472] = 1;
	v->a[204473] = anon_sym_DQUOTE;
	v->a[204474] = actions(9378);
	v->a[204475] = 1;
	v->a[204476] = aux_sym_number_token1;
	v->a[204477] = actions(9380);
	v->a[204478] = 1;
	v->a[204479] = aux_sym_number_token2;
	small_parse_table_10224(v);
}

void	small_parse_table_10224(t_small_parse_table_array *v)
{
	v->a[204480] = actions(9382);
	v->a[204481] = 1;
	v->a[204482] = anon_sym_DOLLAR_LBRACE;
	v->a[204483] = actions(9384);
	v->a[204484] = 1;
	v->a[204485] = anon_sym_DOLLAR_LPAREN;
	v->a[204486] = actions(9386);
	v->a[204487] = 1;
	v->a[204488] = anon_sym_BQUOTE;
	v->a[204489] = actions(9388);
	v->a[204490] = 1;
	v->a[204491] = anon_sym_DOLLAR_BQUOTE;
	v->a[204492] = actions(9392);
	v->a[204493] = 1;
	v->a[204494] = sym_variable_name;
	v->a[204495] = actions(9470);
	v->a[204496] = 1;
	v->a[204497] = aux_sym__simple_variable_name_token1;
	v->a[204498] = state(3391);
	v->a[204499] = 1;
	small_parse_table_10225(v);
}

/* EOF small_parse_table_2044.c */
