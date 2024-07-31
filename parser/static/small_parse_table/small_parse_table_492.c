/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_492.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2460(t_small_parse_table_array *v)
{
	v->a[49200] = 1;
	v->a[49201] = anon_sym_SEMI;
	v->a[49202] = actions(1591);
	v->a[49203] = 1;
	v->a[49204] = aux_sym_heredoc_redirect_token1;
	v->a[49205] = state(518);
	v->a[49206] = 1;
	v->a[49207] = sym_terminator;
	v->a[49208] = actions(850);
	v->a[49209] = 2;
	v->a[49210] = anon_sym_LT_LT;
	v->a[49211] = anon_sym_LT_LT_DASH;
	v->a[49212] = actions(898);
	v->a[49213] = 2;
	v->a[49214] = anon_sym_AMP_AMP;
	v->a[49215] = anon_sym_PIPE_PIPE;
	v->a[49216] = state(984);
	v->a[49217] = 3;
	v->a[49218] = sym_file_redirect;
	v->a[49219] = sym_heredoc_redirect;
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = aux_sym_redirected_statement_repeat1;
	v->a[49221] = actions(1676);
	v->a[49222] = 7;
	v->a[49223] = anon_sym_LT;
	v->a[49224] = anon_sym_GT;
	v->a[49225] = anon_sym_GT_GT;
	v->a[49226] = anon_sym_LT_AMP;
	v->a[49227] = anon_sym_GT_AMP;
	v->a[49228] = anon_sym_GT_PIPE;
	v->a[49229] = anon_sym_LT_GT;
	v->a[49230] = 9;
	v->a[49231] = actions(3);
	v->a[49232] = 1;
	v->a[49233] = sym_comment;
	v->a[49234] = actions(744);
	v->a[49235] = 1;
	v->a[49236] = anon_sym_RPAREN;
	v->a[49237] = actions(1591);
	v->a[49238] = 1;
	v->a[49239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = state(465);
	v->a[49241] = 1;
	v->a[49242] = sym_terminator;
	v->a[49243] = actions(850);
	v->a[49244] = 2;
	v->a[49245] = anon_sym_LT_LT;
	v->a[49246] = anon_sym_LT_LT_DASH;
	v->a[49247] = actions(858);
	v->a[49248] = 2;
	v->a[49249] = anon_sym_SEMI_SEMI;
	v->a[49250] = anon_sym_SEMI;
	v->a[49251] = actions(860);
	v->a[49252] = 2;
	v->a[49253] = anon_sym_AMP_AMP;
	v->a[49254] = anon_sym_PIPE_PIPE;
	v->a[49255] = state(918);
	v->a[49256] = 3;
	v->a[49257] = sym_file_redirect;
	v->a[49258] = sym_heredoc_redirect;
	v->a[49259] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = actions(1597);
	v->a[49261] = 7;
	v->a[49262] = anon_sym_LT;
	v->a[49263] = anon_sym_GT;
	v->a[49264] = anon_sym_GT_GT;
	v->a[49265] = anon_sym_LT_AMP;
	v->a[49266] = anon_sym_GT_AMP;
	v->a[49267] = anon_sym_GT_PIPE;
	v->a[49268] = anon_sym_LT_GT;
	v->a[49269] = 6;
	v->a[49270] = actions(3);
	v->a[49271] = 1;
	v->a[49272] = sym_comment;
	v->a[49273] = actions(1686);
	v->a[49274] = 1;
	v->a[49275] = aux_sym_heredoc_redirect_token1;
	v->a[49276] = actions(1683);
	v->a[49277] = 2;
	v->a[49278] = anon_sym_LT_LT;
	v->a[49279] = anon_sym_LT_LT_DASH;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = state(912);
	v->a[49281] = 3;
	v->a[49282] = sym_file_redirect;
	v->a[49283] = sym_heredoc_redirect;
	v->a[49284] = aux_sym_redirected_statement_repeat1;
	v->a[49285] = actions(1678);
	v->a[49286] = 6;
	v->a[49287] = anon_sym_PIPE;
	v->a[49288] = anon_sym_RPAREN;
	v->a[49289] = anon_sym_SEMI_SEMI;
	v->a[49290] = anon_sym_AMP_AMP;
	v->a[49291] = anon_sym_PIPE_PIPE;
	v->a[49292] = anon_sym_SEMI;
	v->a[49293] = actions(1680);
	v->a[49294] = 7;
	v->a[49295] = anon_sym_LT;
	v->a[49296] = anon_sym_GT;
	v->a[49297] = anon_sym_GT_GT;
	v->a[49298] = anon_sym_LT_AMP;
	v->a[49299] = anon_sym_GT_AMP;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
