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
	v->a[58600] = sym_arithmetic_literal;
	v->a[58601] = sym_arithmetic_binary_expression;
	v->a[58602] = sym_arithmetic_ternary_expression;
	v->a[58603] = sym_arithmetic_unary_expression;
	v->a[58604] = sym_arithmetic_postfix_expression;
	v->a[58605] = sym_arithmetic_parenthesized_expression;
	v->a[58606] = sym_command_substitution;
	v->a[58607] = 15;
	v->a[58608] = actions(1074);
	v->a[58609] = 1;
	v->a[58610] = sym_comment;
	v->a[58611] = actions(1831);
	v->a[58612] = 1;
	v->a[58613] = anon_sym_LPAREN;
	v->a[58614] = actions(1833);
	v->a[58615] = 1;
	v->a[58616] = anon_sym_BANG;
	v->a[58617] = actions(1841);
	v->a[58618] = 1;
	v->a[58619] = anon_sym_TILDE;
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = actions(1843);
	v->a[58621] = 1;
	v->a[58622] = anon_sym_DOLLAR;
	v->a[58623] = actions(1845);
	v->a[58624] = 1;
	v->a[58625] = anon_sym_DQUOTE;
	v->a[58626] = actions(1849);
	v->a[58627] = 1;
	v->a[58628] = anon_sym_DOLLAR_LBRACE;
	v->a[58629] = actions(1851);
	v->a[58630] = 1;
	v->a[58631] = anon_sym_DOLLAR_LPAREN;
	v->a[58632] = actions(1853);
	v->a[58633] = 1;
	v->a[58634] = anon_sym_BQUOTE;
	v->a[58635] = actions(1855);
	v->a[58636] = 1;
	v->a[58637] = sym_variable_name;
	v->a[58638] = actions(1837);
	v->a[58639] = 2;
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = anon_sym_PLUS_PLUS;
	v->a[58641] = anon_sym_DASH_DASH;
	v->a[58642] = actions(1839);
	v->a[58643] = 2;
	v->a[58644] = anon_sym_DASH2;
	v->a[58645] = anon_sym_PLUS2;
	v->a[58646] = actions(1847);
	v->a[58647] = 2;
	v->a[58648] = sym_number;
	v->a[58649] = aux_sym__simple_variable_name_token1;
	v->a[58650] = state(370);
	v->a[58651] = 3;
	v->a[58652] = sym_string;
	v->a[58653] = sym_simple_expansion;
	v->a[58654] = sym_expansion;
	v->a[58655] = state(463);
	v->a[58656] = 8;
	v->a[58657] = sym__arithmetic_expression;
	v->a[58658] = sym_arithmetic_literal;
	v->a[58659] = sym_arithmetic_binary_expression;
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = sym_arithmetic_ternary_expression;
	v->a[58661] = sym_arithmetic_unary_expression;
	v->a[58662] = sym_arithmetic_postfix_expression;
	v->a[58663] = sym_arithmetic_parenthesized_expression;
	v->a[58664] = sym_command_substitution;
	v->a[58665] = 6;
	v->a[58666] = actions(3);
	v->a[58667] = 1;
	v->a[58668] = sym_comment;
	v->a[58669] = actions(1536);
	v->a[58670] = 1;
	v->a[58671] = sym_file_descriptor;
	v->a[58672] = actions(1539);
	v->a[58673] = 1;
	v->a[58674] = sym_variable_name;
	v->a[58675] = actions(1528);
	v->a[58676] = 5;
	v->a[58677] = anon_sym_PIPE;
	v->a[58678] = anon_sym_AMP_AMP;
	v->a[58679] = anon_sym_PIPE_PIPE;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = anon_sym_LT_LT;
	v->a[58681] = anon_sym_LT_LT_DASH;
	v->a[58682] = actions(1526);
	v->a[58683] = 9;
	v->a[58684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58685] = anon_sym_DOLLAR;
	v->a[58686] = anon_sym_DQUOTE;
	v->a[58687] = sym_raw_string;
	v->a[58688] = sym_number;
	v->a[58689] = anon_sym_DOLLAR_LBRACE;
	v->a[58690] = anon_sym_DOLLAR_LPAREN;
	v->a[58691] = anon_sym_BQUOTE;
	v->a[58692] = sym_word;
	v->a[58693] = actions(1533);
	v->a[58694] = 10;
	v->a[58695] = anon_sym_LT;
	v->a[58696] = anon_sym_GT;
	v->a[58697] = anon_sym_GT_GT;
	v->a[58698] = anon_sym_AMP_GT;
	v->a[58699] = anon_sym_AMP_GT_GT;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
