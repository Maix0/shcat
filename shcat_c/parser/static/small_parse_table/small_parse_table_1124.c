/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1124.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5620(t_small_parse_table_array *v)
{
	v->a[112400] = anon_sym_DASH_DASH2;
	v->a[112401] = actions(1217);
	v->a[112402] = 2;
	v->a[112403] = anon_sym_DASH2;
	v->a[112404] = anon_sym_PLUS2;
	v->a[112405] = actions(1223);
	v->a[112406] = 2;
	v->a[112407] = sym_raw_string;
	v->a[112408] = sym_ansi_c_string;
	v->a[112409] = state(2594);
	v->a[112410] = 6;
	v->a[112411] = sym_binary_expression;
	v->a[112412] = sym_ternary_expression;
	v->a[112413] = sym_unary_expression;
	v->a[112414] = sym_postfix_expression;
	v->a[112415] = sym_parenthesized_expression;
	v->a[112416] = sym_concatenation;
	v->a[112417] = state(2588);
	v->a[112418] = 9;
	v->a[112419] = sym_arithmetic_expansion;
	small_parse_table_5621(v);
}

void	small_parse_table_5621(t_small_parse_table_array *v)
{
	v->a[112420] = sym_brace_expression;
	v->a[112421] = sym_string;
	v->a[112422] = sym_translated_string;
	v->a[112423] = sym_number;
	v->a[112424] = sym_simple_expansion;
	v->a[112425] = sym_expansion;
	v->a[112426] = sym_command_substitution;
	v->a[112427] = sym_process_substitution;
	v->a[112428] = 8;
	v->a[112429] = actions(3);
	v->a[112430] = 1;
	v->a[112431] = sym_comment;
	v->a[112432] = actions(5826);
	v->a[112433] = 1;
	v->a[112434] = aux_sym_heredoc_redirect_token1;
	v->a[112435] = actions(5828);
	v->a[112436] = 1;
	v->a[112437] = sym_file_descriptor;
	v->a[112438] = actions(6341);
	v->a[112439] = 1;
	small_parse_table_5622(v);
}

void	small_parse_table_5622(t_small_parse_table_array *v)
{
	v->a[112440] = anon_sym_RPAREN;
	v->a[112441] = actions(5831);
	v->a[112442] = 3;
	v->a[112443] = sym_variable_name;
	v->a[112444] = sym_test_operator;
	v->a[112445] = sym__brace_start;
	v->a[112446] = actions(5821);
	v->a[112447] = 9;
	v->a[112448] = anon_sym_SEMI;
	v->a[112449] = anon_sym_PIPE_PIPE;
	v->a[112450] = anon_sym_AMP_AMP;
	v->a[112451] = anon_sym_PIPE;
	v->a[112452] = anon_sym_AMP;
	v->a[112453] = anon_sym_LT_LT;
	v->a[112454] = anon_sym_SEMI_SEMI;
	v->a[112455] = anon_sym_PIPE_AMP;
	v->a[112456] = anon_sym_LT_LT_DASH;
	v->a[112457] = actions(5823);
	v->a[112458] = 11;
	v->a[112459] = anon_sym_LT;
	small_parse_table_5623(v);
}

void	small_parse_table_5623(t_small_parse_table_array *v)
{
	v->a[112460] = anon_sym_GT;
	v->a[112461] = anon_sym_GT_GT;
	v->a[112462] = anon_sym_AMP_GT;
	v->a[112463] = anon_sym_AMP_GT_GT;
	v->a[112464] = anon_sym_LT_AMP;
	v->a[112465] = anon_sym_GT_AMP;
	v->a[112466] = anon_sym_GT_PIPE;
	v->a[112467] = anon_sym_LT_AMP_DASH;
	v->a[112468] = anon_sym_GT_AMP_DASH;
	v->a[112469] = anon_sym_LT_LT_LT;
	v->a[112470] = actions(5819);
	v->a[112471] = 17;
	v->a[112472] = anon_sym_LPAREN_LPAREN;
	v->a[112473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112474] = anon_sym_DOLLAR_LBRACK;
	v->a[112475] = anon_sym_DOLLAR;
	v->a[112476] = sym__special_character;
	v->a[112477] = anon_sym_DQUOTE;
	v->a[112478] = sym_raw_string;
	v->a[112479] = sym_ansi_c_string;
	small_parse_table_5624(v);
}

void	small_parse_table_5624(t_small_parse_table_array *v)
{
	v->a[112480] = aux_sym_number_token1;
	v->a[112481] = aux_sym_number_token2;
	v->a[112482] = anon_sym_DOLLAR_LBRACE;
	v->a[112483] = anon_sym_DOLLAR_LPAREN;
	v->a[112484] = anon_sym_BQUOTE;
	v->a[112485] = anon_sym_DOLLAR_BQUOTE;
	v->a[112486] = anon_sym_LT_LPAREN;
	v->a[112487] = anon_sym_GT_LPAREN;
	v->a[112488] = sym_word;
	v->a[112489] = 8;
	v->a[112490] = actions(3);
	v->a[112491] = 1;
	v->a[112492] = sym_comment;
	v->a[112493] = actions(5826);
	v->a[112494] = 1;
	v->a[112495] = aux_sym_heredoc_redirect_token1;
	v->a[112496] = actions(5828);
	v->a[112497] = 1;
	v->a[112498] = sym_file_descriptor;
	v->a[112499] = actions(6344);
	small_parse_table_5625(v);
}

/* EOF small_parse_table_1124.c */
