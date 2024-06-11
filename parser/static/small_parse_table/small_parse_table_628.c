/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_628.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3140(t_small_parse_table_array *v)
{
	v->a[62800] = 1;
	v->a[62801] = sym_variable_name;
	v->a[62802] = actions(1945);
	v->a[62803] = 1;
	v->a[62804] = anon_sym_RPAREN_RPAREN;
	v->a[62805] = actions(1875);
	v->a[62806] = 2;
	v->a[62807] = anon_sym_PLUS_PLUS;
	v->a[62808] = anon_sym_DASH_DASH;
	v->a[62809] = actions(1877);
	v->a[62810] = 2;
	v->a[62811] = anon_sym_DASH2;
	v->a[62812] = anon_sym_PLUS2;
	v->a[62813] = actions(1885);
	v->a[62814] = 2;
	v->a[62815] = sym_number;
	v->a[62816] = aux_sym__simple_variable_name_token1;
	v->a[62817] = state(365);
	v->a[62818] = 3;
	v->a[62819] = sym_string;
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = sym_simple_expansion;
	v->a[62821] = sym_expansion;
	v->a[62822] = state(560);
	v->a[62823] = 8;
	v->a[62824] = sym__arithmetic_expression;
	v->a[62825] = sym_arithmetic_literal;
	v->a[62826] = sym_arithmetic_binary_expression;
	v->a[62827] = sym_arithmetic_ternary_expression;
	v->a[62828] = sym_arithmetic_unary_expression;
	v->a[62829] = sym_arithmetic_postfix_expression;
	v->a[62830] = sym_arithmetic_parenthesized_expression;
	v->a[62831] = sym_command_substitution;
	v->a[62832] = 16;
	v->a[62833] = actions(1094);
	v->a[62834] = 1;
	v->a[62835] = sym_comment;
	v->a[62836] = actions(1869);
	v->a[62837] = 1;
	v->a[62838] = anon_sym_LPAREN;
	v->a[62839] = actions(1871);
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = 1;
	v->a[62841] = anon_sym_BANG;
	v->a[62842] = actions(1879);
	v->a[62843] = 1;
	v->a[62844] = anon_sym_TILDE;
	v->a[62845] = actions(1881);
	v->a[62846] = 1;
	v->a[62847] = anon_sym_DOLLAR;
	v->a[62848] = actions(1883);
	v->a[62849] = 1;
	v->a[62850] = anon_sym_DQUOTE;
	v->a[62851] = actions(1887);
	v->a[62852] = 1;
	v->a[62853] = anon_sym_DOLLAR_LBRACE;
	v->a[62854] = actions(1889);
	v->a[62855] = 1;
	v->a[62856] = anon_sym_DOLLAR_LPAREN;
	v->a[62857] = actions(1891);
	v->a[62858] = 1;
	v->a[62859] = anon_sym_BQUOTE;
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = actions(1893);
	v->a[62861] = 1;
	v->a[62862] = sym_variable_name;
	v->a[62863] = actions(1947);
	v->a[62864] = 1;
	v->a[62865] = anon_sym_RPAREN_RPAREN;
	v->a[62866] = actions(1875);
	v->a[62867] = 2;
	v->a[62868] = anon_sym_PLUS_PLUS;
	v->a[62869] = anon_sym_DASH_DASH;
	v->a[62870] = actions(1877);
	v->a[62871] = 2;
	v->a[62872] = anon_sym_DASH2;
	v->a[62873] = anon_sym_PLUS2;
	v->a[62874] = actions(1885);
	v->a[62875] = 2;
	v->a[62876] = sym_number;
	v->a[62877] = aux_sym__simple_variable_name_token1;
	v->a[62878] = state(365);
	v->a[62879] = 3;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = sym_string;
	v->a[62881] = sym_simple_expansion;
	v->a[62882] = sym_expansion;
	v->a[62883] = state(566);
	v->a[62884] = 8;
	v->a[62885] = sym__arithmetic_expression;
	v->a[62886] = sym_arithmetic_literal;
	v->a[62887] = sym_arithmetic_binary_expression;
	v->a[62888] = sym_arithmetic_ternary_expression;
	v->a[62889] = sym_arithmetic_unary_expression;
	v->a[62890] = sym_arithmetic_postfix_expression;
	v->a[62891] = sym_arithmetic_parenthesized_expression;
	v->a[62892] = sym_command_substitution;
	v->a[62893] = 3;
	v->a[62894] = actions(3);
	v->a[62895] = 1;
	v->a[62896] = sym_comment;
	v->a[62897] = actions(1004);
	v->a[62898] = 2;
	v->a[62899] = sym_file_descriptor;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
