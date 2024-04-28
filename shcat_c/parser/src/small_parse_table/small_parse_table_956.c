/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_956.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4780(t_small_parse_table_array *v)
{
	v->a[95600] = anon_sym_PIPE;
	v->a[95601] = anon_sym_AMP;
	v->a[95602] = anon_sym_LT;
	v->a[95603] = anon_sym_GT;
	v->a[95604] = anon_sym_LT_LT;
	v->a[95605] = anon_sym_GT_GT;
	v->a[95606] = anon_sym_SEMI_SEMI;
	v->a[95607] = anon_sym_PIPE_AMP;
	v->a[95608] = anon_sym_AMP_GT;
	v->a[95609] = anon_sym_AMP_GT_GT;
	v->a[95610] = anon_sym_LT_AMP;
	v->a[95611] = anon_sym_GT_AMP;
	v->a[95612] = anon_sym_GT_PIPE;
	v->a[95613] = anon_sym_LT_AMP_DASH;
	v->a[95614] = anon_sym_GT_AMP_DASH;
	v->a[95615] = anon_sym_LT_LT_DASH;
	v->a[95616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95617] = anon_sym_DOLLAR_LBRACK;
	v->a[95618] = anon_sym_DOLLAR;
	v->a[95619] = sym__special_character;
	small_parse_table_4781(v);
}

void	small_parse_table_4781(t_small_parse_table_array *v)
{
	v->a[95620] = anon_sym_DQUOTE;
	v->a[95621] = sym_raw_string;
	v->a[95622] = sym_ansi_c_string;
	v->a[95623] = aux_sym_number_token1;
	v->a[95624] = aux_sym_number_token2;
	v->a[95625] = anon_sym_DOLLAR_LBRACE;
	v->a[95626] = anon_sym_DOLLAR_LPAREN;
	v->a[95627] = anon_sym_BQUOTE;
	v->a[95628] = anon_sym_DOLLAR_BQUOTE;
	v->a[95629] = anon_sym_LT_LPAREN;
	v->a[95630] = anon_sym_GT_LPAREN;
	v->a[95631] = aux_sym__simple_variable_name_token1;
	v->a[95632] = sym_word;
	v->a[95633] = 26;
	v->a[95634] = actions(71);
	v->a[95635] = 1;
	v->a[95636] = sym_comment;
	v->a[95637] = actions(1127);
	v->a[95638] = 1;
	v->a[95639] = sym_word;
	small_parse_table_4782(v);
}

void	small_parse_table_4782(t_small_parse_table_array *v)
{
	v->a[95640] = actions(1131);
	v->a[95641] = 1;
	v->a[95642] = anon_sym_LPAREN;
	v->a[95643] = actions(1133);
	v->a[95644] = 1;
	v->a[95645] = anon_sym_BANG;
	v->a[95646] = actions(1139);
	v->a[95647] = 1;
	v->a[95648] = anon_sym_TILDE;
	v->a[95649] = actions(1141);
	v->a[95650] = 1;
	v->a[95651] = anon_sym_DOLLAR_LBRACK;
	v->a[95652] = actions(1145);
	v->a[95653] = 1;
	v->a[95654] = anon_sym_DOLLAR;
	v->a[95655] = actions(1147);
	v->a[95656] = 1;
	v->a[95657] = sym__special_character;
	v->a[95658] = actions(1149);
	v->a[95659] = 1;
	small_parse_table_4783(v);
}

void	small_parse_table_4783(t_small_parse_table_array *v)
{
	v->a[95660] = anon_sym_DQUOTE;
	v->a[95661] = actions(1153);
	v->a[95662] = 1;
	v->a[95663] = aux_sym_number_token1;
	v->a[95664] = actions(1155);
	v->a[95665] = 1;
	v->a[95666] = aux_sym_number_token2;
	v->a[95667] = actions(1157);
	v->a[95668] = 1;
	v->a[95669] = anon_sym_DOLLAR_LBRACE;
	v->a[95670] = actions(1159);
	v->a[95671] = 1;
	v->a[95672] = anon_sym_DOLLAR_LPAREN;
	v->a[95673] = actions(1163);
	v->a[95674] = 1;
	v->a[95675] = anon_sym_DOLLAR_BQUOTE;
	v->a[95676] = actions(1167);
	v->a[95677] = 1;
	v->a[95678] = sym_test_operator;
	v->a[95679] = actions(1169);
	small_parse_table_4784(v);
}

void	small_parse_table_4784(t_small_parse_table_array *v)
{
	v->a[95680] = 1;
	v->a[95681] = sym__brace_start;
	v->a[95682] = actions(3060);
	v->a[95683] = 1;
	v->a[95684] = anon_sym_BQUOTE;
	v->a[95685] = state(2484);
	v->a[95686] = 1;
	v->a[95687] = aux_sym__literal_repeat1;
	v->a[95688] = state(3096);
	v->a[95689] = 1;
	v->a[95690] = sym__expression;
	v->a[95691] = actions(1129);
	v->a[95692] = 2;
	v->a[95693] = anon_sym_LPAREN_LPAREN;
	v->a[95694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95695] = actions(1135);
	v->a[95696] = 2;
	v->a[95697] = anon_sym_PLUS_PLUS2;
	v->a[95698] = anon_sym_DASH_DASH2;
	v->a[95699] = actions(1137);
	small_parse_table_4785(v);
}

/* EOF small_parse_table_956.c */
