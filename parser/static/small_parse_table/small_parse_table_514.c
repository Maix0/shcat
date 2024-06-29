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
	v->a[51400] = sym_comment;
	v->a[51401] = actions(1092);
	v->a[51402] = 1;
	v->a[51403] = aux_sym_concatenation_token1;
	v->a[51404] = actions(1096);
	v->a[51405] = 1;
	v->a[51406] = sym__concat;
	v->a[51407] = state(769);
	v->a[51408] = 1;
	v->a[51409] = aux_sym_concatenation_repeat1;
	v->a[51410] = actions(548);
	v->a[51411] = 2;
	v->a[51412] = sym_file_descriptor;
	v->a[51413] = sym_variable_name;
	v->a[51414] = actions(546);
	v->a[51415] = 25;
	v->a[51416] = anon_sym_PIPE;
	v->a[51417] = anon_sym_AMP_AMP;
	v->a[51418] = anon_sym_PIPE_PIPE;
	v->a[51419] = anon_sym_LT;
	small_parse_table_2571(v);
}

void	small_parse_table_2571(t_small_parse_table_array *v)
{
	v->a[51420] = anon_sym_GT;
	v->a[51421] = anon_sym_GT_GT;
	v->a[51422] = anon_sym_AMP_GT;
	v->a[51423] = anon_sym_AMP_GT_GT;
	v->a[51424] = anon_sym_LT_AMP;
	v->a[51425] = anon_sym_GT_AMP;
	v->a[51426] = anon_sym_GT_PIPE;
	v->a[51427] = anon_sym_LT_AMP_DASH;
	v->a[51428] = anon_sym_GT_AMP_DASH;
	v->a[51429] = anon_sym_LT_LT;
	v->a[51430] = anon_sym_LT_LT_DASH;
	v->a[51431] = aux_sym_heredoc_redirect_token1;
	v->a[51432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51433] = anon_sym_DOLLAR;
	v->a[51434] = anon_sym_DQUOTE;
	v->a[51435] = sym_raw_string;
	v->a[51436] = sym_number;
	v->a[51437] = anon_sym_DOLLAR_LBRACE;
	v->a[51438] = anon_sym_DOLLAR_LPAREN;
	v->a[51439] = anon_sym_BQUOTE;
	small_parse_table_2572(v);
}

void	small_parse_table_2572(t_small_parse_table_array *v)
{
	v->a[51440] = sym_word;
	v->a[51441] = 12;
	v->a[51442] = actions(3);
	v->a[51443] = 1;
	v->a[51444] = sym_comment;
	v->a[51445] = actions(538);
	v->a[51446] = 1;
	v->a[51447] = sym_file_descriptor;
	v->a[51448] = actions(1709);
	v->a[51449] = 1;
	v->a[51450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51451] = actions(1711);
	v->a[51452] = 1;
	v->a[51453] = anon_sym_DOLLAR;
	v->a[51454] = actions(1713);
	v->a[51455] = 1;
	v->a[51456] = anon_sym_DQUOTE;
	v->a[51457] = actions(1715);
	v->a[51458] = 1;
	v->a[51459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2573(v);
}

void	small_parse_table_2573(t_small_parse_table_array *v)
{
	v->a[51460] = actions(1717);
	v->a[51461] = 1;
	v->a[51462] = anon_sym_DOLLAR_LPAREN;
	v->a[51463] = actions(1719);
	v->a[51464] = 1;
	v->a[51465] = anon_sym_BQUOTE;
	v->a[51466] = state(804);
	v->a[51467] = 2;
	v->a[51468] = sym_concatenation;
	v->a[51469] = aux_sym_for_statement_repeat1;
	v->a[51470] = actions(1707);
	v->a[51471] = 3;
	v->a[51472] = sym_raw_string;
	v->a[51473] = sym_number;
	v->a[51474] = sym_word;
	v->a[51475] = state(950);
	v->a[51476] = 5;
	v->a[51477] = sym_arithmetic_expansion;
	v->a[51478] = sym_string;
	v->a[51479] = sym_simple_expansion;
	small_parse_table_2574(v);
}

void	small_parse_table_2574(t_small_parse_table_array *v)
{
	v->a[51480] = sym_expansion;
	v->a[51481] = sym_command_substitution;
	v->a[51482] = actions(540);
	v->a[51483] = 13;
	v->a[51484] = anon_sym_AMP_AMP;
	v->a[51485] = anon_sym_PIPE_PIPE;
	v->a[51486] = anon_sym_LT;
	v->a[51487] = anon_sym_GT;
	v->a[51488] = anon_sym_GT_GT;
	v->a[51489] = anon_sym_AMP_GT;
	v->a[51490] = anon_sym_AMP_GT_GT;
	v->a[51491] = anon_sym_LT_AMP;
	v->a[51492] = anon_sym_GT_AMP;
	v->a[51493] = anon_sym_GT_PIPE;
	v->a[51494] = anon_sym_LT_AMP_DASH;
	v->a[51495] = anon_sym_GT_AMP_DASH;
	v->a[51496] = aux_sym_heredoc_redirect_token1;
	v->a[51497] = 6;
	v->a[51498] = actions(3);
	v->a[51499] = 1;
	small_parse_table_2575(v);
}

/* EOF small_parse_table_514.c */
