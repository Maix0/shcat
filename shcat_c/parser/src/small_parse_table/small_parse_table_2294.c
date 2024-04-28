/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2294.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11470(t_small_parse_table_array *v)
{
	v->a[229400] = sym_number;
	v->a[229401] = sym_simple_expansion;
	v->a[229402] = sym_expansion;
	v->a[229403] = sym_command_substitution;
	v->a[229404] = sym_process_substitution;
	v->a[229405] = 21;
	v->a[229406] = actions(71);
	v->a[229407] = 1;
	v->a[229408] = sym_comment;
	v->a[229409] = actions(3064);
	v->a[229410] = 1;
	v->a[229411] = sym_variable_name;
	v->a[229412] = actions(3467);
	v->a[229413] = 1;
	v->a[229414] = aux_sym__simple_variable_name_token1;
	v->a[229415] = actions(9278);
	v->a[229416] = 1;
	v->a[229417] = anon_sym_LPAREN;
	v->a[229418] = actions(9280);
	v->a[229419] = 1;
	small_parse_table_11471(v);
}

void	small_parse_table_11471(t_small_parse_table_array *v)
{
	v->a[229420] = anon_sym_BANG;
	v->a[229421] = actions(9286);
	v->a[229422] = 1;
	v->a[229423] = anon_sym_TILDE;
	v->a[229424] = actions(9288);
	v->a[229425] = 1;
	v->a[229426] = anon_sym_DOLLAR;
	v->a[229427] = actions(9290);
	v->a[229428] = 1;
	v->a[229429] = anon_sym_DQUOTE;
	v->a[229430] = actions(9292);
	v->a[229431] = 1;
	v->a[229432] = aux_sym_number_token1;
	v->a[229433] = actions(9294);
	v->a[229434] = 1;
	v->a[229435] = aux_sym_number_token2;
	v->a[229436] = actions(9296);
	v->a[229437] = 1;
	v->a[229438] = anon_sym_DOLLAR_LBRACE;
	v->a[229439] = actions(9298);
	small_parse_table_11472(v);
}

void	small_parse_table_11472(t_small_parse_table_array *v)
{
	v->a[229440] = 1;
	v->a[229441] = anon_sym_DOLLAR_LPAREN;
	v->a[229442] = actions(9300);
	v->a[229443] = 1;
	v->a[229444] = anon_sym_BQUOTE;
	v->a[229445] = actions(9302);
	v->a[229446] = 1;
	v->a[229447] = anon_sym_DOLLAR_BQUOTE;
	v->a[229448] = state(2801);
	v->a[229449] = 1;
	v->a[229450] = sym__arithmetic_binary_expression;
	v->a[229451] = state(2803);
	v->a[229452] = 1;
	v->a[229453] = sym__arithmetic_ternary_expression;
	v->a[229454] = state(2809);
	v->a[229455] = 1;
	v->a[229456] = sym__arithmetic_unary_expression;
	v->a[229457] = state(2825);
	v->a[229458] = 1;
	v->a[229459] = sym__arithmetic_postfix_expression;
	small_parse_table_11473(v);
}

void	small_parse_table_11473(t_small_parse_table_array *v)
{
	v->a[229460] = actions(9282);
	v->a[229461] = 2;
	v->a[229462] = anon_sym_PLUS_PLUS2;
	v->a[229463] = anon_sym_DASH_DASH2;
	v->a[229464] = actions(9284);
	v->a[229465] = 2;
	v->a[229466] = anon_sym_DASH2;
	v->a[229467] = anon_sym_PLUS2;
	v->a[229468] = state(2777);
	v->a[229469] = 9;
	v->a[229470] = sym_subscript;
	v->a[229471] = sym__arithmetic_expression;
	v->a[229472] = sym__arithmetic_literal;
	v->a[229473] = sym__arithmetic_parenthesized_expression;
	v->a[229474] = sym_string;
	v->a[229475] = sym_number;
	v->a[229476] = sym_simple_expansion;
	v->a[229477] = sym_expansion;
	v->a[229478] = sym_command_substitution;
	v->a[229479] = 18;
	small_parse_table_11474(v);
}

void	small_parse_table_11474(t_small_parse_table_array *v)
{
	v->a[229480] = actions(3);
	v->a[229481] = 1;
	v->a[229482] = sym_comment;
	v->a[229483] = actions(5315);
	v->a[229484] = 1;
	v->a[229485] = anon_sym_DOLLAR_LBRACK;
	v->a[229486] = actions(5321);
	v->a[229487] = 1;
	v->a[229488] = anon_sym_DQUOTE;
	v->a[229489] = actions(5325);
	v->a[229490] = 1;
	v->a[229491] = aux_sym_number_token1;
	v->a[229492] = actions(5327);
	v->a[229493] = 1;
	v->a[229494] = aux_sym_number_token2;
	v->a[229495] = actions(5329);
	v->a[229496] = 1;
	v->a[229497] = anon_sym_DOLLAR_LBRACE;
	v->a[229498] = actions(5331);
	v->a[229499] = 1;
	small_parse_table_11475(v);
}

/* EOF small_parse_table_2294.c */
