/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_656.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3280(t_small_parse_table_array *v)
{
	v->a[65600] = state(503);
	v->a[65601] = 3;
	v->a[65602] = sym_string;
	v->a[65603] = sym_simple_expansion;
	v->a[65604] = sym_expansion;
	v->a[65605] = state(588);
	v->a[65606] = 8;
	v->a[65607] = sym__arithmetic_expression;
	v->a[65608] = sym_arithmetic_literal;
	v->a[65609] = sym_arithmetic_binary_expression;
	v->a[65610] = sym_arithmetic_ternary_expression;
	v->a[65611] = sym_arithmetic_unary_expression;
	v->a[65612] = sym_arithmetic_postfix_expression;
	v->a[65613] = sym_arithmetic_parenthesized_expression;
	v->a[65614] = sym_command_substitution;
	v->a[65615] = 15;
	v->a[65616] = actions(1094);
	v->a[65617] = 1;
	v->a[65618] = sym_comment;
	v->a[65619] = actions(2003);
	small_parse_table_3281(v);
}

void	small_parse_table_3281(t_small_parse_table_array *v)
{
	v->a[65620] = 1;
	v->a[65621] = anon_sym_LPAREN;
	v->a[65622] = actions(2005);
	v->a[65623] = 1;
	v->a[65624] = anon_sym_BANG;
	v->a[65625] = actions(2011);
	v->a[65626] = 1;
	v->a[65627] = anon_sym_TILDE;
	v->a[65628] = actions(2013);
	v->a[65629] = 1;
	v->a[65630] = anon_sym_DOLLAR;
	v->a[65631] = actions(2015);
	v->a[65632] = 1;
	v->a[65633] = anon_sym_DQUOTE;
	v->a[65634] = actions(2019);
	v->a[65635] = 1;
	v->a[65636] = anon_sym_DOLLAR_LBRACE;
	v->a[65637] = actions(2021);
	v->a[65638] = 1;
	v->a[65639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3282(v);
}

void	small_parse_table_3282(t_small_parse_table_array *v)
{
	v->a[65640] = actions(2023);
	v->a[65641] = 1;
	v->a[65642] = anon_sym_BQUOTE;
	v->a[65643] = actions(2025);
	v->a[65644] = 1;
	v->a[65645] = sym_variable_name;
	v->a[65646] = actions(2007);
	v->a[65647] = 2;
	v->a[65648] = anon_sym_PLUS_PLUS;
	v->a[65649] = anon_sym_DASH_DASH;
	v->a[65650] = actions(2009);
	v->a[65651] = 2;
	v->a[65652] = anon_sym_DASH2;
	v->a[65653] = anon_sym_PLUS2;
	v->a[65654] = actions(2017);
	v->a[65655] = 2;
	v->a[65656] = sym_number;
	v->a[65657] = aux_sym__simple_variable_name_token1;
	v->a[65658] = state(503);
	v->a[65659] = 3;
	small_parse_table_3283(v);
}

void	small_parse_table_3283(t_small_parse_table_array *v)
{
	v->a[65660] = sym_string;
	v->a[65661] = sym_simple_expansion;
	v->a[65662] = sym_expansion;
	v->a[65663] = state(589);
	v->a[65664] = 8;
	v->a[65665] = sym__arithmetic_expression;
	v->a[65666] = sym_arithmetic_literal;
	v->a[65667] = sym_arithmetic_binary_expression;
	v->a[65668] = sym_arithmetic_ternary_expression;
	v->a[65669] = sym_arithmetic_unary_expression;
	v->a[65670] = sym_arithmetic_postfix_expression;
	v->a[65671] = sym_arithmetic_parenthesized_expression;
	v->a[65672] = sym_command_substitution;
	v->a[65673] = 15;
	v->a[65674] = actions(1094);
	v->a[65675] = 1;
	v->a[65676] = sym_comment;
	v->a[65677] = actions(2003);
	v->a[65678] = 1;
	v->a[65679] = anon_sym_LPAREN;
	small_parse_table_3284(v);
}

void	small_parse_table_3284(t_small_parse_table_array *v)
{
	v->a[65680] = actions(2005);
	v->a[65681] = 1;
	v->a[65682] = anon_sym_BANG;
	v->a[65683] = actions(2011);
	v->a[65684] = 1;
	v->a[65685] = anon_sym_TILDE;
	v->a[65686] = actions(2013);
	v->a[65687] = 1;
	v->a[65688] = anon_sym_DOLLAR;
	v->a[65689] = actions(2015);
	v->a[65690] = 1;
	v->a[65691] = anon_sym_DQUOTE;
	v->a[65692] = actions(2019);
	v->a[65693] = 1;
	v->a[65694] = anon_sym_DOLLAR_LBRACE;
	v->a[65695] = actions(2021);
	v->a[65696] = 1;
	v->a[65697] = anon_sym_DOLLAR_LPAREN;
	v->a[65698] = actions(2023);
	v->a[65699] = 1;
	small_parse_table_3285(v);
}

/* EOF small_parse_table_656.c */
