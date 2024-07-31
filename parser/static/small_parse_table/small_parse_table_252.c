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
	v->a[25200] = sym_number;
	v->a[25201] = anon_sym_DOLLAR_LBRACE;
	v->a[25202] = anon_sym_DOLLAR_LPAREN;
	v->a[25203] = anon_sym_BQUOTE;
	v->a[25204] = sym_word;
	v->a[25205] = 19;
	v->a[25206] = actions(3);
	v->a[25207] = 1;
	v->a[25208] = sym_comment;
	v->a[25209] = actions(17);
	v->a[25210] = 1;
	v->a[25211] = anon_sym_LPAREN;
	v->a[25212] = actions(53);
	v->a[25213] = 1;
	v->a[25214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25215] = actions(55);
	v->a[25216] = 1;
	v->a[25217] = anon_sym_DOLLAR;
	v->a[25218] = actions(57);
	v->a[25219] = 1;
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = anon_sym_DQUOTE;
	v->a[25221] = actions(61);
	v->a[25222] = 1;
	v->a[25223] = anon_sym_DOLLAR_LBRACE;
	v->a[25224] = actions(63);
	v->a[25225] = 1;
	v->a[25226] = anon_sym_DOLLAR_LPAREN;
	v->a[25227] = actions(65);
	v->a[25228] = 1;
	v->a[25229] = anon_sym_BQUOTE;
	v->a[25230] = actions(305);
	v->a[25231] = 1;
	v->a[25232] = sym_variable_name;
	v->a[25233] = state(312);
	v->a[25234] = 1;
	v->a[25235] = sym_command_name;
	v->a[25236] = state(471);
	v->a[25237] = 1;
	v->a[25238] = aux_sym_command_repeat1;
	v->a[25239] = state(602);
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = 1;
	v->a[25241] = sym_concatenation;
	v->a[25242] = state(607);
	v->a[25243] = 1;
	v->a[25244] = sym_variable_assignment;
	v->a[25245] = state(1007);
	v->a[25246] = 1;
	v->a[25247] = sym_subshell;
	v->a[25248] = state(1009);
	v->a[25249] = 1;
	v->a[25250] = sym_command;
	v->a[25251] = state(1073);
	v->a[25252] = 1;
	v->a[25253] = sym_file_redirect;
	v->a[25254] = actions(303);
	v->a[25255] = 3;
	v->a[25256] = sym_raw_string;
	v->a[25257] = sym_number;
	v->a[25258] = sym_word;
	v->a[25259] = state(603);
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = 5;
	v->a[25261] = sym_arithmetic_expansion;
	v->a[25262] = sym_string;
	v->a[25263] = sym_simple_expansion;
	v->a[25264] = sym_expansion;
	v->a[25265] = sym_command_substitution;
	v->a[25266] = actions(965);
	v->a[25267] = 7;
	v->a[25268] = anon_sym_LT;
	v->a[25269] = anon_sym_GT;
	v->a[25270] = anon_sym_GT_GT;
	v->a[25271] = anon_sym_LT_AMP;
	v->a[25272] = anon_sym_GT_AMP;
	v->a[25273] = anon_sym_GT_PIPE;
	v->a[25274] = anon_sym_LT_GT;
	v->a[25275] = 6;
	v->a[25276] = actions(3);
	v->a[25277] = 1;
	v->a[25278] = sym_comment;
	v->a[25279] = actions(911);
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = 1;
	v->a[25281] = sym_variable_name;
	v->a[25282] = state(972);
	v->a[25283] = 2;
	v->a[25284] = sym_variable_assignment;
	v->a[25285] = aux_sym__variable_assignments_repeat1;
	v->a[25286] = state(970);
	v->a[25287] = 3;
	v->a[25288] = sym_file_redirect;
	v->a[25289] = sym_heredoc_redirect;
	v->a[25290] = aux_sym_redirected_statement_repeat1;
	v->a[25291] = actions(742);
	v->a[25292] = 8;
	v->a[25293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25294] = anon_sym_DOLLAR;
	v->a[25295] = anon_sym_DQUOTE;
	v->a[25296] = sym_raw_string;
	v->a[25297] = sym_number;
	v->a[25298] = anon_sym_DOLLAR_LBRACE;
	v->a[25299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
