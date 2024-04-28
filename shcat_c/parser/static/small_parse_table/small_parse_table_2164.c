/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2164.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10820(t_small_parse_table_array *v)
{
	v->a[216400] = actions(8120);
	v->a[216401] = 1;
	v->a[216402] = anon_sym_BQUOTE;
	v->a[216403] = actions(8122);
	v->a[216404] = 1;
	v->a[216405] = anon_sym_DOLLAR_BQUOTE;
	v->a[216406] = actions(8132);
	v->a[216407] = 1;
	v->a[216408] = sym__brace_start;
	v->a[216409] = actions(9600);
	v->a[216410] = 1;
	v->a[216411] = sym_word;
	v->a[216412] = actions(9608);
	v->a[216413] = 1;
	v->a[216414] = sym__comment_word;
	v->a[216415] = actions(8098);
	v->a[216416] = 2;
	v->a[216417] = anon_sym_LPAREN_LPAREN;
	v->a[216418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216419] = actions(8124);
	small_parse_table_10821(v);
}

void	small_parse_table_10821(t_small_parse_table_array *v)
{
	v->a[216420] = 2;
	v->a[216421] = anon_sym_LT_LPAREN;
	v->a[216422] = anon_sym_GT_LPAREN;
	v->a[216423] = actions(9604);
	v->a[216424] = 2;
	v->a[216425] = sym_test_operator;
	v->a[216426] = sym__special_character;
	v->a[216427] = actions(9606);
	v->a[216428] = 3;
	v->a[216429] = sym__bare_dollar;
	v->a[216430] = sym_raw_string;
	v->a[216431] = sym_ansi_c_string;
	v->a[216432] = state(1199);
	v->a[216433] = 9;
	v->a[216434] = sym_arithmetic_expansion;
	v->a[216435] = sym_brace_expression;
	v->a[216436] = sym_string;
	v->a[216437] = sym_translated_string;
	v->a[216438] = sym_number;
	v->a[216439] = sym_simple_expansion;
	small_parse_table_10822(v);
}

void	small_parse_table_10822(t_small_parse_table_array *v)
{
	v->a[216440] = sym_expansion;
	v->a[216441] = sym_command_substitution;
	v->a[216442] = sym_process_substitution;
	v->a[216443] = 21;
	v->a[216444] = actions(71);
	v->a[216445] = 1;
	v->a[216446] = sym_comment;
	v->a[216447] = actions(9364);
	v->a[216448] = 1;
	v->a[216449] = anon_sym_LPAREN;
	v->a[216450] = actions(9366);
	v->a[216451] = 1;
	v->a[216452] = anon_sym_BANG;
	v->a[216453] = actions(9372);
	v->a[216454] = 1;
	v->a[216455] = anon_sym_TILDE;
	v->a[216456] = actions(9374);
	v->a[216457] = 1;
	v->a[216458] = anon_sym_DOLLAR;
	v->a[216459] = actions(9376);
	small_parse_table_10823(v);
}

void	small_parse_table_10823(t_small_parse_table_array *v)
{
	v->a[216460] = 1;
	v->a[216461] = anon_sym_DQUOTE;
	v->a[216462] = actions(9378);
	v->a[216463] = 1;
	v->a[216464] = aux_sym_number_token1;
	v->a[216465] = actions(9380);
	v->a[216466] = 1;
	v->a[216467] = aux_sym_number_token2;
	v->a[216468] = actions(9382);
	v->a[216469] = 1;
	v->a[216470] = anon_sym_DOLLAR_LBRACE;
	v->a[216471] = actions(9384);
	v->a[216472] = 1;
	v->a[216473] = anon_sym_DOLLAR_LPAREN;
	v->a[216474] = actions(9386);
	v->a[216475] = 1;
	v->a[216476] = anon_sym_BQUOTE;
	v->a[216477] = actions(9388);
	v->a[216478] = 1;
	v->a[216479] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10824(v);
}

void	small_parse_table_10824(t_small_parse_table_array *v)
{
	v->a[216480] = actions(9392);
	v->a[216481] = 1;
	v->a[216482] = sym_variable_name;
	v->a[216483] = actions(10326);
	v->a[216484] = 1;
	v->a[216485] = aux_sym__simple_variable_name_token1;
	v->a[216486] = state(3391);
	v->a[216487] = 1;
	v->a[216488] = sym__arithmetic_binary_expression;
	v->a[216489] = state(3396);
	v->a[216490] = 1;
	v->a[216491] = sym__arithmetic_ternary_expression;
	v->a[216492] = state(3398);
	v->a[216493] = 1;
	v->a[216494] = sym__arithmetic_unary_expression;
	v->a[216495] = state(3400);
	v->a[216496] = 1;
	v->a[216497] = sym__arithmetic_postfix_expression;
	v->a[216498] = actions(9368);
	v->a[216499] = 2;
	small_parse_table_10825(v);
}

/* EOF small_parse_table_2164.c */
