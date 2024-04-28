/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2058.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10290(t_small_parse_table_array *v)
{
	v->a[205800] = sym_arithmetic_expansion;
	v->a[205801] = sym_brace_expression;
	v->a[205802] = sym_string;
	v->a[205803] = sym_translated_string;
	v->a[205804] = sym_number;
	v->a[205805] = sym_simple_expansion;
	v->a[205806] = sym_expansion;
	v->a[205807] = sym_command_substitution;
	v->a[205808] = sym_process_substitution;
	v->a[205809] = 21;
	v->a[205810] = actions(71);
	v->a[205811] = 1;
	v->a[205812] = sym_comment;
	v->a[205813] = actions(3064);
	v->a[205814] = 1;
	v->a[205815] = sym_variable_name;
	v->a[205816] = actions(9278);
	v->a[205817] = 1;
	v->a[205818] = anon_sym_LPAREN;
	v->a[205819] = actions(9280);
	small_parse_table_10291(v);
}

void	small_parse_table_10291(t_small_parse_table_array *v)
{
	v->a[205820] = 1;
	v->a[205821] = anon_sym_BANG;
	v->a[205822] = actions(9286);
	v->a[205823] = 1;
	v->a[205824] = anon_sym_TILDE;
	v->a[205825] = actions(9288);
	v->a[205826] = 1;
	v->a[205827] = anon_sym_DOLLAR;
	v->a[205828] = actions(9290);
	v->a[205829] = 1;
	v->a[205830] = anon_sym_DQUOTE;
	v->a[205831] = actions(9292);
	v->a[205832] = 1;
	v->a[205833] = aux_sym_number_token1;
	v->a[205834] = actions(9294);
	v->a[205835] = 1;
	v->a[205836] = aux_sym_number_token2;
	v->a[205837] = actions(9296);
	v->a[205838] = 1;
	v->a[205839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10292(v);
}

void	small_parse_table_10292(t_small_parse_table_array *v)
{
	v->a[205840] = actions(9298);
	v->a[205841] = 1;
	v->a[205842] = anon_sym_DOLLAR_LPAREN;
	v->a[205843] = actions(9300);
	v->a[205844] = 1;
	v->a[205845] = anon_sym_BQUOTE;
	v->a[205846] = actions(9302);
	v->a[205847] = 1;
	v->a[205848] = anon_sym_DOLLAR_BQUOTE;
	v->a[205849] = actions(9570);
	v->a[205850] = 1;
	v->a[205851] = aux_sym__simple_variable_name_token1;
	v->a[205852] = state(2801);
	v->a[205853] = 1;
	v->a[205854] = sym__arithmetic_binary_expression;
	v->a[205855] = state(2803);
	v->a[205856] = 1;
	v->a[205857] = sym__arithmetic_ternary_expression;
	v->a[205858] = state(2809);
	v->a[205859] = 1;
	small_parse_table_10293(v);
}

void	small_parse_table_10293(t_small_parse_table_array *v)
{
	v->a[205860] = sym__arithmetic_unary_expression;
	v->a[205861] = state(2825);
	v->a[205862] = 1;
	v->a[205863] = sym__arithmetic_postfix_expression;
	v->a[205864] = actions(9282);
	v->a[205865] = 2;
	v->a[205866] = anon_sym_PLUS_PLUS2;
	v->a[205867] = anon_sym_DASH_DASH2;
	v->a[205868] = actions(9284);
	v->a[205869] = 2;
	v->a[205870] = anon_sym_DASH2;
	v->a[205871] = anon_sym_PLUS2;
	v->a[205872] = state(2740);
	v->a[205873] = 9;
	v->a[205874] = sym_subscript;
	v->a[205875] = sym__arithmetic_expression;
	v->a[205876] = sym__arithmetic_literal;
	v->a[205877] = sym__arithmetic_parenthesized_expression;
	v->a[205878] = sym_string;
	v->a[205879] = sym_number;
	small_parse_table_10294(v);
}

void	small_parse_table_10294(t_small_parse_table_array *v)
{
	v->a[205880] = sym_simple_expansion;
	v->a[205881] = sym_expansion;
	v->a[205882] = sym_command_substitution;
	v->a[205883] = 21;
	v->a[205884] = actions(71);
	v->a[205885] = 1;
	v->a[205886] = sym_comment;
	v->a[205887] = actions(9364);
	v->a[205888] = 1;
	v->a[205889] = anon_sym_LPAREN;
	v->a[205890] = actions(9366);
	v->a[205891] = 1;
	v->a[205892] = anon_sym_BANG;
	v->a[205893] = actions(9372);
	v->a[205894] = 1;
	v->a[205895] = anon_sym_TILDE;
	v->a[205896] = actions(9374);
	v->a[205897] = 1;
	v->a[205898] = anon_sym_DOLLAR;
	v->a[205899] = actions(9376);
	small_parse_table_10295(v);
}

/* EOF small_parse_table_2058.c */
