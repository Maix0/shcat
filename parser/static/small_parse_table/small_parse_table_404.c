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
	v->a[40400] = anon_sym_PIPE_PIPE;
	v->a[40401] = state(1355);
	v->a[40402] = 2;
	v->a[40403] = sym_variable_assignment;
	v->a[40404] = aux_sym__variable_assignments_repeat1;
	v->a[40405] = state(1359);
	v->a[40406] = 3;
	v->a[40407] = sym_file_redirect;
	v->a[40408] = sym_heredoc_redirect;
	v->a[40409] = aux_sym_redirected_statement_repeat1;
	v->a[40410] = actions(734);
	v->a[40411] = 16;
	v->a[40412] = anon_sym_LT;
	v->a[40413] = anon_sym_GT;
	v->a[40414] = anon_sym_GT_GT;
	v->a[40415] = anon_sym_LT_AMP;
	v->a[40416] = anon_sym_GT_AMP;
	v->a[40417] = anon_sym_GT_PIPE;
	v->a[40418] = anon_sym_LT_GT;
	v->a[40419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = anon_sym_DOLLAR;
	v->a[40421] = anon_sym_DQUOTE;
	v->a[40422] = sym_raw_string;
	v->a[40423] = sym_number;
	v->a[40424] = anon_sym_DOLLAR_LBRACE;
	v->a[40425] = anon_sym_DOLLAR_LPAREN;
	v->a[40426] = anon_sym_BQUOTE;
	v->a[40427] = sym_word;
	v->a[40428] = 7;
	v->a[40429] = actions(3);
	v->a[40430] = 1;
	v->a[40431] = sym_comment;
	v->a[40432] = actions(1426);
	v->a[40433] = 1;
	v->a[40434] = anon_sym_RPAREN;
	v->a[40435] = actions(1432);
	v->a[40436] = 1;
	v->a[40437] = sym_file_descriptor;
	v->a[40438] = actions(1435);
	v->a[40439] = 1;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = sym_variable_name;
	v->a[40441] = actions(1429);
	v->a[40442] = 7;
	v->a[40443] = anon_sym_LT;
	v->a[40444] = anon_sym_GT;
	v->a[40445] = anon_sym_GT_GT;
	v->a[40446] = anon_sym_LT_AMP;
	v->a[40447] = anon_sym_GT_AMP;
	v->a[40448] = anon_sym_GT_PIPE;
	v->a[40449] = anon_sym_LT_GT;
	v->a[40450] = actions(1422);
	v->a[40451] = 9;
	v->a[40452] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40453] = anon_sym_DOLLAR;
	v->a[40454] = anon_sym_DQUOTE;
	v->a[40455] = sym_raw_string;
	v->a[40456] = sym_number;
	v->a[40457] = anon_sym_DOLLAR_LBRACE;
	v->a[40458] = anon_sym_DOLLAR_LPAREN;
	v->a[40459] = anon_sym_BQUOTE;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = sym_word;
	v->a[40461] = actions(1424);
	v->a[40462] = 9;
	v->a[40463] = anon_sym_PIPE;
	v->a[40464] = anon_sym_SEMI_SEMI;
	v->a[40465] = anon_sym_AMP_AMP;
	v->a[40466] = anon_sym_PIPE_PIPE;
	v->a[40467] = anon_sym_LT_LT;
	v->a[40468] = anon_sym_LT_LT_DASH;
	v->a[40469] = aux_sym_heredoc_redirect_token1;
	v->a[40470] = anon_sym_AMP;
	v->a[40471] = anon_sym_SEMI;
	v->a[40472] = 4;
	v->a[40473] = actions(3);
	v->a[40474] = 1;
	v->a[40475] = sym_comment;
	v->a[40476] = actions(1439);
	v->a[40477] = 2;
	v->a[40478] = anon_sym_RPAREN;
	v->a[40479] = anon_sym_SEMI_SEMI;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = actions(1441);
	v->a[40481] = 2;
	v->a[40482] = sym_file_descriptor;
	v->a[40483] = sym_variable_name;
	v->a[40484] = actions(1437);
	v->a[40485] = 24;
	v->a[40486] = anon_sym_for;
	v->a[40487] = anon_sym_while;
	v->a[40488] = anon_sym_until;
	v->a[40489] = anon_sym_if;
	v->a[40490] = anon_sym_case;
	v->a[40491] = anon_sym_LPAREN;
	v->a[40492] = anon_sym_LBRACE;
	v->a[40493] = anon_sym_BANG;
	v->a[40494] = anon_sym_LT;
	v->a[40495] = anon_sym_GT;
	v->a[40496] = anon_sym_GT_GT;
	v->a[40497] = anon_sym_LT_AMP;
	v->a[40498] = anon_sym_GT_AMP;
	v->a[40499] = anon_sym_GT_PIPE;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
