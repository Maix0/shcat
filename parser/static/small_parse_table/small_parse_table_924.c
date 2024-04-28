/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_924.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4620(t_small_parse_table_array *v)
{
	v->a[92400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92401] = anon_sym_DOLLAR_LBRACK;
	v->a[92402] = anon_sym_DOLLAR;
	v->a[92403] = sym__special_character;
	v->a[92404] = anon_sym_DQUOTE;
	v->a[92405] = sym_raw_string;
	v->a[92406] = sym_ansi_c_string;
	v->a[92407] = aux_sym_number_token1;
	v->a[92408] = aux_sym_number_token2;
	v->a[92409] = anon_sym_DOLLAR_LBRACE;
	v->a[92410] = anon_sym_DOLLAR_LPAREN;
	v->a[92411] = anon_sym_BQUOTE;
	v->a[92412] = anon_sym_DOLLAR_BQUOTE;
	v->a[92413] = anon_sym_LT_LPAREN;
	v->a[92414] = anon_sym_GT_LPAREN;
	v->a[92415] = aux_sym__simple_variable_name_token1;
	v->a[92416] = sym_word;
	v->a[92417] = 5;
	v->a[92418] = actions(71);
	v->a[92419] = 1;
	small_parse_table_4621(v);
}

void	small_parse_table_4621(t_small_parse_table_array *v)
{
	v->a[92420] = sym_comment;
	v->a[92421] = state(1904);
	v->a[92422] = 1;
	v->a[92423] = aux_sym_concatenation_repeat1;
	v->a[92424] = actions(6097);
	v->a[92425] = 2;
	v->a[92426] = sym__concat;
	v->a[92427] = aux_sym_concatenation_token1;
	v->a[92428] = actions(1251);
	v->a[92429] = 16;
	v->a[92430] = anon_sym_PIPE;
	v->a[92431] = anon_sym_EQ_EQ;
	v->a[92432] = anon_sym_LT;
	v->a[92433] = anon_sym_GT;
	v->a[92434] = anon_sym_LT_LT;
	v->a[92435] = anon_sym_LPAREN;
	v->a[92436] = anon_sym_EQ_TILDE;
	v->a[92437] = anon_sym_AMP_GT;
	v->a[92438] = anon_sym_LT_AMP;
	v->a[92439] = anon_sym_GT_AMP;
	small_parse_table_4622(v);
}

void	small_parse_table_4622(t_small_parse_table_array *v)
{
	v->a[92440] = anon_sym_DOLLAR;
	v->a[92441] = aux_sym_number_token1;
	v->a[92442] = aux_sym_number_token2;
	v->a[92443] = anon_sym_DOLLAR_LPAREN;
	v->a[92444] = anon_sym_BQUOTE;
	v->a[92445] = sym_word;
	v->a[92446] = actions(1253);
	v->a[92447] = 25;
	v->a[92448] = sym_file_descriptor;
	v->a[92449] = sym_test_operator;
	v->a[92450] = sym__bare_dollar;
	v->a[92451] = sym__brace_start;
	v->a[92452] = anon_sym_LPAREN_LPAREN;
	v->a[92453] = anon_sym_PIPE_PIPE;
	v->a[92454] = anon_sym_AMP_AMP;
	v->a[92455] = anon_sym_GT_GT;
	v->a[92456] = anon_sym_PIPE_AMP;
	v->a[92457] = anon_sym_AMP_GT_GT;
	v->a[92458] = anon_sym_GT_PIPE;
	v->a[92459] = anon_sym_LT_AMP_DASH;
	small_parse_table_4623(v);
}

void	small_parse_table_4623(t_small_parse_table_array *v)
{
	v->a[92460] = anon_sym_GT_AMP_DASH;
	v->a[92461] = anon_sym_LT_LT_DASH;
	v->a[92462] = anon_sym_LT_LT_LT;
	v->a[92463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92464] = anon_sym_DOLLAR_LBRACK;
	v->a[92465] = sym__special_character;
	v->a[92466] = anon_sym_DQUOTE;
	v->a[92467] = sym_raw_string;
	v->a[92468] = sym_ansi_c_string;
	v->a[92469] = anon_sym_DOLLAR_LBRACE;
	v->a[92470] = anon_sym_DOLLAR_BQUOTE;
	v->a[92471] = anon_sym_LT_LPAREN;
	v->a[92472] = anon_sym_GT_LPAREN;
	v->a[92473] = 27;
	v->a[92474] = actions(71);
	v->a[92475] = 1;
	v->a[92476] = sym_comment;
	v->a[92477] = actions(1131);
	v->a[92478] = 1;
	v->a[92479] = anon_sym_LPAREN;
	small_parse_table_4624(v);
}

void	small_parse_table_4624(t_small_parse_table_array *v)
{
	v->a[92480] = actions(1141);
	v->a[92481] = 1;
	v->a[92482] = anon_sym_DOLLAR_LBRACK;
	v->a[92483] = actions(1145);
	v->a[92484] = 1;
	v->a[92485] = anon_sym_DOLLAR;
	v->a[92486] = actions(1149);
	v->a[92487] = 1;
	v->a[92488] = anon_sym_DQUOTE;
	v->a[92489] = actions(1153);
	v->a[92490] = 1;
	v->a[92491] = aux_sym_number_token1;
	v->a[92492] = actions(1155);
	v->a[92493] = 1;
	v->a[92494] = aux_sym_number_token2;
	v->a[92495] = actions(1157);
	v->a[92496] = 1;
	v->a[92497] = anon_sym_DOLLAR_LBRACE;
	v->a[92498] = actions(1159);
	v->a[92499] = 1;
	small_parse_table_4625(v);
}

/* EOF small_parse_table_924.c */
