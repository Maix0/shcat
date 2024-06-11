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
	v->a[25200] = 1;
	v->a[25201] = sym__heredoc_expression;
	v->a[25202] = actions(874);
	v->a[25203] = 2;
	v->a[25204] = anon_sym_PIPE;
	v->a[25205] = anon_sym_PIPE_AMP;
	v->a[25206] = actions(876);
	v->a[25207] = 2;
	v->a[25208] = anon_sym_AMP_AMP;
	v->a[25209] = anon_sym_PIPE_PIPE;
	v->a[25210] = actions(880);
	v->a[25211] = 2;
	v->a[25212] = anon_sym_LT_AMP_DASH;
	v->a[25213] = anon_sym_GT_AMP_DASH;
	v->a[25214] = state(1723);
	v->a[25215] = 2;
	v->a[25216] = sym_file_redirect;
	v->a[25217] = aux_sym_redirected_statement_repeat2;
	v->a[25218] = actions(872);
	v->a[25219] = 3;
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = sym_raw_string;
	v->a[25221] = sym_number;
	v->a[25222] = sym_word;
	v->a[25223] = state(1944);
	v->a[25224] = 5;
	v->a[25225] = sym_arithmetic_expansion;
	v->a[25226] = sym_string;
	v->a[25227] = sym_simple_expansion;
	v->a[25228] = sym_expansion;
	v->a[25229] = sym_command_substitution;
	v->a[25230] = actions(878);
	v->a[25231] = 8;
	v->a[25232] = anon_sym_LT;
	v->a[25233] = anon_sym_GT;
	v->a[25234] = anon_sym_GT_GT;
	v->a[25235] = anon_sym_AMP_GT;
	v->a[25236] = anon_sym_AMP_GT_GT;
	v->a[25237] = anon_sym_LT_AMP;
	v->a[25238] = anon_sym_GT_AMP;
	v->a[25239] = anon_sym_GT_PIPE;
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = 20;
	v->a[25241] = actions(3);
	v->a[25242] = 1;
	v->a[25243] = sym_comment;
	v->a[25244] = actions(884);
	v->a[25245] = 1;
	v->a[25246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25247] = actions(886);
	v->a[25248] = 1;
	v->a[25249] = anon_sym_DOLLAR;
	v->a[25250] = actions(888);
	v->a[25251] = 1;
	v->a[25252] = anon_sym_DQUOTE;
	v->a[25253] = actions(890);
	v->a[25254] = 1;
	v->a[25255] = anon_sym_DOLLAR_LBRACE;
	v->a[25256] = actions(892);
	v->a[25257] = 1;
	v->a[25258] = anon_sym_DOLLAR_LPAREN;
	v->a[25259] = actions(894);
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = 1;
	v->a[25261] = anon_sym_BQUOTE;
	v->a[25262] = actions(896);
	v->a[25263] = 1;
	v->a[25264] = sym_file_descriptor;
	v->a[25265] = actions(926);
	v->a[25266] = 1;
	v->a[25267] = aux_sym_heredoc_redirect_token1;
	v->a[25268] = state(1724);
	v->a[25269] = 1;
	v->a[25270] = aux_sym__heredoc_command;
	v->a[25271] = state(2098);
	v->a[25272] = 1;
	v->a[25273] = sym_concatenation;
	v->a[25274] = state(2304);
	v->a[25275] = 1;
	v->a[25276] = sym__heredoc_pipeline;
	v->a[25277] = state(2305);
	v->a[25278] = 1;
	v->a[25279] = sym__heredoc_expression;
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = actions(874);
	v->a[25281] = 2;
	v->a[25282] = anon_sym_PIPE;
	v->a[25283] = anon_sym_PIPE_AMP;
	v->a[25284] = actions(876);
	v->a[25285] = 2;
	v->a[25286] = anon_sym_AMP_AMP;
	v->a[25287] = anon_sym_PIPE_PIPE;
	v->a[25288] = actions(880);
	v->a[25289] = 2;
	v->a[25290] = anon_sym_LT_AMP_DASH;
	v->a[25291] = anon_sym_GT_AMP_DASH;
	v->a[25292] = state(1635);
	v->a[25293] = 2;
	v->a[25294] = sym_file_redirect;
	v->a[25295] = aux_sym_redirected_statement_repeat2;
	v->a[25296] = actions(872);
	v->a[25297] = 3;
	v->a[25298] = sym_raw_string;
	v->a[25299] = sym_number;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
