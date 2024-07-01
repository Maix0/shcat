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
	v->a[18600] = anon_sym_DOLLAR_LBRACE;
	v->a[18601] = actions(69);
	v->a[18602] = 1;
	v->a[18603] = anon_sym_DOLLAR_LPAREN;
	v->a[18604] = actions(71);
	v->a[18605] = 1;
	v->a[18606] = anon_sym_BQUOTE;
	v->a[18607] = actions(363);
	v->a[18608] = 1;
	v->a[18609] = sym_word;
	v->a[18610] = actions(365);
	v->a[18611] = 1;
	v->a[18612] = anon_sym_BANG;
	v->a[18613] = actions(373);
	v->a[18614] = 1;
	v->a[18615] = sym_file_descriptor;
	v->a[18616] = actions(375);
	v->a[18617] = 1;
	v->a[18618] = sym_variable_name;
	v->a[18619] = state(308);
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = 1;
	v->a[18621] = sym_command_name;
	v->a[18622] = state(621);
	v->a[18623] = 1;
	v->a[18624] = sym_variable_assignment;
	v->a[18625] = state(650);
	v->a[18626] = 1;
	v->a[18627] = sym_concatenation;
	v->a[18628] = state(669);
	v->a[18629] = 1;
	v->a[18630] = aux_sym_command_repeat1;
	v->a[18631] = state(712);
	v->a[18632] = 1;
	v->a[18633] = sym_file_redirect;
	v->a[18634] = state(1403);
	v->a[18635] = 1;
	v->a[18636] = sym_pipeline;
	v->a[18637] = state(1441);
	v->a[18638] = 1;
	v->a[18639] = aux_sym_redirected_statement_repeat2;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = state(2106);
	v->a[18641] = 1;
	v->a[18642] = sym__statement_not_pipeline;
	v->a[18643] = actions(11);
	v->a[18644] = 2;
	v->a[18645] = anon_sym_while;
	v->a[18646] = anon_sym_until;
	v->a[18647] = actions(369);
	v->a[18648] = 2;
	v->a[18649] = anon_sym_LT_AMP_DASH;
	v->a[18650] = anon_sym_GT_AMP_DASH;
	v->a[18651] = actions(371);
	v->a[18652] = 2;
	v->a[18653] = sym_raw_string;
	v->a[18654] = sym_number;
	v->a[18655] = state(711);
	v->a[18656] = 5;
	v->a[18657] = sym_arithmetic_expansion;
	v->a[18658] = sym_string;
	v->a[18659] = sym_simple_expansion;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = sym_expansion;
	v->a[18661] = sym_command_substitution;
	v->a[18662] = actions(367);
	v->a[18663] = 6;
	v->a[18664] = anon_sym_LT;
	v->a[18665] = anon_sym_GT;
	v->a[18666] = anon_sym_GT_GT;
	v->a[18667] = anon_sym_LT_AMP;
	v->a[18668] = anon_sym_GT_AMP;
	v->a[18669] = anon_sym_GT_PIPE;
	v->a[18670] = state(1410);
	v->a[18671] = 12;
	v->a[18672] = sym_redirected_statement;
	v->a[18673] = sym_for_statement;
	v->a[18674] = sym_while_statement;
	v->a[18675] = sym_if_statement;
	v->a[18676] = sym_case_statement;
	v->a[18677] = sym_function_definition;
	v->a[18678] = sym_compound_statement;
	v->a[18679] = sym_subshell;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = sym_list;
	v->a[18681] = sym_negated_command;
	v->a[18682] = sym_command;
	v->a[18683] = sym__variable_assignments;
	v->a[18684] = 29;
	v->a[18685] = actions(3);
	v->a[18686] = 1;
	v->a[18687] = sym_comment;
	v->a[18688] = actions(325);
	v->a[18689] = 1;
	v->a[18690] = sym_word;
	v->a[18691] = actions(327);
	v->a[18692] = 1;
	v->a[18693] = anon_sym_for;
	v->a[18694] = actions(331);
	v->a[18695] = 1;
	v->a[18696] = anon_sym_if;
	v->a[18697] = actions(333);
	v->a[18698] = 1;
	v->a[18699] = anon_sym_case;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
