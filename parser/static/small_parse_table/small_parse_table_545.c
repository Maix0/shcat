/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_545.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2725(t_small_parse_table_array *v)
{
	v->a[54500] = sym_comment;
	v->a[54501] = actions(1744);
	v->a[54502] = 1;
	v->a[54503] = anon_sym_LPAREN;
	v->a[54504] = actions(1746);
	v->a[54505] = 1;
	v->a[54506] = anon_sym_BANG;
	v->a[54507] = actions(1754);
	v->a[54508] = 1;
	v->a[54509] = anon_sym_TILDE;
	v->a[54510] = actions(1756);
	v->a[54511] = 1;
	v->a[54512] = anon_sym_DOLLAR;
	v->a[54513] = actions(1758);
	v->a[54514] = 1;
	v->a[54515] = anon_sym_DQUOTE;
	v->a[54516] = actions(1762);
	v->a[54517] = 1;
	v->a[54518] = anon_sym_DOLLAR_LBRACE;
	v->a[54519] = actions(1764);
	small_parse_table_2726(v);
}

void	small_parse_table_2726(t_small_parse_table_array *v)
{
	v->a[54520] = 1;
	v->a[54521] = anon_sym_DOLLAR_LPAREN;
	v->a[54522] = actions(1766);
	v->a[54523] = 1;
	v->a[54524] = anon_sym_BQUOTE;
	v->a[54525] = actions(1768);
	v->a[54526] = 1;
	v->a[54527] = sym_variable_name;
	v->a[54528] = actions(1750);
	v->a[54529] = 2;
	v->a[54530] = anon_sym_PLUS_PLUS;
	v->a[54531] = anon_sym_DASH_DASH;
	v->a[54532] = actions(1752);
	v->a[54533] = 2;
	v->a[54534] = anon_sym_DASH2;
	v->a[54535] = anon_sym_PLUS2;
	v->a[54536] = actions(1760);
	v->a[54537] = 2;
	v->a[54538] = sym_number;
	v->a[54539] = aux_sym__simple_variable_name_token1;
	small_parse_table_2727(v);
}

void	small_parse_table_2727(t_small_parse_table_array *v)
{
	v->a[54540] = state(271);
	v->a[54541] = 3;
	v->a[54542] = sym_string;
	v->a[54543] = sym_simple_expansion;
	v->a[54544] = sym_expansion;
	v->a[54545] = state(258);
	v->a[54546] = 8;
	v->a[54547] = sym__arithmetic_expression;
	v->a[54548] = sym_arithmetic_literal;
	v->a[54549] = sym_arithmetic_binary_expression;
	v->a[54550] = sym_arithmetic_ternary_expression;
	v->a[54551] = sym_arithmetic_unary_expression;
	v->a[54552] = sym_arithmetic_postfix_expression;
	v->a[54553] = sym_arithmetic_parenthesized_expression;
	v->a[54554] = sym_command_substitution;
	v->a[54555] = 15;
	v->a[54556] = actions(870);
	v->a[54557] = 1;
	v->a[54558] = sym_comment;
	v->a[54559] = actions(1744);
	small_parse_table_2728(v);
}

void	small_parse_table_2728(t_small_parse_table_array *v)
{
	v->a[54560] = 1;
	v->a[54561] = anon_sym_LPAREN;
	v->a[54562] = actions(1746);
	v->a[54563] = 1;
	v->a[54564] = anon_sym_BANG;
	v->a[54565] = actions(1754);
	v->a[54566] = 1;
	v->a[54567] = anon_sym_TILDE;
	v->a[54568] = actions(1756);
	v->a[54569] = 1;
	v->a[54570] = anon_sym_DOLLAR;
	v->a[54571] = actions(1758);
	v->a[54572] = 1;
	v->a[54573] = anon_sym_DQUOTE;
	v->a[54574] = actions(1762);
	v->a[54575] = 1;
	v->a[54576] = anon_sym_DOLLAR_LBRACE;
	v->a[54577] = actions(1764);
	v->a[54578] = 1;
	v->a[54579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2729(v);
}

void	small_parse_table_2729(t_small_parse_table_array *v)
{
	v->a[54580] = actions(1766);
	v->a[54581] = 1;
	v->a[54582] = anon_sym_BQUOTE;
	v->a[54583] = actions(1768);
	v->a[54584] = 1;
	v->a[54585] = sym_variable_name;
	v->a[54586] = actions(1750);
	v->a[54587] = 2;
	v->a[54588] = anon_sym_PLUS_PLUS;
	v->a[54589] = anon_sym_DASH_DASH;
	v->a[54590] = actions(1752);
	v->a[54591] = 2;
	v->a[54592] = anon_sym_DASH2;
	v->a[54593] = anon_sym_PLUS2;
	v->a[54594] = actions(1760);
	v->a[54595] = 2;
	v->a[54596] = sym_number;
	v->a[54597] = aux_sym__simple_variable_name_token1;
	v->a[54598] = state(271);
	v->a[54599] = 3;
	small_parse_table_2730(v);
}

/* EOF small_parse_table_545.c */
