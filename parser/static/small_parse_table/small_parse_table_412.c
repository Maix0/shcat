/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_412.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2060(t_small_parse_table_array *v)
{
	v->a[41200] = actions(407);
	v->a[41201] = 1;
	v->a[41202] = sym_comment;
	v->a[41203] = actions(1540);
	v->a[41204] = 1;
	v->a[41205] = anon_sym_LPAREN;
	v->a[41206] = actions(1542);
	v->a[41207] = 1;
	v->a[41208] = anon_sym_BANG;
	v->a[41209] = actions(1548);
	v->a[41210] = 1;
	v->a[41211] = anon_sym_DOLLAR;
	v->a[41212] = actions(1550);
	v->a[41213] = 1;
	v->a[41214] = anon_sym_DQUOTE;
	v->a[41215] = actions(1554);
	v->a[41216] = 1;
	v->a[41217] = anon_sym_DOLLAR_LBRACE;
	v->a[41218] = actions(1556);
	v->a[41219] = 1;
	small_parse_table_2061(v);
}

void	small_parse_table_2061(t_small_parse_table_array *v)
{
	v->a[41220] = sym_variable_name;
	v->a[41221] = actions(1544);
	v->a[41222] = 2;
	v->a[41223] = anon_sym_PLUS_PLUS;
	v->a[41224] = anon_sym_DASH_DASH;
	v->a[41225] = actions(1546);
	v->a[41226] = 2;
	v->a[41227] = anon_sym_DASH2;
	v->a[41228] = anon_sym_PLUS2;
	v->a[41229] = actions(1552);
	v->a[41230] = 2;
	v->a[41231] = sym_number;
	v->a[41232] = aux_sym__simple_variable_name_token1;
	v->a[41233] = state(157);
	v->a[41234] = 3;
	v->a[41235] = sym_string;
	v->a[41236] = sym_simple_expansion;
	v->a[41237] = sym_expansion;
	v->a[41238] = state(221);
	v->a[41239] = 7;
	small_parse_table_2062(v);
}

void	small_parse_table_2062(t_small_parse_table_array *v)
{
	v->a[41240] = sym__arithmetic_expression;
	v->a[41241] = sym_arithmetic_literal;
	v->a[41242] = sym_arithmetic_binary_expression;
	v->a[41243] = sym_arithmetic_ternary_expression;
	v->a[41244] = sym_arithmetic_unary_expression;
	v->a[41245] = sym_arithmetic_postfix_expression;
	v->a[41246] = sym_arithmetic_parenthesized_expression;
	v->a[41247] = 12;
	v->a[41248] = actions(407);
	v->a[41249] = 1;
	v->a[41250] = sym_comment;
	v->a[41251] = actions(1540);
	v->a[41252] = 1;
	v->a[41253] = anon_sym_LPAREN;
	v->a[41254] = actions(1542);
	v->a[41255] = 1;
	v->a[41256] = anon_sym_BANG;
	v->a[41257] = actions(1548);
	v->a[41258] = 1;
	v->a[41259] = anon_sym_DOLLAR;
	small_parse_table_2063(v);
}

void	small_parse_table_2063(t_small_parse_table_array *v)
{
	v->a[41260] = actions(1550);
	v->a[41261] = 1;
	v->a[41262] = anon_sym_DQUOTE;
	v->a[41263] = actions(1554);
	v->a[41264] = 1;
	v->a[41265] = anon_sym_DOLLAR_LBRACE;
	v->a[41266] = actions(1556);
	v->a[41267] = 1;
	v->a[41268] = sym_variable_name;
	v->a[41269] = actions(1544);
	v->a[41270] = 2;
	v->a[41271] = anon_sym_PLUS_PLUS;
	v->a[41272] = anon_sym_DASH_DASH;
	v->a[41273] = actions(1546);
	v->a[41274] = 2;
	v->a[41275] = anon_sym_DASH2;
	v->a[41276] = anon_sym_PLUS2;
	v->a[41277] = actions(1552);
	v->a[41278] = 2;
	v->a[41279] = sym_number;
	small_parse_table_2064(v);
}

void	small_parse_table_2064(t_small_parse_table_array *v)
{
	v->a[41280] = aux_sym__simple_variable_name_token1;
	v->a[41281] = state(157);
	v->a[41282] = 3;
	v->a[41283] = sym_string;
	v->a[41284] = sym_simple_expansion;
	v->a[41285] = sym_expansion;
	v->a[41286] = state(163);
	v->a[41287] = 7;
	v->a[41288] = sym__arithmetic_expression;
	v->a[41289] = sym_arithmetic_literal;
	v->a[41290] = sym_arithmetic_binary_expression;
	v->a[41291] = sym_arithmetic_ternary_expression;
	v->a[41292] = sym_arithmetic_unary_expression;
	v->a[41293] = sym_arithmetic_postfix_expression;
	v->a[41294] = sym_arithmetic_parenthesized_expression;
	v->a[41295] = 6;
	v->a[41296] = actions(3);
	v->a[41297] = 1;
	v->a[41298] = sym_comment;
	v->a[41299] = actions(1558);
	small_parse_table_2065(v);
}

/* EOF small_parse_table_412.c */
