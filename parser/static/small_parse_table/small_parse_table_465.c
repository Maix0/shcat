/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_465.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2325(t_small_parse_table_array *v)
{
	v->a[46500] = actions(1588);
	v->a[46501] = 1;
	v->a[46502] = anon_sym_DQUOTE;
	v->a[46503] = actions(1592);
	v->a[46504] = 1;
	v->a[46505] = anon_sym_DOLLAR_LBRACE;
	v->a[46506] = actions(1594);
	v->a[46507] = 1;
	v->a[46508] = anon_sym_DOLLAR_LPAREN;
	v->a[46509] = actions(1596);
	v->a[46510] = 1;
	v->a[46511] = anon_sym_BQUOTE;
	v->a[46512] = actions(1598);
	v->a[46513] = 1;
	v->a[46514] = sym_variable_name;
	v->a[46515] = actions(1683);
	v->a[46516] = 1;
	v->a[46517] = anon_sym_RPAREN_RPAREN;
	v->a[46518] = actions(1580);
	v->a[46519] = 2;
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = anon_sym_PLUS_PLUS;
	v->a[46521] = anon_sym_DASH_DASH;
	v->a[46522] = actions(1582);
	v->a[46523] = 2;
	v->a[46524] = anon_sym_DASH2;
	v->a[46525] = anon_sym_PLUS2;
	v->a[46526] = actions(1590);
	v->a[46527] = 2;
	v->a[46528] = sym_number;
	v->a[46529] = aux_sym__simple_variable_name_token1;
	v->a[46530] = state(238);
	v->a[46531] = 3;
	v->a[46532] = sym_string;
	v->a[46533] = sym_simple_expansion;
	v->a[46534] = sym_expansion;
	v->a[46535] = state(279);
	v->a[46536] = 8;
	v->a[46537] = sym__arithmetic_expression;
	v->a[46538] = sym_arithmetic_literal;
	v->a[46539] = sym_arithmetic_binary_expression;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = sym_arithmetic_ternary_expression;
	v->a[46541] = sym_arithmetic_unary_expression;
	v->a[46542] = sym_arithmetic_postfix_expression;
	v->a[46543] = sym_arithmetic_parenthesized_expression;
	v->a[46544] = sym_command_substitution;
	v->a[46545] = 3;
	v->a[46546] = actions(3);
	v->a[46547] = 1;
	v->a[46548] = sym_comment;
	v->a[46549] = actions(1327);
	v->a[46550] = 2;
	v->a[46551] = sym_file_descriptor;
	v->a[46552] = sym_variable_name;
	v->a[46553] = actions(1325);
	v->a[46554] = 25;
	v->a[46555] = anon_sym_for;
	v->a[46556] = anon_sym_while;
	v->a[46557] = anon_sym_until;
	v->a[46558] = anon_sym_if;
	v->a[46559] = anon_sym_fi;
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = anon_sym_case;
	v->a[46561] = anon_sym_LPAREN;
	v->a[46562] = anon_sym_LBRACE;
	v->a[46563] = anon_sym_BANG;
	v->a[46564] = anon_sym_LT;
	v->a[46565] = anon_sym_GT;
	v->a[46566] = anon_sym_GT_GT;
	v->a[46567] = anon_sym_LT_AMP;
	v->a[46568] = anon_sym_GT_AMP;
	v->a[46569] = anon_sym_GT_PIPE;
	v->a[46570] = anon_sym_LT_GT;
	v->a[46571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46572] = anon_sym_DOLLAR;
	v->a[46573] = anon_sym_DQUOTE;
	v->a[46574] = sym_raw_string;
	v->a[46575] = sym_number;
	v->a[46576] = anon_sym_DOLLAR_LBRACE;
	v->a[46577] = anon_sym_DOLLAR_LPAREN;
	v->a[46578] = anon_sym_BQUOTE;
	v->a[46579] = sym_word;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = 18;
	v->a[46581] = actions(3);
	v->a[46582] = 1;
	v->a[46583] = sym_comment;
	v->a[46584] = actions(1637);
	v->a[46585] = 1;
	v->a[46586] = anon_sym_LPAREN;
	v->a[46587] = actions(1641);
	v->a[46588] = 1;
	v->a[46589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46590] = actions(1643);
	v->a[46591] = 1;
	v->a[46592] = anon_sym_DOLLAR;
	v->a[46593] = actions(1645);
	v->a[46594] = 1;
	v->a[46595] = anon_sym_DQUOTE;
	v->a[46596] = actions(1647);
	v->a[46597] = 1;
	v->a[46598] = anon_sym_DOLLAR_LBRACE;
	v->a[46599] = actions(1649);
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
