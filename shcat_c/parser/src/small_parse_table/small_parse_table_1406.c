/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1406.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7030(t_small_parse_table_array *v)
{
	v->a[140600] = aux_sym__simple_variable_name_token1;
	v->a[140601] = sym_word;
	v->a[140602] = actions(5180);
	v->a[140603] = 24;
	v->a[140604] = sym_file_descriptor;
	v->a[140605] = sym_variable_name;
	v->a[140606] = sym_test_operator;
	v->a[140607] = sym__brace_start;
	v->a[140608] = anon_sym_LPAREN_LPAREN;
	v->a[140609] = anon_sym_PIPE_PIPE;
	v->a[140610] = anon_sym_AMP_AMP;
	v->a[140611] = anon_sym_GT_GT;
	v->a[140612] = anon_sym_PIPE_AMP;
	v->a[140613] = anon_sym_AMP_GT_GT;
	v->a[140614] = anon_sym_GT_PIPE;
	v->a[140615] = anon_sym_LT_AMP_DASH;
	v->a[140616] = anon_sym_GT_AMP_DASH;
	v->a[140617] = anon_sym_LT_LT_DASH;
	v->a[140618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140619] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_7031(v);
}

void	small_parse_table_7031(t_small_parse_table_array *v)
{
	v->a[140620] = anon_sym_DQUOTE;
	v->a[140621] = sym_raw_string;
	v->a[140622] = sym_ansi_c_string;
	v->a[140623] = anon_sym_DOLLAR_LBRACE;
	v->a[140624] = anon_sym_BQUOTE;
	v->a[140625] = anon_sym_DOLLAR_BQUOTE;
	v->a[140626] = anon_sym_LT_LPAREN;
	v->a[140627] = anon_sym_GT_LPAREN;
	v->a[140628] = 5;
	v->a[140629] = actions(71);
	v->a[140630] = 1;
	v->a[140631] = sym_comment;
	v->a[140632] = actions(6809);
	v->a[140633] = 1;
	v->a[140634] = sym__special_character;
	v->a[140635] = state(2595);
	v->a[140636] = 1;
	v->a[140637] = aux_sym__literal_repeat1;
	v->a[140638] = actions(4564);
	v->a[140639] = 12;
	small_parse_table_7032(v);
}

void	small_parse_table_7032(t_small_parse_table_array *v)
{
	v->a[140640] = anon_sym_PIPE;
	v->a[140641] = anon_sym_LT;
	v->a[140642] = anon_sym_GT;
	v->a[140643] = anon_sym_LT_LT;
	v->a[140644] = anon_sym_AMP_GT;
	v->a[140645] = anon_sym_LT_AMP;
	v->a[140646] = anon_sym_GT_AMP;
	v->a[140647] = anon_sym_DOLLAR;
	v->a[140648] = aux_sym_number_token1;
	v->a[140649] = aux_sym_number_token2;
	v->a[140650] = anon_sym_DOLLAR_LPAREN;
	v->a[140651] = sym_word;
	v->a[140652] = actions(4566);
	v->a[140653] = 25;
	v->a[140654] = sym_file_descriptor;
	v->a[140655] = sym_variable_name;
	v->a[140656] = sym_test_operator;
	v->a[140657] = sym__brace_start;
	v->a[140658] = anon_sym_LPAREN_LPAREN;
	v->a[140659] = anon_sym_PIPE_PIPE;
	small_parse_table_7033(v);
}

void	small_parse_table_7033(t_small_parse_table_array *v)
{
	v->a[140660] = anon_sym_AMP_AMP;
	v->a[140661] = anon_sym_GT_GT;
	v->a[140662] = anon_sym_PIPE_AMP;
	v->a[140663] = anon_sym_AMP_GT_GT;
	v->a[140664] = anon_sym_GT_PIPE;
	v->a[140665] = anon_sym_LT_AMP_DASH;
	v->a[140666] = anon_sym_GT_AMP_DASH;
	v->a[140667] = anon_sym_LT_LT_DASH;
	v->a[140668] = anon_sym_LT_LT_LT;
	v->a[140669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140670] = anon_sym_DOLLAR_LBRACK;
	v->a[140671] = anon_sym_DQUOTE;
	v->a[140672] = sym_raw_string;
	v->a[140673] = sym_ansi_c_string;
	v->a[140674] = anon_sym_DOLLAR_LBRACE;
	v->a[140675] = anon_sym_BQUOTE;
	v->a[140676] = anon_sym_DOLLAR_BQUOTE;
	v->a[140677] = anon_sym_LT_LPAREN;
	v->a[140678] = anon_sym_GT_LPAREN;
	v->a[140679] = 5;
	small_parse_table_7034(v);
}

void	small_parse_table_7034(t_small_parse_table_array *v)
{
	v->a[140680] = actions(71);
	v->a[140681] = 1;
	v->a[140682] = sym_comment;
	v->a[140683] = actions(6813);
	v->a[140684] = 1;
	v->a[140685] = sym__special_character;
	v->a[140686] = state(2695);
	v->a[140687] = 1;
	v->a[140688] = aux_sym__literal_repeat1;
	v->a[140689] = actions(243);
	v->a[140690] = 14;
	v->a[140691] = anon_sym_EQ;
	v->a[140692] = anon_sym_PIPE;
	v->a[140693] = anon_sym_CARET;
	v->a[140694] = anon_sym_AMP;
	v->a[140695] = anon_sym_LT;
	v->a[140696] = anon_sym_GT;
	v->a[140697] = anon_sym_LT_LT;
	v->a[140698] = anon_sym_GT_GT;
	v->a[140699] = anon_sym_PLUS;
	small_parse_table_7035(v);
}

/* EOF small_parse_table_1406.c */
