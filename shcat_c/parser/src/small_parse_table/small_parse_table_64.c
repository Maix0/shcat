/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_64.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_320(t_small_parse_table_array *v)
{
	v->a[6400] = state(1290);
	v->a[6401] = 9;
	v->a[6402] = sym_arithmetic_expansion;
	v->a[6403] = sym_brace_expression;
	v->a[6404] = sym_string;
	v->a[6405] = sym_translated_string;
	v->a[6406] = sym_number;
	v->a[6407] = sym_simple_expansion;
	v->a[6408] = sym_expansion;
	v->a[6409] = sym_command_substitution;
	v->a[6410] = sym_process_substitution;
	v->a[6411] = actions(2094);
	v->a[6412] = 23;
	v->a[6413] = anon_sym_SEMI;
	v->a[6414] = anon_sym_PIPE_PIPE;
	v->a[6415] = anon_sym_AMP_AMP;
	v->a[6416] = anon_sym_PIPE;
	v->a[6417] = anon_sym_AMP;
	v->a[6418] = anon_sym_LT;
	v->a[6419] = anon_sym_GT;
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = anon_sym_LT_LT;
	v->a[6421] = anon_sym_GT_GT;
	v->a[6422] = anon_sym_esac;
	v->a[6423] = anon_sym_SEMI_SEMI;
	v->a[6424] = anon_sym_SEMI_AMP;
	v->a[6425] = anon_sym_SEMI_SEMI_AMP;
	v->a[6426] = anon_sym_PIPE_AMP;
	v->a[6427] = anon_sym_AMP_GT;
	v->a[6428] = anon_sym_AMP_GT_GT;
	v->a[6429] = anon_sym_LT_AMP;
	v->a[6430] = anon_sym_GT_AMP;
	v->a[6431] = anon_sym_GT_PIPE;
	v->a[6432] = anon_sym_LT_AMP_DASH;
	v->a[6433] = anon_sym_GT_AMP_DASH;
	v->a[6434] = anon_sym_LT_LT_DASH;
	v->a[6435] = anon_sym_LT_LT_LT;
	v->a[6436] = 23;
	v->a[6437] = actions(3);
	v->a[6438] = 1;
	v->a[6439] = sym_comment;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = actions(2261);
	v->a[6441] = 1;
	v->a[6442] = anon_sym_DOLLAR_LBRACK;
	v->a[6443] = actions(2263);
	v->a[6444] = 1;
	v->a[6445] = anon_sym_DOLLAR;
	v->a[6446] = actions(2267);
	v->a[6447] = 1;
	v->a[6448] = anon_sym_DQUOTE;
	v->a[6449] = actions(2269);
	v->a[6450] = 1;
	v->a[6451] = aux_sym_number_token1;
	v->a[6452] = actions(2271);
	v->a[6453] = 1;
	v->a[6454] = aux_sym_number_token2;
	v->a[6455] = actions(2273);
	v->a[6456] = 1;
	v->a[6457] = anon_sym_DOLLAR_LBRACE;
	v->a[6458] = actions(2275);
	v->a[6459] = 1;
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = anon_sym_DOLLAR_LPAREN;
	v->a[6461] = actions(2279);
	v->a[6462] = 1;
	v->a[6463] = anon_sym_DOLLAR_BQUOTE;
	v->a[6464] = actions(2289);
	v->a[6465] = 1;
	v->a[6466] = sym__brace_start;
	v->a[6467] = actions(2361);
	v->a[6468] = 1;
	v->a[6469] = sym__special_character;
	v->a[6470] = actions(2363);
	v->a[6471] = 1;
	v->a[6472] = aux_sym__simple_variable_name_token1;
	v->a[6473] = actions(2365);
	v->a[6474] = 1;
	v->a[6475] = sym_variable_name;
	v->a[6476] = actions(2367);
	v->a[6477] = 1;
	v->a[6478] = sym_test_operator;
	v->a[6479] = state(1743);
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = 1;
	v->a[6481] = aux_sym__literal_repeat1;
	v->a[6482] = state(6773);
	v->a[6483] = 1;
	v->a[6484] = sym_subscript;
	v->a[6485] = actions(1757);
	v->a[6486] = 2;
	v->a[6487] = sym_file_descriptor;
	v->a[6488] = aux_sym_heredoc_redirect_token1;
	v->a[6489] = actions(2259);
	v->a[6490] = 2;
	v->a[6491] = anon_sym_LPAREN_LPAREN;
	v->a[6492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6493] = actions(2281);
	v->a[6494] = 2;
	v->a[6495] = anon_sym_LT_LPAREN;
	v->a[6496] = anon_sym_GT_LPAREN;
	v->a[6497] = actions(2359);
	v->a[6498] = 3;
	v->a[6499] = sym_raw_string;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
