/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_648.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3240(t_small_parse_table_array *v)
{
	v->a[64800] = actions(2009);
	v->a[64801] = 2;
	v->a[64802] = anon_sym_DASH2;
	v->a[64803] = anon_sym_PLUS2;
	v->a[64804] = actions(2017);
	v->a[64805] = 2;
	v->a[64806] = sym_number;
	v->a[64807] = aux_sym__simple_variable_name_token1;
	v->a[64808] = state(503);
	v->a[64809] = 3;
	v->a[64810] = sym_string;
	v->a[64811] = sym_simple_expansion;
	v->a[64812] = sym_expansion;
	v->a[64813] = state(552);
	v->a[64814] = 8;
	v->a[64815] = sym__arithmetic_expression;
	v->a[64816] = sym_arithmetic_literal;
	v->a[64817] = sym_arithmetic_binary_expression;
	v->a[64818] = sym_arithmetic_ternary_expression;
	v->a[64819] = sym_arithmetic_unary_expression;
	small_parse_table_3241(v);
}

void	small_parse_table_3241(t_small_parse_table_array *v)
{
	v->a[64820] = sym_arithmetic_postfix_expression;
	v->a[64821] = sym_arithmetic_parenthesized_expression;
	v->a[64822] = sym_command_substitution;
	v->a[64823] = 15;
	v->a[64824] = actions(1094);
	v->a[64825] = 1;
	v->a[64826] = sym_comment;
	v->a[64827] = actions(2003);
	v->a[64828] = 1;
	v->a[64829] = anon_sym_LPAREN;
	v->a[64830] = actions(2005);
	v->a[64831] = 1;
	v->a[64832] = anon_sym_BANG;
	v->a[64833] = actions(2011);
	v->a[64834] = 1;
	v->a[64835] = anon_sym_TILDE;
	v->a[64836] = actions(2013);
	v->a[64837] = 1;
	v->a[64838] = anon_sym_DOLLAR;
	v->a[64839] = actions(2015);
	small_parse_table_3242(v);
}

void	small_parse_table_3242(t_small_parse_table_array *v)
{
	v->a[64840] = 1;
	v->a[64841] = anon_sym_DQUOTE;
	v->a[64842] = actions(2019);
	v->a[64843] = 1;
	v->a[64844] = anon_sym_DOLLAR_LBRACE;
	v->a[64845] = actions(2021);
	v->a[64846] = 1;
	v->a[64847] = anon_sym_DOLLAR_LPAREN;
	v->a[64848] = actions(2023);
	v->a[64849] = 1;
	v->a[64850] = anon_sym_BQUOTE;
	v->a[64851] = actions(2025);
	v->a[64852] = 1;
	v->a[64853] = sym_variable_name;
	v->a[64854] = actions(2007);
	v->a[64855] = 2;
	v->a[64856] = anon_sym_PLUS_PLUS;
	v->a[64857] = anon_sym_DASH_DASH;
	v->a[64858] = actions(2009);
	v->a[64859] = 2;
	small_parse_table_3243(v);
}

void	small_parse_table_3243(t_small_parse_table_array *v)
{
	v->a[64860] = anon_sym_DASH2;
	v->a[64861] = anon_sym_PLUS2;
	v->a[64862] = actions(2017);
	v->a[64863] = 2;
	v->a[64864] = sym_number;
	v->a[64865] = aux_sym__simple_variable_name_token1;
	v->a[64866] = state(503);
	v->a[64867] = 3;
	v->a[64868] = sym_string;
	v->a[64869] = sym_simple_expansion;
	v->a[64870] = sym_expansion;
	v->a[64871] = state(553);
	v->a[64872] = 8;
	v->a[64873] = sym__arithmetic_expression;
	v->a[64874] = sym_arithmetic_literal;
	v->a[64875] = sym_arithmetic_binary_expression;
	v->a[64876] = sym_arithmetic_ternary_expression;
	v->a[64877] = sym_arithmetic_unary_expression;
	v->a[64878] = sym_arithmetic_postfix_expression;
	v->a[64879] = sym_arithmetic_parenthesized_expression;
	small_parse_table_3244(v);
}

void	small_parse_table_3244(t_small_parse_table_array *v)
{
	v->a[64880] = sym_command_substitution;
	v->a[64881] = 15;
	v->a[64882] = actions(1094);
	v->a[64883] = 1;
	v->a[64884] = sym_comment;
	v->a[64885] = actions(1869);
	v->a[64886] = 1;
	v->a[64887] = anon_sym_LPAREN;
	v->a[64888] = actions(1871);
	v->a[64889] = 1;
	v->a[64890] = anon_sym_BANG;
	v->a[64891] = actions(1879);
	v->a[64892] = 1;
	v->a[64893] = anon_sym_TILDE;
	v->a[64894] = actions(1881);
	v->a[64895] = 1;
	v->a[64896] = anon_sym_DOLLAR;
	v->a[64897] = actions(1883);
	v->a[64898] = 1;
	v->a[64899] = anon_sym_DQUOTE;
	small_parse_table_3245(v);
}

/* EOF small_parse_table_648.c */
