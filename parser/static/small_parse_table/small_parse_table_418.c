/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_418.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2090(t_small_parse_table_array *v)
{
	v->a[41800] = actions(407);
	v->a[41801] = 1;
	v->a[41802] = sym_comment;
	v->a[41803] = actions(1540);
	v->a[41804] = 1;
	v->a[41805] = anon_sym_LPAREN;
	v->a[41806] = actions(1542);
	v->a[41807] = 1;
	v->a[41808] = anon_sym_BANG;
	v->a[41809] = actions(1548);
	v->a[41810] = 1;
	v->a[41811] = anon_sym_DOLLAR;
	v->a[41812] = actions(1550);
	v->a[41813] = 1;
	v->a[41814] = anon_sym_DQUOTE;
	v->a[41815] = actions(1554);
	v->a[41816] = 1;
	v->a[41817] = anon_sym_DOLLAR_LBRACE;
	v->a[41818] = actions(1556);
	v->a[41819] = 1;
	small_parse_table_2091(v);
}

void	small_parse_table_2091(t_small_parse_table_array *v)
{
	v->a[41820] = sym_variable_name;
	v->a[41821] = actions(1544);
	v->a[41822] = 2;
	v->a[41823] = anon_sym_PLUS_PLUS;
	v->a[41824] = anon_sym_DASH_DASH;
	v->a[41825] = actions(1546);
	v->a[41826] = 2;
	v->a[41827] = anon_sym_DASH2;
	v->a[41828] = anon_sym_PLUS2;
	v->a[41829] = actions(1552);
	v->a[41830] = 2;
	v->a[41831] = sym_number;
	v->a[41832] = aux_sym__simple_variable_name_token1;
	v->a[41833] = state(157);
	v->a[41834] = 3;
	v->a[41835] = sym_string;
	v->a[41836] = sym_simple_expansion;
	v->a[41837] = sym_expansion;
	v->a[41838] = state(192);
	v->a[41839] = 7;
	small_parse_table_2092(v);
}

void	small_parse_table_2092(t_small_parse_table_array *v)
{
	v->a[41840] = sym__arithmetic_expression;
	v->a[41841] = sym_arithmetic_literal;
	v->a[41842] = sym_arithmetic_binary_expression;
	v->a[41843] = sym_arithmetic_ternary_expression;
	v->a[41844] = sym_arithmetic_unary_expression;
	v->a[41845] = sym_arithmetic_postfix_expression;
	v->a[41846] = sym_arithmetic_parenthesized_expression;
	v->a[41847] = 12;
	v->a[41848] = actions(407);
	v->a[41849] = 1;
	v->a[41850] = sym_comment;
	v->a[41851] = actions(1540);
	v->a[41852] = 1;
	v->a[41853] = anon_sym_LPAREN;
	v->a[41854] = actions(1542);
	v->a[41855] = 1;
	v->a[41856] = anon_sym_BANG;
	v->a[41857] = actions(1548);
	v->a[41858] = 1;
	v->a[41859] = anon_sym_DOLLAR;
	small_parse_table_2093(v);
}

void	small_parse_table_2093(t_small_parse_table_array *v)
{
	v->a[41860] = actions(1550);
	v->a[41861] = 1;
	v->a[41862] = anon_sym_DQUOTE;
	v->a[41863] = actions(1554);
	v->a[41864] = 1;
	v->a[41865] = anon_sym_DOLLAR_LBRACE;
	v->a[41866] = actions(1556);
	v->a[41867] = 1;
	v->a[41868] = sym_variable_name;
	v->a[41869] = actions(1544);
	v->a[41870] = 2;
	v->a[41871] = anon_sym_PLUS_PLUS;
	v->a[41872] = anon_sym_DASH_DASH;
	v->a[41873] = actions(1546);
	v->a[41874] = 2;
	v->a[41875] = anon_sym_DASH2;
	v->a[41876] = anon_sym_PLUS2;
	v->a[41877] = actions(1552);
	v->a[41878] = 2;
	v->a[41879] = sym_number;
	small_parse_table_2094(v);
}

void	small_parse_table_2094(t_small_parse_table_array *v)
{
	v->a[41880] = aux_sym__simple_variable_name_token1;
	v->a[41881] = state(157);
	v->a[41882] = 3;
	v->a[41883] = sym_string;
	v->a[41884] = sym_simple_expansion;
	v->a[41885] = sym_expansion;
	v->a[41886] = state(153);
	v->a[41887] = 7;
	v->a[41888] = sym__arithmetic_expression;
	v->a[41889] = sym_arithmetic_literal;
	v->a[41890] = sym_arithmetic_binary_expression;
	v->a[41891] = sym_arithmetic_ternary_expression;
	v->a[41892] = sym_arithmetic_unary_expression;
	v->a[41893] = sym_arithmetic_postfix_expression;
	v->a[41894] = sym_arithmetic_parenthesized_expression;
	v->a[41895] = 12;
	v->a[41896] = actions(407);
	v->a[41897] = 1;
	v->a[41898] = sym_comment;
	v->a[41899] = actions(1540);
	small_parse_table_2095(v);
}

/* EOF small_parse_table_418.c */
