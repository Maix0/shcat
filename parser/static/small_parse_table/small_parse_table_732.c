/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_732.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3660(t_small_parse_table_array *v)
{
	v->a[73200] = aux_sym_heredoc_redirect_token1;
	v->a[73201] = anon_sym_AMP;
	v->a[73202] = anon_sym_SEMI;
	v->a[73203] = 6;
	v->a[73204] = actions(3);
	v->a[73205] = 1;
	v->a[73206] = sym_comment;
	v->a[73207] = actions(828);
	v->a[73208] = 1;
	v->a[73209] = sym_file_descriptor;
	v->a[73210] = actions(4412);
	v->a[73211] = 1;
	v->a[73212] = sym_variable_name;
	v->a[73213] = actions(4410);
	v->a[73214] = 2;
	v->a[73215] = aux_sym__simple_variable_name_token1;
	v->a[73216] = aux_sym__multiline_variable_name_token1;
	v->a[73217] = actions(4408);
	v->a[73218] = 9;
	v->a[73219] = anon_sym_BANG;
	small_parse_table_3661(v);
}

void	small_parse_table_3661(t_small_parse_table_array *v)
{
	v->a[73220] = anon_sym_DASH;
	v->a[73221] = anon_sym_STAR;
	v->a[73222] = anon_sym_QMARK;
	v->a[73223] = anon_sym_DOLLAR;
	v->a[73224] = anon_sym_POUND;
	v->a[73225] = anon_sym_AT;
	v->a[73226] = anon_sym_0;
	v->a[73227] = anon_sym__;
	v->a[73228] = actions(826);
	v->a[73229] = 21;
	v->a[73230] = anon_sym_PIPE;
	v->a[73231] = anon_sym_RPAREN;
	v->a[73232] = anon_sym_SEMI_SEMI;
	v->a[73233] = anon_sym_PIPE_AMP;
	v->a[73234] = anon_sym_AMP_AMP;
	v->a[73235] = anon_sym_PIPE_PIPE;
	v->a[73236] = anon_sym_LT;
	v->a[73237] = anon_sym_GT;
	v->a[73238] = anon_sym_GT_GT;
	v->a[73239] = anon_sym_AMP_GT;
	small_parse_table_3662(v);
}

void	small_parse_table_3662(t_small_parse_table_array *v)
{
	v->a[73240] = anon_sym_AMP_GT_GT;
	v->a[73241] = anon_sym_LT_AMP;
	v->a[73242] = anon_sym_GT_AMP;
	v->a[73243] = anon_sym_GT_PIPE;
	v->a[73244] = anon_sym_LT_AMP_DASH;
	v->a[73245] = anon_sym_GT_AMP_DASH;
	v->a[73246] = anon_sym_LT_LT;
	v->a[73247] = anon_sym_LT_LT_DASH;
	v->a[73248] = aux_sym_heredoc_redirect_token1;
	v->a[73249] = anon_sym_AMP;
	v->a[73250] = anon_sym_SEMI;
	v->a[73251] = 6;
	v->a[73252] = actions(3);
	v->a[73253] = 1;
	v->a[73254] = sym_comment;
	v->a[73255] = actions(4324);
	v->a[73256] = 1;
	v->a[73257] = sym_variable_name;
	v->a[73258] = actions(828);
	v->a[73259] = 2;
	small_parse_table_3663(v);
}

void	small_parse_table_3663(t_small_parse_table_array *v)
{
	v->a[73260] = sym_file_descriptor;
	v->a[73261] = ts_builtin_sym_end;
	v->a[73262] = actions(4322);
	v->a[73263] = 2;
	v->a[73264] = aux_sym__simple_variable_name_token1;
	v->a[73265] = aux_sym__multiline_variable_name_token1;
	v->a[73266] = actions(4320);
	v->a[73267] = 9;
	v->a[73268] = anon_sym_BANG;
	v->a[73269] = anon_sym_DASH;
	v->a[73270] = anon_sym_STAR;
	v->a[73271] = anon_sym_QMARK;
	v->a[73272] = anon_sym_DOLLAR;
	v->a[73273] = anon_sym_POUND;
	v->a[73274] = anon_sym_AT;
	v->a[73275] = anon_sym_0;
	v->a[73276] = anon_sym__;
	v->a[73277] = actions(826);
	v->a[73278] = 20;
	v->a[73279] = anon_sym_PIPE;
	small_parse_table_3664(v);
}

void	small_parse_table_3664(t_small_parse_table_array *v)
{
	v->a[73280] = anon_sym_SEMI_SEMI;
	v->a[73281] = anon_sym_PIPE_AMP;
	v->a[73282] = anon_sym_AMP_AMP;
	v->a[73283] = anon_sym_PIPE_PIPE;
	v->a[73284] = anon_sym_LT;
	v->a[73285] = anon_sym_GT;
	v->a[73286] = anon_sym_GT_GT;
	v->a[73287] = anon_sym_AMP_GT;
	v->a[73288] = anon_sym_AMP_GT_GT;
	v->a[73289] = anon_sym_LT_AMP;
	v->a[73290] = anon_sym_GT_AMP;
	v->a[73291] = anon_sym_GT_PIPE;
	v->a[73292] = anon_sym_LT_AMP_DASH;
	v->a[73293] = anon_sym_GT_AMP_DASH;
	v->a[73294] = anon_sym_LT_LT;
	v->a[73295] = anon_sym_LT_LT_DASH;
	v->a[73296] = aux_sym_heredoc_redirect_token1;
	v->a[73297] = anon_sym_AMP;
	v->a[73298] = anon_sym_SEMI;
	v->a[73299] = 6;
	small_parse_table_3665(v);
}

/* EOF small_parse_table_732.c */
