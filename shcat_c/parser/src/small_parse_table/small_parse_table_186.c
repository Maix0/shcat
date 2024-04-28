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
	v->a[18600] = sym_string;
	v->a[18601] = sym_translated_string;
	v->a[18602] = sym_number;
	v->a[18603] = sym_simple_expansion;
	v->a[18604] = sym_expansion;
	v->a[18605] = sym_command_substitution;
	v->a[18606] = sym_process_substitution;
	v->a[18607] = actions(2494);
	v->a[18608] = 21;
	v->a[18609] = anon_sym_SEMI;
	v->a[18610] = anon_sym_PIPE_PIPE;
	v->a[18611] = anon_sym_AMP_AMP;
	v->a[18612] = anon_sym_PIPE;
	v->a[18613] = anon_sym_AMP;
	v->a[18614] = anon_sym_LT;
	v->a[18615] = anon_sym_GT;
	v->a[18616] = anon_sym_LT_LT;
	v->a[18617] = anon_sym_GT_GT;
	v->a[18618] = anon_sym_SEMI_SEMI;
	v->a[18619] = anon_sym_SEMI_AMP;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = anon_sym_SEMI_SEMI_AMP;
	v->a[18621] = anon_sym_PIPE_AMP;
	v->a[18622] = anon_sym_AMP_GT;
	v->a[18623] = anon_sym_AMP_GT_GT;
	v->a[18624] = anon_sym_LT_AMP;
	v->a[18625] = anon_sym_GT_AMP;
	v->a[18626] = anon_sym_GT_PIPE;
	v->a[18627] = anon_sym_LT_AMP_DASH;
	v->a[18628] = anon_sym_GT_AMP_DASH;
	v->a[18629] = anon_sym_LT_LT_DASH;
	v->a[18630] = 8;
	v->a[18631] = actions(3);
	v->a[18632] = 1;
	v->a[18633] = sym_comment;
	v->a[18634] = actions(3701);
	v->a[18635] = 1;
	v->a[18636] = anon_sym_DQUOTE;
	v->a[18637] = actions(3705);
	v->a[18638] = 1;
	v->a[18639] = sym_variable_name;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = state(2025);
	v->a[18641] = 1;
	v->a[18642] = sym_string;
	v->a[18643] = actions(3703);
	v->a[18644] = 2;
	v->a[18645] = aux_sym__simple_variable_name_token1;
	v->a[18646] = aux_sym__multiline_variable_name_token1;
	v->a[18647] = actions(1241);
	v->a[18648] = 4;
	v->a[18649] = sym_file_descriptor;
	v->a[18650] = sym_test_operator;
	v->a[18651] = sym__brace_start;
	v->a[18652] = ts_builtin_sym_end;
	v->a[18653] = actions(3699);
	v->a[18654] = 9;
	v->a[18655] = anon_sym_DASH;
	v->a[18656] = anon_sym_STAR;
	v->a[18657] = anon_sym_BANG;
	v->a[18658] = anon_sym_QMARK;
	v->a[18659] = anon_sym_DOLLAR;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = anon_sym_POUND;
	v->a[18661] = anon_sym_AT2;
	v->a[18662] = anon_sym_0;
	v->a[18663] = anon_sym__;
	v->a[18664] = actions(1239);
	v->a[18665] = 35;
	v->a[18666] = anon_sym_LPAREN_LPAREN;
	v->a[18667] = anon_sym_SEMI;
	v->a[18668] = anon_sym_PIPE_PIPE;
	v->a[18669] = anon_sym_AMP_AMP;
	v->a[18670] = anon_sym_PIPE;
	v->a[18671] = anon_sym_AMP;
	v->a[18672] = anon_sym_LT;
	v->a[18673] = anon_sym_GT;
	v->a[18674] = anon_sym_LT_LT;
	v->a[18675] = anon_sym_GT_GT;
	v->a[18676] = anon_sym_SEMI_SEMI;
	v->a[18677] = anon_sym_PIPE_AMP;
	v->a[18678] = anon_sym_AMP_GT;
	v->a[18679] = anon_sym_AMP_GT_GT;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = anon_sym_LT_AMP;
	v->a[18681] = anon_sym_GT_AMP;
	v->a[18682] = anon_sym_GT_PIPE;
	v->a[18683] = anon_sym_LT_AMP_DASH;
	v->a[18684] = anon_sym_GT_AMP_DASH;
	v->a[18685] = anon_sym_LT_LT_DASH;
	v->a[18686] = aux_sym_heredoc_redirect_token1;
	v->a[18687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18688] = anon_sym_DOLLAR_LBRACK;
	v->a[18689] = sym__special_character;
	v->a[18690] = sym_raw_string;
	v->a[18691] = sym_ansi_c_string;
	v->a[18692] = aux_sym_number_token1;
	v->a[18693] = aux_sym_number_token2;
	v->a[18694] = anon_sym_DOLLAR_LBRACE;
	v->a[18695] = anon_sym_DOLLAR_LPAREN;
	v->a[18696] = anon_sym_BQUOTE;
	v->a[18697] = anon_sym_DOLLAR_BQUOTE;
	v->a[18698] = anon_sym_LT_LPAREN;
	v->a[18699] = anon_sym_GT_LPAREN;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
