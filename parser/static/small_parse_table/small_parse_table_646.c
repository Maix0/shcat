/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_646.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3230(t_small_parse_table_array *v)
{
	v->a[64600] = anon_sym_BANG;
	v->a[64601] = actions(2011);
	v->a[64602] = 1;
	v->a[64603] = anon_sym_TILDE;
	v->a[64604] = actions(2013);
	v->a[64605] = 1;
	v->a[64606] = anon_sym_DOLLAR;
	v->a[64607] = actions(2015);
	v->a[64608] = 1;
	v->a[64609] = anon_sym_DQUOTE;
	v->a[64610] = actions(2019);
	v->a[64611] = 1;
	v->a[64612] = anon_sym_DOLLAR_LBRACE;
	v->a[64613] = actions(2021);
	v->a[64614] = 1;
	v->a[64615] = anon_sym_DOLLAR_LPAREN;
	v->a[64616] = actions(2023);
	v->a[64617] = 1;
	v->a[64618] = anon_sym_BQUOTE;
	v->a[64619] = actions(2025);
	small_parse_table_3231(v);
}

void	small_parse_table_3231(t_small_parse_table_array *v)
{
	v->a[64620] = 1;
	v->a[64621] = sym_variable_name;
	v->a[64622] = actions(2007);
	v->a[64623] = 2;
	v->a[64624] = anon_sym_PLUS_PLUS;
	v->a[64625] = anon_sym_DASH_DASH;
	v->a[64626] = actions(2009);
	v->a[64627] = 2;
	v->a[64628] = anon_sym_DASH2;
	v->a[64629] = anon_sym_PLUS2;
	v->a[64630] = actions(2017);
	v->a[64631] = 2;
	v->a[64632] = sym_number;
	v->a[64633] = aux_sym__simple_variable_name_token1;
	v->a[64634] = state(503);
	v->a[64635] = 3;
	v->a[64636] = sym_string;
	v->a[64637] = sym_simple_expansion;
	v->a[64638] = sym_expansion;
	v->a[64639] = state(593);
	small_parse_table_3232(v);
}

void	small_parse_table_3232(t_small_parse_table_array *v)
{
	v->a[64640] = 8;
	v->a[64641] = sym__arithmetic_expression;
	v->a[64642] = sym_arithmetic_literal;
	v->a[64643] = sym_arithmetic_binary_expression;
	v->a[64644] = sym_arithmetic_ternary_expression;
	v->a[64645] = sym_arithmetic_unary_expression;
	v->a[64646] = sym_arithmetic_postfix_expression;
	v->a[64647] = sym_arithmetic_parenthesized_expression;
	v->a[64648] = sym_command_substitution;
	v->a[64649] = 15;
	v->a[64650] = actions(1094);
	v->a[64651] = 1;
	v->a[64652] = sym_comment;
	v->a[64653] = actions(1869);
	v->a[64654] = 1;
	v->a[64655] = anon_sym_LPAREN;
	v->a[64656] = actions(1871);
	v->a[64657] = 1;
	v->a[64658] = anon_sym_BANG;
	v->a[64659] = actions(1879);
	small_parse_table_3233(v);
}

void	small_parse_table_3233(t_small_parse_table_array *v)
{
	v->a[64660] = 1;
	v->a[64661] = anon_sym_TILDE;
	v->a[64662] = actions(1881);
	v->a[64663] = 1;
	v->a[64664] = anon_sym_DOLLAR;
	v->a[64665] = actions(1883);
	v->a[64666] = 1;
	v->a[64667] = anon_sym_DQUOTE;
	v->a[64668] = actions(1887);
	v->a[64669] = 1;
	v->a[64670] = anon_sym_DOLLAR_LBRACE;
	v->a[64671] = actions(1889);
	v->a[64672] = 1;
	v->a[64673] = anon_sym_DOLLAR_LPAREN;
	v->a[64674] = actions(1891);
	v->a[64675] = 1;
	v->a[64676] = anon_sym_BQUOTE;
	v->a[64677] = actions(1893);
	v->a[64678] = 1;
	v->a[64679] = sym_variable_name;
	small_parse_table_3234(v);
}

void	small_parse_table_3234(t_small_parse_table_array *v)
{
	v->a[64680] = actions(1875);
	v->a[64681] = 2;
	v->a[64682] = anon_sym_PLUS_PLUS;
	v->a[64683] = anon_sym_DASH_DASH;
	v->a[64684] = actions(1877);
	v->a[64685] = 2;
	v->a[64686] = anon_sym_DASH2;
	v->a[64687] = anon_sym_PLUS2;
	v->a[64688] = actions(1885);
	v->a[64689] = 2;
	v->a[64690] = sym_number;
	v->a[64691] = aux_sym__simple_variable_name_token1;
	v->a[64692] = state(365);
	v->a[64693] = 3;
	v->a[64694] = sym_string;
	v->a[64695] = sym_simple_expansion;
	v->a[64696] = sym_expansion;
	v->a[64697] = state(320);
	v->a[64698] = 8;
	v->a[64699] = sym__arithmetic_expression;
	small_parse_table_3235(v);
}

/* EOF small_parse_table_646.c */
