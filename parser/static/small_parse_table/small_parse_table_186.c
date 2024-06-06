/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_186.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_930(t_small_parse_table_array *v)
{
	v->a[18600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18601] = sym__special_character;
	v->a[18602] = anon_sym_DQUOTE;
	v->a[18603] = sym_raw_string;
	v->a[18604] = aux_sym_number_token1;
	v->a[18605] = aux_sym_number_token2;
	v->a[18606] = anon_sym_DOLLAR_LBRACE;
	v->a[18607] = anon_sym_DOLLAR_LPAREN;
	v->a[18608] = anon_sym_BQUOTE;
	v->a[18609] = anon_sym_DOLLAR_BQUOTE;
	v->a[18610] = sym_word;
	v->a[18611] = 20;
	v->a[18612] = actions(3);
	v->a[18613] = 1;
	v->a[18614] = sym_comment;
	v->a[18615] = actions(2055);
	v->a[18616] = 1;
	v->a[18617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18618] = actions(2058);
	v->a[18619] = 1;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = anon_sym_DOLLAR;
	v->a[18621] = actions(2064);
	v->a[18622] = 1;
	v->a[18623] = anon_sym_DQUOTE;
	v->a[18624] = actions(2067);
	v->a[18625] = 1;
	v->a[18626] = aux_sym_number_token1;
	v->a[18627] = actions(2070);
	v->a[18628] = 1;
	v->a[18629] = aux_sym_number_token2;
	v->a[18630] = actions(2073);
	v->a[18631] = 1;
	v->a[18632] = anon_sym_DOLLAR_LBRACE;
	v->a[18633] = actions(2076);
	v->a[18634] = 1;
	v->a[18635] = anon_sym_DOLLAR_LPAREN;
	v->a[18636] = actions(2079);
	v->a[18637] = 1;
	v->a[18638] = anon_sym_BQUOTE;
	v->a[18639] = actions(2082);
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = 1;
	v->a[18641] = anon_sym_DOLLAR_BQUOTE;
	v->a[18642] = actions(2091);
	v->a[18643] = 1;
	v->a[18644] = sym__brace_start;
	v->a[18645] = actions(2763);
	v->a[18646] = 1;
	v->a[18647] = sym__special_character;
	v->a[18648] = actions(2766);
	v->a[18649] = 1;
	v->a[18650] = aux_sym__simple_variable_name_token1;
	v->a[18651] = actions(2769);
	v->a[18652] = 1;
	v->a[18653] = sym_test_operator;
	v->a[18654] = state(1219);
	v->a[18655] = 1;
	v->a[18656] = aux_sym__literal_repeat1;
	v->a[18657] = actions(966);
	v->a[18658] = 2;
	v->a[18659] = sym_file_descriptor;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = aux_sym_heredoc_redirect_token1;
	v->a[18661] = actions(2760);
	v->a[18662] = 2;
	v->a[18663] = sym_raw_string;
	v->a[18664] = sym_word;
	v->a[18665] = state(505);
	v->a[18666] = 2;
	v->a[18667] = sym_concatenation;
	v->a[18668] = aux_sym_unset_command_repeat1;
	v->a[18669] = state(1351);
	v->a[18670] = 7;
	v->a[18671] = sym_arithmetic_expansion;
	v->a[18672] = sym_brace_expression;
	v->a[18673] = sym_string;
	v->a[18674] = sym_number;
	v->a[18675] = sym_simple_expansion;
	v->a[18676] = sym_expansion;
	v->a[18677] = sym_command_substitution;
	v->a[18678] = actions(964);
	v->a[18679] = 16;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = anon_sym_PIPE;
	v->a[18681] = anon_sym_PIPE_AMP;
	v->a[18682] = anon_sym_AMP_AMP;
	v->a[18683] = anon_sym_PIPE_PIPE;
	v->a[18684] = anon_sym_LT;
	v->a[18685] = anon_sym_GT;
	v->a[18686] = anon_sym_GT_GT;
	v->a[18687] = anon_sym_AMP_GT;
	v->a[18688] = anon_sym_AMP_GT_GT;
	v->a[18689] = anon_sym_LT_AMP;
	v->a[18690] = anon_sym_GT_AMP;
	v->a[18691] = anon_sym_GT_PIPE;
	v->a[18692] = anon_sym_LT_AMP_DASH;
	v->a[18693] = anon_sym_GT_AMP_DASH;
	v->a[18694] = anon_sym_LT_LT;
	v->a[18695] = anon_sym_LT_LT_DASH;
	v->a[18696] = 6;
	v->a[18697] = actions(3);
	v->a[18698] = 1;
	v->a[18699] = sym_comment;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
