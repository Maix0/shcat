/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1954.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9770(t_small_parse_table_array *v)
{
	v->a[195400] = sym__special_character;
	v->a[195401] = actions(8577);
	v->a[195402] = 1;
	v->a[195403] = anon_sym_DQUOTE;
	v->a[195404] = actions(8581);
	v->a[195405] = 1;
	v->a[195406] = aux_sym_number_token1;
	v->a[195407] = actions(8583);
	v->a[195408] = 1;
	v->a[195409] = aux_sym_number_token2;
	v->a[195410] = actions(8585);
	v->a[195411] = 1;
	v->a[195412] = anon_sym_DOLLAR_LBRACE;
	v->a[195413] = actions(8587);
	v->a[195414] = 1;
	v->a[195415] = anon_sym_DOLLAR_LPAREN;
	v->a[195416] = actions(8589);
	v->a[195417] = 1;
	v->a[195418] = anon_sym_BQUOTE;
	v->a[195419] = actions(8591);
	small_parse_table_9771(v);
}

void	small_parse_table_9771(t_small_parse_table_array *v)
{
	v->a[195420] = 1;
	v->a[195421] = anon_sym_DOLLAR_BQUOTE;
	v->a[195422] = actions(8595);
	v->a[195423] = 1;
	v->a[195424] = sym_test_operator;
	v->a[195425] = actions(8597);
	v->a[195426] = 1;
	v->a[195427] = sym__brace_start;
	v->a[195428] = actions(8740);
	v->a[195429] = 1;
	v->a[195430] = anon_sym_RPAREN;
	v->a[195431] = state(5365);
	v->a[195432] = 1;
	v->a[195433] = aux_sym__literal_repeat1;
	v->a[195434] = actions(8567);
	v->a[195435] = 2;
	v->a[195436] = anon_sym_LPAREN_LPAREN;
	v->a[195437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195438] = actions(8579);
	v->a[195439] = 2;
	small_parse_table_9772(v);
}

void	small_parse_table_9772(t_small_parse_table_array *v)
{
	v->a[195440] = sym_raw_string;
	v->a[195441] = sym_ansi_c_string;
	v->a[195442] = actions(8593);
	v->a[195443] = 2;
	v->a[195444] = anon_sym_LT_LPAREN;
	v->a[195445] = anon_sym_GT_LPAREN;
	v->a[195446] = state(3588);
	v->a[195447] = 2;
	v->a[195448] = sym_concatenation;
	v->a[195449] = aux_sym_for_statement_repeat1;
	v->a[195450] = state(5045);
	v->a[195451] = 9;
	v->a[195452] = sym_arithmetic_expansion;
	v->a[195453] = sym_brace_expression;
	v->a[195454] = sym_string;
	v->a[195455] = sym_translated_string;
	v->a[195456] = sym_number;
	v->a[195457] = sym_simple_expansion;
	v->a[195458] = sym_expansion;
	v->a[195459] = sym_command_substitution;
	small_parse_table_9773(v);
}

void	small_parse_table_9773(t_small_parse_table_array *v)
{
	v->a[195460] = sym_process_substitution;
	v->a[195461] = 21;
	v->a[195462] = actions(71);
	v->a[195463] = 1;
	v->a[195464] = sym_comment;
	v->a[195465] = actions(8565);
	v->a[195466] = 1;
	v->a[195467] = sym_word;
	v->a[195468] = actions(8571);
	v->a[195469] = 1;
	v->a[195470] = anon_sym_DOLLAR_LBRACK;
	v->a[195471] = actions(8573);
	v->a[195472] = 1;
	v->a[195473] = anon_sym_DOLLAR;
	v->a[195474] = actions(8575);
	v->a[195475] = 1;
	v->a[195476] = sym__special_character;
	v->a[195477] = actions(8577);
	v->a[195478] = 1;
	v->a[195479] = anon_sym_DQUOTE;
	small_parse_table_9774(v);
}

void	small_parse_table_9774(t_small_parse_table_array *v)
{
	v->a[195480] = actions(8581);
	v->a[195481] = 1;
	v->a[195482] = aux_sym_number_token1;
	v->a[195483] = actions(8583);
	v->a[195484] = 1;
	v->a[195485] = aux_sym_number_token2;
	v->a[195486] = actions(8585);
	v->a[195487] = 1;
	v->a[195488] = anon_sym_DOLLAR_LBRACE;
	v->a[195489] = actions(8587);
	v->a[195490] = 1;
	v->a[195491] = anon_sym_DOLLAR_LPAREN;
	v->a[195492] = actions(8589);
	v->a[195493] = 1;
	v->a[195494] = anon_sym_BQUOTE;
	v->a[195495] = actions(8591);
	v->a[195496] = 1;
	v->a[195497] = anon_sym_DOLLAR_BQUOTE;
	v->a[195498] = actions(8595);
	v->a[195499] = 1;
	small_parse_table_9775(v);
}

/* EOF small_parse_table_1954.c */
