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
	v->a[28200] = sym_file_redirect;
	v->a[28201] = sym_heredoc_redirect;
	v->a[28202] = aux_sym_redirected_statement_repeat1;
	v->a[28203] = actions(809);
	v->a[28204] = 8;
	v->a[28205] = anon_sym_SEMI_SEMI;
	v->a[28206] = anon_sym_AMP_AMP;
	v->a[28207] = anon_sym_PIPE_PIPE;
	v->a[28208] = anon_sym_LT_LT;
	v->a[28209] = anon_sym_LT_LT_DASH;
	v->a[28210] = aux_sym_heredoc_redirect_token1;
	v->a[28211] = anon_sym_AMP;
	v->a[28212] = anon_sym_SEMI;
	v->a[28213] = actions(805);
	v->a[28214] = 19;
	v->a[28215] = anon_sym_LT;
	v->a[28216] = anon_sym_GT;
	v->a[28217] = anon_sym_GT_GT;
	v->a[28218] = anon_sym_AMP_GT;
	v->a[28219] = anon_sym_AMP_GT_GT;
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = anon_sym_LT_AMP;
	v->a[28221] = anon_sym_GT_AMP;
	v->a[28222] = anon_sym_GT_PIPE;
	v->a[28223] = anon_sym_LT_AMP_DASH;
	v->a[28224] = anon_sym_GT_AMP_DASH;
	v->a[28225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28226] = anon_sym_DOLLAR;
	v->a[28227] = anon_sym_DQUOTE;
	v->a[28228] = sym_raw_string;
	v->a[28229] = sym_number;
	v->a[28230] = anon_sym_DOLLAR_LBRACE;
	v->a[28231] = anon_sym_DOLLAR_LPAREN;
	v->a[28232] = anon_sym_BQUOTE;
	v->a[28233] = sym_word;
	v->a[28234] = 3;
	v->a[28235] = actions(3);
	v->a[28236] = 1;
	v->a[28237] = sym_comment;
	v->a[28238] = actions(1076);
	v->a[28239] = 3;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = sym_file_descriptor;
	v->a[28241] = sym__concat;
	v->a[28242] = sym__bare_dollar;
	v->a[28243] = actions(1074);
	v->a[28244] = 31;
	v->a[28245] = anon_sym_LPAREN;
	v->a[28246] = anon_sym_PIPE;
	v->a[28247] = anon_sym_RPAREN;
	v->a[28248] = anon_sym_SEMI_SEMI;
	v->a[28249] = anon_sym_AMP_AMP;
	v->a[28250] = anon_sym_PIPE_PIPE;
	v->a[28251] = anon_sym_LT;
	v->a[28252] = anon_sym_GT;
	v->a[28253] = anon_sym_GT_GT;
	v->a[28254] = anon_sym_AMP_GT;
	v->a[28255] = anon_sym_AMP_GT_GT;
	v->a[28256] = anon_sym_LT_AMP;
	v->a[28257] = anon_sym_GT_AMP;
	v->a[28258] = anon_sym_GT_PIPE;
	v->a[28259] = anon_sym_LT_AMP_DASH;
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = anon_sym_GT_AMP_DASH;
	v->a[28261] = anon_sym_LT_LT;
	v->a[28262] = anon_sym_LT_LT_DASH;
	v->a[28263] = aux_sym_heredoc_redirect_token1;
	v->a[28264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28265] = anon_sym_AMP;
	v->a[28266] = aux_sym_concatenation_token1;
	v->a[28267] = anon_sym_DOLLAR;
	v->a[28268] = anon_sym_DQUOTE;
	v->a[28269] = sym_raw_string;
	v->a[28270] = sym_number;
	v->a[28271] = anon_sym_DOLLAR_LBRACE;
	v->a[28272] = anon_sym_DOLLAR_LPAREN;
	v->a[28273] = anon_sym_BQUOTE;
	v->a[28274] = sym_word;
	v->a[28275] = anon_sym_SEMI;
	v->a[28276] = 3;
	v->a[28277] = actions(3);
	v->a[28278] = 1;
	v->a[28279] = sym_comment;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = actions(1076);
	v->a[28281] = 4;
	v->a[28282] = sym_file_descriptor;
	v->a[28283] = sym__concat;
	v->a[28284] = sym__bare_dollar;
	v->a[28285] = ts_builtin_sym_end;
	v->a[28286] = actions(1074);
	v->a[28287] = 30;
	v->a[28288] = anon_sym_LPAREN;
	v->a[28289] = anon_sym_PIPE;
	v->a[28290] = anon_sym_SEMI_SEMI;
	v->a[28291] = anon_sym_AMP_AMP;
	v->a[28292] = anon_sym_PIPE_PIPE;
	v->a[28293] = anon_sym_LT;
	v->a[28294] = anon_sym_GT;
	v->a[28295] = anon_sym_GT_GT;
	v->a[28296] = anon_sym_AMP_GT;
	v->a[28297] = anon_sym_AMP_GT_GT;
	v->a[28298] = anon_sym_LT_AMP;
	v->a[28299] = anon_sym_GT_AMP;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
