/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_586.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2930(t_small_parse_table_array *v)
{
	v->a[58600] = sym_arithmetic_binary_expression;
	v->a[58601] = sym_arithmetic_ternary_expression;
	v->a[58602] = sym_arithmetic_unary_expression;
	v->a[58603] = sym_arithmetic_postfix_expression;
	v->a[58604] = sym_arithmetic_parenthesized_expression;
	v->a[58605] = sym_command_substitution;
	v->a[58606] = 17;
	v->a[58607] = actions(1404);
	v->a[58608] = 1;
	v->a[58609] = sym_comment;
	v->a[58610] = actions(1979);
	v->a[58611] = 1;
	v->a[58612] = anon_sym_LPAREN;
	v->a[58613] = actions(1981);
	v->a[58614] = 1;
	v->a[58615] = anon_sym_BANG;
	v->a[58616] = actions(1989);
	v->a[58617] = 1;
	v->a[58618] = anon_sym_TILDE;
	v->a[58619] = actions(1991);
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = 1;
	v->a[58621] = anon_sym_DOLLAR;
	v->a[58622] = actions(1993);
	v->a[58623] = 1;
	v->a[58624] = anon_sym_DQUOTE;
	v->a[58625] = actions(1995);
	v->a[58626] = 1;
	v->a[58627] = aux_sym_number_token1;
	v->a[58628] = actions(1997);
	v->a[58629] = 1;
	v->a[58630] = aux_sym_number_token2;
	v->a[58631] = actions(1999);
	v->a[58632] = 1;
	v->a[58633] = anon_sym_DOLLAR_LBRACE;
	v->a[58634] = actions(2001);
	v->a[58635] = 1;
	v->a[58636] = anon_sym_DOLLAR_LPAREN;
	v->a[58637] = actions(2003);
	v->a[58638] = 1;
	v->a[58639] = anon_sym_BQUOTE;
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = actions(2005);
	v->a[58641] = 1;
	v->a[58642] = aux_sym__simple_variable_name_token1;
	v->a[58643] = actions(2007);
	v->a[58644] = 1;
	v->a[58645] = sym_variable_name;
	v->a[58646] = actions(1985);
	v->a[58647] = 2;
	v->a[58648] = anon_sym_PLUS_PLUS;
	v->a[58649] = anon_sym_DASH_DASH;
	v->a[58650] = actions(1987);
	v->a[58651] = 2;
	v->a[58652] = anon_sym_DASH2;
	v->a[58653] = anon_sym_PLUS2;
	v->a[58654] = state(530);
	v->a[58655] = 4;
	v->a[58656] = sym_string;
	v->a[58657] = sym_number;
	v->a[58658] = sym_simple_expansion;
	v->a[58659] = sym_expansion;
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = state(413);
	v->a[58661] = 8;
	v->a[58662] = sym__arithmetic_expression;
	v->a[58663] = sym_arithmetic_literal;
	v->a[58664] = sym_arithmetic_binary_expression;
	v->a[58665] = sym_arithmetic_ternary_expression;
	v->a[58666] = sym_arithmetic_unary_expression;
	v->a[58667] = sym_arithmetic_postfix_expression;
	v->a[58668] = sym_arithmetic_parenthesized_expression;
	v->a[58669] = sym_command_substitution;
	v->a[58670] = 19;
	v->a[58671] = actions(3);
	v->a[58672] = 1;
	v->a[58673] = sym_comment;
	v->a[58674] = actions(2115);
	v->a[58675] = 1;
	v->a[58676] = anon_sym_LPAREN;
	v->a[58677] = actions(2119);
	v->a[58678] = 1;
	v->a[58679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = actions(2121);
	v->a[58681] = 1;
	v->a[58682] = anon_sym_DOLLAR;
	v->a[58683] = actions(2123);
	v->a[58684] = 1;
	v->a[58685] = anon_sym_DQUOTE;
	v->a[58686] = actions(2125);
	v->a[58687] = 1;
	v->a[58688] = aux_sym_number_token1;
	v->a[58689] = actions(2127);
	v->a[58690] = 1;
	v->a[58691] = aux_sym_number_token2;
	v->a[58692] = actions(2129);
	v->a[58693] = 1;
	v->a[58694] = anon_sym_DOLLAR_LBRACE;
	v->a[58695] = actions(2131);
	v->a[58696] = 1;
	v->a[58697] = anon_sym_DOLLAR_LPAREN;
	v->a[58698] = actions(2133);
	v->a[58699] = 1;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
