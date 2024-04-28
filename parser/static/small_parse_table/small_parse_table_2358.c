/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2358.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11790(t_small_parse_table_array *v)
{
	v->a[235800] = state(4500);
	v->a[235801] = 1;
	v->a[235802] = aux_sym__literal_repeat1;
	v->a[235803] = state(5029);
	v->a[235804] = 1;
	v->a[235805] = sym_concatenation;
	v->a[235806] = actions(9308);
	v->a[235807] = 2;
	v->a[235808] = anon_sym_LPAREN_LPAREN;
	v->a[235809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235810] = actions(9326);
	v->a[235811] = 2;
	v->a[235812] = anon_sym_LT_LPAREN;
	v->a[235813] = anon_sym_GT_LPAREN;
	v->a[235814] = actions(11106);
	v->a[235815] = 2;
	v->a[235816] = sym_raw_string;
	v->a[235817] = sym_ansi_c_string;
	v->a[235818] = state(4622);
	v->a[235819] = 9;
	small_parse_table_11791(v);
}

void	small_parse_table_11791(t_small_parse_table_array *v)
{
	v->a[235820] = sym_arithmetic_expansion;
	v->a[235821] = sym_brace_expression;
	v->a[235822] = sym_string;
	v->a[235823] = sym_translated_string;
	v->a[235824] = sym_number;
	v->a[235825] = sym_simple_expansion;
	v->a[235826] = sym_expansion;
	v->a[235827] = sym_command_substitution;
	v->a[235828] = sym_process_substitution;
	v->a[235829] = 21;
	v->a[235830] = actions(71);
	v->a[235831] = 1;
	v->a[235832] = sym_comment;
	v->a[235833] = actions(9364);
	v->a[235834] = 1;
	v->a[235835] = anon_sym_LPAREN;
	v->a[235836] = actions(9366);
	v->a[235837] = 1;
	v->a[235838] = anon_sym_BANG;
	v->a[235839] = actions(9372);
	small_parse_table_11792(v);
}

void	small_parse_table_11792(t_small_parse_table_array *v)
{
	v->a[235840] = 1;
	v->a[235841] = anon_sym_TILDE;
	v->a[235842] = actions(9374);
	v->a[235843] = 1;
	v->a[235844] = anon_sym_DOLLAR;
	v->a[235845] = actions(9376);
	v->a[235846] = 1;
	v->a[235847] = anon_sym_DQUOTE;
	v->a[235848] = actions(9378);
	v->a[235849] = 1;
	v->a[235850] = aux_sym_number_token1;
	v->a[235851] = actions(9380);
	v->a[235852] = 1;
	v->a[235853] = aux_sym_number_token2;
	v->a[235854] = actions(9382);
	v->a[235855] = 1;
	v->a[235856] = anon_sym_DOLLAR_LBRACE;
	v->a[235857] = actions(9384);
	v->a[235858] = 1;
	v->a[235859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11793(v);
}

void	small_parse_table_11793(t_small_parse_table_array *v)
{
	v->a[235860] = actions(9386);
	v->a[235861] = 1;
	v->a[235862] = anon_sym_BQUOTE;
	v->a[235863] = actions(9388);
	v->a[235864] = 1;
	v->a[235865] = anon_sym_DOLLAR_BQUOTE;
	v->a[235866] = actions(9392);
	v->a[235867] = 1;
	v->a[235868] = sym_variable_name;
	v->a[235869] = actions(11110);
	v->a[235870] = 1;
	v->a[235871] = aux_sym__simple_variable_name_token1;
	v->a[235872] = state(3391);
	v->a[235873] = 1;
	v->a[235874] = sym__arithmetic_binary_expression;
	v->a[235875] = state(3396);
	v->a[235876] = 1;
	v->a[235877] = sym__arithmetic_ternary_expression;
	v->a[235878] = state(3398);
	v->a[235879] = 1;
	small_parse_table_11794(v);
}

void	small_parse_table_11794(t_small_parse_table_array *v)
{
	v->a[235880] = sym__arithmetic_unary_expression;
	v->a[235881] = state(3400);
	v->a[235882] = 1;
	v->a[235883] = sym__arithmetic_postfix_expression;
	v->a[235884] = actions(9368);
	v->a[235885] = 2;
	v->a[235886] = anon_sym_PLUS_PLUS2;
	v->a[235887] = anon_sym_DASH_DASH2;
	v->a[235888] = actions(9370);
	v->a[235889] = 2;
	v->a[235890] = anon_sym_DASH2;
	v->a[235891] = anon_sym_PLUS2;
	v->a[235892] = state(3252);
	v->a[235893] = 9;
	v->a[235894] = sym_subscript;
	v->a[235895] = sym__arithmetic_expression;
	v->a[235896] = sym__arithmetic_literal;
	v->a[235897] = sym__arithmetic_parenthesized_expression;
	v->a[235898] = sym_string;
	v->a[235899] = sym_number;
	small_parse_table_11795(v);
}

/* EOF small_parse_table_2358.c */
