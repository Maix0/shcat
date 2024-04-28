/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2306.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11530(t_small_parse_table_array *v)
{
	v->a[230600] = sym_raw_string;
	v->a[230601] = sym_ansi_c_string;
	v->a[230602] = state(3510);
	v->a[230603] = 9;
	v->a[230604] = sym_arithmetic_expansion;
	v->a[230605] = sym_brace_expression;
	v->a[230606] = sym_string;
	v->a[230607] = sym_translated_string;
	v->a[230608] = sym_number;
	v->a[230609] = sym_simple_expansion;
	v->a[230610] = sym_expansion;
	v->a[230611] = sym_command_substitution;
	v->a[230612] = sym_process_substitution;
	v->a[230613] = 21;
	v->a[230614] = actions(71);
	v->a[230615] = 1;
	v->a[230616] = sym_comment;
	v->a[230617] = actions(3064);
	v->a[230618] = 1;
	v->a[230619] = sym_variable_name;
	small_parse_table_11531(v);
}

void	small_parse_table_11531(t_small_parse_table_array *v)
{
	v->a[230620] = actions(9278);
	v->a[230621] = 1;
	v->a[230622] = anon_sym_LPAREN;
	v->a[230623] = actions(9280);
	v->a[230624] = 1;
	v->a[230625] = anon_sym_BANG;
	v->a[230626] = actions(9286);
	v->a[230627] = 1;
	v->a[230628] = anon_sym_TILDE;
	v->a[230629] = actions(9288);
	v->a[230630] = 1;
	v->a[230631] = anon_sym_DOLLAR;
	v->a[230632] = actions(9290);
	v->a[230633] = 1;
	v->a[230634] = anon_sym_DQUOTE;
	v->a[230635] = actions(9292);
	v->a[230636] = 1;
	v->a[230637] = aux_sym_number_token1;
	v->a[230638] = actions(9294);
	v->a[230639] = 1;
	small_parse_table_11532(v);
}

void	small_parse_table_11532(t_small_parse_table_array *v)
{
	v->a[230640] = aux_sym_number_token2;
	v->a[230641] = actions(9296);
	v->a[230642] = 1;
	v->a[230643] = anon_sym_DOLLAR_LBRACE;
	v->a[230644] = actions(9298);
	v->a[230645] = 1;
	v->a[230646] = anon_sym_DOLLAR_LPAREN;
	v->a[230647] = actions(9300);
	v->a[230648] = 1;
	v->a[230649] = anon_sym_BQUOTE;
	v->a[230650] = actions(9302);
	v->a[230651] = 1;
	v->a[230652] = anon_sym_DOLLAR_BQUOTE;
	v->a[230653] = actions(10908);
	v->a[230654] = 1;
	v->a[230655] = aux_sym__simple_variable_name_token1;
	v->a[230656] = state(2801);
	v->a[230657] = 1;
	v->a[230658] = sym__arithmetic_binary_expression;
	v->a[230659] = state(2803);
	small_parse_table_11533(v);
}

void	small_parse_table_11533(t_small_parse_table_array *v)
{
	v->a[230660] = 1;
	v->a[230661] = sym__arithmetic_ternary_expression;
	v->a[230662] = state(2809);
	v->a[230663] = 1;
	v->a[230664] = sym__arithmetic_unary_expression;
	v->a[230665] = state(2825);
	v->a[230666] = 1;
	v->a[230667] = sym__arithmetic_postfix_expression;
	v->a[230668] = actions(9282);
	v->a[230669] = 2;
	v->a[230670] = anon_sym_PLUS_PLUS2;
	v->a[230671] = anon_sym_DASH_DASH2;
	v->a[230672] = actions(9284);
	v->a[230673] = 2;
	v->a[230674] = anon_sym_DASH2;
	v->a[230675] = anon_sym_PLUS2;
	v->a[230676] = state(2899);
	v->a[230677] = 9;
	v->a[230678] = sym_subscript;
	v->a[230679] = sym__arithmetic_expression;
	small_parse_table_11534(v);
}

void	small_parse_table_11534(t_small_parse_table_array *v)
{
	v->a[230680] = sym__arithmetic_literal;
	v->a[230681] = sym__arithmetic_parenthesized_expression;
	v->a[230682] = sym_string;
	v->a[230683] = sym_number;
	v->a[230684] = sym_simple_expansion;
	v->a[230685] = sym_expansion;
	v->a[230686] = sym_command_substitution;
	v->a[230687] = 18;
	v->a[230688] = actions(3);
	v->a[230689] = 1;
	v->a[230690] = sym_comment;
	v->a[230691] = actions(3191);
	v->a[230692] = 1;
	v->a[230693] = aux_sym_number_token1;
	v->a[230694] = actions(3193);
	v->a[230695] = 1;
	v->a[230696] = aux_sym_number_token2;
	v->a[230697] = actions(3197);
	v->a[230698] = 1;
	v->a[230699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11535(v);
}

/* EOF small_parse_table_2306.c */
