/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2806.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14030(t_small_parse_table_array *v)
{
	v->a[280600] = actions(5375);
	v->a[280601] = 11;
	v->a[280602] = sym_file_descriptor;
	v->a[280603] = sym_variable_name;
	v->a[280604] = anon_sym_PIPE_PIPE;
	v->a[280605] = anon_sym_AMP_AMP;
	v->a[280606] = anon_sym_GT_GT;
	v->a[280607] = anon_sym_PIPE_AMP;
	v->a[280608] = anon_sym_AMP_GT_GT;
	v->a[280609] = anon_sym_GT_PIPE;
	v->a[280610] = anon_sym_LT_AMP_DASH;
	v->a[280611] = anon_sym_GT_AMP_DASH;
	v->a[280612] = anon_sym_LT_LT_DASH;
	v->a[280613] = 3;
	v->a[280614] = actions(71);
	v->a[280615] = 1;
	v->a[280616] = sym_comment;
	v->a[280617] = actions(12660);
	v->a[280618] = 6;
	v->a[280619] = anon_sym_LPAREN;
	small_parse_table_14031(v);
}

void	small_parse_table_14031(t_small_parse_table_array *v)
{
	v->a[280620] = anon_sym_DOLLAR;
	v->a[280621] = aux_sym_number_token1;
	v->a[280622] = aux_sym_number_token2;
	v->a[280623] = anon_sym_DOLLAR_LPAREN;
	v->a[280624] = sym_word;
	v->a[280625] = actions(12662);
	v->a[280626] = 15;
	v->a[280627] = sym_test_operator;
	v->a[280628] = sym_extglob_pattern;
	v->a[280629] = sym__brace_start;
	v->a[280630] = anon_sym_LPAREN_LPAREN;
	v->a[280631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[280632] = anon_sym_DOLLAR_LBRACK;
	v->a[280633] = sym__special_character;
	v->a[280634] = anon_sym_DQUOTE;
	v->a[280635] = sym_raw_string;
	v->a[280636] = sym_ansi_c_string;
	v->a[280637] = anon_sym_DOLLAR_LBRACE;
	v->a[280638] = anon_sym_BQUOTE;
	v->a[280639] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14032(v);
}

void	small_parse_table_14032(t_small_parse_table_array *v)
{
	v->a[280640] = anon_sym_LT_LPAREN;
	v->a[280641] = anon_sym_GT_LPAREN;
	v->a[280642] = 3;
	v->a[280643] = actions(71);
	v->a[280644] = 1;
	v->a[280645] = sym_comment;
	v->a[280646] = actions(1336);
	v->a[280647] = 7;
	v->a[280648] = anon_sym_PIPE;
	v->a[280649] = anon_sym_LT;
	v->a[280650] = anon_sym_GT;
	v->a[280651] = anon_sym_LT_LT;
	v->a[280652] = anon_sym_AMP_GT;
	v->a[280653] = anon_sym_LT_AMP;
	v->a[280654] = anon_sym_GT_AMP;
	v->a[280655] = actions(1338);
	v->a[280656] = 14;
	v->a[280657] = sym_file_descriptor;
	v->a[280658] = sym__concat;
	v->a[280659] = anon_sym_PIPE_PIPE;
	small_parse_table_14033(v);
}

void	small_parse_table_14033(t_small_parse_table_array *v)
{
	v->a[280660] = anon_sym_AMP_AMP;
	v->a[280661] = anon_sym_GT_GT;
	v->a[280662] = anon_sym_PIPE_AMP;
	v->a[280663] = anon_sym_RBRACK;
	v->a[280664] = anon_sym_AMP_GT_GT;
	v->a[280665] = anon_sym_GT_PIPE;
	v->a[280666] = anon_sym_LT_AMP_DASH;
	v->a[280667] = anon_sym_GT_AMP_DASH;
	v->a[280668] = anon_sym_LT_LT_DASH;
	v->a[280669] = anon_sym_LT_LT_LT;
	v->a[280670] = aux_sym_concatenation_token1;
	v->a[280671] = 5;
	v->a[280672] = actions(71);
	v->a[280673] = 1;
	v->a[280674] = sym_comment;
	v->a[280675] = state(5297);
	v->a[280676] = 1;
	v->a[280677] = aux_sym_concatenation_repeat1;
	v->a[280678] = actions(12582);
	v->a[280679] = 2;
	small_parse_table_14034(v);
}

void	small_parse_table_14034(t_small_parse_table_array *v)
{
	v->a[280680] = sym__concat;
	v->a[280681] = aux_sym_concatenation_token1;
	v->a[280682] = actions(5067);
	v->a[280683] = 7;
	v->a[280684] = anon_sym_PIPE;
	v->a[280685] = anon_sym_LT;
	v->a[280686] = anon_sym_GT;
	v->a[280687] = anon_sym_LT_LT;
	v->a[280688] = anon_sym_AMP_GT;
	v->a[280689] = anon_sym_LT_AMP;
	v->a[280690] = anon_sym_GT_AMP;
	v->a[280691] = actions(5069);
	v->a[280692] = 11;
	v->a[280693] = sym_file_descriptor;
	v->a[280694] = sym_variable_name;
	v->a[280695] = anon_sym_PIPE_PIPE;
	v->a[280696] = anon_sym_AMP_AMP;
	v->a[280697] = anon_sym_GT_GT;
	v->a[280698] = anon_sym_PIPE_AMP;
	v->a[280699] = anon_sym_AMP_GT_GT;
	small_parse_table_14035(v);
}

/* EOF small_parse_table_2806.c */
