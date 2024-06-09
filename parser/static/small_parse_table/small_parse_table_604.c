/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = actions(565);
	v->a[60401] = 2;
	v->a[60402] = sym_file_descriptor;
	v->a[60403] = sym_variable_name;
	v->a[60404] = actions(567);
	v->a[60405] = 25;
	v->a[60406] = anon_sym_PIPE;
	v->a[60407] = anon_sym_AMP_AMP;
	v->a[60408] = anon_sym_PIPE_PIPE;
	v->a[60409] = anon_sym_LT;
	v->a[60410] = anon_sym_GT;
	v->a[60411] = anon_sym_GT_GT;
	v->a[60412] = anon_sym_AMP_GT;
	v->a[60413] = anon_sym_AMP_GT_GT;
	v->a[60414] = anon_sym_LT_AMP;
	v->a[60415] = anon_sym_GT_AMP;
	v->a[60416] = anon_sym_GT_PIPE;
	v->a[60417] = anon_sym_LT_AMP_DASH;
	v->a[60418] = anon_sym_GT_AMP_DASH;
	v->a[60419] = anon_sym_LT_LT;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = anon_sym_LT_LT_DASH;
	v->a[60421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60422] = anon_sym_DOLLAR;
	v->a[60423] = anon_sym_DQUOTE;
	v->a[60424] = sym_raw_string;
	v->a[60425] = aux_sym_number_token1;
	v->a[60426] = aux_sym_number_token2;
	v->a[60427] = anon_sym_DOLLAR_LBRACE;
	v->a[60428] = anon_sym_DOLLAR_LPAREN;
	v->a[60429] = anon_sym_BQUOTE;
	v->a[60430] = sym_word;
	v->a[60431] = 3;
	v->a[60432] = actions(3);
	v->a[60433] = 1;
	v->a[60434] = sym_comment;
	v->a[60435] = actions(1202);
	v->a[60436] = 2;
	v->a[60437] = sym_file_descriptor;
	v->a[60438] = sym_variable_name;
	v->a[60439] = actions(1198);
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = 25;
	v->a[60441] = anon_sym_PIPE;
	v->a[60442] = anon_sym_AMP_AMP;
	v->a[60443] = anon_sym_PIPE_PIPE;
	v->a[60444] = anon_sym_LT;
	v->a[60445] = anon_sym_GT;
	v->a[60446] = anon_sym_GT_GT;
	v->a[60447] = anon_sym_AMP_GT;
	v->a[60448] = anon_sym_AMP_GT_GT;
	v->a[60449] = anon_sym_LT_AMP;
	v->a[60450] = anon_sym_GT_AMP;
	v->a[60451] = anon_sym_GT_PIPE;
	v->a[60452] = anon_sym_LT_AMP_DASH;
	v->a[60453] = anon_sym_GT_AMP_DASH;
	v->a[60454] = anon_sym_LT_LT;
	v->a[60455] = anon_sym_LT_LT_DASH;
	v->a[60456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60457] = anon_sym_DOLLAR;
	v->a[60458] = anon_sym_DQUOTE;
	v->a[60459] = sym_raw_string;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = aux_sym_number_token1;
	v->a[60461] = aux_sym_number_token2;
	v->a[60462] = anon_sym_DOLLAR_LBRACE;
	v->a[60463] = anon_sym_DOLLAR_LPAREN;
	v->a[60464] = anon_sym_BQUOTE;
	v->a[60465] = sym_word;
	v->a[60466] = 6;
	v->a[60467] = actions(3);
	v->a[60468] = 1;
	v->a[60469] = sym_comment;
	v->a[60470] = actions(1210);
	v->a[60471] = 1;
	v->a[60472] = sym_file_descriptor;
	v->a[60473] = actions(2163);
	v->a[60474] = 1;
	v->a[60475] = aux_sym_concatenation_token1;
	v->a[60476] = actions(2165);
	v->a[60477] = 1;
	v->a[60478] = sym__concat;
	v->a[60479] = state(939);
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = 1;
	v->a[60481] = aux_sym_concatenation_repeat1;
	v->a[60482] = actions(1206);
	v->a[60483] = 23;
	v->a[60484] = anon_sym_AMP_AMP;
	v->a[60485] = anon_sym_PIPE_PIPE;
	v->a[60486] = anon_sym_LT;
	v->a[60487] = anon_sym_GT;
	v->a[60488] = anon_sym_GT_GT;
	v->a[60489] = anon_sym_AMP_GT;
	v->a[60490] = anon_sym_AMP_GT_GT;
	v->a[60491] = anon_sym_LT_AMP;
	v->a[60492] = anon_sym_GT_AMP;
	v->a[60493] = anon_sym_GT_PIPE;
	v->a[60494] = anon_sym_LT_AMP_DASH;
	v->a[60495] = anon_sym_GT_AMP_DASH;
	v->a[60496] = aux_sym_heredoc_redirect_token1;
	v->a[60497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60498] = anon_sym_DOLLAR;
	v->a[60499] = anon_sym_DQUOTE;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
