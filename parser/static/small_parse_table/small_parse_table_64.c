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
	v->a[6400] = aux_sym__multiline_variable_name_token1;
	v->a[6401] = actions(816);
	v->a[6402] = 3;
	v->a[6403] = sym_file_descriptor;
	v->a[6404] = sym_test_operator;
	v->a[6405] = sym__brace_start;
	v->a[6406] = actions(1597);
	v->a[6407] = 9;
	v->a[6408] = anon_sym_BANG;
	v->a[6409] = anon_sym_DASH;
	v->a[6410] = anon_sym_STAR;
	v->a[6411] = anon_sym_QMARK;
	v->a[6412] = anon_sym_DOLLAR;
	v->a[6413] = anon_sym_POUND;
	v->a[6414] = anon_sym_AT;
	v->a[6415] = anon_sym_0;
	v->a[6416] = anon_sym__;
	v->a[6417] = actions(810);
	v->a[6418] = 33;
	v->a[6419] = anon_sym_PIPE;
	small_parse_table_321(v);
}

void	small_parse_table_321(t_small_parse_table_array *v)
{
	v->a[6420] = anon_sym_SEMI_SEMI;
	v->a[6421] = anon_sym_SEMI_AMP;
	v->a[6422] = anon_sym_SEMI_SEMI_AMP;
	v->a[6423] = anon_sym_PIPE_AMP;
	v->a[6424] = anon_sym_AMP_AMP;
	v->a[6425] = anon_sym_PIPE_PIPE;
	v->a[6426] = anon_sym_LT;
	v->a[6427] = anon_sym_GT;
	v->a[6428] = anon_sym_GT_GT;
	v->a[6429] = anon_sym_AMP_GT;
	v->a[6430] = anon_sym_AMP_GT_GT;
	v->a[6431] = anon_sym_LT_AMP;
	v->a[6432] = anon_sym_GT_AMP;
	v->a[6433] = anon_sym_GT_PIPE;
	v->a[6434] = anon_sym_LT_AMP_DASH;
	v->a[6435] = anon_sym_GT_AMP_DASH;
	v->a[6436] = anon_sym_LT_LT;
	v->a[6437] = anon_sym_LT_LT_DASH;
	v->a[6438] = aux_sym_heredoc_redirect_token1;
	v->a[6439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_322(v);
}

void	small_parse_table_322(t_small_parse_table_array *v)
{
	v->a[6440] = anon_sym_AMP;
	v->a[6441] = sym__special_character;
	v->a[6442] = anon_sym_DQUOTE;
	v->a[6443] = sym_raw_string;
	v->a[6444] = aux_sym_number_token1;
	v->a[6445] = aux_sym_number_token2;
	v->a[6446] = anon_sym_DOLLAR_LBRACE;
	v->a[6447] = anon_sym_DOLLAR_LPAREN;
	v->a[6448] = anon_sym_BQUOTE;
	v->a[6449] = anon_sym_DOLLAR_BQUOTE;
	v->a[6450] = sym_word;
	v->a[6451] = anon_sym_SEMI;
	v->a[6452] = 6;
	v->a[6453] = actions(3);
	v->a[6454] = 1;
	v->a[6455] = sym_comment;
	v->a[6456] = actions(1646);
	v->a[6457] = 1;
	v->a[6458] = sym_variable_name;
	v->a[6459] = actions(1644);
	small_parse_table_323(v);
}

void	small_parse_table_323(t_small_parse_table_array *v)
{
	v->a[6460] = 2;
	v->a[6461] = aux_sym__simple_variable_name_token1;
	v->a[6462] = aux_sym__multiline_variable_name_token1;
	v->a[6463] = actions(828);
	v->a[6464] = 3;
	v->a[6465] = sym_file_descriptor;
	v->a[6466] = sym_test_operator;
	v->a[6467] = sym__brace_start;
	v->a[6468] = actions(1642);
	v->a[6469] = 9;
	v->a[6470] = anon_sym_BANG;
	v->a[6471] = anon_sym_DASH;
	v->a[6472] = anon_sym_STAR;
	v->a[6473] = anon_sym_QMARK;
	v->a[6474] = anon_sym_DOLLAR;
	v->a[6475] = anon_sym_POUND;
	v->a[6476] = anon_sym_AT;
	v->a[6477] = anon_sym_0;
	v->a[6478] = anon_sym__;
	v->a[6479] = actions(826);
	small_parse_table_324(v);
}

void	small_parse_table_324(t_small_parse_table_array *v)
{
	v->a[6480] = 33;
	v->a[6481] = anon_sym_PIPE;
	v->a[6482] = anon_sym_SEMI_SEMI;
	v->a[6483] = anon_sym_SEMI_AMP;
	v->a[6484] = anon_sym_SEMI_SEMI_AMP;
	v->a[6485] = anon_sym_PIPE_AMP;
	v->a[6486] = anon_sym_AMP_AMP;
	v->a[6487] = anon_sym_PIPE_PIPE;
	v->a[6488] = anon_sym_LT;
	v->a[6489] = anon_sym_GT;
	v->a[6490] = anon_sym_GT_GT;
	v->a[6491] = anon_sym_AMP_GT;
	v->a[6492] = anon_sym_AMP_GT_GT;
	v->a[6493] = anon_sym_LT_AMP;
	v->a[6494] = anon_sym_GT_AMP;
	v->a[6495] = anon_sym_GT_PIPE;
	v->a[6496] = anon_sym_LT_AMP_DASH;
	v->a[6497] = anon_sym_GT_AMP_DASH;
	v->a[6498] = anon_sym_LT_LT;
	v->a[6499] = anon_sym_LT_LT_DASH;
	small_parse_table_325(v);
}

/* EOF small_parse_table_64.c */
