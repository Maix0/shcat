/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_596.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2980(t_small_parse_table_array *v)
{
	v->a[59600] = actions(2085);
	v->a[59601] = 1;
	v->a[59602] = anon_sym_TILDE;
	v->a[59603] = actions(2087);
	v->a[59604] = 1;
	v->a[59605] = anon_sym_DOLLAR;
	v->a[59606] = actions(2089);
	v->a[59607] = 1;
	v->a[59608] = anon_sym_DQUOTE;
	v->a[59609] = actions(2091);
	v->a[59610] = 1;
	v->a[59611] = aux_sym_number_token1;
	v->a[59612] = actions(2093);
	v->a[59613] = 1;
	v->a[59614] = aux_sym_number_token2;
	v->a[59615] = actions(2095);
	v->a[59616] = 1;
	v->a[59617] = anon_sym_DOLLAR_LBRACE;
	v->a[59618] = actions(2097);
	v->a[59619] = 1;
	small_parse_table_2981(v);
}

void	small_parse_table_2981(t_small_parse_table_array *v)
{
	v->a[59620] = anon_sym_DOLLAR_LPAREN;
	v->a[59621] = actions(2099);
	v->a[59622] = 1;
	v->a[59623] = anon_sym_BQUOTE;
	v->a[59624] = actions(2101);
	v->a[59625] = 1;
	v->a[59626] = aux_sym__simple_variable_name_token1;
	v->a[59627] = actions(2103);
	v->a[59628] = 1;
	v->a[59629] = sym_variable_name;
	v->a[59630] = actions(2081);
	v->a[59631] = 2;
	v->a[59632] = anon_sym_PLUS_PLUS;
	v->a[59633] = anon_sym_DASH_DASH;
	v->a[59634] = actions(2083);
	v->a[59635] = 2;
	v->a[59636] = anon_sym_DASH2;
	v->a[59637] = anon_sym_PLUS2;
	v->a[59638] = state(588);
	v->a[59639] = 4;
	small_parse_table_2982(v);
}

void	small_parse_table_2982(t_small_parse_table_array *v)
{
	v->a[59640] = sym_string;
	v->a[59641] = sym_number;
	v->a[59642] = sym_simple_expansion;
	v->a[59643] = sym_expansion;
	v->a[59644] = state(612);
	v->a[59645] = 8;
	v->a[59646] = sym__arithmetic_expression;
	v->a[59647] = sym_arithmetic_literal;
	v->a[59648] = sym_arithmetic_binary_expression;
	v->a[59649] = sym_arithmetic_ternary_expression;
	v->a[59650] = sym_arithmetic_unary_expression;
	v->a[59651] = sym_arithmetic_postfix_expression;
	v->a[59652] = sym_arithmetic_parenthesized_expression;
	v->a[59653] = sym_command_substitution;
	v->a[59654] = 17;
	v->a[59655] = actions(1404);
	v->a[59656] = 1;
	v->a[59657] = sym_comment;
	v->a[59658] = actions(2077);
	v->a[59659] = 1;
	small_parse_table_2983(v);
}

void	small_parse_table_2983(t_small_parse_table_array *v)
{
	v->a[59660] = anon_sym_LPAREN;
	v->a[59661] = actions(2079);
	v->a[59662] = 1;
	v->a[59663] = anon_sym_BANG;
	v->a[59664] = actions(2085);
	v->a[59665] = 1;
	v->a[59666] = anon_sym_TILDE;
	v->a[59667] = actions(2087);
	v->a[59668] = 1;
	v->a[59669] = anon_sym_DOLLAR;
	v->a[59670] = actions(2089);
	v->a[59671] = 1;
	v->a[59672] = anon_sym_DQUOTE;
	v->a[59673] = actions(2091);
	v->a[59674] = 1;
	v->a[59675] = aux_sym_number_token1;
	v->a[59676] = actions(2093);
	v->a[59677] = 1;
	v->a[59678] = aux_sym_number_token2;
	v->a[59679] = actions(2095);
	small_parse_table_2984(v);
}

void	small_parse_table_2984(t_small_parse_table_array *v)
{
	v->a[59680] = 1;
	v->a[59681] = anon_sym_DOLLAR_LBRACE;
	v->a[59682] = actions(2097);
	v->a[59683] = 1;
	v->a[59684] = anon_sym_DOLLAR_LPAREN;
	v->a[59685] = actions(2099);
	v->a[59686] = 1;
	v->a[59687] = anon_sym_BQUOTE;
	v->a[59688] = actions(2101);
	v->a[59689] = 1;
	v->a[59690] = aux_sym__simple_variable_name_token1;
	v->a[59691] = actions(2103);
	v->a[59692] = 1;
	v->a[59693] = sym_variable_name;
	v->a[59694] = actions(2081);
	v->a[59695] = 2;
	v->a[59696] = anon_sym_PLUS_PLUS;
	v->a[59697] = anon_sym_DASH_DASH;
	v->a[59698] = actions(2083);
	v->a[59699] = 2;
	small_parse_table_2985(v);
}

/* EOF small_parse_table_596.c */
