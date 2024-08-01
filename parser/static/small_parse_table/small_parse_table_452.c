/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_452.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2260(t_small_parse_table_array *v)
{
	v->a[45200] = anon_sym_GT;
	v->a[45201] = anon_sym_GT_GT;
	v->a[45202] = state(1040);
	v->a[45203] = 3;
	v->a[45204] = sym_file_redirect;
	v->a[45205] = sym_heredoc_redirect;
	v->a[45206] = aux_sym_redirected_statement_repeat1;
	v->a[45207] = 5;
	v->a[45208] = actions(3);
	v->a[45209] = 1;
	v->a[45210] = sym_comment;
	v->a[45211] = actions(580);
	v->a[45212] = 1;
	v->a[45213] = anon_sym_PIPE;
	v->a[45214] = actions(827);
	v->a[45215] = 2;
	v->a[45216] = ts_builtin_sym_end;
	v->a[45217] = aux_sym_heredoc_redirect_token1;
	v->a[45218] = state(922);
	v->a[45219] = 3;
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = sym_file_redirect;
	v->a[45221] = sym_heredoc_redirect;
	v->a[45222] = aux_sym_redirected_statement_repeat1;
	v->a[45223] = actions(816);
	v->a[45224] = 8;
	v->a[45225] = anon_sym_SEMI_SEMI;
	v->a[45226] = anon_sym_AMP_AMP;
	v->a[45227] = anon_sym_PIPE_PIPE;
	v->a[45228] = anon_sym_LT;
	v->a[45229] = anon_sym_GT;
	v->a[45230] = anon_sym_GT_GT;
	v->a[45231] = anon_sym_LT_LT;
	v->a[45232] = anon_sym_SEMI;
	v->a[45233] = 4;
	v->a[45234] = actions(3);
	v->a[45235] = 1;
	v->a[45236] = sym_comment;
	v->a[45237] = actions(827);
	v->a[45238] = 2;
	v->a[45239] = ts_builtin_sym_end;
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = aux_sym_heredoc_redirect_token1;
	v->a[45241] = state(922);
	v->a[45242] = 3;
	v->a[45243] = sym_file_redirect;
	v->a[45244] = sym_heredoc_redirect;
	v->a[45245] = aux_sym_redirected_statement_repeat1;
	v->a[45246] = actions(816);
	v->a[45247] = 9;
	v->a[45248] = anon_sym_PIPE;
	v->a[45249] = anon_sym_SEMI_SEMI;
	v->a[45250] = anon_sym_AMP_AMP;
	v->a[45251] = anon_sym_PIPE_PIPE;
	v->a[45252] = anon_sym_LT;
	v->a[45253] = anon_sym_GT;
	v->a[45254] = anon_sym_GT_GT;
	v->a[45255] = anon_sym_LT_LT;
	v->a[45256] = anon_sym_SEMI;
	v->a[45257] = 9;
	v->a[45258] = actions(3);
	v->a[45259] = 1;
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = sym_comment;
	v->a[45261] = actions(580);
	v->a[45262] = 1;
	v->a[45263] = anon_sym_PIPE;
	v->a[45264] = actions(597);
	v->a[45265] = 1;
	v->a[45266] = anon_sym_LT_LT;
	v->a[45267] = actions(1983);
	v->a[45268] = 1;
	v->a[45269] = aux_sym_heredoc_redirect_token1;
	v->a[45270] = state(469);
	v->a[45271] = 1;
	v->a[45272] = sym_terminator;
	v->a[45273] = actions(769);
	v->a[45274] = 2;
	v->a[45275] = anon_sym_AMP_AMP;
	v->a[45276] = anon_sym_PIPE_PIPE;
	v->a[45277] = actions(831);
	v->a[45278] = 2;
	v->a[45279] = anon_sym_SEMI_SEMI;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = anon_sym_SEMI;
	v->a[45281] = actions(1924);
	v->a[45282] = 3;
	v->a[45283] = anon_sym_LT;
	v->a[45284] = anon_sym_GT;
	v->a[45285] = anon_sym_GT_GT;
	v->a[45286] = state(1040);
	v->a[45287] = 3;
	v->a[45288] = sym_file_redirect;
	v->a[45289] = sym_heredoc_redirect;
	v->a[45290] = aux_sym_redirected_statement_repeat1;
	v->a[45291] = 9;
	v->a[45292] = actions(3);
	v->a[45293] = 1;
	v->a[45294] = sym_comment;
	v->a[45295] = actions(584);
	v->a[45296] = 1;
	v->a[45297] = anon_sym_LT_LT;
	v->a[45298] = actions(586);
	v->a[45299] = 1;
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
