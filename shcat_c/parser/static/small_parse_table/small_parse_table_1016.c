/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1016.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5080(t_small_parse_table_array *v)
{
	v->a[101600] = sym__special_character;
	v->a[101601] = actions(1185);
	v->a[101602] = 1;
	v->a[101603] = sym_test_operator;
	v->a[101604] = actions(3060);
	v->a[101605] = 1;
	v->a[101606] = anon_sym_BQUOTE;
	v->a[101607] = state(2484);
	v->a[101608] = 1;
	v->a[101609] = aux_sym__literal_repeat1;
	v->a[101610] = state(3023);
	v->a[101611] = 1;
	v->a[101612] = sym__expression;
	v->a[101613] = actions(1129);
	v->a[101614] = 2;
	v->a[101615] = anon_sym_LPAREN_LPAREN;
	v->a[101616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101617] = actions(1165);
	v->a[101618] = 2;
	v->a[101619] = anon_sym_LT_LPAREN;
	small_parse_table_5081(v);
}

void	small_parse_table_5081(t_small_parse_table_array *v)
{
	v->a[101620] = anon_sym_GT_LPAREN;
	v->a[101621] = actions(1175);
	v->a[101622] = 2;
	v->a[101623] = anon_sym_PLUS_PLUS2;
	v->a[101624] = anon_sym_DASH_DASH2;
	v->a[101625] = actions(1177);
	v->a[101626] = 2;
	v->a[101627] = anon_sym_DASH2;
	v->a[101628] = anon_sym_PLUS2;
	v->a[101629] = actions(1183);
	v->a[101630] = 2;
	v->a[101631] = sym_raw_string;
	v->a[101632] = sym_ansi_c_string;
	v->a[101633] = state(2594);
	v->a[101634] = 6;
	v->a[101635] = sym_binary_expression;
	v->a[101636] = sym_ternary_expression;
	v->a[101637] = sym_unary_expression;
	v->a[101638] = sym_postfix_expression;
	v->a[101639] = sym_parenthesized_expression;
	small_parse_table_5082(v);
}

void	small_parse_table_5082(t_small_parse_table_array *v)
{
	v->a[101640] = sym_concatenation;
	v->a[101641] = state(2456);
	v->a[101642] = 9;
	v->a[101643] = sym_arithmetic_expansion;
	v->a[101644] = sym_brace_expression;
	v->a[101645] = sym_string;
	v->a[101646] = sym_translated_string;
	v->a[101647] = sym_number;
	v->a[101648] = sym_simple_expansion;
	v->a[101649] = sym_expansion;
	v->a[101650] = sym_command_substitution;
	v->a[101651] = sym_process_substitution;
	v->a[101652] = 26;
	v->a[101653] = actions(71);
	v->a[101654] = 1;
	v->a[101655] = sym_comment;
	v->a[101656] = actions(1131);
	v->a[101657] = 1;
	v->a[101658] = anon_sym_LPAREN;
	v->a[101659] = actions(1141);
	small_parse_table_5083(v);
}

void	small_parse_table_5083(t_small_parse_table_array *v)
{
	v->a[101660] = 1;
	v->a[101661] = anon_sym_DOLLAR_LBRACK;
	v->a[101662] = actions(1145);
	v->a[101663] = 1;
	v->a[101664] = anon_sym_DOLLAR;
	v->a[101665] = actions(1149);
	v->a[101666] = 1;
	v->a[101667] = anon_sym_DQUOTE;
	v->a[101668] = actions(1153);
	v->a[101669] = 1;
	v->a[101670] = aux_sym_number_token1;
	v->a[101671] = actions(1155);
	v->a[101672] = 1;
	v->a[101673] = aux_sym_number_token2;
	v->a[101674] = actions(1157);
	v->a[101675] = 1;
	v->a[101676] = anon_sym_DOLLAR_LBRACE;
	v->a[101677] = actions(1159);
	v->a[101678] = 1;
	v->a[101679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5084(v);
}

void	small_parse_table_5084(t_small_parse_table_array *v)
{
	v->a[101680] = actions(1163);
	v->a[101681] = 1;
	v->a[101682] = anon_sym_DOLLAR_BQUOTE;
	v->a[101683] = actions(1169);
	v->a[101684] = 1;
	v->a[101685] = sym__brace_start;
	v->a[101686] = actions(1171);
	v->a[101687] = 1;
	v->a[101688] = sym_word;
	v->a[101689] = actions(1173);
	v->a[101690] = 1;
	v->a[101691] = anon_sym_BANG;
	v->a[101692] = actions(1179);
	v->a[101693] = 1;
	v->a[101694] = anon_sym_TILDE;
	v->a[101695] = actions(1181);
	v->a[101696] = 1;
	v->a[101697] = sym__special_character;
	v->a[101698] = actions(1185);
	v->a[101699] = 1;
	small_parse_table_5085(v);
}

/* EOF small_parse_table_1016.c */
