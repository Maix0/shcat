/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1924.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9620(t_small_parse_table_array *v)
{
	v->a[192400] = 1;
	v->a[192401] = anon_sym_DOLLAR;
	v->a[192402] = actions(8575);
	v->a[192403] = 1;
	v->a[192404] = sym__special_character;
	v->a[192405] = actions(8577);
	v->a[192406] = 1;
	v->a[192407] = anon_sym_DQUOTE;
	v->a[192408] = actions(8581);
	v->a[192409] = 1;
	v->a[192410] = aux_sym_number_token1;
	v->a[192411] = actions(8583);
	v->a[192412] = 1;
	v->a[192413] = aux_sym_number_token2;
	v->a[192414] = actions(8585);
	v->a[192415] = 1;
	v->a[192416] = anon_sym_DOLLAR_LBRACE;
	v->a[192417] = actions(8587);
	v->a[192418] = 1;
	v->a[192419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9621(v);
}

void	small_parse_table_9621(t_small_parse_table_array *v)
{
	v->a[192420] = actions(8589);
	v->a[192421] = 1;
	v->a[192422] = anon_sym_BQUOTE;
	v->a[192423] = actions(8591);
	v->a[192424] = 1;
	v->a[192425] = anon_sym_DOLLAR_BQUOTE;
	v->a[192426] = actions(8595);
	v->a[192427] = 1;
	v->a[192428] = sym_test_operator;
	v->a[192429] = actions(8597);
	v->a[192430] = 1;
	v->a[192431] = sym__brace_start;
	v->a[192432] = actions(8601);
	v->a[192433] = 1;
	v->a[192434] = anon_sym_RPAREN;
	v->a[192435] = state(5365);
	v->a[192436] = 1;
	v->a[192437] = aux_sym__literal_repeat1;
	v->a[192438] = actions(8567);
	v->a[192439] = 2;
	small_parse_table_9622(v);
}

void	small_parse_table_9622(t_small_parse_table_array *v)
{
	v->a[192440] = anon_sym_LPAREN_LPAREN;
	v->a[192441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192442] = actions(8579);
	v->a[192443] = 2;
	v->a[192444] = sym_raw_string;
	v->a[192445] = sym_ansi_c_string;
	v->a[192446] = actions(8593);
	v->a[192447] = 2;
	v->a[192448] = anon_sym_LT_LPAREN;
	v->a[192449] = anon_sym_GT_LPAREN;
	v->a[192450] = state(3604);
	v->a[192451] = 2;
	v->a[192452] = sym_concatenation;
	v->a[192453] = aux_sym_for_statement_repeat1;
	v->a[192454] = state(5045);
	v->a[192455] = 9;
	v->a[192456] = sym_arithmetic_expansion;
	v->a[192457] = sym_brace_expression;
	v->a[192458] = sym_string;
	v->a[192459] = sym_translated_string;
	small_parse_table_9623(v);
}

void	small_parse_table_9623(t_small_parse_table_array *v)
{
	v->a[192460] = sym_number;
	v->a[192461] = sym_simple_expansion;
	v->a[192462] = sym_expansion;
	v->a[192463] = sym_command_substitution;
	v->a[192464] = sym_process_substitution;
	v->a[192465] = 21;
	v->a[192466] = actions(71);
	v->a[192467] = 1;
	v->a[192468] = sym_comment;
	v->a[192469] = actions(8565);
	v->a[192470] = 1;
	v->a[192471] = sym_word;
	v->a[192472] = actions(8571);
	v->a[192473] = 1;
	v->a[192474] = anon_sym_DOLLAR_LBRACK;
	v->a[192475] = actions(8573);
	v->a[192476] = 1;
	v->a[192477] = anon_sym_DOLLAR;
	v->a[192478] = actions(8575);
	v->a[192479] = 1;
	small_parse_table_9624(v);
}

void	small_parse_table_9624(t_small_parse_table_array *v)
{
	v->a[192480] = sym__special_character;
	v->a[192481] = actions(8577);
	v->a[192482] = 1;
	v->a[192483] = anon_sym_DQUOTE;
	v->a[192484] = actions(8581);
	v->a[192485] = 1;
	v->a[192486] = aux_sym_number_token1;
	v->a[192487] = actions(8583);
	v->a[192488] = 1;
	v->a[192489] = aux_sym_number_token2;
	v->a[192490] = actions(8585);
	v->a[192491] = 1;
	v->a[192492] = anon_sym_DOLLAR_LBRACE;
	v->a[192493] = actions(8587);
	v->a[192494] = 1;
	v->a[192495] = anon_sym_DOLLAR_LPAREN;
	v->a[192496] = actions(8589);
	v->a[192497] = 1;
	v->a[192498] = anon_sym_BQUOTE;
	v->a[192499] = actions(8591);
	small_parse_table_9625(v);
}

/* EOF small_parse_table_1924.c */
