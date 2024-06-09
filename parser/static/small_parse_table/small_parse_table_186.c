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
	v->a[18600] = sym_word;
	v->a[18601] = actions(97);
	v->a[18602] = 1;
	v->a[18603] = anon_sym_for;
	v->a[18604] = actions(101);
	v->a[18605] = 1;
	v->a[18606] = anon_sym_if;
	v->a[18607] = actions(103);
	v->a[18608] = 1;
	v->a[18609] = anon_sym_case;
	v->a[18610] = actions(105);
	v->a[18611] = 1;
	v->a[18612] = anon_sym_LPAREN;
	v->a[18613] = actions(109);
	v->a[18614] = 1;
	v->a[18615] = anon_sym_LBRACE;
	v->a[18616] = actions(111);
	v->a[18617] = 1;
	v->a[18618] = anon_sym_BANG;
	v->a[18619] = actions(117);
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = 1;
	v->a[18621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18622] = actions(119);
	v->a[18623] = 1;
	v->a[18624] = anon_sym_DOLLAR;
	v->a[18625] = actions(121);
	v->a[18626] = 1;
	v->a[18627] = anon_sym_DQUOTE;
	v->a[18628] = actions(123);
	v->a[18629] = 1;
	v->a[18630] = sym_raw_string;
	v->a[18631] = actions(125);
	v->a[18632] = 1;
	v->a[18633] = aux_sym_number_token1;
	v->a[18634] = actions(127);
	v->a[18635] = 1;
	v->a[18636] = aux_sym_number_token2;
	v->a[18637] = actions(129);
	v->a[18638] = 1;
	v->a[18639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = actions(131);
	v->a[18641] = 1;
	v->a[18642] = anon_sym_DOLLAR_LPAREN;
	v->a[18643] = actions(133);
	v->a[18644] = 1;
	v->a[18645] = anon_sym_BQUOTE;
	v->a[18646] = actions(135);
	v->a[18647] = 1;
	v->a[18648] = sym_file_descriptor;
	v->a[18649] = actions(137);
	v->a[18650] = 1;
	v->a[18651] = sym_variable_name;
	v->a[18652] = state(173);
	v->a[18653] = 1;
	v->a[18654] = sym_command_name;
	v->a[18655] = state(266);
	v->a[18656] = 1;
	v->a[18657] = sym_variable_assignment;
	v->a[18658] = state(663);
	v->a[18659] = 1;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = aux_sym_command_repeat1;
	v->a[18661] = state(665);
	v->a[18662] = 1;
	v->a[18663] = sym_concatenation;
	v->a[18664] = state(749);
	v->a[18665] = 1;
	v->a[18666] = sym_file_redirect;
	v->a[18667] = state(1087);
	v->a[18668] = 1;
	v->a[18669] = sym_pipeline;
	v->a[18670] = state(1145);
	v->a[18671] = 1;
	v->a[18672] = aux_sym_redirected_statement_repeat2;
	v->a[18673] = state(2040);
	v->a[18674] = 1;
	v->a[18675] = sym__statement_not_pipeline;
	v->a[18676] = actions(99);
	v->a[18677] = 2;
	v->a[18678] = anon_sym_while;
	v->a[18679] = anon_sym_until;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = actions(115);
	v->a[18681] = 2;
	v->a[18682] = anon_sym_LT_AMP_DASH;
	v->a[18683] = anon_sym_GT_AMP_DASH;
	v->a[18684] = state(282);
	v->a[18685] = 6;
	v->a[18686] = sym_arithmetic_expansion;
	v->a[18687] = sym_string;
	v->a[18688] = sym_number;
	v->a[18689] = sym_simple_expansion;
	v->a[18690] = sym_expansion;
	v->a[18691] = sym_command_substitution;
	v->a[18692] = actions(113);
	v->a[18693] = 8;
	v->a[18694] = anon_sym_LT;
	v->a[18695] = anon_sym_GT;
	v->a[18696] = anon_sym_GT_GT;
	v->a[18697] = anon_sym_AMP_GT;
	v->a[18698] = anon_sym_AMP_GT_GT;
	v->a[18699] = anon_sym_LT_AMP;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
