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
	v->a[51400] = sym__concat;
	v->a[51401] = sym_variable_name;
	v->a[51402] = sym_test_operator;
	v->a[51403] = sym__brace_start;
	v->a[51404] = ts_builtin_sym_end;
	v->a[51405] = aux_sym_heredoc_redirect_token1;
	v->a[51406] = actions(2772);
	v->a[51407] = 32;
	v->a[51408] = anon_sym_PIPE;
	v->a[51409] = anon_sym_SEMI_SEMI;
	v->a[51410] = anon_sym_PIPE_AMP;
	v->a[51411] = anon_sym_AMP_AMP;
	v->a[51412] = anon_sym_PIPE_PIPE;
	v->a[51413] = anon_sym_LT;
	v->a[51414] = anon_sym_GT;
	v->a[51415] = anon_sym_GT_GT;
	v->a[51416] = anon_sym_AMP_GT;
	v->a[51417] = anon_sym_AMP_GT_GT;
	v->a[51418] = anon_sym_LT_AMP;
	v->a[51419] = anon_sym_GT_AMP;
	small_parse_table_2571(v);
}

void	small_parse_table_2571(t_small_parse_table_array *v)
{
	v->a[51420] = anon_sym_GT_PIPE;
	v->a[51421] = anon_sym_LT_AMP_DASH;
	v->a[51422] = anon_sym_GT_AMP_DASH;
	v->a[51423] = anon_sym_LT_LT;
	v->a[51424] = anon_sym_LT_LT_DASH;
	v->a[51425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51426] = anon_sym_AMP;
	v->a[51427] = aux_sym_concatenation_token1;
	v->a[51428] = anon_sym_DOLLAR;
	v->a[51429] = sym__special_character;
	v->a[51430] = anon_sym_DQUOTE;
	v->a[51431] = sym_raw_string;
	v->a[51432] = aux_sym_number_token1;
	v->a[51433] = aux_sym_number_token2;
	v->a[51434] = anon_sym_DOLLAR_LBRACE;
	v->a[51435] = anon_sym_DOLLAR_LPAREN;
	v->a[51436] = anon_sym_BQUOTE;
	v->a[51437] = anon_sym_DOLLAR_BQUOTE;
	v->a[51438] = sym_word;
	v->a[51439] = anon_sym_SEMI;
	small_parse_table_2572(v);
}

void	small_parse_table_2572(t_small_parse_table_array *v)
{
	v->a[51440] = 3;
	v->a[51441] = actions(3);
	v->a[51442] = 1;
	v->a[51443] = sym_comment;
	v->a[51444] = actions(2778);
	v->a[51445] = 7;
	v->a[51446] = sym_file_descriptor;
	v->a[51447] = sym__concat;
	v->a[51448] = sym_variable_name;
	v->a[51449] = sym_test_operator;
	v->a[51450] = sym__brace_start;
	v->a[51451] = ts_builtin_sym_end;
	v->a[51452] = aux_sym_heredoc_redirect_token1;
	v->a[51453] = actions(2776);
	v->a[51454] = 32;
	v->a[51455] = anon_sym_PIPE;
	v->a[51456] = anon_sym_SEMI_SEMI;
	v->a[51457] = anon_sym_PIPE_AMP;
	v->a[51458] = anon_sym_AMP_AMP;
	v->a[51459] = anon_sym_PIPE_PIPE;
	small_parse_table_2573(v);
}

void	small_parse_table_2573(t_small_parse_table_array *v)
{
	v->a[51460] = anon_sym_LT;
	v->a[51461] = anon_sym_GT;
	v->a[51462] = anon_sym_GT_GT;
	v->a[51463] = anon_sym_AMP_GT;
	v->a[51464] = anon_sym_AMP_GT_GT;
	v->a[51465] = anon_sym_LT_AMP;
	v->a[51466] = anon_sym_GT_AMP;
	v->a[51467] = anon_sym_GT_PIPE;
	v->a[51468] = anon_sym_LT_AMP_DASH;
	v->a[51469] = anon_sym_GT_AMP_DASH;
	v->a[51470] = anon_sym_LT_LT;
	v->a[51471] = anon_sym_LT_LT_DASH;
	v->a[51472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51473] = anon_sym_AMP;
	v->a[51474] = aux_sym_concatenation_token1;
	v->a[51475] = anon_sym_DOLLAR;
	v->a[51476] = sym__special_character;
	v->a[51477] = anon_sym_DQUOTE;
	v->a[51478] = sym_raw_string;
	v->a[51479] = aux_sym_number_token1;
	small_parse_table_2574(v);
}

void	small_parse_table_2574(t_small_parse_table_array *v)
{
	v->a[51480] = aux_sym_number_token2;
	v->a[51481] = anon_sym_DOLLAR_LBRACE;
	v->a[51482] = anon_sym_DOLLAR_LPAREN;
	v->a[51483] = anon_sym_BQUOTE;
	v->a[51484] = anon_sym_DOLLAR_BQUOTE;
	v->a[51485] = sym_word;
	v->a[51486] = anon_sym_SEMI;
	v->a[51487] = 3;
	v->a[51488] = actions(3);
	v->a[51489] = 1;
	v->a[51490] = sym_comment;
	v->a[51491] = actions(2774);
	v->a[51492] = 7;
	v->a[51493] = sym_file_descriptor;
	v->a[51494] = sym__concat;
	v->a[51495] = sym_variable_name;
	v->a[51496] = sym_test_operator;
	v->a[51497] = sym__brace_start;
	v->a[51498] = ts_builtin_sym_end;
	v->a[51499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2575(v);
}

/* EOF small_parse_table_514.c */
