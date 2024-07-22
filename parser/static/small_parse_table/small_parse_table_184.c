/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_184.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_920(t_small_parse_table_array *v)
{
	v->a[18400] = anon_sym_DQUOTE;
	v->a[18401] = sym_raw_string;
	v->a[18402] = sym_number;
	v->a[18403] = anon_sym_DOLLAR_LBRACE;
	v->a[18404] = anon_sym_DOLLAR_LPAREN;
	v->a[18405] = anon_sym_BQUOTE;
	v->a[18406] = sym_word;
	v->a[18407] = anon_sym_SEMI;
	v->a[18408] = 6;
	v->a[18409] = actions(3);
	v->a[18410] = 1;
	v->a[18411] = sym_comment;
	v->a[18412] = actions(399);
	v->a[18413] = 1;
	v->a[18414] = sym_variable_name;
	v->a[18415] = actions(367);
	v->a[18416] = 2;
	v->a[18417] = sym_file_descriptor;
	v->a[18418] = sym__bare_dollar;
	v->a[18419] = actions(397);
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = 2;
	v->a[18421] = aux_sym__simple_variable_name_token1;
	v->a[18422] = aux_sym__multiline_variable_name_token1;
	v->a[18423] = actions(395);
	v->a[18424] = 8;
	v->a[18425] = anon_sym_BANG;
	v->a[18426] = anon_sym_DASH;
	v->a[18427] = anon_sym_STAR;
	v->a[18428] = anon_sym_QMARK;
	v->a[18429] = anon_sym_DOLLAR;
	v->a[18430] = anon_sym_POUND;
	v->a[18431] = anon_sym_AT;
	v->a[18432] = anon_sym_0;
	v->a[18433] = actions(361);
	v->a[18434] = 24;
	v->a[18435] = anon_sym_esac;
	v->a[18436] = anon_sym_PIPE;
	v->a[18437] = anon_sym_SEMI_SEMI;
	v->a[18438] = anon_sym_AMP_AMP;
	v->a[18439] = anon_sym_PIPE_PIPE;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_LT;
	v->a[18441] = anon_sym_GT;
	v->a[18442] = anon_sym_GT_GT;
	v->a[18443] = anon_sym_LT_AMP;
	v->a[18444] = anon_sym_GT_AMP;
	v->a[18445] = anon_sym_GT_PIPE;
	v->a[18446] = anon_sym_LT_GT;
	v->a[18447] = anon_sym_LT_LT;
	v->a[18448] = anon_sym_LT_LT_DASH;
	v->a[18449] = aux_sym_heredoc_redirect_token1;
	v->a[18450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18451] = anon_sym_DQUOTE;
	v->a[18452] = sym_raw_string;
	v->a[18453] = sym_number;
	v->a[18454] = anon_sym_DOLLAR_LBRACE;
	v->a[18455] = anon_sym_DOLLAR_LPAREN;
	v->a[18456] = anon_sym_BQUOTE;
	v->a[18457] = sym_word;
	v->a[18458] = anon_sym_SEMI;
	v->a[18459] = 6;
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = actions(3);
	v->a[18461] = 1;
	v->a[18462] = sym_comment;
	v->a[18463] = actions(369);
	v->a[18464] = 1;
	v->a[18465] = sym_variable_name;
	v->a[18466] = actions(365);
	v->a[18467] = 2;
	v->a[18468] = aux_sym__simple_variable_name_token1;
	v->a[18469] = aux_sym__multiline_variable_name_token1;
	v->a[18470] = actions(367);
	v->a[18471] = 2;
	v->a[18472] = sym_file_descriptor;
	v->a[18473] = sym__bare_dollar;
	v->a[18474] = actions(363);
	v->a[18475] = 8;
	v->a[18476] = anon_sym_BANG;
	v->a[18477] = anon_sym_DASH;
	v->a[18478] = anon_sym_STAR;
	v->a[18479] = anon_sym_QMARK;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = anon_sym_DOLLAR;
	v->a[18481] = anon_sym_POUND;
	v->a[18482] = anon_sym_AT;
	v->a[18483] = anon_sym_0;
	v->a[18484] = actions(361);
	v->a[18485] = 24;
	v->a[18486] = anon_sym_LPAREN;
	v->a[18487] = anon_sym_PIPE;
	v->a[18488] = anon_sym_SEMI_SEMI;
	v->a[18489] = anon_sym_AMP_AMP;
	v->a[18490] = anon_sym_PIPE_PIPE;
	v->a[18491] = anon_sym_LT;
	v->a[18492] = anon_sym_GT;
	v->a[18493] = anon_sym_GT_GT;
	v->a[18494] = anon_sym_LT_AMP;
	v->a[18495] = anon_sym_GT_AMP;
	v->a[18496] = anon_sym_GT_PIPE;
	v->a[18497] = anon_sym_LT_GT;
	v->a[18498] = anon_sym_LT_LT;
	v->a[18499] = anon_sym_LT_LT_DASH;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
