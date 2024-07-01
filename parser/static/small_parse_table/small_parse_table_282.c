/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_282.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1410(t_small_parse_table_array *v)
{
	v->a[28200] = anon_sym_LT_LT;
	v->a[28201] = anon_sym_LT_LT_DASH;
	v->a[28202] = aux_sym_heredoc_redirect_token1;
	v->a[28203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28204] = anon_sym_AMP;
	v->a[28205] = anon_sym_DOLLAR;
	v->a[28206] = anon_sym_DQUOTE;
	v->a[28207] = sym_raw_string;
	v->a[28208] = sym_number;
	v->a[28209] = anon_sym_DOLLAR_LBRACE;
	v->a[28210] = anon_sym_DOLLAR_LPAREN;
	v->a[28211] = anon_sym_BQUOTE;
	v->a[28212] = sym_word;
	v->a[28213] = anon_sym_SEMI;
	v->a[28214] = 3;
	v->a[28215] = actions(870);
	v->a[28216] = 1;
	v->a[28217] = sym_comment;
	v->a[28218] = actions(1031);
	v->a[28219] = 13;
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = anon_sym_PIPE;
	v->a[28221] = anon_sym_EQ;
	v->a[28222] = anon_sym_LT;
	v->a[28223] = anon_sym_GT;
	v->a[28224] = anon_sym_GT_GT;
	v->a[28225] = anon_sym_LT_LT;
	v->a[28226] = anon_sym_CARET;
	v->a[28227] = anon_sym_AMP;
	v->a[28228] = anon_sym_PLUS;
	v->a[28229] = anon_sym_DASH;
	v->a[28230] = anon_sym_STAR;
	v->a[28231] = anon_sym_SLASH;
	v->a[28232] = anon_sym_PERCENT;
	v->a[28233] = actions(1033);
	v->a[28234] = 20;
	v->a[28235] = anon_sym_RPAREN;
	v->a[28236] = anon_sym_AMP_AMP;
	v->a[28237] = anon_sym_PIPE_PIPE;
	v->a[28238] = anon_sym_PLUS_EQ;
	v->a[28239] = anon_sym_DASH_EQ;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = anon_sym_STAR_EQ;
	v->a[28241] = anon_sym_SLASH_EQ;
	v->a[28242] = anon_sym_PERCENT_EQ;
	v->a[28243] = anon_sym_LT_LT_EQ;
	v->a[28244] = anon_sym_GT_GT_EQ;
	v->a[28245] = anon_sym_AMP_EQ;
	v->a[28246] = anon_sym_CARET_EQ;
	v->a[28247] = anon_sym_PIPE_EQ;
	v->a[28248] = anon_sym_EQ_EQ;
	v->a[28249] = anon_sym_BANG_EQ;
	v->a[28250] = anon_sym_LT_EQ;
	v->a[28251] = anon_sym_GT_EQ;
	v->a[28252] = anon_sym_QMARK;
	v->a[28253] = anon_sym_PLUS_PLUS2;
	v->a[28254] = anon_sym_DASH_DASH2;
	v->a[28255] = 7;
	v->a[28256] = actions(3);
	v->a[28257] = 1;
	v->a[28258] = sym_comment;
	v->a[28259] = actions(965);
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = 1;
	v->a[28261] = sym_variable_name;
	v->a[28262] = actions(976);
	v->a[28263] = 1;
	v->a[28264] = sym_file_descriptor;
	v->a[28265] = state(1181);
	v->a[28266] = 2;
	v->a[28267] = sym_variable_assignment;
	v->a[28268] = aux_sym__variable_assignments_repeat1;
	v->a[28269] = state(1165);
	v->a[28270] = 3;
	v->a[28271] = sym_file_redirect;
	v->a[28272] = sym_heredoc_redirect;
	v->a[28273] = aux_sym_redirected_statement_repeat1;
	v->a[28274] = actions(678);
	v->a[28275] = 8;
	v->a[28276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28277] = anon_sym_DOLLAR;
	v->a[28278] = anon_sym_DQUOTE;
	v->a[28279] = sym_raw_string;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = sym_number;
	v->a[28281] = anon_sym_DOLLAR_LBRACE;
	v->a[28282] = anon_sym_DOLLAR_LPAREN;
	v->a[28283] = sym_word;
	v->a[28284] = actions(682);
	v->a[28285] = 18;
	v->a[28286] = anon_sym_PIPE;
	v->a[28287] = anon_sym_SEMI_SEMI;
	v->a[28288] = anon_sym_AMP_AMP;
	v->a[28289] = anon_sym_PIPE_PIPE;
	v->a[28290] = anon_sym_LT;
	v->a[28291] = anon_sym_GT;
	v->a[28292] = anon_sym_GT_GT;
	v->a[28293] = anon_sym_LT_AMP;
	v->a[28294] = anon_sym_GT_AMP;
	v->a[28295] = anon_sym_GT_PIPE;
	v->a[28296] = anon_sym_LT_AMP_DASH;
	v->a[28297] = anon_sym_GT_AMP_DASH;
	v->a[28298] = anon_sym_LT_LT;
	v->a[28299] = anon_sym_LT_LT_DASH;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
