/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_422.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2110(t_small_parse_table_array *v)
{
	v->a[42200] = 1;
	v->a[42201] = anon_sym_DOLLAR_LBRACE;
	v->a[42202] = actions(1538);
	v->a[42203] = 1;
	v->a[42204] = sym_variable_name;
	v->a[42205] = actions(1526);
	v->a[42206] = 2;
	v->a[42207] = anon_sym_PLUS_PLUS;
	v->a[42208] = anon_sym_DASH_DASH;
	v->a[42209] = actions(1528);
	v->a[42210] = 2;
	v->a[42211] = anon_sym_DASH2;
	v->a[42212] = anon_sym_PLUS2;
	v->a[42213] = actions(1534);
	v->a[42214] = 2;
	v->a[42215] = sym_number;
	v->a[42216] = aux_sym__simple_variable_name_token1;
	v->a[42217] = state(206);
	v->a[42218] = 3;
	v->a[42219] = sym_string;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = sym_simple_expansion;
	v->a[42221] = sym_expansion;
	v->a[42222] = state(222);
	v->a[42223] = 7;
	v->a[42224] = sym__arithmetic_expression;
	v->a[42225] = sym_arithmetic_literal;
	v->a[42226] = sym_arithmetic_binary_expression;
	v->a[42227] = sym_arithmetic_ternary_expression;
	v->a[42228] = sym_arithmetic_unary_expression;
	v->a[42229] = sym_arithmetic_postfix_expression;
	v->a[42230] = sym_arithmetic_parenthesized_expression;
	v->a[42231] = 12;
	v->a[42232] = actions(407);
	v->a[42233] = 1;
	v->a[42234] = sym_comment;
	v->a[42235] = actions(1540);
	v->a[42236] = 1;
	v->a[42237] = anon_sym_LPAREN;
	v->a[42238] = actions(1542);
	v->a[42239] = 1;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = anon_sym_BANG;
	v->a[42241] = actions(1548);
	v->a[42242] = 1;
	v->a[42243] = anon_sym_DOLLAR;
	v->a[42244] = actions(1550);
	v->a[42245] = 1;
	v->a[42246] = anon_sym_DQUOTE;
	v->a[42247] = actions(1554);
	v->a[42248] = 1;
	v->a[42249] = anon_sym_DOLLAR_LBRACE;
	v->a[42250] = actions(1556);
	v->a[42251] = 1;
	v->a[42252] = sym_variable_name;
	v->a[42253] = actions(1544);
	v->a[42254] = 2;
	v->a[42255] = anon_sym_PLUS_PLUS;
	v->a[42256] = anon_sym_DASH_DASH;
	v->a[42257] = actions(1546);
	v->a[42258] = 2;
	v->a[42259] = anon_sym_DASH2;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = anon_sym_PLUS2;
	v->a[42261] = actions(1552);
	v->a[42262] = 2;
	v->a[42263] = sym_number;
	v->a[42264] = aux_sym__simple_variable_name_token1;
	v->a[42265] = state(157);
	v->a[42266] = 3;
	v->a[42267] = sym_string;
	v->a[42268] = sym_simple_expansion;
	v->a[42269] = sym_expansion;
	v->a[42270] = state(170);
	v->a[42271] = 7;
	v->a[42272] = sym__arithmetic_expression;
	v->a[42273] = sym_arithmetic_literal;
	v->a[42274] = sym_arithmetic_binary_expression;
	v->a[42275] = sym_arithmetic_ternary_expression;
	v->a[42276] = sym_arithmetic_unary_expression;
	v->a[42277] = sym_arithmetic_postfix_expression;
	v->a[42278] = sym_arithmetic_parenthesized_expression;
	v->a[42279] = 12;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = actions(407);
	v->a[42281] = 1;
	v->a[42282] = sym_comment;
	v->a[42283] = actions(1522);
	v->a[42284] = 1;
	v->a[42285] = anon_sym_LPAREN;
	v->a[42286] = actions(1524);
	v->a[42287] = 1;
	v->a[42288] = anon_sym_BANG;
	v->a[42289] = actions(1530);
	v->a[42290] = 1;
	v->a[42291] = anon_sym_DOLLAR;
	v->a[42292] = actions(1532);
	v->a[42293] = 1;
	v->a[42294] = anon_sym_DQUOTE;
	v->a[42295] = actions(1536);
	v->a[42296] = 1;
	v->a[42297] = anon_sym_DOLLAR_LBRACE;
	v->a[42298] = actions(1538);
	v->a[42299] = 1;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
