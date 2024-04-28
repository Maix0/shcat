/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2378.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11890(t_small_parse_table_array *v)
{
	v->a[237800] = 1;
	v->a[237801] = sym__arithmetic_postfix_expression;
	v->a[237802] = actions(9282);
	v->a[237803] = 2;
	v->a[237804] = anon_sym_PLUS_PLUS2;
	v->a[237805] = anon_sym_DASH_DASH2;
	v->a[237806] = actions(9284);
	v->a[237807] = 2;
	v->a[237808] = anon_sym_DASH2;
	v->a[237809] = anon_sym_PLUS2;
	v->a[237810] = state(2786);
	v->a[237811] = 9;
	v->a[237812] = sym_subscript;
	v->a[237813] = sym__arithmetic_expression;
	v->a[237814] = sym__arithmetic_literal;
	v->a[237815] = sym__arithmetic_parenthesized_expression;
	v->a[237816] = sym_string;
	v->a[237817] = sym_number;
	v->a[237818] = sym_simple_expansion;
	v->a[237819] = sym_expansion;
	small_parse_table_11891(v);
}

void	small_parse_table_11891(t_small_parse_table_array *v)
{
	v->a[237820] = sym_command_substitution;
	v->a[237821] = 21;
	v->a[237822] = actions(71);
	v->a[237823] = 1;
	v->a[237824] = sym_comment;
	v->a[237825] = actions(9364);
	v->a[237826] = 1;
	v->a[237827] = anon_sym_LPAREN;
	v->a[237828] = actions(9366);
	v->a[237829] = 1;
	v->a[237830] = anon_sym_BANG;
	v->a[237831] = actions(9372);
	v->a[237832] = 1;
	v->a[237833] = anon_sym_TILDE;
	v->a[237834] = actions(9374);
	v->a[237835] = 1;
	v->a[237836] = anon_sym_DOLLAR;
	v->a[237837] = actions(9376);
	v->a[237838] = 1;
	v->a[237839] = anon_sym_DQUOTE;
	small_parse_table_11892(v);
}

void	small_parse_table_11892(t_small_parse_table_array *v)
{
	v->a[237840] = actions(9378);
	v->a[237841] = 1;
	v->a[237842] = aux_sym_number_token1;
	v->a[237843] = actions(9380);
	v->a[237844] = 1;
	v->a[237845] = aux_sym_number_token2;
	v->a[237846] = actions(9382);
	v->a[237847] = 1;
	v->a[237848] = anon_sym_DOLLAR_LBRACE;
	v->a[237849] = actions(9384);
	v->a[237850] = 1;
	v->a[237851] = anon_sym_DOLLAR_LPAREN;
	v->a[237852] = actions(9386);
	v->a[237853] = 1;
	v->a[237854] = anon_sym_BQUOTE;
	v->a[237855] = actions(9388);
	v->a[237856] = 1;
	v->a[237857] = anon_sym_DOLLAR_BQUOTE;
	v->a[237858] = actions(9392);
	v->a[237859] = 1;
	small_parse_table_11893(v);
}

void	small_parse_table_11893(t_small_parse_table_array *v)
{
	v->a[237860] = sym_variable_name;
	v->a[237861] = actions(11196);
	v->a[237862] = 1;
	v->a[237863] = aux_sym__simple_variable_name_token1;
	v->a[237864] = state(3391);
	v->a[237865] = 1;
	v->a[237866] = sym__arithmetic_binary_expression;
	v->a[237867] = state(3396);
	v->a[237868] = 1;
	v->a[237869] = sym__arithmetic_ternary_expression;
	v->a[237870] = state(3398);
	v->a[237871] = 1;
	v->a[237872] = sym__arithmetic_unary_expression;
	v->a[237873] = state(3400);
	v->a[237874] = 1;
	v->a[237875] = sym__arithmetic_postfix_expression;
	v->a[237876] = actions(9368);
	v->a[237877] = 2;
	v->a[237878] = anon_sym_PLUS_PLUS2;
	v->a[237879] = anon_sym_DASH_DASH2;
	small_parse_table_11894(v);
}

void	small_parse_table_11894(t_small_parse_table_array *v)
{
	v->a[237880] = actions(9370);
	v->a[237881] = 2;
	v->a[237882] = anon_sym_DASH2;
	v->a[237883] = anon_sym_PLUS2;
	v->a[237884] = state(3239);
	v->a[237885] = 9;
	v->a[237886] = sym_subscript;
	v->a[237887] = sym__arithmetic_expression;
	v->a[237888] = sym__arithmetic_literal;
	v->a[237889] = sym__arithmetic_parenthesized_expression;
	v->a[237890] = sym_string;
	v->a[237891] = sym_number;
	v->a[237892] = sym_simple_expansion;
	v->a[237893] = sym_expansion;
	v->a[237894] = sym_command_substitution;
	v->a[237895] = 21;
	v->a[237896] = actions(71);
	v->a[237897] = 1;
	v->a[237898] = sym_comment;
	v->a[237899] = actions(9364);
	small_parse_table_11895(v);
}

/* EOF small_parse_table_2378.c */
