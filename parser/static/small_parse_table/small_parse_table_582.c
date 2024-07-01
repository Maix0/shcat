/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = anon_sym_GT_PIPE;
	v->a[58201] = anon_sym_LT_GT;
	v->a[58202] = 11;
	v->a[58203] = actions(3);
	v->a[58204] = 1;
	v->a[58205] = sym_comment;
	v->a[58206] = actions(736);
	v->a[58207] = 1;
	v->a[58208] = anon_sym_PIPE;
	v->a[58209] = actions(842);
	v->a[58210] = 1;
	v->a[58211] = anon_sym_SEMI_SEMI;
	v->a[58212] = actions(1865);
	v->a[58213] = 1;
	v->a[58214] = aux_sym_heredoc_redirect_token1;
	v->a[58215] = actions(1889);
	v->a[58216] = 1;
	v->a[58217] = sym_file_descriptor;
	v->a[58218] = state(682);
	v->a[58219] = 1;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = sym_terminator;
	v->a[58221] = actions(740);
	v->a[58222] = 2;
	v->a[58223] = anon_sym_AMP;
	v->a[58224] = anon_sym_SEMI;
	v->a[58225] = actions(744);
	v->a[58226] = 2;
	v->a[58227] = anon_sym_LT_LT;
	v->a[58228] = anon_sym_LT_LT_DASH;
	v->a[58229] = actions(955);
	v->a[58230] = 2;
	v->a[58231] = anon_sym_AMP_AMP;
	v->a[58232] = anon_sym_PIPE_PIPE;
	v->a[58233] = state(1194);
	v->a[58234] = 3;
	v->a[58235] = sym_file_redirect;
	v->a[58236] = sym_heredoc_redirect;
	v->a[58237] = aux_sym_redirected_statement_repeat1;
	v->a[58238] = actions(1887);
	v->a[58239] = 7;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = anon_sym_LT;
	v->a[58241] = anon_sym_GT;
	v->a[58242] = anon_sym_GT_GT;
	v->a[58243] = anon_sym_LT_AMP;
	v->a[58244] = anon_sym_GT_AMP;
	v->a[58245] = anon_sym_GT_PIPE;
	v->a[58246] = anon_sym_LT_GT;
	v->a[58247] = 11;
	v->a[58248] = actions(3);
	v->a[58249] = 1;
	v->a[58250] = sym_comment;
	v->a[58251] = actions(736);
	v->a[58252] = 1;
	v->a[58253] = anon_sym_PIPE;
	v->a[58254] = actions(842);
	v->a[58255] = 1;
	v->a[58256] = anon_sym_SEMI_SEMI;
	v->a[58257] = actions(1865);
	v->a[58258] = 1;
	v->a[58259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = actions(1889);
	v->a[58261] = 1;
	v->a[58262] = sym_file_descriptor;
	v->a[58263] = state(683);
	v->a[58264] = 1;
	v->a[58265] = sym_terminator;
	v->a[58266] = actions(740);
	v->a[58267] = 2;
	v->a[58268] = anon_sym_AMP;
	v->a[58269] = anon_sym_SEMI;
	v->a[58270] = actions(744);
	v->a[58271] = 2;
	v->a[58272] = anon_sym_LT_LT;
	v->a[58273] = anon_sym_LT_LT_DASH;
	v->a[58274] = actions(955);
	v->a[58275] = 2;
	v->a[58276] = anon_sym_AMP_AMP;
	v->a[58277] = anon_sym_PIPE_PIPE;
	v->a[58278] = state(1194);
	v->a[58279] = 3;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = sym_file_redirect;
	v->a[58281] = sym_heredoc_redirect;
	v->a[58282] = aux_sym_redirected_statement_repeat1;
	v->a[58283] = actions(1887);
	v->a[58284] = 7;
	v->a[58285] = anon_sym_LT;
	v->a[58286] = anon_sym_GT;
	v->a[58287] = anon_sym_GT_GT;
	v->a[58288] = anon_sym_LT_AMP;
	v->a[58289] = anon_sym_GT_AMP;
	v->a[58290] = anon_sym_GT_PIPE;
	v->a[58291] = anon_sym_LT_GT;
	v->a[58292] = 5;
	v->a[58293] = actions(3);
	v->a[58294] = 1;
	v->a[58295] = sym_comment;
	v->a[58296] = actions(1921);
	v->a[58297] = 1;
	v->a[58298] = sym_variable_name;
	v->a[58299] = actions(1908);
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
