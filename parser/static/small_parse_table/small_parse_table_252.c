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
	v->a[25200] = anon_sym_GT_GT_EQ;
	v->a[25201] = anon_sym_AMP_EQ;
	v->a[25202] = anon_sym_CARET_EQ;
	v->a[25203] = anon_sym_PIPE_EQ;
	v->a[25204] = anon_sym_EQ_EQ;
	v->a[25205] = anon_sym_BANG_EQ;
	v->a[25206] = anon_sym_LT_EQ;
	v->a[25207] = anon_sym_GT_EQ;
	v->a[25208] = anon_sym_QMARK;
	v->a[25209] = anon_sym_COLON;
	v->a[25210] = 3;
	v->a[25211] = actions(870);
	v->a[25212] = 1;
	v->a[25213] = sym_comment;
	v->a[25214] = actions(972);
	v->a[25215] = 13;
	v->a[25216] = anon_sym_PIPE;
	v->a[25217] = anon_sym_EQ;
	v->a[25218] = anon_sym_LT;
	v->a[25219] = anon_sym_GT;
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = anon_sym_GT_GT;
	v->a[25221] = anon_sym_LT_LT;
	v->a[25222] = anon_sym_CARET;
	v->a[25223] = anon_sym_AMP;
	v->a[25224] = anon_sym_PLUS;
	v->a[25225] = anon_sym_DASH;
	v->a[25226] = anon_sym_STAR;
	v->a[25227] = anon_sym_SLASH;
	v->a[25228] = anon_sym_PERCENT;
	v->a[25229] = actions(974);
	v->a[25230] = 21;
	v->a[25231] = anon_sym_AMP_AMP;
	v->a[25232] = anon_sym_PIPE_PIPE;
	v->a[25233] = anon_sym_RPAREN_RPAREN;
	v->a[25234] = anon_sym_PLUS_EQ;
	v->a[25235] = anon_sym_DASH_EQ;
	v->a[25236] = anon_sym_STAR_EQ;
	v->a[25237] = anon_sym_SLASH_EQ;
	v->a[25238] = anon_sym_PERCENT_EQ;
	v->a[25239] = anon_sym_LT_LT_EQ;
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = anon_sym_GT_GT_EQ;
	v->a[25241] = anon_sym_AMP_EQ;
	v->a[25242] = anon_sym_CARET_EQ;
	v->a[25243] = anon_sym_PIPE_EQ;
	v->a[25244] = anon_sym_EQ_EQ;
	v->a[25245] = anon_sym_BANG_EQ;
	v->a[25246] = anon_sym_LT_EQ;
	v->a[25247] = anon_sym_GT_EQ;
	v->a[25248] = anon_sym_QMARK;
	v->a[25249] = anon_sym_COLON;
	v->a[25250] = anon_sym_PLUS_PLUS2;
	v->a[25251] = anon_sym_DASH_DASH2;
	v->a[25252] = 7;
	v->a[25253] = actions(3);
	v->a[25254] = 1;
	v->a[25255] = sym_comment;
	v->a[25256] = actions(785);
	v->a[25257] = 1;
	v->a[25258] = sym_variable_name;
	v->a[25259] = actions(976);
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = 2;
	v->a[25261] = sym_file_descriptor;
	v->a[25262] = ts_builtin_sym_end;
	v->a[25263] = state(1155);
	v->a[25264] = 2;
	v->a[25265] = sym_variable_assignment;
	v->a[25266] = aux_sym__variable_assignments_repeat1;
	v->a[25267] = state(1160);
	v->a[25268] = 3;
	v->a[25269] = sym_file_redirect;
	v->a[25270] = sym_heredoc_redirect;
	v->a[25271] = aux_sym_redirected_statement_repeat1;
	v->a[25272] = actions(678);
	v->a[25273] = 9;
	v->a[25274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25275] = anon_sym_DOLLAR;
	v->a[25276] = anon_sym_DQUOTE;
	v->a[25277] = sym_raw_string;
	v->a[25278] = sym_number;
	v->a[25279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = anon_sym_DOLLAR_LPAREN;
	v->a[25281] = anon_sym_BQUOTE;
	v->a[25282] = sym_word;
	v->a[25283] = actions(682);
	v->a[25284] = 17;
	v->a[25285] = anon_sym_PIPE;
	v->a[25286] = anon_sym_SEMI_SEMI;
	v->a[25287] = anon_sym_AMP_AMP;
	v->a[25288] = anon_sym_PIPE_PIPE;
	v->a[25289] = anon_sym_LT;
	v->a[25290] = anon_sym_GT;
	v->a[25291] = anon_sym_GT_GT;
	v->a[25292] = anon_sym_LT_AMP;
	v->a[25293] = anon_sym_GT_AMP;
	v->a[25294] = anon_sym_GT_PIPE;
	v->a[25295] = anon_sym_LT_AMP_DASH;
	v->a[25296] = anon_sym_GT_AMP_DASH;
	v->a[25297] = anon_sym_LT_LT;
	v->a[25298] = anon_sym_LT_LT_DASH;
	v->a[25299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
