/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = actions(1887);
	v->a[61601] = 1;
	v->a[61602] = anon_sym_DOLLAR_LBRACE;
	v->a[61603] = actions(1889);
	v->a[61604] = 1;
	v->a[61605] = anon_sym_DOLLAR_LPAREN;
	v->a[61606] = actions(1891);
	v->a[61607] = 1;
	v->a[61608] = anon_sym_BQUOTE;
	v->a[61609] = actions(1893);
	v->a[61610] = 1;
	v->a[61611] = sym_variable_name;
	v->a[61612] = actions(1913);
	v->a[61613] = 1;
	v->a[61614] = anon_sym_RPAREN_RPAREN;
	v->a[61615] = actions(1875);
	v->a[61616] = 2;
	v->a[61617] = anon_sym_PLUS_PLUS;
	v->a[61618] = anon_sym_DASH_DASH;
	v->a[61619] = actions(1877);
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = 2;
	v->a[61621] = anon_sym_DASH2;
	v->a[61622] = anon_sym_PLUS2;
	v->a[61623] = actions(1885);
	v->a[61624] = 2;
	v->a[61625] = sym_number;
	v->a[61626] = aux_sym__simple_variable_name_token1;
	v->a[61627] = state(365);
	v->a[61628] = 3;
	v->a[61629] = sym_string;
	v->a[61630] = sym_simple_expansion;
	v->a[61631] = sym_expansion;
	v->a[61632] = state(497);
	v->a[61633] = 8;
	v->a[61634] = sym__arithmetic_expression;
	v->a[61635] = sym_arithmetic_literal;
	v->a[61636] = sym_arithmetic_binary_expression;
	v->a[61637] = sym_arithmetic_ternary_expression;
	v->a[61638] = sym_arithmetic_unary_expression;
	v->a[61639] = sym_arithmetic_postfix_expression;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = sym_arithmetic_parenthesized_expression;
	v->a[61641] = sym_command_substitution;
	v->a[61642] = 16;
	v->a[61643] = actions(1094);
	v->a[61644] = 1;
	v->a[61645] = sym_comment;
	v->a[61646] = actions(1869);
	v->a[61647] = 1;
	v->a[61648] = anon_sym_LPAREN;
	v->a[61649] = actions(1871);
	v->a[61650] = 1;
	v->a[61651] = anon_sym_BANG;
	v->a[61652] = actions(1879);
	v->a[61653] = 1;
	v->a[61654] = anon_sym_TILDE;
	v->a[61655] = actions(1881);
	v->a[61656] = 1;
	v->a[61657] = anon_sym_DOLLAR;
	v->a[61658] = actions(1883);
	v->a[61659] = 1;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = anon_sym_DQUOTE;
	v->a[61661] = actions(1887);
	v->a[61662] = 1;
	v->a[61663] = anon_sym_DOLLAR_LBRACE;
	v->a[61664] = actions(1889);
	v->a[61665] = 1;
	v->a[61666] = anon_sym_DOLLAR_LPAREN;
	v->a[61667] = actions(1891);
	v->a[61668] = 1;
	v->a[61669] = anon_sym_BQUOTE;
	v->a[61670] = actions(1893);
	v->a[61671] = 1;
	v->a[61672] = sym_variable_name;
	v->a[61673] = actions(1915);
	v->a[61674] = 1;
	v->a[61675] = anon_sym_RPAREN_RPAREN;
	v->a[61676] = actions(1875);
	v->a[61677] = 2;
	v->a[61678] = anon_sym_PLUS_PLUS;
	v->a[61679] = anon_sym_DASH_DASH;
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = actions(1877);
	v->a[61681] = 2;
	v->a[61682] = anon_sym_DASH2;
	v->a[61683] = anon_sym_PLUS2;
	v->a[61684] = actions(1885);
	v->a[61685] = 2;
	v->a[61686] = sym_number;
	v->a[61687] = aux_sym__simple_variable_name_token1;
	v->a[61688] = state(365);
	v->a[61689] = 3;
	v->a[61690] = sym_string;
	v->a[61691] = sym_simple_expansion;
	v->a[61692] = sym_expansion;
	v->a[61693] = state(504);
	v->a[61694] = 8;
	v->a[61695] = sym__arithmetic_expression;
	v->a[61696] = sym_arithmetic_literal;
	v->a[61697] = sym_arithmetic_binary_expression;
	v->a[61698] = sym_arithmetic_ternary_expression;
	v->a[61699] = sym_arithmetic_unary_expression;
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
