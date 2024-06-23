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
	v->a[18600] = 1;
	v->a[18601] = sym_pipeline;
	v->a[18602] = state(2263);
	v->a[18603] = 1;
	v->a[18604] = sym__statement_not_pipeline;
	v->a[18605] = actions(11);
	v->a[18606] = 2;
	v->a[18607] = anon_sym_while;
	v->a[18608] = anon_sym_until;
	v->a[18609] = actions(369);
	v->a[18610] = 2;
	v->a[18611] = anon_sym_LT_AMP_DASH;
	v->a[18612] = anon_sym_GT_AMP_DASH;
	v->a[18613] = actions(371);
	v->a[18614] = 2;
	v->a[18615] = sym_raw_string;
	v->a[18616] = sym_number;
	v->a[18617] = state(790);
	v->a[18618] = 5;
	v->a[18619] = sym_arithmetic_expansion;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = sym_string;
	v->a[18621] = sym_simple_expansion;
	v->a[18622] = sym_expansion;
	v->a[18623] = sym_command_substitution;
	v->a[18624] = actions(367);
	v->a[18625] = 8;
	v->a[18626] = anon_sym_LT;
	v->a[18627] = anon_sym_GT;
	v->a[18628] = anon_sym_GT_GT;
	v->a[18629] = anon_sym_AMP_GT;
	v->a[18630] = anon_sym_AMP_GT_GT;
	v->a[18631] = anon_sym_LT_AMP;
	v->a[18632] = anon_sym_GT_AMP;
	v->a[18633] = anon_sym_GT_PIPE;
	v->a[18634] = state(1554);
	v->a[18635] = 12;
	v->a[18636] = sym_redirected_statement;
	v->a[18637] = sym_for_statement;
	v->a[18638] = sym_while_statement;
	v->a[18639] = sym_if_statement;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = sym_case_statement;
	v->a[18641] = sym_function_definition;
	v->a[18642] = sym_compound_statement;
	v->a[18643] = sym_subshell;
	v->a[18644] = sym_list;
	v->a[18645] = sym_negated_command;
	v->a[18646] = sym_command;
	v->a[18647] = sym__variable_assignments;
	v->a[18648] = 29;
	v->a[18649] = actions(3);
	v->a[18650] = 1;
	v->a[18651] = sym_comment;
	v->a[18652] = actions(89);
	v->a[18653] = 1;
	v->a[18654] = sym_word;
	v->a[18655] = actions(91);
	v->a[18656] = 1;
	v->a[18657] = anon_sym_for;
	v->a[18658] = actions(95);
	v->a[18659] = 1;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = anon_sym_if;
	v->a[18661] = actions(97);
	v->a[18662] = 1;
	v->a[18663] = anon_sym_case;
	v->a[18664] = actions(99);
	v->a[18665] = 1;
	v->a[18666] = anon_sym_LPAREN;
	v->a[18667] = actions(101);
	v->a[18668] = 1;
	v->a[18669] = anon_sym_LBRACE;
	v->a[18670] = actions(103);
	v->a[18671] = 1;
	v->a[18672] = anon_sym_BANG;
	v->a[18673] = actions(109);
	v->a[18674] = 1;
	v->a[18675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18676] = actions(111);
	v->a[18677] = 1;
	v->a[18678] = anon_sym_DOLLAR;
	v->a[18679] = actions(113);
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = 1;
	v->a[18681] = anon_sym_DQUOTE;
	v->a[18682] = actions(117);
	v->a[18683] = 1;
	v->a[18684] = anon_sym_DOLLAR_LBRACE;
	v->a[18685] = actions(119);
	v->a[18686] = 1;
	v->a[18687] = anon_sym_DOLLAR_LPAREN;
	v->a[18688] = actions(121);
	v->a[18689] = 1;
	v->a[18690] = anon_sym_BQUOTE;
	v->a[18691] = actions(123);
	v->a[18692] = 1;
	v->a[18693] = sym_file_descriptor;
	v->a[18694] = actions(125);
	v->a[18695] = 1;
	v->a[18696] = sym_variable_name;
	v->a[18697] = state(182);
	v->a[18698] = 1;
	v->a[18699] = sym_command_name;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
