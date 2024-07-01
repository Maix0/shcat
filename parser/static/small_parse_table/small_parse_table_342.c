/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_342.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1710(t_small_parse_table_array *v)
{
	v->a[34200] = anon_sym_PIPE_PIPE;
	v->a[34201] = anon_sym_LT;
	v->a[34202] = anon_sym_GT;
	v->a[34203] = anon_sym_GT_GT;
	v->a[34204] = anon_sym_LT_AMP;
	v->a[34205] = anon_sym_GT_AMP;
	v->a[34206] = anon_sym_GT_PIPE;
	v->a[34207] = anon_sym_LT_AMP_DASH;
	v->a[34208] = anon_sym_GT_AMP_DASH;
	v->a[34209] = anon_sym_LT_LT;
	v->a[34210] = anon_sym_LT_LT_DASH;
	v->a[34211] = aux_sym_heredoc_redirect_token1;
	v->a[34212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34213] = anon_sym_AMP;
	v->a[34214] = anon_sym_DOLLAR;
	v->a[34215] = anon_sym_DQUOTE;
	v->a[34216] = sym_raw_string;
	v->a[34217] = sym_number;
	v->a[34218] = anon_sym_DOLLAR_LBRACE;
	v->a[34219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1711(v);
}

void	small_parse_table_1711(t_small_parse_table_array *v)
{
	v->a[34220] = anon_sym_BQUOTE;
	v->a[34221] = sym_word;
	v->a[34222] = anon_sym_SEMI;
	v->a[34223] = 12;
	v->a[34224] = actions(3);
	v->a[34225] = 1;
	v->a[34226] = sym_comment;
	v->a[34227] = actions(630);
	v->a[34228] = 1;
	v->a[34229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34230] = actions(633);
	v->a[34231] = 1;
	v->a[34232] = anon_sym_DOLLAR;
	v->a[34233] = actions(636);
	v->a[34234] = 1;
	v->a[34235] = anon_sym_DQUOTE;
	v->a[34236] = actions(639);
	v->a[34237] = 1;
	v->a[34238] = anon_sym_DOLLAR_LBRACE;
	v->a[34239] = actions(642);
	small_parse_table_1712(v);
}

void	small_parse_table_1712(t_small_parse_table_array *v)
{
	v->a[34240] = 1;
	v->a[34241] = anon_sym_DOLLAR_LPAREN;
	v->a[34242] = actions(645);
	v->a[34243] = 1;
	v->a[34244] = anon_sym_BQUOTE;
	v->a[34245] = actions(577);
	v->a[34246] = 2;
	v->a[34247] = sym_file_descriptor;
	v->a[34248] = sym_variable_name;
	v->a[34249] = state(430);
	v->a[34250] = 2;
	v->a[34251] = sym_concatenation;
	v->a[34252] = aux_sym_for_statement_repeat1;
	v->a[34253] = actions(1280);
	v->a[34254] = 3;
	v->a[34255] = sym_raw_string;
	v->a[34256] = sym_number;
	v->a[34257] = sym_word;
	v->a[34258] = state(778);
	v->a[34259] = 5;
	small_parse_table_1713(v);
}

void	small_parse_table_1713(t_small_parse_table_array *v)
{
	v->a[34260] = sym_arithmetic_expansion;
	v->a[34261] = sym_string;
	v->a[34262] = sym_simple_expansion;
	v->a[34263] = sym_expansion;
	v->a[34264] = sym_command_substitution;
	v->a[34265] = actions(582);
	v->a[34266] = 14;
	v->a[34267] = anon_sym_PIPE;
	v->a[34268] = anon_sym_AMP_AMP;
	v->a[34269] = anon_sym_PIPE_PIPE;
	v->a[34270] = anon_sym_LT;
	v->a[34271] = anon_sym_GT;
	v->a[34272] = anon_sym_GT_GT;
	v->a[34273] = anon_sym_LT_AMP;
	v->a[34274] = anon_sym_GT_AMP;
	v->a[34275] = anon_sym_GT_PIPE;
	v->a[34276] = anon_sym_LT_AMP_DASH;
	v->a[34277] = anon_sym_GT_AMP_DASH;
	v->a[34278] = anon_sym_LT_LT;
	v->a[34279] = anon_sym_LT_LT_DASH;
	small_parse_table_1714(v);
}

void	small_parse_table_1714(t_small_parse_table_array *v)
{
	v->a[34280] = aux_sym_heredoc_redirect_token1;
	v->a[34281] = 3;
	v->a[34282] = actions(3);
	v->a[34283] = 1;
	v->a[34284] = sym_comment;
	v->a[34285] = actions(1015);
	v->a[34286] = 4;
	v->a[34287] = sym_file_descriptor;
	v->a[34288] = sym__concat;
	v->a[34289] = sym__bare_dollar;
	v->a[34290] = ts_builtin_sym_end;
	v->a[34291] = actions(1013);
	v->a[34292] = 28;
	v->a[34293] = anon_sym_LPAREN;
	v->a[34294] = anon_sym_PIPE;
	v->a[34295] = anon_sym_SEMI_SEMI;
	v->a[34296] = anon_sym_AMP_AMP;
	v->a[34297] = anon_sym_PIPE_PIPE;
	v->a[34298] = anon_sym_LT;
	v->a[34299] = anon_sym_GT;
	small_parse_table_1715(v);
}

/* EOF small_parse_table_342.c */
