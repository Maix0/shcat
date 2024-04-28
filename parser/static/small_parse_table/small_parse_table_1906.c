/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1906.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9530(t_small_parse_table_array *v)
{
	v->a[190600] = 1;
	v->a[190601] = anon_sym_DOLLAR_BQUOTE;
	v->a[190602] = actions(8396);
	v->a[190603] = 1;
	v->a[190604] = sym__comment_word;
	v->a[190605] = actions(8398);
	v->a[190606] = 1;
	v->a[190607] = sym__empty_value;
	v->a[190608] = actions(8400);
	v->a[190609] = 1;
	v->a[190610] = sym_test_operator;
	v->a[190611] = actions(8402);
	v->a[190612] = 1;
	v->a[190613] = sym__brace_start;
	v->a[190614] = state(4383);
	v->a[190615] = 1;
	v->a[190616] = aux_sym__literal_repeat1;
	v->a[190617] = actions(8368);
	v->a[190618] = 2;
	v->a[190619] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9531(v);
}

void	small_parse_table_9531(t_small_parse_table_array *v)
{
	v->a[190620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190621] = actions(8380);
	v->a[190622] = 2;
	v->a[190623] = sym_raw_string;
	v->a[190624] = sym_ansi_c_string;
	v->a[190625] = actions(8394);
	v->a[190626] = 2;
	v->a[190627] = anon_sym_LT_LPAREN;
	v->a[190628] = anon_sym_GT_LPAREN;
	v->a[190629] = state(4639);
	v->a[190630] = 2;
	v->a[190631] = sym_concatenation;
	v->a[190632] = sym_array;
	v->a[190633] = state(4238);
	v->a[190634] = 9;
	v->a[190635] = sym_arithmetic_expansion;
	v->a[190636] = sym_brace_expression;
	v->a[190637] = sym_string;
	v->a[190638] = sym_translated_string;
	v->a[190639] = sym_number;
	small_parse_table_9532(v);
}

void	small_parse_table_9532(t_small_parse_table_array *v)
{
	v->a[190640] = sym_simple_expansion;
	v->a[190641] = sym_expansion;
	v->a[190642] = sym_command_substitution;
	v->a[190643] = sym_process_substitution;
	v->a[190644] = 23;
	v->a[190645] = actions(3);
	v->a[190646] = 1;
	v->a[190647] = sym_comment;
	v->a[190648] = actions(2263);
	v->a[190649] = 1;
	v->a[190650] = anon_sym_DOLLAR;
	v->a[190651] = actions(2269);
	v->a[190652] = 1;
	v->a[190653] = aux_sym_number_token1;
	v->a[190654] = actions(2271);
	v->a[190655] = 1;
	v->a[190656] = aux_sym_number_token2;
	v->a[190657] = actions(2275);
	v->a[190658] = 1;
	v->a[190659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9533(v);
}

void	small_parse_table_9533(t_small_parse_table_array *v)
{
	v->a[190660] = actions(2289);
	v->a[190661] = 1;
	v->a[190662] = sym__brace_start;
	v->a[190663] = actions(8064);
	v->a[190664] = 1;
	v->a[190665] = anon_sym_LPAREN;
	v->a[190666] = actions(8066);
	v->a[190667] = 1;
	v->a[190668] = anon_sym_DOLLAR_LBRACK;
	v->a[190669] = actions(8070);
	v->a[190670] = 1;
	v->a[190671] = anon_sym_DQUOTE;
	v->a[190672] = actions(8074);
	v->a[190673] = 1;
	v->a[190674] = anon_sym_DOLLAR_LBRACE;
	v->a[190675] = actions(8076);
	v->a[190676] = 1;
	v->a[190677] = anon_sym_BQUOTE;
	v->a[190678] = actions(8078);
	v->a[190679] = 1;
	small_parse_table_9534(v);
}

void	small_parse_table_9534(t_small_parse_table_array *v)
{
	v->a[190680] = anon_sym_DOLLAR_BQUOTE;
	v->a[190681] = actions(8082);
	v->a[190682] = 1;
	v->a[190683] = sym__comment_word;
	v->a[190684] = actions(8084);
	v->a[190685] = 1;
	v->a[190686] = sym__empty_value;
	v->a[190687] = actions(8404);
	v->a[190688] = 1;
	v->a[190689] = sym_word;
	v->a[190690] = actions(8406);
	v->a[190691] = 1;
	v->a[190692] = sym__special_character;
	v->a[190693] = actions(8410);
	v->a[190694] = 1;
	v->a[190695] = sym_test_operator;
	v->a[190696] = state(1887);
	v->a[190697] = 1;
	v->a[190698] = aux_sym__literal_repeat1;
	v->a[190699] = actions(8062);
	small_parse_table_9535(v);
}

/* EOF small_parse_table_1906.c */
