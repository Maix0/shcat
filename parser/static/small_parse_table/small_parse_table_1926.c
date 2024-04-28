/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1926.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9630(t_small_parse_table_array *v)
{
	v->a[192600] = anon_sym_LT_LPAREN;
	v->a[192601] = anon_sym_GT_LPAREN;
	v->a[192602] = state(3550);
	v->a[192603] = 2;
	v->a[192604] = sym_concatenation;
	v->a[192605] = aux_sym_for_statement_repeat1;
	v->a[192606] = state(5045);
	v->a[192607] = 9;
	v->a[192608] = sym_arithmetic_expansion;
	v->a[192609] = sym_brace_expression;
	v->a[192610] = sym_string;
	v->a[192611] = sym_translated_string;
	v->a[192612] = sym_number;
	v->a[192613] = sym_simple_expansion;
	v->a[192614] = sym_expansion;
	v->a[192615] = sym_command_substitution;
	v->a[192616] = sym_process_substitution;
	v->a[192617] = 3;
	v->a[192618] = actions(71);
	v->a[192619] = 1;
	small_parse_table_9631(v);
}

void	small_parse_table_9631(t_small_parse_table_array *v)
{
	v->a[192620] = sym_comment;
	v->a[192621] = actions(1261);
	v->a[192622] = 10;
	v->a[192623] = anon_sym_LT;
	v->a[192624] = anon_sym_GT;
	v->a[192625] = anon_sym_AMP_GT;
	v->a[192626] = anon_sym_LT_AMP;
	v->a[192627] = anon_sym_GT_AMP;
	v->a[192628] = anon_sym_DOLLAR;
	v->a[192629] = aux_sym_number_token1;
	v->a[192630] = aux_sym_number_token2;
	v->a[192631] = anon_sym_DOLLAR_LPAREN;
	v->a[192632] = sym_word;
	v->a[192633] = actions(1263);
	v->a[192634] = 22;
	v->a[192635] = sym_file_descriptor;
	v->a[192636] = sym_variable_name;
	v->a[192637] = sym_test_operator;
	v->a[192638] = sym__brace_start;
	v->a[192639] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9632(v);
}

void	small_parse_table_9632(t_small_parse_table_array *v)
{
	v->a[192640] = anon_sym_GT_GT;
	v->a[192641] = anon_sym_AMP_GT_GT;
	v->a[192642] = anon_sym_GT_PIPE;
	v->a[192643] = anon_sym_LT_AMP_DASH;
	v->a[192644] = anon_sym_GT_AMP_DASH;
	v->a[192645] = anon_sym_LT_LT_LT;
	v->a[192646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192647] = anon_sym_DOLLAR_LBRACK;
	v->a[192648] = sym__special_character;
	v->a[192649] = anon_sym_DQUOTE;
	v->a[192650] = sym_raw_string;
	v->a[192651] = sym_ansi_c_string;
	v->a[192652] = anon_sym_DOLLAR_LBRACE;
	v->a[192653] = anon_sym_BQUOTE;
	v->a[192654] = anon_sym_DOLLAR_BQUOTE;
	v->a[192655] = anon_sym_LT_LPAREN;
	v->a[192656] = anon_sym_GT_LPAREN;
	v->a[192657] = 21;
	v->a[192658] = actions(71);
	v->a[192659] = 1;
	small_parse_table_9633(v);
}

void	small_parse_table_9633(t_small_parse_table_array *v)
{
	v->a[192660] = sym_comment;
	v->a[192661] = actions(8565);
	v->a[192662] = 1;
	v->a[192663] = sym_word;
	v->a[192664] = actions(8571);
	v->a[192665] = 1;
	v->a[192666] = anon_sym_DOLLAR_LBRACK;
	v->a[192667] = actions(8573);
	v->a[192668] = 1;
	v->a[192669] = anon_sym_DOLLAR;
	v->a[192670] = actions(8575);
	v->a[192671] = 1;
	v->a[192672] = sym__special_character;
	v->a[192673] = actions(8577);
	v->a[192674] = 1;
	v->a[192675] = anon_sym_DQUOTE;
	v->a[192676] = actions(8581);
	v->a[192677] = 1;
	v->a[192678] = aux_sym_number_token1;
	v->a[192679] = actions(8583);
	small_parse_table_9634(v);
}

void	small_parse_table_9634(t_small_parse_table_array *v)
{
	v->a[192680] = 1;
	v->a[192681] = aux_sym_number_token2;
	v->a[192682] = actions(8585);
	v->a[192683] = 1;
	v->a[192684] = anon_sym_DOLLAR_LBRACE;
	v->a[192685] = actions(8587);
	v->a[192686] = 1;
	v->a[192687] = anon_sym_DOLLAR_LPAREN;
	v->a[192688] = actions(8589);
	v->a[192689] = 1;
	v->a[192690] = anon_sym_BQUOTE;
	v->a[192691] = actions(8591);
	v->a[192692] = 1;
	v->a[192693] = anon_sym_DOLLAR_BQUOTE;
	v->a[192694] = actions(8595);
	v->a[192695] = 1;
	v->a[192696] = sym_test_operator;
	v->a[192697] = actions(8597);
	v->a[192698] = 1;
	v->a[192699] = sym__brace_start;
	small_parse_table_9635(v);
}

/* EOF small_parse_table_1926.c */
