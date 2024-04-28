/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1126.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5630(t_small_parse_table_array *v)
{
	v->a[112600] = sym_raw_string;
	v->a[112601] = sym_ansi_c_string;
	v->a[112602] = aux_sym_number_token1;
	v->a[112603] = aux_sym_number_token2;
	v->a[112604] = anon_sym_DOLLAR_LBRACE;
	v->a[112605] = anon_sym_DOLLAR_LPAREN;
	v->a[112606] = anon_sym_BQUOTE;
	v->a[112607] = anon_sym_DOLLAR_BQUOTE;
	v->a[112608] = anon_sym_LT_LPAREN;
	v->a[112609] = anon_sym_GT_LPAREN;
	v->a[112610] = sym_word;
	v->a[112611] = 26;
	v->a[112612] = actions(71);
	v->a[112613] = 1;
	v->a[112614] = sym_comment;
	v->a[112615] = actions(1131);
	v->a[112616] = 1;
	v->a[112617] = anon_sym_LPAREN;
	v->a[112618] = actions(1141);
	v->a[112619] = 1;
	small_parse_table_5631(v);
}

void	small_parse_table_5631(t_small_parse_table_array *v)
{
	v->a[112620] = anon_sym_DOLLAR_LBRACK;
	v->a[112621] = actions(1145);
	v->a[112622] = 1;
	v->a[112623] = anon_sym_DOLLAR;
	v->a[112624] = actions(1149);
	v->a[112625] = 1;
	v->a[112626] = anon_sym_DQUOTE;
	v->a[112627] = actions(1153);
	v->a[112628] = 1;
	v->a[112629] = aux_sym_number_token1;
	v->a[112630] = actions(1155);
	v->a[112631] = 1;
	v->a[112632] = aux_sym_number_token2;
	v->a[112633] = actions(1157);
	v->a[112634] = 1;
	v->a[112635] = anon_sym_DOLLAR_LBRACE;
	v->a[112636] = actions(1159);
	v->a[112637] = 1;
	v->a[112638] = anon_sym_DOLLAR_LPAREN;
	v->a[112639] = actions(1163);
	small_parse_table_5632(v);
}

void	small_parse_table_5632(t_small_parse_table_array *v)
{
	v->a[112640] = 1;
	v->a[112641] = anon_sym_DOLLAR_BQUOTE;
	v->a[112642] = actions(1169);
	v->a[112643] = 1;
	v->a[112644] = sym__brace_start;
	v->a[112645] = actions(1211);
	v->a[112646] = 1;
	v->a[112647] = sym_word;
	v->a[112648] = actions(1213);
	v->a[112649] = 1;
	v->a[112650] = anon_sym_BANG;
	v->a[112651] = actions(1219);
	v->a[112652] = 1;
	v->a[112653] = anon_sym_TILDE;
	v->a[112654] = actions(1221);
	v->a[112655] = 1;
	v->a[112656] = sym__special_character;
	v->a[112657] = actions(1225);
	v->a[112658] = 1;
	v->a[112659] = sym_test_operator;
	small_parse_table_5633(v);
}

void	small_parse_table_5633(t_small_parse_table_array *v)
{
	v->a[112660] = actions(3060);
	v->a[112661] = 1;
	v->a[112662] = anon_sym_BQUOTE;
	v->a[112663] = state(2484);
	v->a[112664] = 1;
	v->a[112665] = aux_sym__literal_repeat1;
	v->a[112666] = state(3183);
	v->a[112667] = 1;
	v->a[112668] = sym__expression;
	v->a[112669] = actions(1129);
	v->a[112670] = 2;
	v->a[112671] = anon_sym_LPAREN_LPAREN;
	v->a[112672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112673] = actions(1165);
	v->a[112674] = 2;
	v->a[112675] = anon_sym_LT_LPAREN;
	v->a[112676] = anon_sym_GT_LPAREN;
	v->a[112677] = actions(1215);
	v->a[112678] = 2;
	v->a[112679] = anon_sym_PLUS_PLUS2;
	small_parse_table_5634(v);
}

void	small_parse_table_5634(t_small_parse_table_array *v)
{
	v->a[112680] = anon_sym_DASH_DASH2;
	v->a[112681] = actions(1217);
	v->a[112682] = 2;
	v->a[112683] = anon_sym_DASH2;
	v->a[112684] = anon_sym_PLUS2;
	v->a[112685] = actions(1223);
	v->a[112686] = 2;
	v->a[112687] = sym_raw_string;
	v->a[112688] = sym_ansi_c_string;
	v->a[112689] = state(2594);
	v->a[112690] = 6;
	v->a[112691] = sym_binary_expression;
	v->a[112692] = sym_ternary_expression;
	v->a[112693] = sym_unary_expression;
	v->a[112694] = sym_postfix_expression;
	v->a[112695] = sym_parenthesized_expression;
	v->a[112696] = sym_concatenation;
	v->a[112697] = state(2588);
	v->a[112698] = 9;
	v->a[112699] = sym_arithmetic_expansion;
	small_parse_table_5635(v);
}

/* EOF small_parse_table_1126.c */
