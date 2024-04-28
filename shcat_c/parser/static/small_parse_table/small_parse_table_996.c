/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_996.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4980(t_small_parse_table_array *v)
{
	v->a[99600] = anon_sym_LT_LT_LT;
	v->a[99601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99602] = anon_sym_DOLLAR_LBRACK;
	v->a[99603] = aux_sym_concatenation_token1;
	v->a[99604] = sym__special_character;
	v->a[99605] = anon_sym_DQUOTE;
	v->a[99606] = sym_raw_string;
	v->a[99607] = sym_ansi_c_string;
	v->a[99608] = anon_sym_DOLLAR_LBRACE;
	v->a[99609] = anon_sym_DOLLAR_BQUOTE;
	v->a[99610] = anon_sym_LT_LPAREN;
	v->a[99611] = anon_sym_GT_LPAREN;
	v->a[99612] = 26;
	v->a[99613] = actions(71);
	v->a[99614] = 1;
	v->a[99615] = sym_comment;
	v->a[99616] = actions(1127);
	v->a[99617] = 1;
	v->a[99618] = sym_word;
	v->a[99619] = actions(1131);
	small_parse_table_4981(v);
}

void	small_parse_table_4981(t_small_parse_table_array *v)
{
	v->a[99620] = 1;
	v->a[99621] = anon_sym_LPAREN;
	v->a[99622] = actions(1133);
	v->a[99623] = 1;
	v->a[99624] = anon_sym_BANG;
	v->a[99625] = actions(1139);
	v->a[99626] = 1;
	v->a[99627] = anon_sym_TILDE;
	v->a[99628] = actions(1141);
	v->a[99629] = 1;
	v->a[99630] = anon_sym_DOLLAR_LBRACK;
	v->a[99631] = actions(1145);
	v->a[99632] = 1;
	v->a[99633] = anon_sym_DOLLAR;
	v->a[99634] = actions(1147);
	v->a[99635] = 1;
	v->a[99636] = sym__special_character;
	v->a[99637] = actions(1149);
	v->a[99638] = 1;
	v->a[99639] = anon_sym_DQUOTE;
	small_parse_table_4982(v);
}

void	small_parse_table_4982(t_small_parse_table_array *v)
{
	v->a[99640] = actions(1153);
	v->a[99641] = 1;
	v->a[99642] = aux_sym_number_token1;
	v->a[99643] = actions(1155);
	v->a[99644] = 1;
	v->a[99645] = aux_sym_number_token2;
	v->a[99646] = actions(1157);
	v->a[99647] = 1;
	v->a[99648] = anon_sym_DOLLAR_LBRACE;
	v->a[99649] = actions(1159);
	v->a[99650] = 1;
	v->a[99651] = anon_sym_DOLLAR_LPAREN;
	v->a[99652] = actions(1163);
	v->a[99653] = 1;
	v->a[99654] = anon_sym_DOLLAR_BQUOTE;
	v->a[99655] = actions(1167);
	v->a[99656] = 1;
	v->a[99657] = sym_test_operator;
	v->a[99658] = actions(1169);
	v->a[99659] = 1;
	small_parse_table_4983(v);
}

void	small_parse_table_4983(t_small_parse_table_array *v)
{
	v->a[99660] = sym__brace_start;
	v->a[99661] = actions(3060);
	v->a[99662] = 1;
	v->a[99663] = anon_sym_BQUOTE;
	v->a[99664] = state(2484);
	v->a[99665] = 1;
	v->a[99666] = aux_sym__literal_repeat1;
	v->a[99667] = state(3054);
	v->a[99668] = 1;
	v->a[99669] = sym__expression;
	v->a[99670] = actions(1129);
	v->a[99671] = 2;
	v->a[99672] = anon_sym_LPAREN_LPAREN;
	v->a[99673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99674] = actions(1135);
	v->a[99675] = 2;
	v->a[99676] = anon_sym_PLUS_PLUS2;
	v->a[99677] = anon_sym_DASH_DASH2;
	v->a[99678] = actions(1137);
	v->a[99679] = 2;
	small_parse_table_4984(v);
}

void	small_parse_table_4984(t_small_parse_table_array *v)
{
	v->a[99680] = anon_sym_DASH2;
	v->a[99681] = anon_sym_PLUS2;
	v->a[99682] = actions(1151);
	v->a[99683] = 2;
	v->a[99684] = sym_raw_string;
	v->a[99685] = sym_ansi_c_string;
	v->a[99686] = actions(1165);
	v->a[99687] = 2;
	v->a[99688] = anon_sym_LT_LPAREN;
	v->a[99689] = anon_sym_GT_LPAREN;
	v->a[99690] = state(2594);
	v->a[99691] = 6;
	v->a[99692] = sym_binary_expression;
	v->a[99693] = sym_ternary_expression;
	v->a[99694] = sym_unary_expression;
	v->a[99695] = sym_postfix_expression;
	v->a[99696] = sym_parenthesized_expression;
	v->a[99697] = sym_concatenation;
	v->a[99698] = state(2573);
	v->a[99699] = 9;
	small_parse_table_4985(v);
}

/* EOF small_parse_table_996.c */
