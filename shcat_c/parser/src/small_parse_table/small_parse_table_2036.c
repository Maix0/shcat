/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2036.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10180(t_small_parse_table_array *v)
{
	v->a[203600] = sym_command_substitution;
	v->a[203601] = 21;
	v->a[203602] = actions(71);
	v->a[203603] = 1;
	v->a[203604] = sym_comment;
	v->a[203605] = actions(3064);
	v->a[203606] = 1;
	v->a[203607] = sym_variable_name;
	v->a[203608] = actions(3469);
	v->a[203609] = 1;
	v->a[203610] = aux_sym__simple_variable_name_token1;
	v->a[203611] = actions(9278);
	v->a[203612] = 1;
	v->a[203613] = anon_sym_LPAREN;
	v->a[203614] = actions(9280);
	v->a[203615] = 1;
	v->a[203616] = anon_sym_BANG;
	v->a[203617] = actions(9286);
	v->a[203618] = 1;
	v->a[203619] = anon_sym_TILDE;
	small_parse_table_10181(v);
}

void	small_parse_table_10181(t_small_parse_table_array *v)
{
	v->a[203620] = actions(9288);
	v->a[203621] = 1;
	v->a[203622] = anon_sym_DOLLAR;
	v->a[203623] = actions(9290);
	v->a[203624] = 1;
	v->a[203625] = anon_sym_DQUOTE;
	v->a[203626] = actions(9292);
	v->a[203627] = 1;
	v->a[203628] = aux_sym_number_token1;
	v->a[203629] = actions(9294);
	v->a[203630] = 1;
	v->a[203631] = aux_sym_number_token2;
	v->a[203632] = actions(9296);
	v->a[203633] = 1;
	v->a[203634] = anon_sym_DOLLAR_LBRACE;
	v->a[203635] = actions(9298);
	v->a[203636] = 1;
	v->a[203637] = anon_sym_DOLLAR_LPAREN;
	v->a[203638] = actions(9300);
	v->a[203639] = 1;
	small_parse_table_10182(v);
}

void	small_parse_table_10182(t_small_parse_table_array *v)
{
	v->a[203640] = anon_sym_BQUOTE;
	v->a[203641] = actions(9302);
	v->a[203642] = 1;
	v->a[203643] = anon_sym_DOLLAR_BQUOTE;
	v->a[203644] = state(2801);
	v->a[203645] = 1;
	v->a[203646] = sym__arithmetic_binary_expression;
	v->a[203647] = state(2803);
	v->a[203648] = 1;
	v->a[203649] = sym__arithmetic_ternary_expression;
	v->a[203650] = state(2809);
	v->a[203651] = 1;
	v->a[203652] = sym__arithmetic_unary_expression;
	v->a[203653] = state(2825);
	v->a[203654] = 1;
	v->a[203655] = sym__arithmetic_postfix_expression;
	v->a[203656] = actions(9282);
	v->a[203657] = 2;
	v->a[203658] = anon_sym_PLUS_PLUS2;
	v->a[203659] = anon_sym_DASH_DASH2;
	small_parse_table_10183(v);
}

void	small_parse_table_10183(t_small_parse_table_array *v)
{
	v->a[203660] = actions(9284);
	v->a[203661] = 2;
	v->a[203662] = anon_sym_DASH2;
	v->a[203663] = anon_sym_PLUS2;
	v->a[203664] = state(2743);
	v->a[203665] = 9;
	v->a[203666] = sym_subscript;
	v->a[203667] = sym__arithmetic_expression;
	v->a[203668] = sym__arithmetic_literal;
	v->a[203669] = sym__arithmetic_parenthesized_expression;
	v->a[203670] = sym_string;
	v->a[203671] = sym_number;
	v->a[203672] = sym_simple_expansion;
	v->a[203673] = sym_expansion;
	v->a[203674] = sym_command_substitution;
	v->a[203675] = 18;
	v->a[203676] = actions(3);
	v->a[203677] = 1;
	v->a[203678] = sym_comment;
	v->a[203679] = actions(3737);
	small_parse_table_10184(v);
}

void	small_parse_table_10184(t_small_parse_table_array *v)
{
	v->a[203680] = 1;
	v->a[203681] = aux_sym_number_token1;
	v->a[203682] = actions(3739);
	v->a[203683] = 1;
	v->a[203684] = aux_sym_number_token2;
	v->a[203685] = actions(3743);
	v->a[203686] = 1;
	v->a[203687] = anon_sym_DOLLAR_LPAREN;
	v->a[203688] = actions(3755);
	v->a[203689] = 1;
	v->a[203690] = sym__brace_start;
	v->a[203691] = actions(8820);
	v->a[203692] = 1;
	v->a[203693] = anon_sym_DOLLAR_LBRACK;
	v->a[203694] = actions(8824);
	v->a[203695] = 1;
	v->a[203696] = anon_sym_DQUOTE;
	v->a[203697] = actions(8828);
	v->a[203698] = 1;
	v->a[203699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10185(v);
}

/* EOF small_parse_table_2036.c */
