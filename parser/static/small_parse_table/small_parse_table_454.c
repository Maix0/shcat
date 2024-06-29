/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_454.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2270(t_small_parse_table_array *v)
{
	v->a[45400] = actions(3);
	v->a[45401] = 1;
	v->a[45402] = sym_comment;
	v->a[45403] = actions(754);
	v->a[45404] = 1;
	v->a[45405] = sym_file_descriptor;
	v->a[45406] = actions(904);
	v->a[45407] = 1;
	v->a[45408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45409] = actions(906);
	v->a[45410] = 1;
	v->a[45411] = anon_sym_DOLLAR;
	v->a[45412] = actions(908);
	v->a[45413] = 1;
	v->a[45414] = anon_sym_DQUOTE;
	v->a[45415] = actions(910);
	v->a[45416] = 1;
	v->a[45417] = anon_sym_DOLLAR_LBRACE;
	v->a[45418] = actions(912);
	v->a[45419] = 1;
	small_parse_table_2271(v);
}

void	small_parse_table_2271(t_small_parse_table_array *v)
{
	v->a[45420] = anon_sym_DOLLAR_LPAREN;
	v->a[45421] = actions(914);
	v->a[45422] = 1;
	v->a[45423] = anon_sym_BQUOTE;
	v->a[45424] = state(1205);
	v->a[45425] = 1;
	v->a[45426] = sym_concatenation;
	v->a[45427] = actions(1518);
	v->a[45428] = 3;
	v->a[45429] = sym_raw_string;
	v->a[45430] = sym_number;
	v->a[45431] = sym_word;
	v->a[45432] = state(1399);
	v->a[45433] = 5;
	v->a[45434] = sym_arithmetic_expansion;
	v->a[45435] = sym_string;
	v->a[45436] = sym_simple_expansion;
	v->a[45437] = sym_expansion;
	v->a[45438] = sym_command_substitution;
	v->a[45439] = actions(756);
	small_parse_table_2272(v);
}

void	small_parse_table_2272(t_small_parse_table_array *v)
{
	v->a[45440] = 16;
	v->a[45441] = anon_sym_PIPE;
	v->a[45442] = anon_sym_AMP_AMP;
	v->a[45443] = anon_sym_PIPE_PIPE;
	v->a[45444] = anon_sym_LT;
	v->a[45445] = anon_sym_GT;
	v->a[45446] = anon_sym_GT_GT;
	v->a[45447] = anon_sym_AMP_GT;
	v->a[45448] = anon_sym_AMP_GT_GT;
	v->a[45449] = anon_sym_LT_AMP;
	v->a[45450] = anon_sym_GT_AMP;
	v->a[45451] = anon_sym_GT_PIPE;
	v->a[45452] = anon_sym_LT_AMP_DASH;
	v->a[45453] = anon_sym_GT_AMP_DASH;
	v->a[45454] = anon_sym_LT_LT;
	v->a[45455] = anon_sym_LT_LT_DASH;
	v->a[45456] = aux_sym_heredoc_redirect_token1;
	v->a[45457] = 12;
	v->a[45458] = actions(3);
	v->a[45459] = 1;
	small_parse_table_2273(v);
}

void	small_parse_table_2273(t_small_parse_table_array *v)
{
	v->a[45460] = sym_comment;
	v->a[45461] = actions(538);
	v->a[45462] = 1;
	v->a[45463] = sym_file_descriptor;
	v->a[45464] = actions(1483);
	v->a[45465] = 1;
	v->a[45466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45467] = actions(1485);
	v->a[45468] = 1;
	v->a[45469] = anon_sym_DOLLAR;
	v->a[45470] = actions(1487);
	v->a[45471] = 1;
	v->a[45472] = anon_sym_DQUOTE;
	v->a[45473] = actions(1489);
	v->a[45474] = 1;
	v->a[45475] = anon_sym_DOLLAR_LBRACE;
	v->a[45476] = actions(1491);
	v->a[45477] = 1;
	v->a[45478] = anon_sym_DOLLAR_LPAREN;
	v->a[45479] = actions(1493);
	small_parse_table_2274(v);
}

void	small_parse_table_2274(t_small_parse_table_array *v)
{
	v->a[45480] = 1;
	v->a[45481] = anon_sym_BQUOTE;
	v->a[45482] = state(653);
	v->a[45483] = 2;
	v->a[45484] = sym_concatenation;
	v->a[45485] = aux_sym_for_statement_repeat1;
	v->a[45486] = actions(1481);
	v->a[45487] = 3;
	v->a[45488] = sym_raw_string;
	v->a[45489] = sym_number;
	v->a[45490] = sym_word;
	v->a[45491] = state(856);
	v->a[45492] = 5;
	v->a[45493] = sym_arithmetic_expansion;
	v->a[45494] = sym_string;
	v->a[45495] = sym_simple_expansion;
	v->a[45496] = sym_expansion;
	v->a[45497] = sym_command_substitution;
	v->a[45498] = actions(540);
	v->a[45499] = 15;
	small_parse_table_2275(v);
}

/* EOF small_parse_table_454.c */
