/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2328.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11640(t_small_parse_table_array *v)
{
	v->a[232800] = 1;
	v->a[232801] = sym__arithmetic_unary_expression;
	v->a[232802] = state(3367);
	v->a[232803] = 1;
	v->a[232804] = sym__arithmetic_ternary_expression;
	v->a[232805] = state(3375);
	v->a[232806] = 1;
	v->a[232807] = sym__arithmetic_binary_expression;
	v->a[232808] = actions(9902);
	v->a[232809] = 2;
	v->a[232810] = anon_sym_PLUS_PLUS2;
	v->a[232811] = anon_sym_DASH_DASH2;
	v->a[232812] = actions(9904);
	v->a[232813] = 2;
	v->a[232814] = anon_sym_DASH2;
	v->a[232815] = anon_sym_PLUS2;
	v->a[232816] = state(3283);
	v->a[232817] = 9;
	v->a[232818] = sym_subscript;
	v->a[232819] = sym__arithmetic_expression;
	small_parse_table_11641(v);
}

void	small_parse_table_11641(t_small_parse_table_array *v)
{
	v->a[232820] = sym__arithmetic_literal;
	v->a[232821] = sym__arithmetic_parenthesized_expression;
	v->a[232822] = sym_string;
	v->a[232823] = sym_number;
	v->a[232824] = sym_simple_expansion;
	v->a[232825] = sym_expansion;
	v->a[232826] = sym_command_substitution;
	v->a[232827] = 21;
	v->a[232828] = actions(71);
	v->a[232829] = 1;
	v->a[232830] = sym_comment;
	v->a[232831] = actions(3602);
	v->a[232832] = 1;
	v->a[232833] = sym_variable_name;
	v->a[232834] = actions(4042);
	v->a[232835] = 1;
	v->a[232836] = aux_sym__simple_variable_name_token1;
	v->a[232837] = actions(9898);
	v->a[232838] = 1;
	v->a[232839] = anon_sym_LPAREN;
	small_parse_table_11642(v);
}

void	small_parse_table_11642(t_small_parse_table_array *v)
{
	v->a[232840] = actions(9900);
	v->a[232841] = 1;
	v->a[232842] = anon_sym_BANG;
	v->a[232843] = actions(9906);
	v->a[232844] = 1;
	v->a[232845] = anon_sym_TILDE;
	v->a[232846] = actions(9908);
	v->a[232847] = 1;
	v->a[232848] = anon_sym_DOLLAR;
	v->a[232849] = actions(9910);
	v->a[232850] = 1;
	v->a[232851] = anon_sym_DQUOTE;
	v->a[232852] = actions(9912);
	v->a[232853] = 1;
	v->a[232854] = aux_sym_number_token1;
	v->a[232855] = actions(9914);
	v->a[232856] = 1;
	v->a[232857] = aux_sym_number_token2;
	v->a[232858] = actions(9916);
	v->a[232859] = 1;
	small_parse_table_11643(v);
}

void	small_parse_table_11643(t_small_parse_table_array *v)
{
	v->a[232860] = anon_sym_DOLLAR_LBRACE;
	v->a[232861] = actions(9918);
	v->a[232862] = 1;
	v->a[232863] = anon_sym_DOLLAR_LPAREN;
	v->a[232864] = actions(9920);
	v->a[232865] = 1;
	v->a[232866] = anon_sym_BQUOTE;
	v->a[232867] = actions(9922);
	v->a[232868] = 1;
	v->a[232869] = anon_sym_DOLLAR_BQUOTE;
	v->a[232870] = state(3359);
	v->a[232871] = 1;
	v->a[232872] = sym__arithmetic_postfix_expression;
	v->a[232873] = state(3361);
	v->a[232874] = 1;
	v->a[232875] = sym__arithmetic_unary_expression;
	v->a[232876] = state(3367);
	v->a[232877] = 1;
	v->a[232878] = sym__arithmetic_ternary_expression;
	v->a[232879] = state(3375);
	small_parse_table_11644(v);
}

void	small_parse_table_11644(t_small_parse_table_array *v)
{
	v->a[232880] = 1;
	v->a[232881] = sym__arithmetic_binary_expression;
	v->a[232882] = actions(9902);
	v->a[232883] = 2;
	v->a[232884] = anon_sym_PLUS_PLUS2;
	v->a[232885] = anon_sym_DASH_DASH2;
	v->a[232886] = actions(9904);
	v->a[232887] = 2;
	v->a[232888] = anon_sym_DASH2;
	v->a[232889] = anon_sym_PLUS2;
	v->a[232890] = state(3368);
	v->a[232891] = 9;
	v->a[232892] = sym_subscript;
	v->a[232893] = sym__arithmetic_expression;
	v->a[232894] = sym__arithmetic_literal;
	v->a[232895] = sym__arithmetic_parenthesized_expression;
	v->a[232896] = sym_string;
	v->a[232897] = sym_number;
	v->a[232898] = sym_simple_expansion;
	v->a[232899] = sym_expansion;
	small_parse_table_11645(v);
}

/* EOF small_parse_table_2328.c */
