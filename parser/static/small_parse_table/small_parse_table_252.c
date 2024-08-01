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
	v->a[25201] = sym_word;
	v->a[25202] = state(607);
	v->a[25203] = 5;
	v->a[25204] = sym_arithmetic_expansion;
	v->a[25205] = sym_string;
	v->a[25206] = sym_simple_expansion;
	v->a[25207] = sym_expansion;
	v->a[25208] = sym_command_substitution;
	v->a[25209] = actions(421);
	v->a[25210] = 7;
	v->a[25211] = anon_sym_PIPE;
	v->a[25212] = anon_sym_AMP_AMP;
	v->a[25213] = anon_sym_PIPE_PIPE;
	v->a[25214] = anon_sym_LT;
	v->a[25215] = anon_sym_GT;
	v->a[25216] = anon_sym_GT_GT;
	v->a[25217] = anon_sym_LT_LT;
	v->a[25218] = 4;
	v->a[25219] = actions(3);
	small_parse_table_1261(v);
}

void	small_parse_table_1261(t_small_parse_table_array *v)
{
	v->a[25220] = 1;
	v->a[25221] = sym_comment;
	v->a[25222] = actions(1044);
	v->a[25223] = 1;
	v->a[25224] = sym_variable_name;
	v->a[25225] = actions(1042);
	v->a[25226] = 2;
	v->a[25227] = anon_sym_RPAREN;
	v->a[25228] = anon_sym_SEMI_SEMI;
	v->a[25229] = actions(1040);
	v->a[25230] = 20;
	v->a[25231] = anon_sym_for;
	v->a[25232] = anon_sym_while;
	v->a[25233] = anon_sym_until;
	v->a[25234] = anon_sym_if;
	v->a[25235] = anon_sym_case;
	v->a[25236] = anon_sym_LPAREN;
	v->a[25237] = anon_sym_LBRACE;
	v->a[25238] = anon_sym_BANG;
	v->a[25239] = anon_sym_LT;
	small_parse_table_1262(v);
}

void	small_parse_table_1262(t_small_parse_table_array *v)
{
	v->a[25240] = anon_sym_GT;
	v->a[25241] = anon_sym_GT_GT;
	v->a[25242] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25243] = anon_sym_DOLLAR;
	v->a[25244] = anon_sym_DQUOTE;
	v->a[25245] = sym_raw_string;
	v->a[25246] = sym_number;
	v->a[25247] = anon_sym_DOLLAR_LBRACE;
	v->a[25248] = anon_sym_DOLLAR_LPAREN;
	v->a[25249] = anon_sym_BQUOTE;
	v->a[25250] = sym_word;
	v->a[25251] = 3;
	v->a[25252] = actions(3);
	v->a[25253] = 1;
	v->a[25254] = sym_comment;
	v->a[25255] = actions(1050);
	v->a[25256] = 2;
	v->a[25257] = sym__concat;
	v->a[25258] = sym_variable_name;
	v->a[25259] = actions(1052);
	small_parse_table_1263(v);
}

void	small_parse_table_1263(t_small_parse_table_array *v)
{
	v->a[25260] = 21;
	v->a[25261] = anon_sym_PIPE;
	v->a[25262] = anon_sym_RPAREN;
	v->a[25263] = anon_sym_SEMI_SEMI;
	v->a[25264] = anon_sym_AMP_AMP;
	v->a[25265] = anon_sym_PIPE_PIPE;
	v->a[25266] = anon_sym_LT;
	v->a[25267] = anon_sym_GT;
	v->a[25268] = anon_sym_GT_GT;
	v->a[25269] = anon_sym_LT_LT;
	v->a[25270] = aux_sym_heredoc_redirect_token1;
	v->a[25271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25272] = aux_sym_concatenation_token1;
	v->a[25273] = anon_sym_DOLLAR;
	v->a[25274] = anon_sym_DQUOTE;
	v->a[25275] = sym_raw_string;
	v->a[25276] = sym_number;
	v->a[25277] = anon_sym_DOLLAR_LBRACE;
	v->a[25278] = anon_sym_DOLLAR_LPAREN;
	v->a[25279] = anon_sym_BQUOTE;
	small_parse_table_1264(v);
}

void	small_parse_table_1264(t_small_parse_table_array *v)
{
	v->a[25280] = sym_word;
	v->a[25281] = anon_sym_SEMI;
	v->a[25282] = 4;
	v->a[25283] = actions(3);
	v->a[25284] = 1;
	v->a[25285] = sym_comment;
	v->a[25286] = actions(1044);
	v->a[25287] = 1;
	v->a[25288] = sym_variable_name;
	v->a[25289] = actions(1042);
	v->a[25290] = 2;
	v->a[25291] = anon_sym_RPAREN;
	v->a[25292] = anon_sym_SEMI_SEMI;
	v->a[25293] = actions(1040);
	v->a[25294] = 20;
	v->a[25295] = anon_sym_for;
	v->a[25296] = anon_sym_while;
	v->a[25297] = anon_sym_until;
	v->a[25298] = anon_sym_if;
	v->a[25299] = anon_sym_case;
	small_parse_table_1265(v);
}

/* EOF small_parse_table_252.c */
