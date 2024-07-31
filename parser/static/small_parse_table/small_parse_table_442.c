/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_442.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2210(t_small_parse_table_array *v)
{
	v->a[44200] = 1;
	v->a[44201] = anon_sym_DOLLAR;
	v->a[44202] = actions(1550);
	v->a[44203] = 1;
	v->a[44204] = anon_sym_DQUOTE;
	v->a[44205] = actions(1554);
	v->a[44206] = 1;
	v->a[44207] = anon_sym_DOLLAR_LBRACE;
	v->a[44208] = actions(1556);
	v->a[44209] = 1;
	v->a[44210] = sym_variable_name;
	v->a[44211] = actions(1544);
	v->a[44212] = 2;
	v->a[44213] = anon_sym_PLUS_PLUS;
	v->a[44214] = anon_sym_DASH_DASH;
	v->a[44215] = actions(1546);
	v->a[44216] = 2;
	v->a[44217] = anon_sym_DASH2;
	v->a[44218] = anon_sym_PLUS2;
	v->a[44219] = actions(1552);
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = 2;
	v->a[44221] = sym_number;
	v->a[44222] = aux_sym__simple_variable_name_token1;
	v->a[44223] = state(157);
	v->a[44224] = 3;
	v->a[44225] = sym_string;
	v->a[44226] = sym_simple_expansion;
	v->a[44227] = sym_expansion;
	v->a[44228] = state(176);
	v->a[44229] = 7;
	v->a[44230] = sym__arithmetic_expression;
	v->a[44231] = sym_arithmetic_literal;
	v->a[44232] = sym_arithmetic_binary_expression;
	v->a[44233] = sym_arithmetic_ternary_expression;
	v->a[44234] = sym_arithmetic_unary_expression;
	v->a[44235] = sym_arithmetic_postfix_expression;
	v->a[44236] = sym_arithmetic_parenthesized_expression;
	v->a[44237] = 12;
	v->a[44238] = actions(407);
	v->a[44239] = 1;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = sym_comment;
	v->a[44241] = actions(1540);
	v->a[44242] = 1;
	v->a[44243] = anon_sym_LPAREN;
	v->a[44244] = actions(1542);
	v->a[44245] = 1;
	v->a[44246] = anon_sym_BANG;
	v->a[44247] = actions(1548);
	v->a[44248] = 1;
	v->a[44249] = anon_sym_DOLLAR;
	v->a[44250] = actions(1550);
	v->a[44251] = 1;
	v->a[44252] = anon_sym_DQUOTE;
	v->a[44253] = actions(1554);
	v->a[44254] = 1;
	v->a[44255] = anon_sym_DOLLAR_LBRACE;
	v->a[44256] = actions(1556);
	v->a[44257] = 1;
	v->a[44258] = sym_variable_name;
	v->a[44259] = actions(1544);
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = 2;
	v->a[44261] = anon_sym_PLUS_PLUS;
	v->a[44262] = anon_sym_DASH_DASH;
	v->a[44263] = actions(1546);
	v->a[44264] = 2;
	v->a[44265] = anon_sym_DASH2;
	v->a[44266] = anon_sym_PLUS2;
	v->a[44267] = actions(1552);
	v->a[44268] = 2;
	v->a[44269] = sym_number;
	v->a[44270] = aux_sym__simple_variable_name_token1;
	v->a[44271] = state(157);
	v->a[44272] = 3;
	v->a[44273] = sym_string;
	v->a[44274] = sym_simple_expansion;
	v->a[44275] = sym_expansion;
	v->a[44276] = state(175);
	v->a[44277] = 7;
	v->a[44278] = sym__arithmetic_expression;
	v->a[44279] = sym_arithmetic_literal;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = sym_arithmetic_binary_expression;
	v->a[44281] = sym_arithmetic_ternary_expression;
	v->a[44282] = sym_arithmetic_unary_expression;
	v->a[44283] = sym_arithmetic_postfix_expression;
	v->a[44284] = sym_arithmetic_parenthesized_expression;
	v->a[44285] = 12;
	v->a[44286] = actions(407);
	v->a[44287] = 1;
	v->a[44288] = sym_comment;
	v->a[44289] = actions(1540);
	v->a[44290] = 1;
	v->a[44291] = anon_sym_LPAREN;
	v->a[44292] = actions(1542);
	v->a[44293] = 1;
	v->a[44294] = anon_sym_BANG;
	v->a[44295] = actions(1548);
	v->a[44296] = 1;
	v->a[44297] = anon_sym_DOLLAR;
	v->a[44298] = actions(1550);
	v->a[44299] = 1;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
