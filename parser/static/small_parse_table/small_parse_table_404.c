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
	v->a[40400] = 27;
	v->a[40401] = anon_sym_PIPE;
	v->a[40402] = anon_sym_RPAREN;
	v->a[40403] = anon_sym_SEMI_SEMI;
	v->a[40404] = anon_sym_AMP_AMP;
	v->a[40405] = anon_sym_PIPE_PIPE;
	v->a[40406] = anon_sym_LT;
	v->a[40407] = anon_sym_GT;
	v->a[40408] = anon_sym_GT_GT;
	v->a[40409] = anon_sym_LT_AMP;
	v->a[40410] = anon_sym_GT_AMP;
	v->a[40411] = anon_sym_GT_PIPE;
	v->a[40412] = anon_sym_LT_GT;
	v->a[40413] = anon_sym_LT_LT;
	v->a[40414] = anon_sym_LT_LT_DASH;
	v->a[40415] = aux_sym_heredoc_redirect_token1;
	v->a[40416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40417] = anon_sym_AMP;
	v->a[40418] = aux_sym_concatenation_token1;
	v->a[40419] = anon_sym_DOLLAR;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = anon_sym_DQUOTE;
	v->a[40421] = sym_raw_string;
	v->a[40422] = sym_number;
	v->a[40423] = anon_sym_DOLLAR_LBRACE;
	v->a[40424] = anon_sym_DOLLAR_LPAREN;
	v->a[40425] = anon_sym_BQUOTE;
	v->a[40426] = sym_word;
	v->a[40427] = anon_sym_SEMI;
	v->a[40428] = 4;
	v->a[40429] = actions(3);
	v->a[40430] = 1;
	v->a[40431] = sym_comment;
	v->a[40432] = actions(1424);
	v->a[40433] = 2;
	v->a[40434] = anon_sym_RPAREN;
	v->a[40435] = anon_sym_SEMI_SEMI;
	v->a[40436] = actions(1426);
	v->a[40437] = 2;
	v->a[40438] = sym_file_descriptor;
	v->a[40439] = sym_variable_name;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = actions(1422);
	v->a[40441] = 24;
	v->a[40442] = anon_sym_for;
	v->a[40443] = anon_sym_while;
	v->a[40444] = anon_sym_until;
	v->a[40445] = anon_sym_if;
	v->a[40446] = anon_sym_case;
	v->a[40447] = anon_sym_LPAREN;
	v->a[40448] = anon_sym_LBRACE;
	v->a[40449] = anon_sym_BANG;
	v->a[40450] = anon_sym_LT;
	v->a[40451] = anon_sym_GT;
	v->a[40452] = anon_sym_GT_GT;
	v->a[40453] = anon_sym_LT_AMP;
	v->a[40454] = anon_sym_GT_AMP;
	v->a[40455] = anon_sym_GT_PIPE;
	v->a[40456] = anon_sym_LT_GT;
	v->a[40457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40458] = anon_sym_DOLLAR;
	v->a[40459] = anon_sym_DQUOTE;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = sym_raw_string;
	v->a[40461] = sym_number;
	v->a[40462] = anon_sym_DOLLAR_LBRACE;
	v->a[40463] = anon_sym_DOLLAR_LPAREN;
	v->a[40464] = anon_sym_BQUOTE;
	v->a[40465] = sym_word;
	v->a[40466] = 4;
	v->a[40467] = actions(3);
	v->a[40468] = 1;
	v->a[40469] = sym_comment;
	v->a[40470] = actions(1424);
	v->a[40471] = 2;
	v->a[40472] = anon_sym_RPAREN;
	v->a[40473] = anon_sym_SEMI_SEMI;
	v->a[40474] = actions(1426);
	v->a[40475] = 2;
	v->a[40476] = sym_file_descriptor;
	v->a[40477] = sym_variable_name;
	v->a[40478] = actions(1422);
	v->a[40479] = 24;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = anon_sym_for;
	v->a[40481] = anon_sym_while;
	v->a[40482] = anon_sym_until;
	v->a[40483] = anon_sym_if;
	v->a[40484] = anon_sym_case;
	v->a[40485] = anon_sym_LPAREN;
	v->a[40486] = anon_sym_LBRACE;
	v->a[40487] = anon_sym_BANG;
	v->a[40488] = anon_sym_LT;
	v->a[40489] = anon_sym_GT;
	v->a[40490] = anon_sym_GT_GT;
	v->a[40491] = anon_sym_LT_AMP;
	v->a[40492] = anon_sym_GT_AMP;
	v->a[40493] = anon_sym_GT_PIPE;
	v->a[40494] = anon_sym_LT_GT;
	v->a[40495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40496] = anon_sym_DOLLAR;
	v->a[40497] = anon_sym_DQUOTE;
	v->a[40498] = sym_raw_string;
	v->a[40499] = sym_number;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
