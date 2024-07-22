/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_452.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2260(t_small_parse_table_array *v)
{
	v->a[45200] = sym_arithmetic_literal;
	v->a[45201] = sym_arithmetic_binary_expression;
	v->a[45202] = sym_arithmetic_ternary_expression;
	v->a[45203] = sym_arithmetic_unary_expression;
	v->a[45204] = sym_arithmetic_postfix_expression;
	v->a[45205] = sym_arithmetic_parenthesized_expression;
	v->a[45206] = sym_command_substitution;
	v->a[45207] = 7;
	v->a[45208] = actions(3);
	v->a[45209] = 1;
	v->a[45210] = sym_comment;
	v->a[45211] = actions(1457);
	v->a[45212] = 1;
	v->a[45213] = sym_file_descriptor;
	v->a[45214] = actions(1460);
	v->a[45215] = 1;
	v->a[45216] = sym_variable_name;
	v->a[45217] = actions(1637);
	v->a[45218] = 1;
	v->a[45219] = anon_sym_RPAREN;
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = actions(1454);
	v->a[45221] = 7;
	v->a[45222] = anon_sym_LT;
	v->a[45223] = anon_sym_GT;
	v->a[45224] = anon_sym_GT_GT;
	v->a[45225] = anon_sym_LT_AMP;
	v->a[45226] = anon_sym_GT_AMP;
	v->a[45227] = anon_sym_GT_PIPE;
	v->a[45228] = anon_sym_LT_GT;
	v->a[45229] = actions(1449);
	v->a[45230] = 8;
	v->a[45231] = anon_sym_PIPE;
	v->a[45232] = anon_sym_SEMI_SEMI;
	v->a[45233] = anon_sym_AMP_AMP;
	v->a[45234] = anon_sym_PIPE_PIPE;
	v->a[45235] = anon_sym_LT_LT;
	v->a[45236] = anon_sym_LT_LT_DASH;
	v->a[45237] = aux_sym_heredoc_redirect_token1;
	v->a[45238] = anon_sym_SEMI;
	v->a[45239] = actions(1447);
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = 9;
	v->a[45241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45242] = anon_sym_DOLLAR;
	v->a[45243] = anon_sym_DQUOTE;
	v->a[45244] = sym_raw_string;
	v->a[45245] = sym_number;
	v->a[45246] = anon_sym_DOLLAR_LBRACE;
	v->a[45247] = anon_sym_DOLLAR_LPAREN;
	v->a[45248] = anon_sym_BQUOTE;
	v->a[45249] = sym_word;
	v->a[45250] = 4;
	v->a[45251] = actions(3);
	v->a[45252] = 1;
	v->a[45253] = sym_comment;
	v->a[45254] = actions(1445);
	v->a[45255] = 1;
	v->a[45256] = ts_builtin_sym_end;
	v->a[45257] = actions(1412);
	v->a[45258] = 2;
	v->a[45259] = sym_file_descriptor;
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = sym_variable_name;
	v->a[45261] = actions(1408);
	v->a[45262] = 24;
	v->a[45263] = anon_sym_for;
	v->a[45264] = anon_sym_while;
	v->a[45265] = anon_sym_until;
	v->a[45266] = anon_sym_if;
	v->a[45267] = anon_sym_case;
	v->a[45268] = anon_sym_LPAREN;
	v->a[45269] = anon_sym_LBRACE;
	v->a[45270] = anon_sym_BANG;
	v->a[45271] = anon_sym_LT;
	v->a[45272] = anon_sym_GT;
	v->a[45273] = anon_sym_GT_GT;
	v->a[45274] = anon_sym_LT_AMP;
	v->a[45275] = anon_sym_GT_AMP;
	v->a[45276] = anon_sym_GT_PIPE;
	v->a[45277] = anon_sym_LT_GT;
	v->a[45278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45279] = anon_sym_DOLLAR;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = anon_sym_DQUOTE;
	v->a[45281] = sym_raw_string;
	v->a[45282] = sym_number;
	v->a[45283] = anon_sym_DOLLAR_LBRACE;
	v->a[45284] = anon_sym_DOLLAR_LPAREN;
	v->a[45285] = anon_sym_BQUOTE;
	v->a[45286] = sym_word;
	v->a[45287] = 16;
	v->a[45288] = actions(501);
	v->a[45289] = 1;
	v->a[45290] = sym_comment;
	v->a[45291] = actions(1469);
	v->a[45292] = 1;
	v->a[45293] = anon_sym_LPAREN;
	v->a[45294] = actions(1471);
	v->a[45295] = 1;
	v->a[45296] = anon_sym_BANG;
	v->a[45297] = actions(1479);
	v->a[45298] = 1;
	v->a[45299] = anon_sym_TILDE;
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
