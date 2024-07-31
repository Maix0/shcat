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
	v->a[46200] = aux_sym_heredoc_redirect_token1;
	v->a[46201] = state(629);
	v->a[46202] = 1;
	v->a[46203] = sym_terminator;
	v->a[46204] = actions(850);
	v->a[46205] = 2;
	v->a[46206] = anon_sym_LT_LT;
	v->a[46207] = anon_sym_LT_LT_DASH;
	v->a[46208] = actions(858);
	v->a[46209] = 2;
	v->a[46210] = anon_sym_SEMI_SEMI;
	v->a[46211] = anon_sym_SEMI;
	v->a[46212] = actions(909);
	v->a[46213] = 2;
	v->a[46214] = anon_sym_AMP_AMP;
	v->a[46215] = anon_sym_PIPE_PIPE;
	v->a[46216] = state(970);
	v->a[46217] = 3;
	v->a[46218] = sym_file_redirect;
	v->a[46219] = sym_heredoc_redirect;
	small_parse_table_2311(v);
}

void	small_parse_table_2311(t_small_parse_table_array *v)
{
	v->a[46220] = aux_sym_redirected_statement_repeat1;
	v->a[46221] = actions(1589);
	v->a[46222] = 7;
	v->a[46223] = anon_sym_LT;
	v->a[46224] = anon_sym_GT;
	v->a[46225] = anon_sym_GT_GT;
	v->a[46226] = anon_sym_LT_AMP;
	v->a[46227] = anon_sym_GT_AMP;
	v->a[46228] = anon_sym_GT_PIPE;
	v->a[46229] = anon_sym_LT_GT;
	v->a[46230] = 10;
	v->a[46231] = actions(3);
	v->a[46232] = 1;
	v->a[46233] = sym_comment;
	v->a[46234] = actions(746);
	v->a[46235] = 1;
	v->a[46236] = anon_sym_PIPE;
	v->a[46237] = actions(842);
	v->a[46238] = 1;
	v->a[46239] = anon_sym_BQUOTE;
	small_parse_table_2312(v);
}

void	small_parse_table_2312(t_small_parse_table_array *v)
{
	v->a[46240] = actions(1591);
	v->a[46241] = 1;
	v->a[46242] = aux_sym_heredoc_redirect_token1;
	v->a[46243] = state(655);
	v->a[46244] = 1;
	v->a[46245] = sym_terminator;
	v->a[46246] = actions(850);
	v->a[46247] = 2;
	v->a[46248] = anon_sym_LT_LT;
	v->a[46249] = anon_sym_LT_LT_DASH;
	v->a[46250] = actions(858);
	v->a[46251] = 2;
	v->a[46252] = anon_sym_SEMI_SEMI;
	v->a[46253] = anon_sym_SEMI;
	v->a[46254] = actions(909);
	v->a[46255] = 2;
	v->a[46256] = anon_sym_AMP_AMP;
	v->a[46257] = anon_sym_PIPE_PIPE;
	v->a[46258] = state(970);
	v->a[46259] = 3;
	small_parse_table_2313(v);
}

void	small_parse_table_2313(t_small_parse_table_array *v)
{
	v->a[46260] = sym_file_redirect;
	v->a[46261] = sym_heredoc_redirect;
	v->a[46262] = aux_sym_redirected_statement_repeat1;
	v->a[46263] = actions(1589);
	v->a[46264] = 7;
	v->a[46265] = anon_sym_LT;
	v->a[46266] = anon_sym_GT;
	v->a[46267] = anon_sym_GT_GT;
	v->a[46268] = anon_sym_LT_AMP;
	v->a[46269] = anon_sym_GT_AMP;
	v->a[46270] = anon_sym_GT_PIPE;
	v->a[46271] = anon_sym_LT_GT;
	v->a[46272] = 6;
	v->a[46273] = actions(3);
	v->a[46274] = 1;
	v->a[46275] = sym_comment;
	v->a[46276] = actions(1001);
	v->a[46277] = 1;
	v->a[46278] = sym_variable_name;
	v->a[46279] = actions(1621);
	small_parse_table_2314(v);
}

void	small_parse_table_2314(t_small_parse_table_array *v)
{
	v->a[46280] = 1;
	v->a[46281] = aux_sym_concatenation_token1;
	v->a[46282] = actions(1637);
	v->a[46283] = 1;
	v->a[46284] = sym__concat;
	v->a[46285] = state(845);
	v->a[46286] = 1;
	v->a[46287] = aux_sym_concatenation_repeat1;
	v->a[46288] = actions(997);
	v->a[46289] = 16;
	v->a[46290] = anon_sym_LT;
	v->a[46291] = anon_sym_GT;
	v->a[46292] = anon_sym_GT_GT;
	v->a[46293] = anon_sym_LT_AMP;
	v->a[46294] = anon_sym_GT_AMP;
	v->a[46295] = anon_sym_GT_PIPE;
	v->a[46296] = anon_sym_LT_GT;
	v->a[46297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46298] = anon_sym_DOLLAR;
	v->a[46299] = anon_sym_DQUOTE;
	small_parse_table_2315(v);
}

/* EOF small_parse_table_462.c */
