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
	v->a[50500] = anon_sym_AMP;
	v->a[50501] = anon_sym_SEMI;
	v->a[50502] = state(2001);
	v->a[50503] = 5;
	v->a[50504] = sym_arithmetic_expansion;
	v->a[50505] = sym_string;
	v->a[50506] = sym_simple_expansion;
	v->a[50507] = sym_expansion;
	v->a[50508] = sym_command_substitution;
	v->a[50509] = 16;
	v->a[50510] = actions(870);
	v->a[50511] = 1;
	v->a[50512] = sym_comment;
	v->a[50513] = actions(1744);
	v->a[50514] = 1;
	v->a[50515] = anon_sym_LPAREN;
	v->a[50516] = actions(1746);
	v->a[50517] = 1;
	v->a[50518] = anon_sym_BANG;
	v->a[50519] = actions(1754);
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = 1;
	v->a[50521] = anon_sym_TILDE;
	v->a[50522] = actions(1756);
	v->a[50523] = 1;
	v->a[50524] = anon_sym_DOLLAR;
	v->a[50525] = actions(1758);
	v->a[50526] = 1;
	v->a[50527] = anon_sym_DQUOTE;
	v->a[50528] = actions(1762);
	v->a[50529] = 1;
	v->a[50530] = anon_sym_DOLLAR_LBRACE;
	v->a[50531] = actions(1764);
	v->a[50532] = 1;
	v->a[50533] = anon_sym_DOLLAR_LPAREN;
	v->a[50534] = actions(1766);
	v->a[50535] = 1;
	v->a[50536] = anon_sym_BQUOTE;
	v->a[50537] = actions(1768);
	v->a[50538] = 1;
	v->a[50539] = sym_variable_name;
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = actions(1792);
	v->a[50541] = 1;
	v->a[50542] = anon_sym_RPAREN_RPAREN;
	v->a[50543] = actions(1750);
	v->a[50544] = 2;
	v->a[50545] = anon_sym_PLUS_PLUS;
	v->a[50546] = anon_sym_DASH_DASH;
	v->a[50547] = actions(1752);
	v->a[50548] = 2;
	v->a[50549] = anon_sym_DASH2;
	v->a[50550] = anon_sym_PLUS2;
	v->a[50551] = actions(1760);
	v->a[50552] = 2;
	v->a[50553] = sym_number;
	v->a[50554] = aux_sym__simple_variable_name_token1;
	v->a[50555] = state(271);
	v->a[50556] = 3;
	v->a[50557] = sym_string;
	v->a[50558] = sym_simple_expansion;
	v->a[50559] = sym_expansion;
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = state(396);
	v->a[50561] = 8;
	v->a[50562] = sym__arithmetic_expression;
	v->a[50563] = sym_arithmetic_literal;
	v->a[50564] = sym_arithmetic_binary_expression;
	v->a[50565] = sym_arithmetic_ternary_expression;
	v->a[50566] = sym_arithmetic_unary_expression;
	v->a[50567] = sym_arithmetic_postfix_expression;
	v->a[50568] = sym_arithmetic_parenthesized_expression;
	v->a[50569] = sym_command_substitution;
	v->a[50570] = 4;
	v->a[50571] = actions(3);
	v->a[50572] = 1;
	v->a[50573] = sym_comment;
	v->a[50574] = actions(1575);
	v->a[50575] = 1;
	v->a[50576] = anon_sym_BQUOTE;
	v->a[50577] = actions(1577);
	v->a[50578] = 2;
	v->a[50579] = sym_file_descriptor;
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = sym_variable_name;
	v->a[50581] = actions(1573);
	v->a[50582] = 24;
	v->a[50583] = anon_sym_for;
	v->a[50584] = anon_sym_while;
	v->a[50585] = anon_sym_until;
	v->a[50586] = anon_sym_if;
	v->a[50587] = anon_sym_case;
	v->a[50588] = anon_sym_LPAREN;
	v->a[50589] = anon_sym_LBRACE;
	v->a[50590] = anon_sym_BANG;
	v->a[50591] = anon_sym_LT;
	v->a[50592] = anon_sym_GT;
	v->a[50593] = anon_sym_GT_GT;
	v->a[50594] = anon_sym_LT_AMP;
	v->a[50595] = anon_sym_GT_AMP;
	v->a[50596] = anon_sym_GT_PIPE;
	v->a[50597] = anon_sym_LT_AMP_DASH;
	v->a[50598] = anon_sym_GT_AMP_DASH;
	v->a[50599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
