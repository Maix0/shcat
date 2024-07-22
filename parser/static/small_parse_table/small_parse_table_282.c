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
	v->a[28200] = actions(361);
	v->a[28201] = 20;
	v->a[28202] = anon_sym_PIPE;
	v->a[28203] = anon_sym_AMP_AMP;
	v->a[28204] = anon_sym_PIPE_PIPE;
	v->a[28205] = anon_sym_LT;
	v->a[28206] = anon_sym_GT;
	v->a[28207] = anon_sym_GT_GT;
	v->a[28208] = anon_sym_LT_AMP;
	v->a[28209] = anon_sym_GT_AMP;
	v->a[28210] = anon_sym_GT_PIPE;
	v->a[28211] = anon_sym_LT_GT;
	v->a[28212] = anon_sym_LT_LT;
	v->a[28213] = anon_sym_LT_LT_DASH;
	v->a[28214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28215] = anon_sym_DQUOTE;
	v->a[28216] = sym_raw_string;
	v->a[28217] = sym_number;
	v->a[28218] = anon_sym_DOLLAR_LBRACE;
	v->a[28219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = anon_sym_BQUOTE;
	v->a[28221] = sym_word;
	v->a[28222] = 12;
	v->a[28223] = actions(3);
	v->a[28224] = 1;
	v->a[28225] = sym_comment;
	v->a[28226] = actions(782);
	v->a[28227] = 1;
	v->a[28228] = anon_sym_PIPE;
	v->a[28229] = actions(784);
	v->a[28230] = 1;
	v->a[28231] = anon_sym_SEMI_SEMI;
	v->a[28232] = actions(792);
	v->a[28233] = 1;
	v->a[28234] = sym_file_descriptor;
	v->a[28235] = actions(1030);
	v->a[28236] = 1;
	v->a[28237] = sym_variable_name;
	v->a[28238] = state(567);
	v->a[28239] = 1;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = sym_terminator;
	v->a[28241] = actions(786);
	v->a[28242] = 2;
	v->a[28243] = aux_sym_heredoc_redirect_token1;
	v->a[28244] = anon_sym_SEMI;
	v->a[28245] = actions(790);
	v->a[28246] = 2;
	v->a[28247] = anon_sym_LT_LT;
	v->a[28248] = anon_sym_LT_LT_DASH;
	v->a[28249] = actions(1028);
	v->a[28250] = 2;
	v->a[28251] = anon_sym_AMP_AMP;
	v->a[28252] = anon_sym_PIPE_PIPE;
	v->a[28253] = state(1137);
	v->a[28254] = 2;
	v->a[28255] = sym_variable_assignment;
	v->a[28256] = aux_sym__variable_assignments_repeat1;
	v->a[28257] = state(1194);
	v->a[28258] = 3;
	v->a[28259] = sym_file_redirect;
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = sym_heredoc_redirect;
	v->a[28261] = aux_sym_redirected_statement_repeat1;
	v->a[28262] = actions(780);
	v->a[28263] = 16;
	v->a[28264] = anon_sym_LT;
	v->a[28265] = anon_sym_GT;
	v->a[28266] = anon_sym_GT_GT;
	v->a[28267] = anon_sym_LT_AMP;
	v->a[28268] = anon_sym_GT_AMP;
	v->a[28269] = anon_sym_GT_PIPE;
	v->a[28270] = anon_sym_LT_GT;
	v->a[28271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28272] = anon_sym_DOLLAR;
	v->a[28273] = anon_sym_DQUOTE;
	v->a[28274] = sym_raw_string;
	v->a[28275] = sym_number;
	v->a[28276] = anon_sym_DOLLAR_LBRACE;
	v->a[28277] = anon_sym_DOLLAR_LPAREN;
	v->a[28278] = anon_sym_BQUOTE;
	v->a[28279] = sym_word;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = 8;
	v->a[28281] = actions(3);
	v->a[28282] = 1;
	v->a[28283] = sym_comment;
	v->a[28284] = actions(782);
	v->a[28285] = 1;
	v->a[28286] = anon_sym_PIPE;
	v->a[28287] = actions(792);
	v->a[28288] = 1;
	v->a[28289] = sym_file_descriptor;
	v->a[28290] = actions(888);
	v->a[28291] = 1;
	v->a[28292] = sym_variable_name;
	v->a[28293] = state(1092);
	v->a[28294] = 2;
	v->a[28295] = sym_variable_assignment;
	v->a[28296] = aux_sym__variable_assignments_repeat1;
	v->a[28297] = state(1099);
	v->a[28298] = 3;
	v->a[28299] = sym_file_redirect;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
