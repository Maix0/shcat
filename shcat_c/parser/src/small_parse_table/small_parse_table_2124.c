/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2124.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10620(t_small_parse_table_array *v)
{
	v->a[212400] = sym_number;
	v->a[212401] = sym_simple_expansion;
	v->a[212402] = sym_expansion;
	v->a[212403] = sym_command_substitution;
	v->a[212404] = sym_process_substitution;
	v->a[212405] = 18;
	v->a[212406] = actions(3);
	v->a[212407] = 1;
	v->a[212408] = sym_comment;
	v->a[212409] = actions(1593);
	v->a[212410] = 1;
	v->a[212411] = aux_sym_number_token1;
	v->a[212412] = actions(1595);
	v->a[212413] = 1;
	v->a[212414] = aux_sym_number_token2;
	v->a[212415] = actions(1599);
	v->a[212416] = 1;
	v->a[212417] = anon_sym_DOLLAR_LPAREN;
	v->a[212418] = actions(1611);
	v->a[212419] = 1;
	small_parse_table_10621(v);
}

void	small_parse_table_10621(t_small_parse_table_array *v)
{
	v->a[212420] = sym__brace_start;
	v->a[212421] = actions(9240);
	v->a[212422] = 1;
	v->a[212423] = anon_sym_DOLLAR_LBRACK;
	v->a[212424] = actions(9244);
	v->a[212425] = 1;
	v->a[212426] = anon_sym_DQUOTE;
	v->a[212427] = actions(9248);
	v->a[212428] = 1;
	v->a[212429] = anon_sym_DOLLAR_LBRACE;
	v->a[212430] = actions(9250);
	v->a[212431] = 1;
	v->a[212432] = anon_sym_BQUOTE;
	v->a[212433] = actions(9252);
	v->a[212434] = 1;
	v->a[212435] = anon_sym_DOLLAR_BQUOTE;
	v->a[212436] = actions(10094);
	v->a[212437] = 1;
	v->a[212438] = sym_word;
	v->a[212439] = actions(10096);
	small_parse_table_10622(v);
}

void	small_parse_table_10622(t_small_parse_table_array *v)
{
	v->a[212440] = 1;
	v->a[212441] = anon_sym_DOLLAR;
	v->a[212442] = actions(10102);
	v->a[212443] = 1;
	v->a[212444] = sym__comment_word;
	v->a[212445] = actions(9238);
	v->a[212446] = 2;
	v->a[212447] = anon_sym_LPAREN_LPAREN;
	v->a[212448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212449] = actions(9254);
	v->a[212450] = 2;
	v->a[212451] = anon_sym_LT_LPAREN;
	v->a[212452] = anon_sym_GT_LPAREN;
	v->a[212453] = actions(10098);
	v->a[212454] = 2;
	v->a[212455] = sym_test_operator;
	v->a[212456] = sym__special_character;
	v->a[212457] = actions(10100);
	v->a[212458] = 3;
	v->a[212459] = sym__bare_dollar;
	small_parse_table_10623(v);
}

void	small_parse_table_10623(t_small_parse_table_array *v)
{
	v->a[212460] = sym_raw_string;
	v->a[212461] = sym_ansi_c_string;
	v->a[212462] = state(1293);
	v->a[212463] = 9;
	v->a[212464] = sym_arithmetic_expansion;
	v->a[212465] = sym_brace_expression;
	v->a[212466] = sym_string;
	v->a[212467] = sym_translated_string;
	v->a[212468] = sym_number;
	v->a[212469] = sym_simple_expansion;
	v->a[212470] = sym_expansion;
	v->a[212471] = sym_command_substitution;
	v->a[212472] = sym_process_substitution;
	v->a[212473] = 21;
	v->a[212474] = actions(71);
	v->a[212475] = 1;
	v->a[212476] = sym_comment;
	v->a[212477] = actions(3064);
	v->a[212478] = 1;
	v->a[212479] = sym_variable_name;
	small_parse_table_10624(v);
}

void	small_parse_table_10624(t_small_parse_table_array *v)
{
	v->a[212480] = actions(9278);
	v->a[212481] = 1;
	v->a[212482] = anon_sym_LPAREN;
	v->a[212483] = actions(9280);
	v->a[212484] = 1;
	v->a[212485] = anon_sym_BANG;
	v->a[212486] = actions(9286);
	v->a[212487] = 1;
	v->a[212488] = anon_sym_TILDE;
	v->a[212489] = actions(9288);
	v->a[212490] = 1;
	v->a[212491] = anon_sym_DOLLAR;
	v->a[212492] = actions(9290);
	v->a[212493] = 1;
	v->a[212494] = anon_sym_DQUOTE;
	v->a[212495] = actions(9292);
	v->a[212496] = 1;
	v->a[212497] = aux_sym_number_token1;
	v->a[212498] = actions(9294);
	v->a[212499] = 1;
	small_parse_table_10625(v);
}

/* EOF small_parse_table_2124.c */
