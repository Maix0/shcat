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
	v->a[40400] = anon_sym_LT;
	v->a[40401] = anon_sym_GT;
	v->a[40402] = actions(1084);
	v->a[40403] = 2;
	v->a[40404] = anon_sym_GT_GT;
	v->a[40405] = anon_sym_LT_LT;
	v->a[40406] = actions(1086);
	v->a[40407] = 2;
	v->a[40408] = anon_sym_LT_EQ;
	v->a[40409] = anon_sym_GT_EQ;
	v->a[40410] = actions(1088);
	v->a[40411] = 2;
	v->a[40412] = anon_sym_PLUS;
	v->a[40413] = anon_sym_DASH;
	v->a[40414] = actions(1092);
	v->a[40415] = 2;
	v->a[40416] = anon_sym_PLUS_PLUS2;
	v->a[40417] = anon_sym_DASH_DASH2;
	v->a[40418] = actions(1116);
	v->a[40419] = 2;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = anon_sym_EQ_EQ;
	v->a[40421] = anon_sym_BANG_EQ;
	v->a[40422] = actions(1090);
	v->a[40423] = 3;
	v->a[40424] = anon_sym_STAR;
	v->a[40425] = anon_sym_SLASH;
	v->a[40426] = anon_sym_PERCENT;
	v->a[40427] = actions(1288);
	v->a[40428] = 10;
	v->a[40429] = anon_sym_PLUS_EQ;
	v->a[40430] = anon_sym_DASH_EQ;
	v->a[40431] = anon_sym_STAR_EQ;
	v->a[40432] = anon_sym_SLASH_EQ;
	v->a[40433] = anon_sym_PERCENT_EQ;
	v->a[40434] = anon_sym_LT_LT_EQ;
	v->a[40435] = anon_sym_GT_GT_EQ;
	v->a[40436] = anon_sym_AMP_EQ;
	v->a[40437] = anon_sym_CARET_EQ;
	v->a[40438] = anon_sym_PIPE_EQ;
	v->a[40439] = 3;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = actions(3);
	v->a[40441] = 1;
	v->a[40442] = sym_comment;
	v->a[40443] = actions(1177);
	v->a[40444] = 4;
	v->a[40445] = sym_file_descriptor;
	v->a[40446] = sym__concat;
	v->a[40447] = sym_variable_name;
	v->a[40448] = ts_builtin_sym_end;
	v->a[40449] = actions(1179);
	v->a[40450] = 29;
	v->a[40451] = anon_sym_PIPE;
	v->a[40452] = anon_sym_SEMI_SEMI;
	v->a[40453] = anon_sym_AMP_AMP;
	v->a[40454] = anon_sym_PIPE_PIPE;
	v->a[40455] = anon_sym_LT;
	v->a[40456] = anon_sym_GT;
	v->a[40457] = anon_sym_GT_GT;
	v->a[40458] = anon_sym_AMP_GT;
	v->a[40459] = anon_sym_AMP_GT_GT;
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
	v->a[40480] = 3;
	v->a[40481] = actions(3);
	v->a[40482] = 1;
	v->a[40483] = sym_comment;
	v->a[40484] = actions(1159);
	v->a[40485] = 4;
	v->a[40486] = sym_file_descriptor;
	v->a[40487] = sym__concat;
	v->a[40488] = sym_variable_name;
	v->a[40489] = ts_builtin_sym_end;
	v->a[40490] = actions(1157);
	v->a[40491] = 29;
	v->a[40492] = anon_sym_PIPE;
	v->a[40493] = anon_sym_SEMI_SEMI;
	v->a[40494] = anon_sym_AMP_AMP;
	v->a[40495] = anon_sym_PIPE_PIPE;
	v->a[40496] = anon_sym_LT;
	v->a[40497] = anon_sym_GT;
	v->a[40498] = anon_sym_GT_GT;
	v->a[40499] = anon_sym_AMP_GT;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
