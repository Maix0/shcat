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
	v->a[54500] = actions(1999);
	v->a[54501] = 1;
	v->a[54502] = anon_sym_DOLLAR_LBRACE;
	v->a[54503] = actions(2001);
	v->a[54504] = 1;
	v->a[54505] = anon_sym_DOLLAR_LPAREN;
	v->a[54506] = actions(2003);
	v->a[54507] = 1;
	v->a[54508] = anon_sym_BQUOTE;
	v->a[54509] = actions(2005);
	v->a[54510] = 1;
	v->a[54511] = aux_sym__simple_variable_name_token1;
	v->a[54512] = actions(2007);
	v->a[54513] = 1;
	v->a[54514] = sym_variable_name;
	v->a[54515] = actions(2027);
	v->a[54516] = 1;
	v->a[54517] = anon_sym_RPAREN_RPAREN;
	v->a[54518] = actions(1985);
	v->a[54519] = 2;
	small_parse_table_2726(v);
}

void	small_parse_table_2726(t_small_parse_table_array *v)
{
	v->a[54520] = anon_sym_PLUS_PLUS;
	v->a[54521] = anon_sym_DASH_DASH;
	v->a[54522] = actions(1987);
	v->a[54523] = 2;
	v->a[54524] = anon_sym_DASH2;
	v->a[54525] = anon_sym_PLUS2;
	v->a[54526] = state(530);
	v->a[54527] = 4;
	v->a[54528] = sym_string;
	v->a[54529] = sym_number;
	v->a[54530] = sym_simple_expansion;
	v->a[54531] = sym_expansion;
	v->a[54532] = state(652);
	v->a[54533] = 8;
	v->a[54534] = sym__arithmetic_expression;
	v->a[54535] = sym_arithmetic_literal;
	v->a[54536] = sym_arithmetic_binary_expression;
	v->a[54537] = sym_arithmetic_ternary_expression;
	v->a[54538] = sym_arithmetic_unary_expression;
	v->a[54539] = sym_arithmetic_postfix_expression;
	small_parse_table_2727(v);
}

void	small_parse_table_2727(t_small_parse_table_array *v)
{
	v->a[54540] = sym_arithmetic_parenthesized_expression;
	v->a[54541] = sym_command_substitution;
	v->a[54542] = 18;
	v->a[54543] = actions(1404);
	v->a[54544] = 1;
	v->a[54545] = sym_comment;
	v->a[54546] = actions(1979);
	v->a[54547] = 1;
	v->a[54548] = anon_sym_LPAREN;
	v->a[54549] = actions(1981);
	v->a[54550] = 1;
	v->a[54551] = anon_sym_BANG;
	v->a[54552] = actions(1989);
	v->a[54553] = 1;
	v->a[54554] = anon_sym_TILDE;
	v->a[54555] = actions(1991);
	v->a[54556] = 1;
	v->a[54557] = anon_sym_DOLLAR;
	v->a[54558] = actions(1993);
	v->a[54559] = 1;
	small_parse_table_2728(v);
}

void	small_parse_table_2728(t_small_parse_table_array *v)
{
	v->a[54560] = anon_sym_DQUOTE;
	v->a[54561] = actions(1995);
	v->a[54562] = 1;
	v->a[54563] = aux_sym_number_token1;
	v->a[54564] = actions(1997);
	v->a[54565] = 1;
	v->a[54566] = aux_sym_number_token2;
	v->a[54567] = actions(1999);
	v->a[54568] = 1;
	v->a[54569] = anon_sym_DOLLAR_LBRACE;
	v->a[54570] = actions(2001);
	v->a[54571] = 1;
	v->a[54572] = anon_sym_DOLLAR_LPAREN;
	v->a[54573] = actions(2003);
	v->a[54574] = 1;
	v->a[54575] = anon_sym_BQUOTE;
	v->a[54576] = actions(2005);
	v->a[54577] = 1;
	v->a[54578] = aux_sym__simple_variable_name_token1;
	v->a[54579] = actions(2007);
	small_parse_table_2729(v);
}

void	small_parse_table_2729(t_small_parse_table_array *v)
{
	v->a[54580] = 1;
	v->a[54581] = sym_variable_name;
	v->a[54582] = actions(2029);
	v->a[54583] = 1;
	v->a[54584] = anon_sym_RPAREN_RPAREN;
	v->a[54585] = actions(1985);
	v->a[54586] = 2;
	v->a[54587] = anon_sym_PLUS_PLUS;
	v->a[54588] = anon_sym_DASH_DASH;
	v->a[54589] = actions(1987);
	v->a[54590] = 2;
	v->a[54591] = anon_sym_DASH2;
	v->a[54592] = anon_sym_PLUS2;
	v->a[54593] = state(530);
	v->a[54594] = 4;
	v->a[54595] = sym_string;
	v->a[54596] = sym_number;
	v->a[54597] = sym_simple_expansion;
	v->a[54598] = sym_expansion;
	v->a[54599] = state(563);
	small_parse_table_2730(v);
}

/* EOF small_parse_table_545.c */
