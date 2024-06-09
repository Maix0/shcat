/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_514.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2570(t_small_parse_table_array *v)
{
	v->a[51400] = sym_file_descriptor;
	v->a[51401] = sym__bare_dollar;
	v->a[51402] = actions(1104);
	v->a[51403] = 25;
	v->a[51404] = anon_sym_PIPE;
	v->a[51405] = anon_sym_AMP_AMP;
	v->a[51406] = anon_sym_PIPE_PIPE;
	v->a[51407] = anon_sym_LT;
	v->a[51408] = anon_sym_GT;
	v->a[51409] = anon_sym_GT_GT;
	v->a[51410] = anon_sym_AMP_GT;
	v->a[51411] = anon_sym_AMP_GT_GT;
	v->a[51412] = anon_sym_LT_AMP;
	v->a[51413] = anon_sym_GT_AMP;
	v->a[51414] = anon_sym_GT_PIPE;
	v->a[51415] = anon_sym_LT_AMP_DASH;
	v->a[51416] = anon_sym_GT_AMP_DASH;
	v->a[51417] = anon_sym_LT_LT;
	v->a[51418] = anon_sym_LT_LT_DASH;
	v->a[51419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2571(v);
}

void	small_parse_table_2571(t_small_parse_table_array *v)
{
	v->a[51420] = anon_sym_DOLLAR;
	v->a[51421] = anon_sym_DQUOTE;
	v->a[51422] = sym_raw_string;
	v->a[51423] = aux_sym_number_token1;
	v->a[51424] = aux_sym_number_token2;
	v->a[51425] = anon_sym_DOLLAR_LBRACE;
	v->a[51426] = anon_sym_DOLLAR_LPAREN;
	v->a[51427] = anon_sym_BQUOTE;
	v->a[51428] = sym_word;
	v->a[51429] = 6;
	v->a[51430] = actions(3);
	v->a[51431] = 1;
	v->a[51432] = sym_comment;
	v->a[51433] = actions(1208);
	v->a[51434] = 1;
	v->a[51435] = aux_sym_concatenation_token1;
	v->a[51436] = actions(1212);
	v->a[51437] = 1;
	v->a[51438] = sym__concat;
	v->a[51439] = state(772);
	small_parse_table_2572(v);
}

void	small_parse_table_2572(t_small_parse_table_array *v)
{
	v->a[51440] = 1;
	v->a[51441] = aux_sym_concatenation_repeat1;
	v->a[51442] = actions(555);
	v->a[51443] = 2;
	v->a[51444] = sym_file_descriptor;
	v->a[51445] = sym_variable_name;
	v->a[51446] = actions(553);
	v->a[51447] = 26;
	v->a[51448] = anon_sym_PIPE;
	v->a[51449] = anon_sym_AMP_AMP;
	v->a[51450] = anon_sym_PIPE_PIPE;
	v->a[51451] = anon_sym_LT;
	v->a[51452] = anon_sym_GT;
	v->a[51453] = anon_sym_GT_GT;
	v->a[51454] = anon_sym_AMP_GT;
	v->a[51455] = anon_sym_AMP_GT_GT;
	v->a[51456] = anon_sym_LT_AMP;
	v->a[51457] = anon_sym_GT_AMP;
	v->a[51458] = anon_sym_GT_PIPE;
	v->a[51459] = anon_sym_LT_AMP_DASH;
	small_parse_table_2573(v);
}

void	small_parse_table_2573(t_small_parse_table_array *v)
{
	v->a[51460] = anon_sym_GT_AMP_DASH;
	v->a[51461] = anon_sym_LT_LT;
	v->a[51462] = anon_sym_LT_LT_DASH;
	v->a[51463] = aux_sym_heredoc_redirect_token1;
	v->a[51464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51465] = anon_sym_DOLLAR;
	v->a[51466] = anon_sym_DQUOTE;
	v->a[51467] = sym_raw_string;
	v->a[51468] = aux_sym_number_token1;
	v->a[51469] = aux_sym_number_token2;
	v->a[51470] = anon_sym_DOLLAR_LBRACE;
	v->a[51471] = anon_sym_DOLLAR_LPAREN;
	v->a[51472] = anon_sym_BQUOTE;
	v->a[51473] = sym_word;
	v->a[51474] = 6;
	v->a[51475] = actions(3);
	v->a[51476] = 1;
	v->a[51477] = sym_comment;
	v->a[51478] = actions(1888);
	v->a[51479] = 1;
	small_parse_table_2574(v);
}

void	small_parse_table_2574(t_small_parse_table_array *v)
{
	v->a[51480] = aux_sym_concatenation_token1;
	v->a[51481] = actions(1892);
	v->a[51482] = 1;
	v->a[51483] = sym__concat;
	v->a[51484] = state(757);
	v->a[51485] = 1;
	v->a[51486] = aux_sym_concatenation_repeat1;
	v->a[51487] = actions(1127);
	v->a[51488] = 2;
	v->a[51489] = sym_file_descriptor;
	v->a[51490] = sym__bare_dollar;
	v->a[51491] = actions(1129);
	v->a[51492] = 26;
	v->a[51493] = anon_sym_LPAREN;
	v->a[51494] = anon_sym_PIPE;
	v->a[51495] = anon_sym_AMP_AMP;
	v->a[51496] = anon_sym_PIPE_PIPE;
	v->a[51497] = anon_sym_LT;
	v->a[51498] = anon_sym_GT;
	v->a[51499] = anon_sym_GT_GT;
	small_parse_table_2575(v);
}

/* EOF small_parse_table_514.c */
