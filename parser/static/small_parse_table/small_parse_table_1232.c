/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1232.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6160(t_small_parse_table_array *v)
{
	v->a[123200] = 9;
	v->a[123201] = anon_sym_PIPE;
	v->a[123202] = anon_sym_SEMI_SEMI;
	v->a[123203] = anon_sym_PIPE_AMP;
	v->a[123204] = anon_sym_AMP_AMP;
	v->a[123205] = anon_sym_PIPE_PIPE;
	v->a[123206] = anon_sym_LT_LT;
	v->a[123207] = anon_sym_LT_LT_DASH;
	v->a[123208] = anon_sym_AMP;
	v->a[123209] = anon_sym_SEMI;
	v->a[123210] = 7;
	v->a[123211] = actions(3);
	v->a[123212] = 1;
	v->a[123213] = sym_comment;
	v->a[123214] = actions(5443);
	v->a[123215] = 1;
	v->a[123216] = aux_sym_heredoc_redirect_token1;
	v->a[123217] = actions(6464);
	v->a[123218] = 1;
	v->a[123219] = sym_file_descriptor;
	small_parse_table_6161(v);
}

void	small_parse_table_6161(t_small_parse_table_array *v)
{
	v->a[123220] = state(2311);
	v->a[123221] = 1;
	v->a[123222] = sym_file_redirect;
	v->a[123223] = actions(5968);
	v->a[123224] = 2;
	v->a[123225] = anon_sym_LT_AMP_DASH;
	v->a[123226] = anon_sym_GT_AMP_DASH;
	v->a[123227] = actions(5966);
	v->a[123228] = 8;
	v->a[123229] = anon_sym_LT;
	v->a[123230] = anon_sym_GT;
	v->a[123231] = anon_sym_GT_GT;
	v->a[123232] = anon_sym_AMP_GT;
	v->a[123233] = anon_sym_AMP_GT_GT;
	v->a[123234] = anon_sym_LT_AMP;
	v->a[123235] = anon_sym_GT_AMP;
	v->a[123236] = anon_sym_GT_PIPE;
	v->a[123237] = actions(5441);
	v->a[123238] = 9;
	v->a[123239] = anon_sym_PIPE;
	small_parse_table_6162(v);
}

void	small_parse_table_6162(t_small_parse_table_array *v)
{
	v->a[123240] = anon_sym_SEMI_SEMI;
	v->a[123241] = anon_sym_PIPE_AMP;
	v->a[123242] = anon_sym_AMP_AMP;
	v->a[123243] = anon_sym_PIPE_PIPE;
	v->a[123244] = anon_sym_LT_LT;
	v->a[123245] = anon_sym_LT_LT_DASH;
	v->a[123246] = anon_sym_AMP;
	v->a[123247] = anon_sym_SEMI;
	v->a[123248] = 9;
	v->a[123249] = actions(3);
	v->a[123250] = 1;
	v->a[123251] = sym_comment;
	v->a[123252] = actions(3373);
	v->a[123253] = 1;
	v->a[123254] = aux_sym_heredoc_redirect_token1;
	v->a[123255] = actions(5970);
	v->a[123256] = 1;
	v->a[123257] = sym_file_descriptor;
	v->a[123258] = actions(2945);
	v->a[123259] = 2;
	small_parse_table_6163(v);
}

void	small_parse_table_6163(t_small_parse_table_array *v)
{
	v->a[123260] = anon_sym_LT_LT;
	v->a[123261] = anon_sym_LT_LT_DASH;
	v->a[123262] = actions(3300);
	v->a[123263] = 2;
	v->a[123264] = anon_sym_AMP_AMP;
	v->a[123265] = anon_sym_PIPE_PIPE;
	v->a[123266] = actions(5968);
	v->a[123267] = 2;
	v->a[123268] = anon_sym_LT_AMP_DASH;
	v->a[123269] = anon_sym_GT_AMP_DASH;
	v->a[123270] = actions(3371);
	v->a[123271] = 3;
	v->a[123272] = anon_sym_SEMI_SEMI;
	v->a[123273] = anon_sym_AMP;
	v->a[123274] = anon_sym_SEMI;
	v->a[123275] = state(2295);
	v->a[123276] = 3;
	v->a[123277] = sym_file_redirect;
	v->a[123278] = sym_heredoc_redirect;
	v->a[123279] = aux_sym_redirected_statement_repeat1;
	small_parse_table_6164(v);
}

void	small_parse_table_6164(t_small_parse_table_array *v)
{
	v->a[123280] = actions(5966);
	v->a[123281] = 8;
	v->a[123282] = anon_sym_LT;
	v->a[123283] = anon_sym_GT;
	v->a[123284] = anon_sym_GT_GT;
	v->a[123285] = anon_sym_AMP_GT;
	v->a[123286] = anon_sym_AMP_GT_GT;
	v->a[123287] = anon_sym_LT_AMP;
	v->a[123288] = anon_sym_GT_AMP;
	v->a[123289] = anon_sym_GT_PIPE;
	v->a[123290] = 9;
	v->a[123291] = actions(3);
	v->a[123292] = 1;
	v->a[123293] = sym_comment;
	v->a[123294] = actions(3383);
	v->a[123295] = 1;
	v->a[123296] = aux_sym_heredoc_redirect_token1;
	v->a[123297] = actions(5970);
	v->a[123298] = 1;
	v->a[123299] = sym_file_descriptor;
	small_parse_table_6165(v);
}

/* EOF small_parse_table_1232.c */
