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
	v->a[40400] = aux_sym_number_token1;
	v->a[40401] = aux_sym_number_token2;
	v->a[40402] = anon_sym_DOLLAR_LBRACE;
	v->a[40403] = anon_sym_DOLLAR_LPAREN;
	v->a[40404] = anon_sym_BQUOTE;
	v->a[40405] = anon_sym_DOLLAR_BQUOTE;
	v->a[40406] = aux_sym__simple_variable_name_token1;
	v->a[40407] = sym_word;
	v->a[40408] = anon_sym_SEMI;
	v->a[40409] = 6;
	v->a[40410] = actions(3);
	v->a[40411] = 1;
	v->a[40412] = sym_comment;
	v->a[40413] = actions(3442);
	v->a[40414] = 1;
	v->a[40415] = aux_sym_concatenation_token1;
	v->a[40416] = actions(3572);
	v->a[40417] = 1;
	v->a[40418] = sym__concat;
	v->a[40419] = state(779);
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = 1;
	v->a[40421] = aux_sym_concatenation_repeat1;
	v->a[40422] = actions(2664);
	v->a[40423] = 4;
	v->a[40424] = sym_file_descriptor;
	v->a[40425] = sym_test_operator;
	v->a[40426] = sym__brace_start;
	v->a[40427] = aux_sym_heredoc_redirect_token1;
	v->a[40428] = actions(2662);
	v->a[40429] = 33;
	v->a[40430] = anon_sym_PIPE;
	v->a[40431] = anon_sym_RPAREN;
	v->a[40432] = anon_sym_SEMI_SEMI;
	v->a[40433] = anon_sym_PIPE_AMP;
	v->a[40434] = anon_sym_AMP_AMP;
	v->a[40435] = anon_sym_PIPE_PIPE;
	v->a[40436] = anon_sym_LT;
	v->a[40437] = anon_sym_GT;
	v->a[40438] = anon_sym_GT_GT;
	v->a[40439] = anon_sym_AMP_GT;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = anon_sym_AMP_GT_GT;
	v->a[40441] = anon_sym_LT_AMP;
	v->a[40442] = anon_sym_GT_AMP;
	v->a[40443] = anon_sym_GT_PIPE;
	v->a[40444] = anon_sym_LT_AMP_DASH;
	v->a[40445] = anon_sym_GT_AMP_DASH;
	v->a[40446] = anon_sym_LT_LT;
	v->a[40447] = anon_sym_LT_LT_DASH;
	v->a[40448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40449] = anon_sym_AMP;
	v->a[40450] = anon_sym_DOLLAR;
	v->a[40451] = sym__special_character;
	v->a[40452] = anon_sym_DQUOTE;
	v->a[40453] = sym_raw_string;
	v->a[40454] = aux_sym_number_token1;
	v->a[40455] = aux_sym_number_token2;
	v->a[40456] = anon_sym_DOLLAR_LBRACE;
	v->a[40457] = anon_sym_DOLLAR_LPAREN;
	v->a[40458] = anon_sym_BQUOTE;
	v->a[40459] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = aux_sym__simple_variable_name_token1;
	v->a[40461] = sym_word;
	v->a[40462] = anon_sym_SEMI;
	v->a[40463] = 3;
	v->a[40464] = actions(3);
	v->a[40465] = 1;
	v->a[40466] = sym_comment;
	v->a[40467] = actions(2774);
	v->a[40468] = 6;
	v->a[40469] = sym_file_descriptor;
	v->a[40470] = sym__concat;
	v->a[40471] = sym_test_operator;
	v->a[40472] = sym__bare_dollar;
	v->a[40473] = sym__brace_start;
	v->a[40474] = aux_sym_heredoc_redirect_token1;
	v->a[40475] = actions(2772);
	v->a[40476] = 34;
	v->a[40477] = anon_sym_PIPE;
	v->a[40478] = anon_sym_SEMI_SEMI;
	v->a[40479] = anon_sym_SEMI_AMP;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = anon_sym_SEMI_SEMI_AMP;
	v->a[40481] = anon_sym_PIPE_AMP;
	v->a[40482] = anon_sym_AMP_AMP;
	v->a[40483] = anon_sym_PIPE_PIPE;
	v->a[40484] = anon_sym_LT;
	v->a[40485] = anon_sym_GT;
	v->a[40486] = anon_sym_GT_GT;
	v->a[40487] = anon_sym_AMP_GT;
	v->a[40488] = anon_sym_AMP_GT_GT;
	v->a[40489] = anon_sym_LT_AMP;
	v->a[40490] = anon_sym_GT_AMP;
	v->a[40491] = anon_sym_GT_PIPE;
	v->a[40492] = anon_sym_LT_AMP_DASH;
	v->a[40493] = anon_sym_GT_AMP_DASH;
	v->a[40494] = anon_sym_LT_LT;
	v->a[40495] = anon_sym_LT_LT_DASH;
	v->a[40496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40497] = anon_sym_AMP;
	v->a[40498] = aux_sym_concatenation_token1;
	v->a[40499] = anon_sym_DOLLAR;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
