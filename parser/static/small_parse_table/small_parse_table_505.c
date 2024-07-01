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
	v->a[50500] = anon_sym_BANG;
	v->a[50501] = actions(1748);
	v->a[50502] = 1;
	v->a[50503] = anon_sym_TILDE;
	v->a[50504] = actions(1750);
	v->a[50505] = 1;
	v->a[50506] = anon_sym_DOLLAR;
	v->a[50507] = actions(1752);
	v->a[50508] = 1;
	v->a[50509] = anon_sym_DQUOTE;
	v->a[50510] = actions(1756);
	v->a[50511] = 1;
	v->a[50512] = anon_sym_DOLLAR_LBRACE;
	v->a[50513] = actions(1758);
	v->a[50514] = 1;
	v->a[50515] = anon_sym_DOLLAR_LPAREN;
	v->a[50516] = actions(1760);
	v->a[50517] = 1;
	v->a[50518] = anon_sym_BQUOTE;
	v->a[50519] = actions(1762);
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = 1;
	v->a[50521] = sym_variable_name;
	v->a[50522] = actions(1744);
	v->a[50523] = 2;
	v->a[50524] = anon_sym_PLUS_PLUS;
	v->a[50525] = anon_sym_DASH_DASH;
	v->a[50526] = actions(1746);
	v->a[50527] = 2;
	v->a[50528] = anon_sym_DASH2;
	v->a[50529] = anon_sym_PLUS2;
	v->a[50530] = actions(1754);
	v->a[50531] = 2;
	v->a[50532] = sym_number;
	v->a[50533] = aux_sym__simple_variable_name_token1;
	v->a[50534] = state(260);
	v->a[50535] = 3;
	v->a[50536] = sym_string;
	v->a[50537] = sym_simple_expansion;
	v->a[50538] = sym_expansion;
	v->a[50539] = state(317);
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = 8;
	v->a[50541] = sym__arithmetic_expression;
	v->a[50542] = sym_arithmetic_literal;
	v->a[50543] = sym_arithmetic_binary_expression;
	v->a[50544] = sym_arithmetic_ternary_expression;
	v->a[50545] = sym_arithmetic_unary_expression;
	v->a[50546] = sym_arithmetic_postfix_expression;
	v->a[50547] = sym_arithmetic_parenthesized_expression;
	v->a[50548] = sym_command_substitution;
	v->a[50549] = 15;
	v->a[50550] = actions(664);
	v->a[50551] = 1;
	v->a[50552] = sym_comment;
	v->a[50553] = actions(1740);
	v->a[50554] = 1;
	v->a[50555] = anon_sym_LPAREN;
	v->a[50556] = actions(1742);
	v->a[50557] = 1;
	v->a[50558] = anon_sym_BANG;
	v->a[50559] = actions(1748);
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = 1;
	v->a[50561] = anon_sym_TILDE;
	v->a[50562] = actions(1750);
	v->a[50563] = 1;
	v->a[50564] = anon_sym_DOLLAR;
	v->a[50565] = actions(1752);
	v->a[50566] = 1;
	v->a[50567] = anon_sym_DQUOTE;
	v->a[50568] = actions(1756);
	v->a[50569] = 1;
	v->a[50570] = anon_sym_DOLLAR_LBRACE;
	v->a[50571] = actions(1758);
	v->a[50572] = 1;
	v->a[50573] = anon_sym_DOLLAR_LPAREN;
	v->a[50574] = actions(1760);
	v->a[50575] = 1;
	v->a[50576] = anon_sym_BQUOTE;
	v->a[50577] = actions(1762);
	v->a[50578] = 1;
	v->a[50579] = sym_variable_name;
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = actions(1744);
	v->a[50581] = 2;
	v->a[50582] = anon_sym_PLUS_PLUS;
	v->a[50583] = anon_sym_DASH_DASH;
	v->a[50584] = actions(1746);
	v->a[50585] = 2;
	v->a[50586] = anon_sym_DASH2;
	v->a[50587] = anon_sym_PLUS2;
	v->a[50588] = actions(1754);
	v->a[50589] = 2;
	v->a[50590] = sym_number;
	v->a[50591] = aux_sym__simple_variable_name_token1;
	v->a[50592] = state(260);
	v->a[50593] = 3;
	v->a[50594] = sym_string;
	v->a[50595] = sym_simple_expansion;
	v->a[50596] = sym_expansion;
	v->a[50597] = state(319);
	v->a[50598] = 8;
	v->a[50599] = sym__arithmetic_expression;
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
