/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2046.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10230(t_small_parse_table_array *v)
{
	v->a[204600] = sym_comment;
	v->a[204601] = actions(3064);
	v->a[204602] = 1;
	v->a[204603] = sym_variable_name;
	v->a[204604] = actions(9278);
	v->a[204605] = 1;
	v->a[204606] = anon_sym_LPAREN;
	v->a[204607] = actions(9280);
	v->a[204608] = 1;
	v->a[204609] = anon_sym_BANG;
	v->a[204610] = actions(9286);
	v->a[204611] = 1;
	v->a[204612] = anon_sym_TILDE;
	v->a[204613] = actions(9288);
	v->a[204614] = 1;
	v->a[204615] = anon_sym_DOLLAR;
	v->a[204616] = actions(9290);
	v->a[204617] = 1;
	v->a[204618] = anon_sym_DQUOTE;
	v->a[204619] = actions(9292);
	small_parse_table_10231(v);
}

void	small_parse_table_10231(t_small_parse_table_array *v)
{
	v->a[204620] = 1;
	v->a[204621] = aux_sym_number_token1;
	v->a[204622] = actions(9294);
	v->a[204623] = 1;
	v->a[204624] = aux_sym_number_token2;
	v->a[204625] = actions(9296);
	v->a[204626] = 1;
	v->a[204627] = anon_sym_DOLLAR_LBRACE;
	v->a[204628] = actions(9298);
	v->a[204629] = 1;
	v->a[204630] = anon_sym_DOLLAR_LPAREN;
	v->a[204631] = actions(9300);
	v->a[204632] = 1;
	v->a[204633] = anon_sym_BQUOTE;
	v->a[204634] = actions(9302);
	v->a[204635] = 1;
	v->a[204636] = anon_sym_DOLLAR_BQUOTE;
	v->a[204637] = actions(9482);
	v->a[204638] = 1;
	v->a[204639] = aux_sym__simple_variable_name_token1;
	small_parse_table_10232(v);
}

void	small_parse_table_10232(t_small_parse_table_array *v)
{
	v->a[204640] = state(2801);
	v->a[204641] = 1;
	v->a[204642] = sym__arithmetic_binary_expression;
	v->a[204643] = state(2803);
	v->a[204644] = 1;
	v->a[204645] = sym__arithmetic_ternary_expression;
	v->a[204646] = state(2809);
	v->a[204647] = 1;
	v->a[204648] = sym__arithmetic_unary_expression;
	v->a[204649] = state(2825);
	v->a[204650] = 1;
	v->a[204651] = sym__arithmetic_postfix_expression;
	v->a[204652] = actions(9282);
	v->a[204653] = 2;
	v->a[204654] = anon_sym_PLUS_PLUS2;
	v->a[204655] = anon_sym_DASH_DASH2;
	v->a[204656] = actions(9284);
	v->a[204657] = 2;
	v->a[204658] = anon_sym_DASH2;
	v->a[204659] = anon_sym_PLUS2;
	small_parse_table_10233(v);
}

void	small_parse_table_10233(t_small_parse_table_array *v)
{
	v->a[204660] = state(2745);
	v->a[204661] = 9;
	v->a[204662] = sym_subscript;
	v->a[204663] = sym__arithmetic_expression;
	v->a[204664] = sym__arithmetic_literal;
	v->a[204665] = sym__arithmetic_parenthesized_expression;
	v->a[204666] = sym_string;
	v->a[204667] = sym_number;
	v->a[204668] = sym_simple_expansion;
	v->a[204669] = sym_expansion;
	v->a[204670] = sym_command_substitution;
	v->a[204671] = 20;
	v->a[204672] = actions(71);
	v->a[204673] = 1;
	v->a[204674] = sym_comment;
	v->a[204675] = actions(1551);
	v->a[204676] = 1;
	v->a[204677] = anon_sym_DOLLAR;
	v->a[204678] = actions(1557);
	v->a[204679] = 1;
	small_parse_table_10234(v);
}

void	small_parse_table_10234(t_small_parse_table_array *v)
{
	v->a[204680] = aux_sym_number_token1;
	v->a[204681] = actions(1559);
	v->a[204682] = 1;
	v->a[204683] = aux_sym_number_token2;
	v->a[204684] = actions(1563);
	v->a[204685] = 1;
	v->a[204686] = anon_sym_DOLLAR_LPAREN;
	v->a[204687] = actions(1575);
	v->a[204688] = 1;
	v->a[204689] = sym__brace_start;
	v->a[204690] = actions(9198);
	v->a[204691] = 1;
	v->a[204692] = anon_sym_DOLLAR_LBRACK;
	v->a[204693] = actions(9202);
	v->a[204694] = 1;
	v->a[204695] = anon_sym_DQUOTE;
	v->a[204696] = actions(9206);
	v->a[204697] = 1;
	v->a[204698] = anon_sym_DOLLAR_LBRACE;
	v->a[204699] = actions(9208);
	small_parse_table_10235(v);
}

/* EOF small_parse_table_2046.c */
