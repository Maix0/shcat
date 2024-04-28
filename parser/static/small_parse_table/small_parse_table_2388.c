/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2388.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11940(t_small_parse_table_array *v)
{
	v->a[238800] = 1;
	v->a[238801] = aux_sym__simple_variable_name_token1;
	v->a[238802] = state(2801);
	v->a[238803] = 1;
	v->a[238804] = sym__arithmetic_binary_expression;
	v->a[238805] = state(2803);
	v->a[238806] = 1;
	v->a[238807] = sym__arithmetic_ternary_expression;
	v->a[238808] = state(2809);
	v->a[238809] = 1;
	v->a[238810] = sym__arithmetic_unary_expression;
	v->a[238811] = state(2825);
	v->a[238812] = 1;
	v->a[238813] = sym__arithmetic_postfix_expression;
	v->a[238814] = actions(9282);
	v->a[238815] = 2;
	v->a[238816] = anon_sym_PLUS_PLUS2;
	v->a[238817] = anon_sym_DASH_DASH2;
	v->a[238818] = actions(9284);
	v->a[238819] = 2;
	small_parse_table_11941(v);
}

void	small_parse_table_11941(t_small_parse_table_array *v)
{
	v->a[238820] = anon_sym_DASH2;
	v->a[238821] = anon_sym_PLUS2;
	v->a[238822] = state(2795);
	v->a[238823] = 9;
	v->a[238824] = sym_subscript;
	v->a[238825] = sym__arithmetic_expression;
	v->a[238826] = sym__arithmetic_literal;
	v->a[238827] = sym__arithmetic_parenthesized_expression;
	v->a[238828] = sym_string;
	v->a[238829] = sym_number;
	v->a[238830] = sym_simple_expansion;
	v->a[238831] = sym_expansion;
	v->a[238832] = sym_command_substitution;
	v->a[238833] = 21;
	v->a[238834] = actions(71);
	v->a[238835] = 1;
	v->a[238836] = sym_comment;
	v->a[238837] = actions(9364);
	v->a[238838] = 1;
	v->a[238839] = anon_sym_LPAREN;
	small_parse_table_11942(v);
}

void	small_parse_table_11942(t_small_parse_table_array *v)
{
	v->a[238840] = actions(9366);
	v->a[238841] = 1;
	v->a[238842] = anon_sym_BANG;
	v->a[238843] = actions(9372);
	v->a[238844] = 1;
	v->a[238845] = anon_sym_TILDE;
	v->a[238846] = actions(9374);
	v->a[238847] = 1;
	v->a[238848] = anon_sym_DOLLAR;
	v->a[238849] = actions(9376);
	v->a[238850] = 1;
	v->a[238851] = anon_sym_DQUOTE;
	v->a[238852] = actions(9378);
	v->a[238853] = 1;
	v->a[238854] = aux_sym_number_token1;
	v->a[238855] = actions(9380);
	v->a[238856] = 1;
	v->a[238857] = aux_sym_number_token2;
	v->a[238858] = actions(9382);
	v->a[238859] = 1;
	small_parse_table_11943(v);
}

void	small_parse_table_11943(t_small_parse_table_array *v)
{
	v->a[238860] = anon_sym_DOLLAR_LBRACE;
	v->a[238861] = actions(9384);
	v->a[238862] = 1;
	v->a[238863] = anon_sym_DOLLAR_LPAREN;
	v->a[238864] = actions(9386);
	v->a[238865] = 1;
	v->a[238866] = anon_sym_BQUOTE;
	v->a[238867] = actions(9388);
	v->a[238868] = 1;
	v->a[238869] = anon_sym_DOLLAR_BQUOTE;
	v->a[238870] = actions(9392);
	v->a[238871] = 1;
	v->a[238872] = sym_variable_name;
	v->a[238873] = actions(11224);
	v->a[238874] = 1;
	v->a[238875] = aux_sym__simple_variable_name_token1;
	v->a[238876] = state(3391);
	v->a[238877] = 1;
	v->a[238878] = sym__arithmetic_binary_expression;
	v->a[238879] = state(3396);
	small_parse_table_11944(v);
}

void	small_parse_table_11944(t_small_parse_table_array *v)
{
	v->a[238880] = 1;
	v->a[238881] = sym__arithmetic_ternary_expression;
	v->a[238882] = state(3398);
	v->a[238883] = 1;
	v->a[238884] = sym__arithmetic_unary_expression;
	v->a[238885] = state(3400);
	v->a[238886] = 1;
	v->a[238887] = sym__arithmetic_postfix_expression;
	v->a[238888] = actions(9368);
	v->a[238889] = 2;
	v->a[238890] = anon_sym_PLUS_PLUS2;
	v->a[238891] = anon_sym_DASH_DASH2;
	v->a[238892] = actions(9370);
	v->a[238893] = 2;
	v->a[238894] = anon_sym_DASH2;
	v->a[238895] = anon_sym_PLUS2;
	v->a[238896] = state(3204);
	v->a[238897] = 9;
	v->a[238898] = sym_subscript;
	v->a[238899] = sym__arithmetic_expression;
	small_parse_table_11945(v);
}

/* EOF small_parse_table_2388.c */
