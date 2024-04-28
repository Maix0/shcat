/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2278.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11390(t_small_parse_table_array *v)
{
	v->a[227800] = sym_string;
	v->a[227801] = sym_translated_string;
	v->a[227802] = sym_number;
	v->a[227803] = sym_simple_expansion;
	v->a[227804] = sym_expansion;
	v->a[227805] = sym_command_substitution;
	v->a[227806] = sym_process_substitution;
	v->a[227807] = 21;
	v->a[227808] = actions(71);
	v->a[227809] = 1;
	v->a[227810] = sym_comment;
	v->a[227811] = actions(9364);
	v->a[227812] = 1;
	v->a[227813] = anon_sym_LPAREN;
	v->a[227814] = actions(9366);
	v->a[227815] = 1;
	v->a[227816] = anon_sym_BANG;
	v->a[227817] = actions(9372);
	v->a[227818] = 1;
	v->a[227819] = anon_sym_TILDE;
	small_parse_table_11391(v);
}

void	small_parse_table_11391(t_small_parse_table_array *v)
{
	v->a[227820] = actions(9374);
	v->a[227821] = 1;
	v->a[227822] = anon_sym_DOLLAR;
	v->a[227823] = actions(9376);
	v->a[227824] = 1;
	v->a[227825] = anon_sym_DQUOTE;
	v->a[227826] = actions(9378);
	v->a[227827] = 1;
	v->a[227828] = aux_sym_number_token1;
	v->a[227829] = actions(9380);
	v->a[227830] = 1;
	v->a[227831] = aux_sym_number_token2;
	v->a[227832] = actions(9382);
	v->a[227833] = 1;
	v->a[227834] = anon_sym_DOLLAR_LBRACE;
	v->a[227835] = actions(9384);
	v->a[227836] = 1;
	v->a[227837] = anon_sym_DOLLAR_LPAREN;
	v->a[227838] = actions(9386);
	v->a[227839] = 1;
	small_parse_table_11392(v);
}

void	small_parse_table_11392(t_small_parse_table_array *v)
{
	v->a[227840] = anon_sym_BQUOTE;
	v->a[227841] = actions(9388);
	v->a[227842] = 1;
	v->a[227843] = anon_sym_DOLLAR_BQUOTE;
	v->a[227844] = actions(9392);
	v->a[227845] = 1;
	v->a[227846] = sym_variable_name;
	v->a[227847] = actions(10824);
	v->a[227848] = 1;
	v->a[227849] = aux_sym__simple_variable_name_token1;
	v->a[227850] = state(3391);
	v->a[227851] = 1;
	v->a[227852] = sym__arithmetic_binary_expression;
	v->a[227853] = state(3396);
	v->a[227854] = 1;
	v->a[227855] = sym__arithmetic_ternary_expression;
	v->a[227856] = state(3398);
	v->a[227857] = 1;
	v->a[227858] = sym__arithmetic_unary_expression;
	v->a[227859] = state(3400);
	small_parse_table_11393(v);
}

void	small_parse_table_11393(t_small_parse_table_array *v)
{
	v->a[227860] = 1;
	v->a[227861] = sym__arithmetic_postfix_expression;
	v->a[227862] = actions(9368);
	v->a[227863] = 2;
	v->a[227864] = anon_sym_PLUS_PLUS2;
	v->a[227865] = anon_sym_DASH_DASH2;
	v->a[227866] = actions(9370);
	v->a[227867] = 2;
	v->a[227868] = anon_sym_DASH2;
	v->a[227869] = anon_sym_PLUS2;
	v->a[227870] = state(3293);
	v->a[227871] = 9;
	v->a[227872] = sym_subscript;
	v->a[227873] = sym__arithmetic_expression;
	v->a[227874] = sym__arithmetic_literal;
	v->a[227875] = sym__arithmetic_parenthesized_expression;
	v->a[227876] = sym_string;
	v->a[227877] = sym_number;
	v->a[227878] = sym_simple_expansion;
	v->a[227879] = sym_expansion;
	small_parse_table_11394(v);
}

void	small_parse_table_11394(t_small_parse_table_array *v)
{
	v->a[227880] = sym_command_substitution;
	v->a[227881] = 18;
	v->a[227882] = actions(3);
	v->a[227883] = 1;
	v->a[227884] = sym_comment;
	v->a[227885] = actions(4633);
	v->a[227886] = 1;
	v->a[227887] = anon_sym_DOLLAR_LBRACK;
	v->a[227888] = actions(4639);
	v->a[227889] = 1;
	v->a[227890] = anon_sym_DQUOTE;
	v->a[227891] = actions(4643);
	v->a[227892] = 1;
	v->a[227893] = aux_sym_number_token1;
	v->a[227894] = actions(4645);
	v->a[227895] = 1;
	v->a[227896] = aux_sym_number_token2;
	v->a[227897] = actions(4647);
	v->a[227898] = 1;
	v->a[227899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11395(v);
}

/* EOF small_parse_table_2278.c */
