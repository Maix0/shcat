/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_488.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2440(t_small_parse_table_array *v)
{
	v->a[48800] = 1;
	v->a[48801] = anon_sym_DQUOTE;
	v->a[48802] = actions(1578);
	v->a[48803] = 1;
	v->a[48804] = anon_sym_DOLLAR_LBRACE;
	v->a[48805] = actions(1580);
	v->a[48806] = 1;
	v->a[48807] = anon_sym_DOLLAR_LPAREN;
	v->a[48808] = actions(1582);
	v->a[48809] = 1;
	v->a[48810] = anon_sym_BQUOTE;
	v->a[48811] = actions(1584);
	v->a[48812] = 1;
	v->a[48813] = sym_variable_name;
	v->a[48814] = actions(1566);
	v->a[48815] = 2;
	v->a[48816] = anon_sym_PLUS_PLUS;
	v->a[48817] = anon_sym_DASH_DASH;
	v->a[48818] = actions(1568);
	v->a[48819] = 2;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = anon_sym_DASH2;
	v->a[48821] = anon_sym_PLUS2;
	v->a[48822] = actions(1576);
	v->a[48823] = 2;
	v->a[48824] = sym_number;
	v->a[48825] = aux_sym__simple_variable_name_token1;
	v->a[48826] = state(255);
	v->a[48827] = 3;
	v->a[48828] = sym_string;
	v->a[48829] = sym_simple_expansion;
	v->a[48830] = sym_expansion;
	v->a[48831] = state(211);
	v->a[48832] = 8;
	v->a[48833] = sym__arithmetic_expression;
	v->a[48834] = sym_arithmetic_literal;
	v->a[48835] = sym_arithmetic_binary_expression;
	v->a[48836] = sym_arithmetic_ternary_expression;
	v->a[48837] = sym_arithmetic_unary_expression;
	v->a[48838] = sym_arithmetic_postfix_expression;
	v->a[48839] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = sym_command_substitution;
	v->a[48841] = 15;
	v->a[48842] = actions(664);
	v->a[48843] = 1;
	v->a[48844] = sym_comment;
	v->a[48845] = actions(1560);
	v->a[48846] = 1;
	v->a[48847] = anon_sym_LPAREN;
	v->a[48848] = actions(1562);
	v->a[48849] = 1;
	v->a[48850] = anon_sym_BANG;
	v->a[48851] = actions(1570);
	v->a[48852] = 1;
	v->a[48853] = anon_sym_TILDE;
	v->a[48854] = actions(1572);
	v->a[48855] = 1;
	v->a[48856] = anon_sym_DOLLAR;
	v->a[48857] = actions(1574);
	v->a[48858] = 1;
	v->a[48859] = anon_sym_DQUOTE;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = actions(1578);
	v->a[48861] = 1;
	v->a[48862] = anon_sym_DOLLAR_LBRACE;
	v->a[48863] = actions(1580);
	v->a[48864] = 1;
	v->a[48865] = anon_sym_DOLLAR_LPAREN;
	v->a[48866] = actions(1582);
	v->a[48867] = 1;
	v->a[48868] = anon_sym_BQUOTE;
	v->a[48869] = actions(1584);
	v->a[48870] = 1;
	v->a[48871] = sym_variable_name;
	v->a[48872] = actions(1566);
	v->a[48873] = 2;
	v->a[48874] = anon_sym_PLUS_PLUS;
	v->a[48875] = anon_sym_DASH_DASH;
	v->a[48876] = actions(1568);
	v->a[48877] = 2;
	v->a[48878] = anon_sym_DASH2;
	v->a[48879] = anon_sym_PLUS2;
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = actions(1576);
	v->a[48881] = 2;
	v->a[48882] = sym_number;
	v->a[48883] = aux_sym__simple_variable_name_token1;
	v->a[48884] = state(255);
	v->a[48885] = 3;
	v->a[48886] = sym_string;
	v->a[48887] = sym_simple_expansion;
	v->a[48888] = sym_expansion;
	v->a[48889] = state(212);
	v->a[48890] = 8;
	v->a[48891] = sym__arithmetic_expression;
	v->a[48892] = sym_arithmetic_literal;
	v->a[48893] = sym_arithmetic_binary_expression;
	v->a[48894] = sym_arithmetic_ternary_expression;
	v->a[48895] = sym_arithmetic_unary_expression;
	v->a[48896] = sym_arithmetic_postfix_expression;
	v->a[48897] = sym_arithmetic_parenthesized_expression;
	v->a[48898] = sym_command_substitution;
	v->a[48899] = 15;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
