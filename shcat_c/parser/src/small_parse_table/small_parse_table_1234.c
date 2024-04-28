/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1234.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6170(t_small_parse_table_array *v)
{
	v->a[123400] = anon_sym_GT_AMP_DASH;
	v->a[123401] = anon_sym_LT_LT_DASH;
	v->a[123402] = anon_sym_LT_LT_LT;
	v->a[123403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123404] = anon_sym_DOLLAR_LBRACK;
	v->a[123405] = anon_sym_DQUOTE;
	v->a[123406] = sym_raw_string;
	v->a[123407] = sym_ansi_c_string;
	v->a[123408] = anon_sym_DOLLAR_LBRACE;
	v->a[123409] = anon_sym_DOLLAR_BQUOTE;
	v->a[123410] = anon_sym_LT_LPAREN;
	v->a[123411] = anon_sym_GT_LPAREN;
	v->a[123412] = 5;
	v->a[123413] = actions(71);
	v->a[123414] = 1;
	v->a[123415] = sym_comment;
	v->a[123416] = state(2350);
	v->a[123417] = 1;
	v->a[123418] = aux_sym_concatenation_repeat1;
	v->a[123419] = actions(6514);
	small_parse_table_6171(v);
}

void	small_parse_table_6171(t_small_parse_table_array *v)
{
	v->a[123420] = 2;
	v->a[123421] = sym__concat;
	v->a[123422] = aux_sym_concatenation_token1;
	v->a[123423] = actions(2094);
	v->a[123424] = 13;
	v->a[123425] = anon_sym_PIPE;
	v->a[123426] = anon_sym_LT;
	v->a[123427] = anon_sym_GT;
	v->a[123428] = anon_sym_LT_LT;
	v->a[123429] = anon_sym_AMP_GT;
	v->a[123430] = anon_sym_LT_AMP;
	v->a[123431] = anon_sym_GT_AMP;
	v->a[123432] = anon_sym_DOLLAR;
	v->a[123433] = aux_sym_number_token1;
	v->a[123434] = aux_sym_number_token2;
	v->a[123435] = anon_sym_DOLLAR_LPAREN;
	v->a[123436] = anon_sym_BQUOTE;
	v->a[123437] = sym_word;
	v->a[123438] = actions(2096);
	v->a[123439] = 25;
	small_parse_table_6172(v);
}

void	small_parse_table_6172(t_small_parse_table_array *v)
{
	v->a[123440] = sym_file_descriptor;
	v->a[123441] = sym_variable_name;
	v->a[123442] = sym_test_operator;
	v->a[123443] = sym__brace_start;
	v->a[123444] = anon_sym_LPAREN_LPAREN;
	v->a[123445] = anon_sym_PIPE_PIPE;
	v->a[123446] = anon_sym_AMP_AMP;
	v->a[123447] = anon_sym_GT_GT;
	v->a[123448] = anon_sym_PIPE_AMP;
	v->a[123449] = anon_sym_AMP_GT_GT;
	v->a[123450] = anon_sym_GT_PIPE;
	v->a[123451] = anon_sym_LT_AMP_DASH;
	v->a[123452] = anon_sym_GT_AMP_DASH;
	v->a[123453] = anon_sym_LT_LT_DASH;
	v->a[123454] = anon_sym_LT_LT_LT;
	v->a[123455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123456] = anon_sym_DOLLAR_LBRACK;
	v->a[123457] = sym__special_character;
	v->a[123458] = anon_sym_DQUOTE;
	v->a[123459] = sym_raw_string;
	small_parse_table_6173(v);
}

void	small_parse_table_6173(t_small_parse_table_array *v)
{
	v->a[123460] = sym_ansi_c_string;
	v->a[123461] = anon_sym_DOLLAR_LBRACE;
	v->a[123462] = anon_sym_DOLLAR_BQUOTE;
	v->a[123463] = anon_sym_LT_LPAREN;
	v->a[123464] = anon_sym_GT_LPAREN;
	v->a[123465] = 26;
	v->a[123466] = actions(3);
	v->a[123467] = 1;
	v->a[123468] = sym_comment;
	v->a[123469] = actions(6480);
	v->a[123470] = 1;
	v->a[123471] = anon_sym_LPAREN;
	v->a[123472] = actions(6486);
	v->a[123473] = 1;
	v->a[123474] = anon_sym_DOLLAR_LBRACK;
	v->a[123475] = actions(6488);
	v->a[123476] = 1;
	v->a[123477] = anon_sym_DOLLAR;
	v->a[123478] = actions(6490);
	v->a[123479] = 1;
	small_parse_table_6174(v);
}

void	small_parse_table_6174(t_small_parse_table_array *v)
{
	v->a[123480] = sym__special_character;
	v->a[123481] = actions(6492);
	v->a[123482] = 1;
	v->a[123483] = anon_sym_DQUOTE;
	v->a[123484] = actions(6494);
	v->a[123485] = 1;
	v->a[123486] = aux_sym_number_token1;
	v->a[123487] = actions(6496);
	v->a[123488] = 1;
	v->a[123489] = aux_sym_number_token2;
	v->a[123490] = actions(6498);
	v->a[123491] = 1;
	v->a[123492] = anon_sym_DOLLAR_LBRACE;
	v->a[123493] = actions(6500);
	v->a[123494] = 1;
	v->a[123495] = anon_sym_DOLLAR_LPAREN;
	v->a[123496] = actions(6502);
	v->a[123497] = 1;
	v->a[123498] = anon_sym_BQUOTE;
	v->a[123499] = actions(6504);
	small_parse_table_6175(v);
}

/* EOF small_parse_table_1234.c */
