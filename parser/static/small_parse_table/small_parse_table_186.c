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
	v->a[18600] = state(2101);
	v->a[18601] = 1;
	v->a[18602] = sym__statement_not_pipeline;
	v->a[18603] = actions(329);
	v->a[18604] = 2;
	v->a[18605] = anon_sym_while;
	v->a[18606] = anon_sym_until;
	v->a[18607] = actions(343);
	v->a[18608] = 2;
	v->a[18609] = anon_sym_LT_AMP_DASH;
	v->a[18610] = anon_sym_GT_AMP_DASH;
	v->a[18611] = actions(351);
	v->a[18612] = 2;
	v->a[18613] = sym_raw_string;
	v->a[18614] = sym_number;
	v->a[18615] = state(777);
	v->a[18616] = 5;
	v->a[18617] = sym_arithmetic_expansion;
	v->a[18618] = sym_string;
	v->a[18619] = sym_simple_expansion;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = sym_expansion;
	v->a[18621] = sym_command_substitution;
	v->a[18622] = actions(341);
	v->a[18623] = 8;
	v->a[18624] = anon_sym_LT;
	v->a[18625] = anon_sym_GT;
	v->a[18626] = anon_sym_GT_GT;
	v->a[18627] = anon_sym_AMP_GT;
	v->a[18628] = anon_sym_AMP_GT_GT;
	v->a[18629] = anon_sym_LT_AMP;
	v->a[18630] = anon_sym_GT_AMP;
	v->a[18631] = anon_sym_GT_PIPE;
	v->a[18632] = state(1435);
	v->a[18633] = 12;
	v->a[18634] = sym_redirected_statement;
	v->a[18635] = sym_for_statement;
	v->a[18636] = sym_while_statement;
	v->a[18637] = sym_if_statement;
	v->a[18638] = sym_case_statement;
	v->a[18639] = sym_function_definition;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = sym_compound_statement;
	v->a[18641] = sym_subshell;
	v->a[18642] = sym_list;
	v->a[18643] = sym_negated_command;
	v->a[18644] = sym_command;
	v->a[18645] = sym__variable_assignments;
	v->a[18646] = 30;
	v->a[18647] = actions(3);
	v->a[18648] = 1;
	v->a[18649] = sym_comment;
	v->a[18650] = actions(7);
	v->a[18651] = 1;
	v->a[18652] = sym_word;
	v->a[18653] = actions(9);
	v->a[18654] = 1;
	v->a[18655] = anon_sym_for;
	v->a[18656] = actions(13);
	v->a[18657] = 1;
	v->a[18658] = anon_sym_if;
	v->a[18659] = actions(15);
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = 1;
	v->a[18661] = anon_sym_case;
	v->a[18662] = actions(17);
	v->a[18663] = 1;
	v->a[18664] = anon_sym_LPAREN;
	v->a[18665] = actions(19);
	v->a[18666] = 1;
	v->a[18667] = anon_sym_LBRACE;
	v->a[18668] = actions(21);
	v->a[18669] = 1;
	v->a[18670] = anon_sym_BANG;
	v->a[18671] = actions(27);
	v->a[18672] = 1;
	v->a[18673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18674] = actions(29);
	v->a[18675] = 1;
	v->a[18676] = anon_sym_DOLLAR;
	v->a[18677] = actions(31);
	v->a[18678] = 1;
	v->a[18679] = anon_sym_DQUOTE;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = actions(35);
	v->a[18681] = 1;
	v->a[18682] = anon_sym_DOLLAR_LBRACE;
	v->a[18683] = actions(37);
	v->a[18684] = 1;
	v->a[18685] = anon_sym_DOLLAR_LPAREN;
	v->a[18686] = actions(39);
	v->a[18687] = 1;
	v->a[18688] = anon_sym_BQUOTE;
	v->a[18689] = actions(41);
	v->a[18690] = 1;
	v->a[18691] = sym_file_descriptor;
	v->a[18692] = actions(43);
	v->a[18693] = 1;
	v->a[18694] = sym_variable_name;
	v->a[18695] = state(183);
	v->a[18696] = 1;
	v->a[18697] = sym_command_name;
	v->a[18698] = state(266);
	v->a[18699] = 1;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
