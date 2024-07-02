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
	v->a[45200] = anon_sym_LT_GT;
	v->a[45201] = anon_sym_LT_LT;
	v->a[45202] = anon_sym_LT_LT_DASH;
	v->a[45203] = aux_sym_heredoc_redirect_token1;
	v->a[45204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45205] = anon_sym_DOLLAR;
	v->a[45206] = anon_sym_DQUOTE;
	v->a[45207] = sym_raw_string;
	v->a[45208] = sym_number;
	v->a[45209] = anon_sym_DOLLAR_LBRACE;
	v->a[45210] = anon_sym_DOLLAR_LPAREN;
	v->a[45211] = anon_sym_BQUOTE;
	v->a[45212] = sym_word;
	v->a[45213] = 16;
	v->a[45214] = actions(680);
	v->a[45215] = 1;
	v->a[45216] = sym_comment;
	v->a[45217] = actions(1574);
	v->a[45218] = 1;
	v->a[45219] = anon_sym_LPAREN;
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = actions(1576);
	v->a[45221] = 1;
	v->a[45222] = anon_sym_BANG;
	v->a[45223] = actions(1584);
	v->a[45224] = 1;
	v->a[45225] = anon_sym_TILDE;
	v->a[45226] = actions(1586);
	v->a[45227] = 1;
	v->a[45228] = anon_sym_DOLLAR;
	v->a[45229] = actions(1588);
	v->a[45230] = 1;
	v->a[45231] = anon_sym_DQUOTE;
	v->a[45232] = actions(1592);
	v->a[45233] = 1;
	v->a[45234] = anon_sym_DOLLAR_LBRACE;
	v->a[45235] = actions(1594);
	v->a[45236] = 1;
	v->a[45237] = anon_sym_DOLLAR_LPAREN;
	v->a[45238] = actions(1596);
	v->a[45239] = 1;
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = anon_sym_BQUOTE;
	v->a[45241] = actions(1598);
	v->a[45242] = 1;
	v->a[45243] = sym_variable_name;
	v->a[45244] = actions(1629);
	v->a[45245] = 1;
	v->a[45246] = anon_sym_RPAREN_RPAREN;
	v->a[45247] = actions(1580);
	v->a[45248] = 2;
	v->a[45249] = anon_sym_PLUS_PLUS;
	v->a[45250] = anon_sym_DASH_DASH;
	v->a[45251] = actions(1582);
	v->a[45252] = 2;
	v->a[45253] = anon_sym_DASH2;
	v->a[45254] = anon_sym_PLUS2;
	v->a[45255] = actions(1590);
	v->a[45256] = 2;
	v->a[45257] = sym_number;
	v->a[45258] = aux_sym__simple_variable_name_token1;
	v->a[45259] = state(238);
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = 3;
	v->a[45261] = sym_string;
	v->a[45262] = sym_simple_expansion;
	v->a[45263] = sym_expansion;
	v->a[45264] = state(317);
	v->a[45265] = 8;
	v->a[45266] = sym__arithmetic_expression;
	v->a[45267] = sym_arithmetic_literal;
	v->a[45268] = sym_arithmetic_binary_expression;
	v->a[45269] = sym_arithmetic_ternary_expression;
	v->a[45270] = sym_arithmetic_unary_expression;
	v->a[45271] = sym_arithmetic_postfix_expression;
	v->a[45272] = sym_arithmetic_parenthesized_expression;
	v->a[45273] = sym_command_substitution;
	v->a[45274] = 16;
	v->a[45275] = actions(680);
	v->a[45276] = 1;
	v->a[45277] = sym_comment;
	v->a[45278] = actions(1574);
	v->a[45279] = 1;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = anon_sym_LPAREN;
	v->a[45281] = actions(1576);
	v->a[45282] = 1;
	v->a[45283] = anon_sym_BANG;
	v->a[45284] = actions(1584);
	v->a[45285] = 1;
	v->a[45286] = anon_sym_TILDE;
	v->a[45287] = actions(1586);
	v->a[45288] = 1;
	v->a[45289] = anon_sym_DOLLAR;
	v->a[45290] = actions(1588);
	v->a[45291] = 1;
	v->a[45292] = anon_sym_DQUOTE;
	v->a[45293] = actions(1592);
	v->a[45294] = 1;
	v->a[45295] = anon_sym_DOLLAR_LBRACE;
	v->a[45296] = actions(1594);
	v->a[45297] = 1;
	v->a[45298] = anon_sym_DOLLAR_LPAREN;
	v->a[45299] = actions(1596);
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
