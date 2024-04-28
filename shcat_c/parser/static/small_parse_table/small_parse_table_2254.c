/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2254.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11270(t_small_parse_table_array *v)
{
	v->a[225400] = actions(334);
	v->a[225401] = 1;
	v->a[225402] = anon_sym_DOLLAR_BQUOTE;
	v->a[225403] = actions(344);
	v->a[225404] = 1;
	v->a[225405] = sym__brace_start;
	v->a[225406] = actions(9400);
	v->a[225407] = 1;
	v->a[225408] = sym_word;
	v->a[225409] = actions(9406);
	v->a[225410] = 1;
	v->a[225411] = sym__comment_word;
	v->a[225412] = actions(10714);
	v->a[225413] = 1;
	v->a[225414] = anon_sym_DOLLAR;
	v->a[225415] = actions(312);
	v->a[225416] = 2;
	v->a[225417] = anon_sym_LPAREN_LPAREN;
	v->a[225418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225419] = actions(336);
	small_parse_table_11271(v);
}

void	small_parse_table_11271(t_small_parse_table_array *v)
{
	v->a[225420] = 2;
	v->a[225421] = anon_sym_LT_LPAREN;
	v->a[225422] = anon_sym_GT_LPAREN;
	v->a[225423] = actions(9402);
	v->a[225424] = 2;
	v->a[225425] = sym_test_operator;
	v->a[225426] = sym__special_character;
	v->a[225427] = actions(9404);
	v->a[225428] = 3;
	v->a[225429] = sym__bare_dollar;
	v->a[225430] = sym_raw_string;
	v->a[225431] = sym_ansi_c_string;
	v->a[225432] = state(1037);
	v->a[225433] = 9;
	v->a[225434] = sym_arithmetic_expansion;
	v->a[225435] = sym_brace_expression;
	v->a[225436] = sym_string;
	v->a[225437] = sym_translated_string;
	v->a[225438] = sym_number;
	v->a[225439] = sym_simple_expansion;
	small_parse_table_11272(v);
}

void	small_parse_table_11272(t_small_parse_table_array *v)
{
	v->a[225440] = sym_expansion;
	v->a[225441] = sym_command_substitution;
	v->a[225442] = sym_process_substitution;
	v->a[225443] = 21;
	v->a[225444] = actions(71);
	v->a[225445] = 1;
	v->a[225446] = sym_comment;
	v->a[225447] = actions(9364);
	v->a[225448] = 1;
	v->a[225449] = anon_sym_LPAREN;
	v->a[225450] = actions(9366);
	v->a[225451] = 1;
	v->a[225452] = anon_sym_BANG;
	v->a[225453] = actions(9372);
	v->a[225454] = 1;
	v->a[225455] = anon_sym_TILDE;
	v->a[225456] = actions(9374);
	v->a[225457] = 1;
	v->a[225458] = anon_sym_DOLLAR;
	v->a[225459] = actions(9376);
	small_parse_table_11273(v);
}

void	small_parse_table_11273(t_small_parse_table_array *v)
{
	v->a[225460] = 1;
	v->a[225461] = anon_sym_DQUOTE;
	v->a[225462] = actions(9378);
	v->a[225463] = 1;
	v->a[225464] = aux_sym_number_token1;
	v->a[225465] = actions(9380);
	v->a[225466] = 1;
	v->a[225467] = aux_sym_number_token2;
	v->a[225468] = actions(9382);
	v->a[225469] = 1;
	v->a[225470] = anon_sym_DOLLAR_LBRACE;
	v->a[225471] = actions(9384);
	v->a[225472] = 1;
	v->a[225473] = anon_sym_DOLLAR_LPAREN;
	v->a[225474] = actions(9386);
	v->a[225475] = 1;
	v->a[225476] = anon_sym_BQUOTE;
	v->a[225477] = actions(9388);
	v->a[225478] = 1;
	v->a[225479] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11274(v);
}

void	small_parse_table_11274(t_small_parse_table_array *v)
{
	v->a[225480] = actions(9392);
	v->a[225481] = 1;
	v->a[225482] = sym_variable_name;
	v->a[225483] = actions(10716);
	v->a[225484] = 1;
	v->a[225485] = aux_sym__simple_variable_name_token1;
	v->a[225486] = state(3391);
	v->a[225487] = 1;
	v->a[225488] = sym__arithmetic_binary_expression;
	v->a[225489] = state(3396);
	v->a[225490] = 1;
	v->a[225491] = sym__arithmetic_ternary_expression;
	v->a[225492] = state(3398);
	v->a[225493] = 1;
	v->a[225494] = sym__arithmetic_unary_expression;
	v->a[225495] = state(3400);
	v->a[225496] = 1;
	v->a[225497] = sym__arithmetic_postfix_expression;
	v->a[225498] = actions(9368);
	v->a[225499] = 2;
	small_parse_table_11275(v);
}

/* EOF small_parse_table_2254.c */
