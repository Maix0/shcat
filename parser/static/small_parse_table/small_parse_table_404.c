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
	v->a[40400] = state(1203);
	v->a[40401] = 1;
	v->a[40402] = sym_file_redirect;
	v->a[40403] = state(968);
	v->a[40404] = 2;
	v->a[40405] = sym_variable_assignment;
	v->a[40406] = aux_sym_command_repeat1;
	v->a[40407] = actions(353);
	v->a[40408] = 3;
	v->a[40409] = sym_raw_string;
	v->a[40410] = sym_number;
	v->a[40411] = sym_word;
	v->a[40412] = state(620);
	v->a[40413] = 5;
	v->a[40414] = sym_arithmetic_expansion;
	v->a[40415] = sym_string;
	v->a[40416] = sym_simple_expansion;
	v->a[40417] = sym_expansion;
	v->a[40418] = sym_command_substitution;
	v->a[40419] = actions(1093);
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = 7;
	v->a[40421] = anon_sym_LT;
	v->a[40422] = anon_sym_GT;
	v->a[40423] = anon_sym_GT_GT;
	v->a[40424] = anon_sym_LT_AMP;
	v->a[40425] = anon_sym_GT_AMP;
	v->a[40426] = anon_sym_GT_PIPE;
	v->a[40427] = anon_sym_LT_GT;
	v->a[40428] = 6;
	v->a[40429] = actions(3);
	v->a[40430] = 1;
	v->a[40431] = sym_comment;
	v->a[40432] = actions(1208);
	v->a[40433] = 1;
	v->a[40434] = sym_file_descriptor;
	v->a[40435] = actions(1396);
	v->a[40436] = 1;
	v->a[40437] = aux_sym_concatenation_token1;
	v->a[40438] = actions(1398);
	v->a[40439] = 1;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = sym__concat;
	v->a[40441] = state(632);
	v->a[40442] = 1;
	v->a[40443] = aux_sym_concatenation_repeat1;
	v->a[40444] = actions(1210);
	v->a[40445] = 24;
	v->a[40446] = anon_sym_PIPE;
	v->a[40447] = anon_sym_SEMI_SEMI;
	v->a[40448] = anon_sym_AMP_AMP;
	v->a[40449] = anon_sym_PIPE_PIPE;
	v->a[40450] = anon_sym_LT;
	v->a[40451] = anon_sym_GT;
	v->a[40452] = anon_sym_GT_GT;
	v->a[40453] = anon_sym_LT_AMP;
	v->a[40454] = anon_sym_GT_AMP;
	v->a[40455] = anon_sym_GT_PIPE;
	v->a[40456] = anon_sym_LT_GT;
	v->a[40457] = anon_sym_LT_LT;
	v->a[40458] = anon_sym_LT_LT_DASH;
	v->a[40459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40461] = anon_sym_DOLLAR;
	v->a[40462] = anon_sym_DQUOTE;
	v->a[40463] = sym_raw_string;
	v->a[40464] = sym_number;
	v->a[40465] = anon_sym_DOLLAR_LBRACE;
	v->a[40466] = anon_sym_DOLLAR_LPAREN;
	v->a[40467] = anon_sym_BQUOTE;
	v->a[40468] = sym_word;
	v->a[40469] = anon_sym_SEMI;
	v->a[40470] = 3;
	v->a[40471] = actions(3);
	v->a[40472] = 1;
	v->a[40473] = sym_comment;
	v->a[40474] = actions(1110);
	v->a[40475] = 2;
	v->a[40476] = sym_file_descriptor;
	v->a[40477] = sym__concat;
	v->a[40478] = actions(1105);
	v->a[40479] = 26;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = anon_sym_esac;
	v->a[40481] = anon_sym_PIPE;
	v->a[40482] = anon_sym_SEMI_SEMI;
	v->a[40483] = anon_sym_AMP_AMP;
	v->a[40484] = anon_sym_PIPE_PIPE;
	v->a[40485] = anon_sym_LT;
	v->a[40486] = anon_sym_GT;
	v->a[40487] = anon_sym_GT_GT;
	v->a[40488] = anon_sym_LT_AMP;
	v->a[40489] = anon_sym_GT_AMP;
	v->a[40490] = anon_sym_GT_PIPE;
	v->a[40491] = anon_sym_LT_GT;
	v->a[40492] = anon_sym_LT_LT;
	v->a[40493] = anon_sym_LT_LT_DASH;
	v->a[40494] = aux_sym_heredoc_redirect_token1;
	v->a[40495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40496] = aux_sym_concatenation_token1;
	v->a[40497] = anon_sym_DOLLAR;
	v->a[40498] = anon_sym_DQUOTE;
	v->a[40499] = sym_raw_string;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
