/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1386.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6930(t_small_parse_table_array *v)
{
	v->a[138600] = 14;
	v->a[138601] = anon_sym_PIPE;
	v->a[138602] = anon_sym_LT;
	v->a[138603] = anon_sym_GT;
	v->a[138604] = anon_sym_LT_LT;
	v->a[138605] = anon_sym_AMP_GT;
	v->a[138606] = anon_sym_LT_AMP;
	v->a[138607] = anon_sym_GT_AMP;
	v->a[138608] = anon_sym_DOLLAR;
	v->a[138609] = aux_sym_number_token1;
	v->a[138610] = aux_sym_number_token2;
	v->a[138611] = anon_sym_DOLLAR_LPAREN;
	v->a[138612] = anon_sym_BQUOTE;
	v->a[138613] = aux_sym__simple_variable_name_token1;
	v->a[138614] = sym_word;
	v->a[138615] = actions(1346);
	v->a[138616] = 25;
	v->a[138617] = sym_file_descriptor;
	v->a[138618] = sym__concat;
	v->a[138619] = sym_test_operator;
	small_parse_table_6931(v);
}

void	small_parse_table_6931(t_small_parse_table_array *v)
{
	v->a[138620] = sym__brace_start;
	v->a[138621] = anon_sym_LPAREN_LPAREN;
	v->a[138622] = anon_sym_PIPE_PIPE;
	v->a[138623] = anon_sym_AMP_AMP;
	v->a[138624] = anon_sym_GT_GT;
	v->a[138625] = anon_sym_PIPE_AMP;
	v->a[138626] = anon_sym_AMP_GT_GT;
	v->a[138627] = anon_sym_GT_PIPE;
	v->a[138628] = anon_sym_LT_AMP_DASH;
	v->a[138629] = anon_sym_GT_AMP_DASH;
	v->a[138630] = anon_sym_LT_LT_DASH;
	v->a[138631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138632] = anon_sym_DOLLAR_LBRACK;
	v->a[138633] = aux_sym_concatenation_token1;
	v->a[138634] = sym__special_character;
	v->a[138635] = anon_sym_DQUOTE;
	v->a[138636] = sym_raw_string;
	v->a[138637] = sym_ansi_c_string;
	v->a[138638] = anon_sym_DOLLAR_LBRACE;
	v->a[138639] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6932(v);
}

void	small_parse_table_6932(t_small_parse_table_array *v)
{
	v->a[138640] = anon_sym_LT_LPAREN;
	v->a[138641] = anon_sym_GT_LPAREN;
	v->a[138642] = 3;
	v->a[138643] = actions(71);
	v->a[138644] = 1;
	v->a[138645] = sym_comment;
	v->a[138646] = actions(1312);
	v->a[138647] = 14;
	v->a[138648] = anon_sym_EQ;
	v->a[138649] = anon_sym_PIPE;
	v->a[138650] = anon_sym_CARET;
	v->a[138651] = anon_sym_AMP;
	v->a[138652] = anon_sym_LT;
	v->a[138653] = anon_sym_GT;
	v->a[138654] = anon_sym_LT_LT;
	v->a[138655] = anon_sym_GT_GT;
	v->a[138656] = anon_sym_PLUS;
	v->a[138657] = anon_sym_DASH;
	v->a[138658] = anon_sym_STAR;
	v->a[138659] = anon_sym_SLASH;
	small_parse_table_6933(v);
}

void	small_parse_table_6933(t_small_parse_table_array *v)
{
	v->a[138660] = anon_sym_PERCENT;
	v->a[138661] = anon_sym_STAR_STAR;
	v->a[138662] = actions(1314);
	v->a[138663] = 25;
	v->a[138664] = sym__concat;
	v->a[138665] = sym_test_operator;
	v->a[138666] = anon_sym_PLUS_PLUS;
	v->a[138667] = anon_sym_DASH_DASH;
	v->a[138668] = anon_sym_PLUS_EQ;
	v->a[138669] = anon_sym_DASH_EQ;
	v->a[138670] = anon_sym_STAR_EQ;
	v->a[138671] = anon_sym_SLASH_EQ;
	v->a[138672] = anon_sym_PERCENT_EQ;
	v->a[138673] = anon_sym_STAR_STAR_EQ;
	v->a[138674] = anon_sym_LT_LT_EQ;
	v->a[138675] = anon_sym_GT_GT_EQ;
	v->a[138676] = anon_sym_AMP_EQ;
	v->a[138677] = anon_sym_CARET_EQ;
	v->a[138678] = anon_sym_PIPE_EQ;
	v->a[138679] = anon_sym_PIPE_PIPE;
	small_parse_table_6934(v);
}

void	small_parse_table_6934(t_small_parse_table_array *v)
{
	v->a[138680] = anon_sym_AMP_AMP;
	v->a[138681] = anon_sym_EQ_EQ;
	v->a[138682] = anon_sym_BANG_EQ;
	v->a[138683] = anon_sym_LT_EQ;
	v->a[138684] = anon_sym_GT_EQ;
	v->a[138685] = anon_sym_RBRACK;
	v->a[138686] = anon_sym_EQ_TILDE;
	v->a[138687] = anon_sym_QMARK;
	v->a[138688] = aux_sym_concatenation_token1;
	v->a[138689] = 3;
	v->a[138690] = actions(71);
	v->a[138691] = 1;
	v->a[138692] = sym_comment;
	v->a[138693] = actions(6807);
	v->a[138694] = 14;
	v->a[138695] = anon_sym_EQ;
	v->a[138696] = anon_sym_PIPE;
	v->a[138697] = anon_sym_CARET;
	v->a[138698] = anon_sym_AMP;
	v->a[138699] = anon_sym_LT;
	small_parse_table_6935(v);
}

/* EOF small_parse_table_1386.c */
