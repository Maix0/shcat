/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_404.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2020(t_small_parse_table_array *v)
{
	v->a[40400] = sym_raw_string;
	v->a[40401] = sym_number;
	v->a[40402] = anon_sym_DOLLAR_LBRACE;
	v->a[40403] = anon_sym_DOLLAR_LPAREN;
	v->a[40404] = anon_sym_BQUOTE;
	v->a[40405] = sym_word;
	v->a[40406] = 3;
	v->a[40407] = actions(3);
	v->a[40408] = 1;
	v->a[40409] = sym_comment;
	v->a[40410] = actions(473);
	v->a[40411] = 1;
	v->a[40412] = sym__concat;
	v->a[40413] = actions(471);
	v->a[40414] = 22;
	v->a[40415] = anon_sym_PIPE;
	v->a[40416] = anon_sym_AMP_AMP;
	v->a[40417] = anon_sym_PIPE_PIPE;
	v->a[40418] = anon_sym_LT;
	v->a[40419] = anon_sym_GT;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = anon_sym_GT_GT;
	v->a[40421] = anon_sym_LT_AMP;
	v->a[40422] = anon_sym_GT_AMP;
	v->a[40423] = anon_sym_GT_PIPE;
	v->a[40424] = anon_sym_LT_GT;
	v->a[40425] = anon_sym_LT_LT;
	v->a[40426] = anon_sym_LT_LT_DASH;
	v->a[40427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40428] = aux_sym_concatenation_token1;
	v->a[40429] = anon_sym_DOLLAR;
	v->a[40430] = anon_sym_DQUOTE;
	v->a[40431] = sym_raw_string;
	v->a[40432] = sym_number;
	v->a[40433] = anon_sym_DOLLAR_LBRACE;
	v->a[40434] = anon_sym_DOLLAR_LPAREN;
	v->a[40435] = anon_sym_BQUOTE;
	v->a[40436] = sym_word;
	v->a[40437] = 3;
	v->a[40438] = actions(3);
	v->a[40439] = 1;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = sym_comment;
	v->a[40441] = actions(1165);
	v->a[40442] = 1;
	v->a[40443] = sym__concat;
	v->a[40444] = actions(1163);
	v->a[40445] = 22;
	v->a[40446] = anon_sym_SEMI_SEMI;
	v->a[40447] = anon_sym_AMP_AMP;
	v->a[40448] = anon_sym_PIPE_PIPE;
	v->a[40449] = anon_sym_LT;
	v->a[40450] = anon_sym_GT;
	v->a[40451] = anon_sym_GT_GT;
	v->a[40452] = anon_sym_LT_AMP;
	v->a[40453] = anon_sym_GT_AMP;
	v->a[40454] = anon_sym_GT_PIPE;
	v->a[40455] = anon_sym_LT_GT;
	v->a[40456] = aux_sym_heredoc_redirect_token1;
	v->a[40457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40458] = aux_sym_concatenation_token1;
	v->a[40459] = anon_sym_DOLLAR;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = anon_sym_DQUOTE;
	v->a[40461] = sym_raw_string;
	v->a[40462] = sym_number;
	v->a[40463] = anon_sym_DOLLAR_LBRACE;
	v->a[40464] = anon_sym_DOLLAR_LPAREN;
	v->a[40465] = anon_sym_BQUOTE;
	v->a[40466] = sym_word;
	v->a[40467] = anon_sym_SEMI;
	v->a[40468] = 3;
	v->a[40469] = actions(3);
	v->a[40470] = 1;
	v->a[40471] = sym_comment;
	v->a[40472] = actions(483);
	v->a[40473] = 1;
	v->a[40474] = sym__concat;
	v->a[40475] = actions(481);
	v->a[40476] = 22;
	v->a[40477] = anon_sym_PIPE;
	v->a[40478] = anon_sym_AMP_AMP;
	v->a[40479] = anon_sym_PIPE_PIPE;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = anon_sym_LT;
	v->a[40481] = anon_sym_GT;
	v->a[40482] = anon_sym_GT_GT;
	v->a[40483] = anon_sym_LT_AMP;
	v->a[40484] = anon_sym_GT_AMP;
	v->a[40485] = anon_sym_GT_PIPE;
	v->a[40486] = anon_sym_LT_GT;
	v->a[40487] = anon_sym_LT_LT;
	v->a[40488] = anon_sym_LT_LT_DASH;
	v->a[40489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40490] = aux_sym_concatenation_token1;
	v->a[40491] = anon_sym_DOLLAR;
	v->a[40492] = anon_sym_DQUOTE;
	v->a[40493] = sym_raw_string;
	v->a[40494] = sym_number;
	v->a[40495] = anon_sym_DOLLAR_LBRACE;
	v->a[40496] = anon_sym_DOLLAR_LPAREN;
	v->a[40497] = anon_sym_BQUOTE;
	v->a[40498] = sym_word;
	v->a[40499] = 3;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
