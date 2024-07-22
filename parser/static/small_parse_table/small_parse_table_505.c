/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_505.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2525(t_small_parse_table_array *v)
{
	v->a[50500] = anon_sym_PLUS_PLUS;
	v->a[50501] = anon_sym_DASH_DASH;
	v->a[50502] = actions(1698);
	v->a[50503] = 2;
	v->a[50504] = anon_sym_DASH2;
	v->a[50505] = anon_sym_PLUS2;
	v->a[50506] = actions(1706);
	v->a[50507] = 2;
	v->a[50508] = sym_number;
	v->a[50509] = aux_sym__simple_variable_name_token1;
	v->a[50510] = state(238);
	v->a[50511] = 3;
	v->a[50512] = sym_string;
	v->a[50513] = sym_simple_expansion;
	v->a[50514] = sym_expansion;
	v->a[50515] = state(234);
	v->a[50516] = 8;
	v->a[50517] = sym__arithmetic_expression;
	v->a[50518] = sym_arithmetic_literal;
	v->a[50519] = sym_arithmetic_binary_expression;
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = sym_arithmetic_ternary_expression;
	v->a[50521] = sym_arithmetic_unary_expression;
	v->a[50522] = sym_arithmetic_postfix_expression;
	v->a[50523] = sym_arithmetic_parenthesized_expression;
	v->a[50524] = sym_command_substitution;
	v->a[50525] = 15;
	v->a[50526] = actions(501);
	v->a[50527] = 1;
	v->a[50528] = sym_comment;
	v->a[50529] = actions(1692);
	v->a[50530] = 1;
	v->a[50531] = anon_sym_LPAREN;
	v->a[50532] = actions(1694);
	v->a[50533] = 1;
	v->a[50534] = anon_sym_BANG;
	v->a[50535] = actions(1700);
	v->a[50536] = 1;
	v->a[50537] = anon_sym_TILDE;
	v->a[50538] = actions(1702);
	v->a[50539] = 1;
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = anon_sym_DOLLAR;
	v->a[50541] = actions(1704);
	v->a[50542] = 1;
	v->a[50543] = anon_sym_DQUOTE;
	v->a[50544] = actions(1708);
	v->a[50545] = 1;
	v->a[50546] = anon_sym_DOLLAR_LBRACE;
	v->a[50547] = actions(1710);
	v->a[50548] = 1;
	v->a[50549] = anon_sym_DOLLAR_LPAREN;
	v->a[50550] = actions(1712);
	v->a[50551] = 1;
	v->a[50552] = anon_sym_BQUOTE;
	v->a[50553] = actions(1714);
	v->a[50554] = 1;
	v->a[50555] = sym_variable_name;
	v->a[50556] = actions(1696);
	v->a[50557] = 2;
	v->a[50558] = anon_sym_PLUS_PLUS;
	v->a[50559] = anon_sym_DASH_DASH;
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = actions(1698);
	v->a[50561] = 2;
	v->a[50562] = anon_sym_DASH2;
	v->a[50563] = anon_sym_PLUS2;
	v->a[50564] = actions(1706);
	v->a[50565] = 2;
	v->a[50566] = sym_number;
	v->a[50567] = aux_sym__simple_variable_name_token1;
	v->a[50568] = state(238);
	v->a[50569] = 3;
	v->a[50570] = sym_string;
	v->a[50571] = sym_simple_expansion;
	v->a[50572] = sym_expansion;
	v->a[50573] = state(260);
	v->a[50574] = 8;
	v->a[50575] = sym__arithmetic_expression;
	v->a[50576] = sym_arithmetic_literal;
	v->a[50577] = sym_arithmetic_binary_expression;
	v->a[50578] = sym_arithmetic_ternary_expression;
	v->a[50579] = sym_arithmetic_unary_expression;
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = sym_arithmetic_postfix_expression;
	v->a[50581] = sym_arithmetic_parenthesized_expression;
	v->a[50582] = sym_command_substitution;
	v->a[50583] = 15;
	v->a[50584] = actions(501);
	v->a[50585] = 1;
	v->a[50586] = sym_comment;
	v->a[50587] = actions(1692);
	v->a[50588] = 1;
	v->a[50589] = anon_sym_LPAREN;
	v->a[50590] = actions(1694);
	v->a[50591] = 1;
	v->a[50592] = anon_sym_BANG;
	v->a[50593] = actions(1700);
	v->a[50594] = 1;
	v->a[50595] = anon_sym_TILDE;
	v->a[50596] = actions(1702);
	v->a[50597] = 1;
	v->a[50598] = anon_sym_DOLLAR;
	v->a[50599] = actions(1704);
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
