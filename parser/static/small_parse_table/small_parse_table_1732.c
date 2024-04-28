/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1732.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8660(t_small_parse_table_array *v)
{
	v->a[173200] = anon_sym_0;
	v->a[173201] = anon_sym__;
	v->a[173202] = actions(1239);
	v->a[173203] = 21;
	v->a[173204] = anon_sym_SEMI;
	v->a[173205] = anon_sym_PIPE_PIPE;
	v->a[173206] = anon_sym_AMP_AMP;
	v->a[173207] = anon_sym_PIPE;
	v->a[173208] = anon_sym_AMP;
	v->a[173209] = anon_sym_LT;
	v->a[173210] = anon_sym_GT;
	v->a[173211] = anon_sym_LT_LT;
	v->a[173212] = anon_sym_GT_GT;
	v->a[173213] = anon_sym_RPAREN;
	v->a[173214] = anon_sym_SEMI_SEMI;
	v->a[173215] = anon_sym_PIPE_AMP;
	v->a[173216] = anon_sym_AMP_GT;
	v->a[173217] = anon_sym_AMP_GT_GT;
	v->a[173218] = anon_sym_LT_AMP;
	v->a[173219] = anon_sym_GT_AMP;
	small_parse_table_8661(v);
}

void	small_parse_table_8661(t_small_parse_table_array *v)
{
	v->a[173220] = anon_sym_GT_PIPE;
	v->a[173221] = anon_sym_LT_AMP_DASH;
	v->a[173222] = anon_sym_GT_AMP_DASH;
	v->a[173223] = anon_sym_LT_LT_DASH;
	v->a[173224] = aux_sym_heredoc_redirect_token1;
	v->a[173225] = 8;
	v->a[173226] = actions(3);
	v->a[173227] = 1;
	v->a[173228] = sym_comment;
	v->a[173229] = actions(1235);
	v->a[173230] = 1;
	v->a[173231] = sym_file_descriptor;
	v->a[173232] = actions(7673);
	v->a[173233] = 1;
	v->a[173234] = anon_sym_DQUOTE;
	v->a[173235] = actions(7677);
	v->a[173236] = 1;
	v->a[173237] = sym_variable_name;
	v->a[173238] = state(4393);
	v->a[173239] = 1;
	small_parse_table_8662(v);
}

void	small_parse_table_8662(t_small_parse_table_array *v)
{
	v->a[173240] = sym_string;
	v->a[173241] = actions(7675);
	v->a[173242] = 2;
	v->a[173243] = aux_sym__simple_variable_name_token1;
	v->a[173244] = aux_sym__multiline_variable_name_token1;
	v->a[173245] = actions(7671);
	v->a[173246] = 9;
	v->a[173247] = anon_sym_DASH;
	v->a[173248] = anon_sym_STAR;
	v->a[173249] = anon_sym_BANG;
	v->a[173250] = anon_sym_QMARK;
	v->a[173251] = anon_sym_DOLLAR;
	v->a[173252] = anon_sym_POUND;
	v->a[173253] = anon_sym_AT2;
	v->a[173254] = anon_sym_0;
	v->a[173255] = anon_sym__;
	v->a[173256] = actions(1227);
	v->a[173257] = 21;
	v->a[173258] = anon_sym_SEMI;
	v->a[173259] = anon_sym_PIPE_PIPE;
	small_parse_table_8663(v);
}

void	small_parse_table_8663(t_small_parse_table_array *v)
{
	v->a[173260] = anon_sym_AMP_AMP;
	v->a[173261] = anon_sym_PIPE;
	v->a[173262] = anon_sym_AMP;
	v->a[173263] = anon_sym_LT;
	v->a[173264] = anon_sym_GT;
	v->a[173265] = anon_sym_LT_LT;
	v->a[173266] = anon_sym_GT_GT;
	v->a[173267] = anon_sym_RPAREN;
	v->a[173268] = anon_sym_SEMI_SEMI;
	v->a[173269] = anon_sym_PIPE_AMP;
	v->a[173270] = anon_sym_AMP_GT;
	v->a[173271] = anon_sym_AMP_GT_GT;
	v->a[173272] = anon_sym_LT_AMP;
	v->a[173273] = anon_sym_GT_AMP;
	v->a[173274] = anon_sym_GT_PIPE;
	v->a[173275] = anon_sym_LT_AMP_DASH;
	v->a[173276] = anon_sym_GT_AMP_DASH;
	v->a[173277] = anon_sym_LT_LT_DASH;
	v->a[173278] = aux_sym_heredoc_redirect_token1;
	v->a[173279] = 19;
	small_parse_table_8664(v);
}

void	small_parse_table_8664(t_small_parse_table_array *v)
{
	v->a[173280] = actions(71);
	v->a[173281] = 1;
	v->a[173282] = sym_comment;
	v->a[173283] = actions(7066);
	v->a[173284] = 1;
	v->a[173285] = anon_sym_RBRACK;
	v->a[173286] = actions(7567);
	v->a[173287] = 1;
	v->a[173288] = anon_sym_EQ;
	v->a[173289] = actions(7573);
	v->a[173290] = 1;
	v->a[173291] = anon_sym_PIPE_PIPE;
	v->a[173292] = actions(7575);
	v->a[173293] = 1;
	v->a[173294] = anon_sym_AMP_AMP;
	v->a[173295] = actions(7577);
	v->a[173296] = 1;
	v->a[173297] = anon_sym_PIPE;
	v->a[173298] = actions(7579);
	v->a[173299] = 1;
	small_parse_table_8665(v);
}

/* EOF small_parse_table_1732.c */
