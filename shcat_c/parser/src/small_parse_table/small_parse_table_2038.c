/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2038.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10190(t_small_parse_table_array *v)
{
	v->a[203800] = state(4810);
	v->a[203801] = 9;
	v->a[203802] = sym_arithmetic_expansion;
	v->a[203803] = sym_brace_expression;
	v->a[203804] = sym_string;
	v->a[203805] = sym_translated_string;
	v->a[203806] = sym_number;
	v->a[203807] = sym_simple_expansion;
	v->a[203808] = sym_expansion;
	v->a[203809] = sym_command_substitution;
	v->a[203810] = sym_process_substitution;
	v->a[203811] = 21;
	v->a[203812] = actions(71);
	v->a[203813] = 1;
	v->a[203814] = sym_comment;
	v->a[203815] = actions(9364);
	v->a[203816] = 1;
	v->a[203817] = anon_sym_LPAREN;
	v->a[203818] = actions(9366);
	v->a[203819] = 1;
	small_parse_table_10191(v);
}

void	small_parse_table_10191(t_small_parse_table_array *v)
{
	v->a[203820] = anon_sym_BANG;
	v->a[203821] = actions(9372);
	v->a[203822] = 1;
	v->a[203823] = anon_sym_TILDE;
	v->a[203824] = actions(9374);
	v->a[203825] = 1;
	v->a[203826] = anon_sym_DOLLAR;
	v->a[203827] = actions(9376);
	v->a[203828] = 1;
	v->a[203829] = anon_sym_DQUOTE;
	v->a[203830] = actions(9378);
	v->a[203831] = 1;
	v->a[203832] = aux_sym_number_token1;
	v->a[203833] = actions(9380);
	v->a[203834] = 1;
	v->a[203835] = aux_sym_number_token2;
	v->a[203836] = actions(9382);
	v->a[203837] = 1;
	v->a[203838] = anon_sym_DOLLAR_LBRACE;
	v->a[203839] = actions(9384);
	small_parse_table_10192(v);
}

void	small_parse_table_10192(t_small_parse_table_array *v)
{
	v->a[203840] = 1;
	v->a[203841] = anon_sym_DOLLAR_LPAREN;
	v->a[203842] = actions(9386);
	v->a[203843] = 1;
	v->a[203844] = anon_sym_BQUOTE;
	v->a[203845] = actions(9388);
	v->a[203846] = 1;
	v->a[203847] = anon_sym_DOLLAR_BQUOTE;
	v->a[203848] = actions(9392);
	v->a[203849] = 1;
	v->a[203850] = sym_variable_name;
	v->a[203851] = actions(9424);
	v->a[203852] = 1;
	v->a[203853] = aux_sym__simple_variable_name_token1;
	v->a[203854] = state(3391);
	v->a[203855] = 1;
	v->a[203856] = sym__arithmetic_binary_expression;
	v->a[203857] = state(3396);
	v->a[203858] = 1;
	v->a[203859] = sym__arithmetic_ternary_expression;
	small_parse_table_10193(v);
}

void	small_parse_table_10193(t_small_parse_table_array *v)
{
	v->a[203860] = state(3398);
	v->a[203861] = 1;
	v->a[203862] = sym__arithmetic_unary_expression;
	v->a[203863] = state(3400);
	v->a[203864] = 1;
	v->a[203865] = sym__arithmetic_postfix_expression;
	v->a[203866] = actions(9368);
	v->a[203867] = 2;
	v->a[203868] = anon_sym_PLUS_PLUS2;
	v->a[203869] = anon_sym_DASH_DASH2;
	v->a[203870] = actions(9370);
	v->a[203871] = 2;
	v->a[203872] = anon_sym_DASH2;
	v->a[203873] = anon_sym_PLUS2;
	v->a[203874] = state(3349);
	v->a[203875] = 9;
	v->a[203876] = sym_subscript;
	v->a[203877] = sym__arithmetic_expression;
	v->a[203878] = sym__arithmetic_literal;
	v->a[203879] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10194(v);
}

void	small_parse_table_10194(t_small_parse_table_array *v)
{
	v->a[203880] = sym_string;
	v->a[203881] = sym_number;
	v->a[203882] = sym_simple_expansion;
	v->a[203883] = sym_expansion;
	v->a[203884] = sym_command_substitution;
	v->a[203885] = 21;
	v->a[203886] = actions(71);
	v->a[203887] = 1;
	v->a[203888] = sym_comment;
	v->a[203889] = actions(3064);
	v->a[203890] = 1;
	v->a[203891] = sym_variable_name;
	v->a[203892] = actions(9278);
	v->a[203893] = 1;
	v->a[203894] = anon_sym_LPAREN;
	v->a[203895] = actions(9280);
	v->a[203896] = 1;
	v->a[203897] = anon_sym_BANG;
	v->a[203898] = actions(9286);
	v->a[203899] = 1;
	small_parse_table_10195(v);
}

/* EOF small_parse_table_2038.c */
