/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = anon_sym_DOLLAR_BQUOTE;
	v->a[19601] = actions(113);
	v->a[19602] = 1;
	v->a[19603] = sym__brace_start;
	v->a[19604] = actions(631);
	v->a[19605] = 1;
	v->a[19606] = sym_variable_name;
	v->a[19607] = actions(2890);
	v->a[19608] = 1;
	v->a[19609] = sym_word;
	v->a[19610] = actions(2898);
	v->a[19611] = 1;
	v->a[19612] = sym__special_character;
	v->a[19613] = actions(2900);
	v->a[19614] = 1;
	v->a[19615] = sym_file_descriptor;
	v->a[19616] = state(426);
	v->a[19617] = 1;
	v->a[19618] = sym_command_name;
	v->a[19619] = state(1048);
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = 1;
	v->a[19621] = aux_sym__literal_repeat1;
	v->a[19622] = state(1154);
	v->a[19623] = 1;
	v->a[19624] = aux_sym_command_repeat1;
	v->a[19625] = state(1192);
	v->a[19626] = 1;
	v->a[19627] = sym_concatenation;
	v->a[19628] = state(1291);
	v->a[19629] = 1;
	v->a[19630] = sym_variable_assignment;
	v->a[19631] = state(1995);
	v->a[19632] = 1;
	v->a[19633] = sym_file_redirect;
	v->a[19634] = state(2168);
	v->a[19635] = 1;
	v->a[19636] = sym_subshell;
	v->a[19637] = state(2169);
	v->a[19638] = 1;
	v->a[19639] = sym_command;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = actions(627);
	v->a[19641] = 2;
	v->a[19642] = sym_test_operator;
	v->a[19643] = sym_raw_string;
	v->a[19644] = actions(2896);
	v->a[19645] = 2;
	v->a[19646] = anon_sym_LT_AMP_DASH;
	v->a[19647] = anon_sym_GT_AMP_DASH;
	v->a[19648] = actions(2894);
	v->a[19649] = 3;
	v->a[19650] = anon_sym_GT_GT;
	v->a[19651] = anon_sym_AMP_GT_GT;
	v->a[19652] = anon_sym_GT_PIPE;
	v->a[19653] = actions(2892);
	v->a[19654] = 5;
	v->a[19655] = anon_sym_LT;
	v->a[19656] = anon_sym_GT;
	v->a[19657] = anon_sym_AMP_GT;
	v->a[19658] = anon_sym_LT_AMP;
	v->a[19659] = anon_sym_GT_AMP;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = state(1264);
	v->a[19661] = 7;
	v->a[19662] = sym_arithmetic_expansion;
	v->a[19663] = sym_brace_expression;
	v->a[19664] = sym_string;
	v->a[19665] = sym_number;
	v->a[19666] = sym_simple_expansion;
	v->a[19667] = sym_expansion;
	v->a[19668] = sym_command_substitution;
	v->a[19669] = 6;
	v->a[19670] = actions(3);
	v->a[19671] = 1;
	v->a[19672] = sym_comment;
	v->a[19673] = state(1217);
	v->a[19674] = 1;
	v->a[19675] = aux_sym__literal_repeat1;
	v->a[19676] = state(1289);
	v->a[19677] = 1;
	v->a[19678] = sym_concatenation;
	v->a[19679] = actions(1530);
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = 5;
	v->a[19681] = sym_file_descriptor;
	v->a[19682] = sym_variable_name;
	v->a[19683] = sym_test_operator;
	v->a[19684] = sym__brace_start;
	v->a[19685] = aux_sym_heredoc_redirect_token1;
	v->a[19686] = state(1336);
	v->a[19687] = 7;
	v->a[19688] = sym_arithmetic_expansion;
	v->a[19689] = sym_brace_expression;
	v->a[19690] = sym_string;
	v->a[19691] = sym_number;
	v->a[19692] = sym_simple_expansion;
	v->a[19693] = sym_expansion;
	v->a[19694] = sym_command_substitution;
	v->a[19695] = actions(1528);
	v->a[19696] = 28;
	v->a[19697] = anon_sym_PIPE;
	v->a[19698] = anon_sym_PIPE_AMP;
	v->a[19699] = anon_sym_AMP_AMP;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
