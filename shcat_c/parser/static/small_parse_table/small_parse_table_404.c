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
	v->a[40400] = anon_sym_AMP;
	v->a[40401] = anon_sym_LT;
	v->a[40402] = anon_sym_GT;
	v->a[40403] = anon_sym_LT_LT;
	v->a[40404] = anon_sym_GT_GT;
	v->a[40405] = anon_sym_esac;
	v->a[40406] = anon_sym_SEMI_SEMI;
	v->a[40407] = anon_sym_SEMI_AMP;
	v->a[40408] = anon_sym_SEMI_SEMI_AMP;
	v->a[40409] = anon_sym_PIPE_AMP;
	v->a[40410] = anon_sym_AMP_GT;
	v->a[40411] = anon_sym_AMP_GT_GT;
	v->a[40412] = anon_sym_LT_AMP;
	v->a[40413] = anon_sym_GT_AMP;
	v->a[40414] = anon_sym_GT_PIPE;
	v->a[40415] = anon_sym_LT_AMP_DASH;
	v->a[40416] = anon_sym_GT_AMP_DASH;
	v->a[40417] = anon_sym_LT_LT_DASH;
	v->a[40418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40419] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = anon_sym_DOLLAR;
	v->a[40421] = sym__special_character;
	v->a[40422] = anon_sym_DQUOTE;
	v->a[40423] = sym_raw_string;
	v->a[40424] = sym_ansi_c_string;
	v->a[40425] = aux_sym_number_token1;
	v->a[40426] = aux_sym_number_token2;
	v->a[40427] = anon_sym_DOLLAR_LBRACE;
	v->a[40428] = anon_sym_DOLLAR_LPAREN;
	v->a[40429] = anon_sym_BQUOTE;
	v->a[40430] = anon_sym_DOLLAR_BQUOTE;
	v->a[40431] = anon_sym_LT_LPAREN;
	v->a[40432] = anon_sym_GT_LPAREN;
	v->a[40433] = aux_sym__simple_variable_name_token1;
	v->a[40434] = sym_word;
	v->a[40435] = 7;
	v->a[40436] = actions(3);
	v->a[40437] = 1;
	v->a[40438] = sym_comment;
	v->a[40439] = actions(4699);
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = 1;
	v->a[40441] = aux_sym_concatenation_token1;
	v->a[40442] = actions(4701);
	v->a[40443] = 1;
	v->a[40444] = sym__concat;
	v->a[40445] = actions(5075);
	v->a[40446] = 1;
	v->a[40447] = anon_sym_LPAREN;
	v->a[40448] = state(1054);
	v->a[40449] = 1;
	v->a[40450] = aux_sym_concatenation_repeat1;
	v->a[40451] = actions(1281);
	v->a[40452] = 5;
	v->a[40453] = sym_file_descriptor;
	v->a[40454] = sym_test_operator;
	v->a[40455] = sym__bare_dollar;
	v->a[40456] = sym__brace_start;
	v->a[40457] = aux_sym_heredoc_redirect_token1;
	v->a[40458] = actions(1271);
	v->a[40459] = 39;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = anon_sym_LPAREN_LPAREN;
	v->a[40461] = anon_sym_SEMI;
	v->a[40462] = anon_sym_PIPE_PIPE;
	v->a[40463] = anon_sym_AMP_AMP;
	v->a[40464] = anon_sym_PIPE;
	v->a[40465] = anon_sym_AMP;
	v->a[40466] = anon_sym_EQ_EQ;
	v->a[40467] = anon_sym_LT;
	v->a[40468] = anon_sym_GT;
	v->a[40469] = anon_sym_LT_LT;
	v->a[40470] = anon_sym_GT_GT;
	v->a[40471] = anon_sym_SEMI_SEMI;
	v->a[40472] = anon_sym_PIPE_AMP;
	v->a[40473] = anon_sym_EQ_TILDE;
	v->a[40474] = anon_sym_AMP_GT;
	v->a[40475] = anon_sym_AMP_GT_GT;
	v->a[40476] = anon_sym_LT_AMP;
	v->a[40477] = anon_sym_GT_AMP;
	v->a[40478] = anon_sym_GT_PIPE;
	v->a[40479] = anon_sym_LT_AMP_DASH;
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = anon_sym_GT_AMP_DASH;
	v->a[40481] = anon_sym_LT_LT_DASH;
	v->a[40482] = anon_sym_LT_LT_LT;
	v->a[40483] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40484] = anon_sym_DOLLAR_LBRACK;
	v->a[40485] = anon_sym_DOLLAR;
	v->a[40486] = sym__special_character;
	v->a[40487] = anon_sym_DQUOTE;
	v->a[40488] = sym_raw_string;
	v->a[40489] = sym_ansi_c_string;
	v->a[40490] = aux_sym_number_token1;
	v->a[40491] = aux_sym_number_token2;
	v->a[40492] = anon_sym_DOLLAR_LBRACE;
	v->a[40493] = anon_sym_DOLLAR_LPAREN;
	v->a[40494] = anon_sym_BQUOTE;
	v->a[40495] = anon_sym_DOLLAR_BQUOTE;
	v->a[40496] = anon_sym_LT_LPAREN;
	v->a[40497] = anon_sym_GT_LPAREN;
	v->a[40498] = sym_word;
	v->a[40499] = 3;
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
