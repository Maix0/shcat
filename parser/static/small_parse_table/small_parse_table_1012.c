/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1012.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5060(t_small_parse_table_array *v)
{
	v->a[101200] = sym_comment;
	v->a[101201] = actions(5267);
	v->a[101202] = 1;
	v->a[101203] = aux_sym_concatenation_token1;
	v->a[101204] = actions(5792);
	v->a[101205] = 1;
	v->a[101206] = sym__concat;
	v->a[101207] = state(1910);
	v->a[101208] = 1;
	v->a[101209] = aux_sym_concatenation_repeat1;
	v->a[101210] = actions(2690);
	v->a[101211] = 2;
	v->a[101212] = sym_file_descriptor;
	v->a[101213] = aux_sym_heredoc_redirect_token1;
	v->a[101214] = actions(2688);
	v->a[101215] = 20;
	v->a[101216] = anon_sym_PIPE;
	v->a[101217] = anon_sym_SEMI_SEMI;
	v->a[101218] = anon_sym_PIPE_AMP;
	v->a[101219] = anon_sym_AMP_AMP;
	small_parse_table_5061(v);
}

void	small_parse_table_5061(t_small_parse_table_array *v)
{
	v->a[101220] = anon_sym_PIPE_PIPE;
	v->a[101221] = anon_sym_LT;
	v->a[101222] = anon_sym_GT;
	v->a[101223] = anon_sym_GT_GT;
	v->a[101224] = anon_sym_AMP_GT;
	v->a[101225] = anon_sym_AMP_GT_GT;
	v->a[101226] = anon_sym_LT_AMP;
	v->a[101227] = anon_sym_GT_AMP;
	v->a[101228] = anon_sym_GT_PIPE;
	v->a[101229] = anon_sym_LT_AMP_DASH;
	v->a[101230] = anon_sym_GT_AMP_DASH;
	v->a[101231] = anon_sym_LT_LT;
	v->a[101232] = anon_sym_LT_LT_DASH;
	v->a[101233] = anon_sym_AMP;
	v->a[101234] = anon_sym_BQUOTE;
	v->a[101235] = anon_sym_SEMI;
	v->a[101236] = 6;
	v->a[101237] = actions(3);
	v->a[101238] = 1;
	v->a[101239] = sym_comment;
	small_parse_table_5062(v);
}

void	small_parse_table_5062(t_small_parse_table_array *v)
{
	v->a[101240] = actions(5267);
	v->a[101241] = 1;
	v->a[101242] = aux_sym_concatenation_token1;
	v->a[101243] = actions(5794);
	v->a[101244] = 1;
	v->a[101245] = sym__concat;
	v->a[101246] = state(1910);
	v->a[101247] = 1;
	v->a[101248] = aux_sym_concatenation_repeat1;
	v->a[101249] = actions(2696);
	v->a[101250] = 2;
	v->a[101251] = sym_file_descriptor;
	v->a[101252] = aux_sym_heredoc_redirect_token1;
	v->a[101253] = actions(2694);
	v->a[101254] = 20;
	v->a[101255] = anon_sym_PIPE;
	v->a[101256] = anon_sym_SEMI_SEMI;
	v->a[101257] = anon_sym_PIPE_AMP;
	v->a[101258] = anon_sym_AMP_AMP;
	v->a[101259] = anon_sym_PIPE_PIPE;
	small_parse_table_5063(v);
}

void	small_parse_table_5063(t_small_parse_table_array *v)
{
	v->a[101260] = anon_sym_LT;
	v->a[101261] = anon_sym_GT;
	v->a[101262] = anon_sym_GT_GT;
	v->a[101263] = anon_sym_AMP_GT;
	v->a[101264] = anon_sym_AMP_GT_GT;
	v->a[101265] = anon_sym_LT_AMP;
	v->a[101266] = anon_sym_GT_AMP;
	v->a[101267] = anon_sym_GT_PIPE;
	v->a[101268] = anon_sym_LT_AMP_DASH;
	v->a[101269] = anon_sym_GT_AMP_DASH;
	v->a[101270] = anon_sym_LT_LT;
	v->a[101271] = anon_sym_LT_LT_DASH;
	v->a[101272] = anon_sym_AMP;
	v->a[101273] = anon_sym_BQUOTE;
	v->a[101274] = anon_sym_SEMI;
	v->a[101275] = 8;
	v->a[101276] = actions(3);
	v->a[101277] = 1;
	v->a[101278] = sym_comment;
	v->a[101279] = actions(5157);
	small_parse_table_5064(v);
}

void	small_parse_table_5064(t_small_parse_table_array *v)
{
	v->a[101280] = 1;
	v->a[101281] = aux_sym_heredoc_redirect_token1;
	v->a[101282] = actions(5680);
	v->a[101283] = 1;
	v->a[101284] = sym_file_descriptor;
	v->a[101285] = actions(2945);
	v->a[101286] = 2;
	v->a[101287] = anon_sym_LT_LT;
	v->a[101288] = anon_sym_LT_LT_DASH;
	v->a[101289] = actions(5678);
	v->a[101290] = 2;
	v->a[101291] = anon_sym_LT_AMP_DASH;
	v->a[101292] = anon_sym_GT_AMP_DASH;
	v->a[101293] = state(2046);
	v->a[101294] = 3;
	v->a[101295] = sym_file_redirect;
	v->a[101296] = sym_heredoc_redirect;
	v->a[101297] = aux_sym_redirected_statement_repeat1;
	v->a[101298] = actions(5151);
	v->a[101299] = 8;
	small_parse_table_5065(v);
}

/* EOF small_parse_table_1012.c */
