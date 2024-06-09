/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_136.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_680(t_small_parse_table_array *v)
{
	v->a[13600] = 1;
	v->a[13601] = anon_sym_BQUOTE;
	v->a[13602] = actions(81);
	v->a[13603] = 1;
	v->a[13604] = sym_file_descriptor;
	v->a[13605] = actions(83);
	v->a[13606] = 1;
	v->a[13607] = sym_variable_name;
	v->a[13608] = actions(284);
	v->a[13609] = 1;
	v->a[13610] = anon_sym_done;
	v->a[13611] = state(73);
	v->a[13612] = 1;
	v->a[13613] = aux_sym__terminated_statement;
	v->a[13614] = state(190);
	v->a[13615] = 1;
	v->a[13616] = sym_command_name;
	v->a[13617] = state(303);
	v->a[13618] = 1;
	v->a[13619] = sym_variable_assignment;
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = state(582);
	v->a[13621] = 1;
	v->a[13622] = sym_concatenation;
	v->a[13623] = state(587);
	v->a[13624] = 1;
	v->a[13625] = aux_sym_command_repeat1;
	v->a[13626] = state(718);
	v->a[13627] = 1;
	v->a[13628] = sym_file_redirect;
	v->a[13629] = state(1213);
	v->a[13630] = 1;
	v->a[13631] = aux_sym_redirected_statement_repeat2;
	v->a[13632] = state(1225);
	v->a[13633] = 1;
	v->a[13634] = sym_pipeline;
	v->a[13635] = state(2035);
	v->a[13636] = 1;
	v->a[13637] = sym__statement_not_pipeline;
	v->a[13638] = actions(11);
	v->a[13639] = 2;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = anon_sym_while;
	v->a[13641] = anon_sym_until;
	v->a[13642] = actions(61);
	v->a[13643] = 2;
	v->a[13644] = anon_sym_LT_AMP_DASH;
	v->a[13645] = anon_sym_GT_AMP_DASH;
	v->a[13646] = state(397);
	v->a[13647] = 6;
	v->a[13648] = sym_arithmetic_expansion;
	v->a[13649] = sym_string;
	v->a[13650] = sym_number;
	v->a[13651] = sym_simple_expansion;
	v->a[13652] = sym_expansion;
	v->a[13653] = sym_command_substitution;
	v->a[13654] = actions(59);
	v->a[13655] = 8;
	v->a[13656] = anon_sym_LT;
	v->a[13657] = anon_sym_GT;
	v->a[13658] = anon_sym_GT_GT;
	v->a[13659] = anon_sym_AMP_GT;
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = anon_sym_AMP_GT_GT;
	v->a[13661] = anon_sym_LT_AMP;
	v->a[13662] = anon_sym_GT_AMP;
	v->a[13663] = anon_sym_GT_PIPE;
	v->a[13664] = state(1137);
	v->a[13665] = 12;
	v->a[13666] = sym_redirected_statement;
	v->a[13667] = sym_for_statement;
	v->a[13668] = sym_while_statement;
	v->a[13669] = sym_if_statement;
	v->a[13670] = sym_case_statement;
	v->a[13671] = sym_function_definition;
	v->a[13672] = sym_compound_statement;
	v->a[13673] = sym_subshell;
	v->a[13674] = sym_list;
	v->a[13675] = sym_negated_command;
	v->a[13676] = sym_command;
	v->a[13677] = sym_variable_assignments;
	v->a[13678] = 34;
	v->a[13679] = actions(3);
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = 1;
	v->a[13681] = sym_comment;
	v->a[13682] = actions(151);
	v->a[13683] = 1;
	v->a[13684] = sym_word;
	v->a[13685] = actions(154);
	v->a[13686] = 1;
	v->a[13687] = anon_sym_for;
	v->a[13688] = actions(160);
	v->a[13689] = 1;
	v->a[13690] = anon_sym_if;
	v->a[13691] = actions(163);
	v->a[13692] = 1;
	v->a[13693] = anon_sym_do;
	v->a[13694] = actions(165);
	v->a[13695] = 1;
	v->a[13696] = anon_sym_case;
	v->a[13697] = actions(168);
	v->a[13698] = 1;
	v->a[13699] = anon_sym_LPAREN;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
