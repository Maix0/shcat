/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2386.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11930(t_small_parse_table_array *v)
{
	v->a[238600] = state(3209);
	v->a[238601] = 9;
	v->a[238602] = sym_subscript;
	v->a[238603] = sym__arithmetic_expression;
	v->a[238604] = sym__arithmetic_literal;
	v->a[238605] = sym__arithmetic_parenthesized_expression;
	v->a[238606] = sym_string;
	v->a[238607] = sym_number;
	v->a[238608] = sym_simple_expansion;
	v->a[238609] = sym_expansion;
	v->a[238610] = sym_command_substitution;
	v->a[238611] = 21;
	v->a[238612] = actions(71);
	v->a[238613] = 1;
	v->a[238614] = sym_comment;
	v->a[238615] = actions(3064);
	v->a[238616] = 1;
	v->a[238617] = sym_variable_name;
	v->a[238618] = actions(9278);
	v->a[238619] = 1;
	small_parse_table_11931(v);
}

void	small_parse_table_11931(t_small_parse_table_array *v)
{
	v->a[238620] = anon_sym_LPAREN;
	v->a[238621] = actions(9280);
	v->a[238622] = 1;
	v->a[238623] = anon_sym_BANG;
	v->a[238624] = actions(9286);
	v->a[238625] = 1;
	v->a[238626] = anon_sym_TILDE;
	v->a[238627] = actions(9288);
	v->a[238628] = 1;
	v->a[238629] = anon_sym_DOLLAR;
	v->a[238630] = actions(9290);
	v->a[238631] = 1;
	v->a[238632] = anon_sym_DQUOTE;
	v->a[238633] = actions(9292);
	v->a[238634] = 1;
	v->a[238635] = aux_sym_number_token1;
	v->a[238636] = actions(9294);
	v->a[238637] = 1;
	v->a[238638] = aux_sym_number_token2;
	v->a[238639] = actions(9296);
	small_parse_table_11932(v);
}

void	small_parse_table_11932(t_small_parse_table_array *v)
{
	v->a[238640] = 1;
	v->a[238641] = anon_sym_DOLLAR_LBRACE;
	v->a[238642] = actions(9298);
	v->a[238643] = 1;
	v->a[238644] = anon_sym_DOLLAR_LPAREN;
	v->a[238645] = actions(9300);
	v->a[238646] = 1;
	v->a[238647] = anon_sym_BQUOTE;
	v->a[238648] = actions(9302);
	v->a[238649] = 1;
	v->a[238650] = anon_sym_DOLLAR_BQUOTE;
	v->a[238651] = actions(11218);
	v->a[238652] = 1;
	v->a[238653] = aux_sym__simple_variable_name_token1;
	v->a[238654] = state(2801);
	v->a[238655] = 1;
	v->a[238656] = sym__arithmetic_binary_expression;
	v->a[238657] = state(2803);
	v->a[238658] = 1;
	v->a[238659] = sym__arithmetic_ternary_expression;
	small_parse_table_11933(v);
}

void	small_parse_table_11933(t_small_parse_table_array *v)
{
	v->a[238660] = state(2809);
	v->a[238661] = 1;
	v->a[238662] = sym__arithmetic_unary_expression;
	v->a[238663] = state(2825);
	v->a[238664] = 1;
	v->a[238665] = sym__arithmetic_postfix_expression;
	v->a[238666] = actions(9282);
	v->a[238667] = 2;
	v->a[238668] = anon_sym_PLUS_PLUS2;
	v->a[238669] = anon_sym_DASH_DASH2;
	v->a[238670] = actions(9284);
	v->a[238671] = 2;
	v->a[238672] = anon_sym_DASH2;
	v->a[238673] = anon_sym_PLUS2;
	v->a[238674] = state(2800);
	v->a[238675] = 9;
	v->a[238676] = sym_subscript;
	v->a[238677] = sym__arithmetic_expression;
	v->a[238678] = sym__arithmetic_literal;
	v->a[238679] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11934(v);
}

void	small_parse_table_11934(t_small_parse_table_array *v)
{
	v->a[238680] = sym_string;
	v->a[238681] = sym_number;
	v->a[238682] = sym_simple_expansion;
	v->a[238683] = sym_expansion;
	v->a[238684] = sym_command_substitution;
	v->a[238685] = 21;
	v->a[238686] = actions(71);
	v->a[238687] = 1;
	v->a[238688] = sym_comment;
	v->a[238689] = actions(9364);
	v->a[238690] = 1;
	v->a[238691] = anon_sym_LPAREN;
	v->a[238692] = actions(9366);
	v->a[238693] = 1;
	v->a[238694] = anon_sym_BANG;
	v->a[238695] = actions(9372);
	v->a[238696] = 1;
	v->a[238697] = anon_sym_TILDE;
	v->a[238698] = actions(9374);
	v->a[238699] = 1;
	small_parse_table_11935(v);
}

/* EOF small_parse_table_2386.c */
