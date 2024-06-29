/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_252.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1260(t_small_parse_table_array *v)
{
	v->a[25200] = state(1256);
	v->a[25201] = 3;
	v->a[25202] = sym_file_redirect;
	v->a[25203] = sym_heredoc_redirect;
	v->a[25204] = aux_sym_redirected_statement_repeat1;
	v->a[25205] = actions(800);
	v->a[25206] = 4;
	v->a[25207] = anon_sym_SEMI_SEMI;
	v->a[25208] = aux_sym_heredoc_redirect_token1;
	v->a[25209] = anon_sym_AMP;
	v->a[25210] = anon_sym_SEMI;
	v->a[25211] = actions(762);
	v->a[25212] = 19;
	v->a[25213] = anon_sym_LT;
	v->a[25214] = anon_sym_GT;
	v->a[25215] = anon_sym_GT_GT;
	v->a[25216] = anon_sym_AMP_GT;
	v->a[25217] = anon_sym_AMP_GT_GT;
	v->a[25218] = anon_sym_LT_AMP;
	v->a[25219] = anon_sym_GT_AMP;
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = anon_sym_GT_PIPE;
	v->a[25221] = anon_sym_LT_AMP_DASH;
	v->a[25222] = anon_sym_GT_AMP_DASH;
	v->a[25223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25224] = anon_sym_DOLLAR;
	v->a[25225] = anon_sym_DQUOTE;
	v->a[25226] = sym_raw_string;
	v->a[25227] = sym_number;
	v->a[25228] = anon_sym_DOLLAR_LBRACE;
	v->a[25229] = anon_sym_DOLLAR_LPAREN;
	v->a[25230] = anon_sym_BQUOTE;
	v->a[25231] = sym_word;
	v->a[25232] = 12;
	v->a[25233] = actions(3);
	v->a[25234] = 1;
	v->a[25235] = sym_comment;
	v->a[25236] = actions(764);
	v->a[25237] = 1;
	v->a[25238] = anon_sym_BQUOTE;
	v->a[25239] = actions(766);
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = 1;
	v->a[25241] = anon_sym_PIPE;
	v->a[25242] = actions(774);
	v->a[25243] = 1;
	v->a[25244] = sym_file_descriptor;
	v->a[25245] = actions(844);
	v->a[25246] = 1;
	v->a[25247] = sym_variable_name;
	v->a[25248] = state(848);
	v->a[25249] = 1;
	v->a[25250] = sym_terminator;
	v->a[25251] = actions(804);
	v->a[25252] = 2;
	v->a[25253] = anon_sym_LT_LT;
	v->a[25254] = anon_sym_LT_LT_DASH;
	v->a[25255] = actions(842);
	v->a[25256] = 2;
	v->a[25257] = anon_sym_AMP_AMP;
	v->a[25258] = anon_sym_PIPE_PIPE;
	v->a[25259] = state(1142);
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = 2;
	v->a[25261] = sym_variable_assignment;
	v->a[25262] = aux_sym__variable_assignments_repeat1;
	v->a[25263] = state(1157);
	v->a[25264] = 3;
	v->a[25265] = sym_file_redirect;
	v->a[25266] = sym_heredoc_redirect;
	v->a[25267] = aux_sym_redirected_statement_repeat1;
	v->a[25268] = actions(800);
	v->a[25269] = 4;
	v->a[25270] = anon_sym_SEMI_SEMI;
	v->a[25271] = aux_sym_heredoc_redirect_token1;
	v->a[25272] = anon_sym_AMP;
	v->a[25273] = anon_sym_SEMI;
	v->a[25274] = actions(762);
	v->a[25275] = 18;
	v->a[25276] = anon_sym_LT;
	v->a[25277] = anon_sym_GT;
	v->a[25278] = anon_sym_GT_GT;
	v->a[25279] = anon_sym_AMP_GT;
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = anon_sym_AMP_GT_GT;
	v->a[25281] = anon_sym_LT_AMP;
	v->a[25282] = anon_sym_GT_AMP;
	v->a[25283] = anon_sym_GT_PIPE;
	v->a[25284] = anon_sym_LT_AMP_DASH;
	v->a[25285] = anon_sym_GT_AMP_DASH;
	v->a[25286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25287] = anon_sym_DOLLAR;
	v->a[25288] = anon_sym_DQUOTE;
	v->a[25289] = sym_raw_string;
	v->a[25290] = sym_number;
	v->a[25291] = anon_sym_DOLLAR_LBRACE;
	v->a[25292] = anon_sym_DOLLAR_LPAREN;
	v->a[25293] = sym_word;
	v->a[25294] = 7;
	v->a[25295] = actions(3);
	v->a[25296] = 1;
	v->a[25297] = sym_comment;
	v->a[25298] = actions(806);
	v->a[25299] = 1;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
