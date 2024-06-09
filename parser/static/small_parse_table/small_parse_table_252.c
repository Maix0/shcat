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
	v->a[25200] = anon_sym_AMP;
	v->a[25201] = anon_sym_BQUOTE;
	v->a[25202] = anon_sym_SEMI;
	v->a[25203] = 14;
	v->a[25204] = actions(3);
	v->a[25205] = 1;
	v->a[25206] = sym_comment;
	v->a[25207] = actions(879);
	v->a[25208] = 1;
	v->a[25209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25210] = actions(882);
	v->a[25211] = 1;
	v->a[25212] = anon_sym_DOLLAR;
	v->a[25213] = actions(885);
	v->a[25214] = 1;
	v->a[25215] = anon_sym_DQUOTE;
	v->a[25216] = actions(888);
	v->a[25217] = 1;
	v->a[25218] = aux_sym_number_token1;
	v->a[25219] = actions(891);
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = 1;
	v->a[25221] = aux_sym_number_token2;
	v->a[25222] = actions(894);
	v->a[25223] = 1;
	v->a[25224] = anon_sym_DOLLAR_LBRACE;
	v->a[25225] = actions(897);
	v->a[25226] = 1;
	v->a[25227] = anon_sym_DOLLAR_LPAREN;
	v->a[25228] = actions(900);
	v->a[25229] = 1;
	v->a[25230] = anon_sym_BQUOTE;
	v->a[25231] = actions(662);
	v->a[25232] = 2;
	v->a[25233] = sym_file_descriptor;
	v->a[25234] = ts_builtin_sym_end;
	v->a[25235] = actions(876);
	v->a[25236] = 2;
	v->a[25237] = sym_raw_string;
	v->a[25238] = sym_word;
	v->a[25239] = state(234);
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = 2;
	v->a[25241] = sym_concatenation;
	v->a[25242] = aux_sym_for_statement_repeat1;
	v->a[25243] = state(502);
	v->a[25244] = 6;
	v->a[25245] = sym_arithmetic_expansion;
	v->a[25246] = sym_string;
	v->a[25247] = sym_number;
	v->a[25248] = sym_simple_expansion;
	v->a[25249] = sym_expansion;
	v->a[25250] = sym_command_substitution;
	v->a[25251] = actions(636);
	v->a[25252] = 19;
	v->a[25253] = anon_sym_PIPE;
	v->a[25254] = anon_sym_SEMI_SEMI;
	v->a[25255] = anon_sym_AMP_AMP;
	v->a[25256] = anon_sym_PIPE_PIPE;
	v->a[25257] = anon_sym_LT;
	v->a[25258] = anon_sym_GT;
	v->a[25259] = anon_sym_GT_GT;
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = anon_sym_AMP_GT;
	v->a[25261] = anon_sym_AMP_GT_GT;
	v->a[25262] = anon_sym_LT_AMP;
	v->a[25263] = anon_sym_GT_AMP;
	v->a[25264] = anon_sym_GT_PIPE;
	v->a[25265] = anon_sym_LT_AMP_DASH;
	v->a[25266] = anon_sym_GT_AMP_DASH;
	v->a[25267] = anon_sym_LT_LT;
	v->a[25268] = anon_sym_LT_LT_DASH;
	v->a[25269] = aux_sym_heredoc_redirect_token1;
	v->a[25270] = anon_sym_AMP;
	v->a[25271] = anon_sym_SEMI;
	v->a[25272] = 14;
	v->a[25273] = actions(3);
	v->a[25274] = 1;
	v->a[25275] = sym_comment;
	v->a[25276] = actions(755);
	v->a[25277] = 1;
	v->a[25278] = sym_file_descriptor;
	v->a[25279] = actions(905);
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = 1;
	v->a[25281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25282] = actions(907);
	v->a[25283] = 1;
	v->a[25284] = anon_sym_DOLLAR;
	v->a[25285] = actions(909);
	v->a[25286] = 1;
	v->a[25287] = anon_sym_DQUOTE;
	v->a[25288] = actions(911);
	v->a[25289] = 1;
	v->a[25290] = aux_sym_number_token1;
	v->a[25291] = actions(913);
	v->a[25292] = 1;
	v->a[25293] = aux_sym_number_token2;
	v->a[25294] = actions(915);
	v->a[25295] = 1;
	v->a[25296] = anon_sym_DOLLAR_LBRACE;
	v->a[25297] = actions(917);
	v->a[25298] = 1;
	v->a[25299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
