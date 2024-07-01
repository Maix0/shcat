/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_448.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2240(t_small_parse_table_array *v)
{
	v->a[44800] = 1;
	v->a[44801] = anon_sym_BQUOTE;
	v->a[44802] = actions(1584);
	v->a[44803] = 1;
	v->a[44804] = sym_variable_name;
	v->a[44805] = actions(1614);
	v->a[44806] = 1;
	v->a[44807] = anon_sym_RPAREN_RPAREN;
	v->a[44808] = actions(1566);
	v->a[44809] = 2;
	v->a[44810] = anon_sym_PLUS_PLUS;
	v->a[44811] = anon_sym_DASH_DASH;
	v->a[44812] = actions(1568);
	v->a[44813] = 2;
	v->a[44814] = anon_sym_DASH2;
	v->a[44815] = anon_sym_PLUS2;
	v->a[44816] = actions(1576);
	v->a[44817] = 2;
	v->a[44818] = sym_number;
	v->a[44819] = aux_sym__simple_variable_name_token1;
	small_parse_table_2241(v);
}

void	small_parse_table_2241(t_small_parse_table_array *v)
{
	v->a[44820] = state(255);
	v->a[44821] = 3;
	v->a[44822] = sym_string;
	v->a[44823] = sym_simple_expansion;
	v->a[44824] = sym_expansion;
	v->a[44825] = state(290);
	v->a[44826] = 8;
	v->a[44827] = sym__arithmetic_expression;
	v->a[44828] = sym_arithmetic_literal;
	v->a[44829] = sym_arithmetic_binary_expression;
	v->a[44830] = sym_arithmetic_ternary_expression;
	v->a[44831] = sym_arithmetic_unary_expression;
	v->a[44832] = sym_arithmetic_postfix_expression;
	v->a[44833] = sym_arithmetic_parenthesized_expression;
	v->a[44834] = sym_command_substitution;
	v->a[44835] = 16;
	v->a[44836] = actions(664);
	v->a[44837] = 1;
	v->a[44838] = sym_comment;
	v->a[44839] = actions(1560);
	small_parse_table_2242(v);
}

void	small_parse_table_2242(t_small_parse_table_array *v)
{
	v->a[44840] = 1;
	v->a[44841] = anon_sym_LPAREN;
	v->a[44842] = actions(1562);
	v->a[44843] = 1;
	v->a[44844] = anon_sym_BANG;
	v->a[44845] = actions(1570);
	v->a[44846] = 1;
	v->a[44847] = anon_sym_TILDE;
	v->a[44848] = actions(1572);
	v->a[44849] = 1;
	v->a[44850] = anon_sym_DOLLAR;
	v->a[44851] = actions(1574);
	v->a[44852] = 1;
	v->a[44853] = anon_sym_DQUOTE;
	v->a[44854] = actions(1578);
	v->a[44855] = 1;
	v->a[44856] = anon_sym_DOLLAR_LBRACE;
	v->a[44857] = actions(1580);
	v->a[44858] = 1;
	v->a[44859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2243(v);
}

void	small_parse_table_2243(t_small_parse_table_array *v)
{
	v->a[44860] = actions(1582);
	v->a[44861] = 1;
	v->a[44862] = anon_sym_BQUOTE;
	v->a[44863] = actions(1584);
	v->a[44864] = 1;
	v->a[44865] = sym_variable_name;
	v->a[44866] = actions(1616);
	v->a[44867] = 1;
	v->a[44868] = anon_sym_RPAREN_RPAREN;
	v->a[44869] = actions(1566);
	v->a[44870] = 2;
	v->a[44871] = anon_sym_PLUS_PLUS;
	v->a[44872] = anon_sym_DASH_DASH;
	v->a[44873] = actions(1568);
	v->a[44874] = 2;
	v->a[44875] = anon_sym_DASH2;
	v->a[44876] = anon_sym_PLUS2;
	v->a[44877] = actions(1576);
	v->a[44878] = 2;
	v->a[44879] = sym_number;
	small_parse_table_2244(v);
}

void	small_parse_table_2244(t_small_parse_table_array *v)
{
	v->a[44880] = aux_sym__simple_variable_name_token1;
	v->a[44881] = state(255);
	v->a[44882] = 3;
	v->a[44883] = sym_string;
	v->a[44884] = sym_simple_expansion;
	v->a[44885] = sym_expansion;
	v->a[44886] = state(329);
	v->a[44887] = 8;
	v->a[44888] = sym__arithmetic_expression;
	v->a[44889] = sym_arithmetic_literal;
	v->a[44890] = sym_arithmetic_binary_expression;
	v->a[44891] = sym_arithmetic_ternary_expression;
	v->a[44892] = sym_arithmetic_unary_expression;
	v->a[44893] = sym_arithmetic_postfix_expression;
	v->a[44894] = sym_arithmetic_parenthesized_expression;
	v->a[44895] = sym_command_substitution;
	v->a[44896] = 4;
	v->a[44897] = actions(3);
	v->a[44898] = 1;
	v->a[44899] = sym_comment;
	small_parse_table_2245(v);
}

/* EOF small_parse_table_448.c */
