/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_462.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2310(t_small_parse_table_array *v)
{
	v->a[46200] = actions(3);
	v->a[46201] = 1;
	v->a[46202] = sym_comment;
	v->a[46203] = actions(1963);
	v->a[46204] = 1;
	v->a[46205] = aux_sym_heredoc_redirect_token1;
	v->a[46206] = actions(2071);
	v->a[46207] = 1;
	v->a[46208] = sym_variable_name;
	v->a[46209] = state(993);
	v->a[46210] = 2;
	v->a[46211] = sym_variable_assignment;
	v->a[46212] = aux_sym__variable_assignments_repeat1;
	v->a[46213] = actions(1961);
	v->a[46214] = 9;
	v->a[46215] = anon_sym_PIPE;
	v->a[46216] = anon_sym_SEMI_SEMI;
	v->a[46217] = anon_sym_AMP_AMP;
	v->a[46218] = anon_sym_PIPE_PIPE;
	v->a[46219] = anon_sym_LT;
	small_parse_table_2311(v);
}

void	small_parse_table_2311(t_small_parse_table_array *v)
{
	v->a[46220] = anon_sym_GT;
	v->a[46221] = anon_sym_GT_GT;
	v->a[46222] = anon_sym_LT_LT;
	v->a[46223] = anon_sym_SEMI;
	v->a[46224] = 6;
	v->a[46225] = actions(3);
	v->a[46226] = 1;
	v->a[46227] = sym_comment;
	v->a[46228] = actions(2013);
	v->a[46229] = 1;
	v->a[46230] = sym_string_content;
	v->a[46231] = actions(2017);
	v->a[46232] = 1;
	v->a[46233] = sym_variable_name;
	v->a[46234] = actions(2074);
	v->a[46235] = 1;
	v->a[46236] = anon_sym_DQUOTE;
	v->a[46237] = actions(2015);
	v->a[46238] = 2;
	v->a[46239] = aux_sym__simple_variable_name_token1;
	small_parse_table_2312(v);
}

void	small_parse_table_2312(t_small_parse_table_array *v)
{
	v->a[46240] = aux_sym__multiline_variable_name_token1;
	v->a[46241] = actions(2009);
	v->a[46242] = 8;
	v->a[46243] = anon_sym_BANG;
	v->a[46244] = anon_sym_DASH;
	v->a[46245] = anon_sym_STAR;
	v->a[46246] = anon_sym_QMARK;
	v->a[46247] = anon_sym_DOLLAR;
	v->a[46248] = anon_sym_POUND;
	v->a[46249] = anon_sym_AT;
	v->a[46250] = anon_sym_0;
	v->a[46251] = 5;
	v->a[46252] = actions(3);
	v->a[46253] = 1;
	v->a[46254] = sym_comment;
	v->a[46255] = actions(1952);
	v->a[46256] = 1;
	v->a[46257] = aux_sym_heredoc_redirect_token1;
	v->a[46258] = actions(2076);
	v->a[46259] = 1;
	small_parse_table_2313(v);
}

void	small_parse_table_2313(t_small_parse_table_array *v)
{
	v->a[46260] = sym_variable_name;
	v->a[46261] = state(993);
	v->a[46262] = 2;
	v->a[46263] = sym_variable_assignment;
	v->a[46264] = aux_sym__variable_assignments_repeat1;
	v->a[46265] = actions(1954);
	v->a[46266] = 9;
	v->a[46267] = anon_sym_PIPE;
	v->a[46268] = anon_sym_SEMI_SEMI;
	v->a[46269] = anon_sym_AMP_AMP;
	v->a[46270] = anon_sym_PIPE_PIPE;
	v->a[46271] = anon_sym_LT;
	v->a[46272] = anon_sym_GT;
	v->a[46273] = anon_sym_GT_GT;
	v->a[46274] = anon_sym_LT_LT;
	v->a[46275] = anon_sym_SEMI;
	v->a[46276] = 5;
	v->a[46277] = actions(3);
	v->a[46278] = 1;
	v->a[46279] = sym_comment;
	small_parse_table_2314(v);
}

void	small_parse_table_2314(t_small_parse_table_array *v)
{
	v->a[46280] = actions(2078);
	v->a[46281] = 2;
	v->a[46282] = ts_builtin_sym_end;
	v->a[46283] = aux_sym_heredoc_redirect_token1;
	v->a[46284] = state(996);
	v->a[46285] = 2;
	v->a[46286] = sym_file_redirect;
	v->a[46287] = aux_sym_redirected_statement_repeat2;
	v->a[46288] = actions(2082);
	v->a[46289] = 3;
	v->a[46290] = anon_sym_LT;
	v->a[46291] = anon_sym_GT;
	v->a[46292] = anon_sym_GT_GT;
	v->a[46293] = actions(2080);
	v->a[46294] = 6;
	v->a[46295] = anon_sym_PIPE;
	v->a[46296] = anon_sym_SEMI_SEMI;
	v->a[46297] = anon_sym_AMP_AMP;
	v->a[46298] = anon_sym_PIPE_PIPE;
	v->a[46299] = anon_sym_LT_LT;
	small_parse_table_2315(v);
}

/* EOF small_parse_table_462.c */
