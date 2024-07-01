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
	v->a[40400] = 1;
	v->a[40401] = anon_sym_DOLLAR_LPAREN;
	v->a[40402] = actions(1126);
	v->a[40403] = 1;
	v->a[40404] = anon_sym_BQUOTE;
	v->a[40405] = actions(1128);
	v->a[40406] = 1;
	v->a[40407] = sym__bare_dollar;
	v->a[40408] = state(535);
	v->a[40409] = 1;
	v->a[40410] = aux_sym_command_repeat2;
	v->a[40411] = state(1002);
	v->a[40412] = 1;
	v->a[40413] = sym_concatenation;
	v->a[40414] = actions(1114);
	v->a[40415] = 3;
	v->a[40416] = sym_raw_string;
	v->a[40417] = sym_number;
	v->a[40418] = sym_word;
	v->a[40419] = state(864);
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = 5;
	v->a[40421] = sym_arithmetic_expansion;
	v->a[40422] = sym_string;
	v->a[40423] = sym_simple_expansion;
	v->a[40424] = sym_expansion;
	v->a[40425] = sym_command_substitution;
	v->a[40426] = actions(541);
	v->a[40427] = 13;
	v->a[40428] = anon_sym_PIPE;
	v->a[40429] = anon_sym_AMP_AMP;
	v->a[40430] = anon_sym_PIPE_PIPE;
	v->a[40431] = anon_sym_LT;
	v->a[40432] = anon_sym_GT;
	v->a[40433] = anon_sym_GT_GT;
	v->a[40434] = anon_sym_LT_AMP;
	v->a[40435] = anon_sym_GT_AMP;
	v->a[40436] = anon_sym_GT_PIPE;
	v->a[40437] = anon_sym_LT_AMP_DASH;
	v->a[40438] = anon_sym_GT_AMP_DASH;
	v->a[40439] = anon_sym_LT_LT;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = anon_sym_LT_LT_DASH;
	v->a[40441] = 3;
	v->a[40442] = actions(3);
	v->a[40443] = 1;
	v->a[40444] = sym_comment;
	v->a[40445] = actions(1015);
	v->a[40446] = 4;
	v->a[40447] = sym_file_descriptor;
	v->a[40448] = sym__concat;
	v->a[40449] = sym_variable_name;
	v->a[40450] = ts_builtin_sym_end;
	v->a[40451] = actions(1013);
	v->a[40452] = 27;
	v->a[40453] = anon_sym_PIPE;
	v->a[40454] = anon_sym_SEMI_SEMI;
	v->a[40455] = anon_sym_AMP_AMP;
	v->a[40456] = anon_sym_PIPE_PIPE;
	v->a[40457] = anon_sym_LT;
	v->a[40458] = anon_sym_GT;
	v->a[40459] = anon_sym_GT_GT;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = anon_sym_LT_AMP;
	v->a[40461] = anon_sym_GT_AMP;
	v->a[40462] = anon_sym_GT_PIPE;
	v->a[40463] = anon_sym_LT_AMP_DASH;
	v->a[40464] = anon_sym_GT_AMP_DASH;
	v->a[40465] = anon_sym_LT_LT;
	v->a[40466] = anon_sym_LT_LT_DASH;
	v->a[40467] = aux_sym_heredoc_redirect_token1;
	v->a[40468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40469] = anon_sym_AMP;
	v->a[40470] = aux_sym_concatenation_token1;
	v->a[40471] = anon_sym_DOLLAR;
	v->a[40472] = anon_sym_DQUOTE;
	v->a[40473] = sym_raw_string;
	v->a[40474] = sym_number;
	v->a[40475] = anon_sym_DOLLAR_LBRACE;
	v->a[40476] = anon_sym_DOLLAR_LPAREN;
	v->a[40477] = anon_sym_BQUOTE;
	v->a[40478] = sym_word;
	v->a[40479] = anon_sym_SEMI;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = 6;
	v->a[40481] = actions(3);
	v->a[40482] = 1;
	v->a[40483] = sym_comment;
	v->a[40484] = actions(1230);
	v->a[40485] = 1;
	v->a[40486] = aux_sym_concatenation_token1;
	v->a[40487] = actions(1437);
	v->a[40488] = 1;
	v->a[40489] = sym__concat;
	v->a[40490] = state(411);
	v->a[40491] = 1;
	v->a[40492] = aux_sym_concatenation_repeat1;
	v->a[40493] = actions(1085);
	v->a[40494] = 2;
	v->a[40495] = sym_file_descriptor;
	v->a[40496] = sym_variable_name;
	v->a[40497] = actions(1081);
	v->a[40498] = 26;
	v->a[40499] = anon_sym_PIPE;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
