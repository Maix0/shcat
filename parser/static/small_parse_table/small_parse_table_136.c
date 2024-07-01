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
	v->a[13600] = sym_variable_name;
	v->a[13601] = actions(240);
	v->a[13602] = 1;
	v->a[13603] = sym_word;
	v->a[13604] = actions(242);
	v->a[13605] = 1;
	v->a[13606] = anon_sym_BANG;
	v->a[13607] = state(136);
	v->a[13608] = 1;
	v->a[13609] = aux_sym__statements_repeat1;
	v->a[13610] = state(188);
	v->a[13611] = 1;
	v->a[13612] = sym_command_name;
	v->a[13613] = state(297);
	v->a[13614] = 1;
	v->a[13615] = sym_variable_assignment;
	v->a[13616] = state(650);
	v->a[13617] = 1;
	v->a[13618] = sym_concatenation;
	v->a[13619] = state(749);
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = 1;
	v->a[13621] = aux_sym_command_repeat1;
	v->a[13622] = state(795);
	v->a[13623] = 1;
	v->a[13624] = sym_file_redirect;
	v->a[13625] = state(1154);
	v->a[13626] = 1;
	v->a[13627] = sym_pipeline;
	v->a[13628] = state(1240);
	v->a[13629] = 1;
	v->a[13630] = aux_sym_redirected_statement_repeat2;
	v->a[13631] = state(2119);
	v->a[13632] = 1;
	v->a[13633] = sym__statement_not_pipeline;
	v->a[13634] = state(2284);
	v->a[13635] = 1;
	v->a[13636] = sym__statements;
	v->a[13637] = actions(11);
	v->a[13638] = 2;
	v->a[13639] = anon_sym_while;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = anon_sym_until;
	v->a[13641] = actions(57);
	v->a[13642] = 2;
	v->a[13643] = anon_sym_LT_AMP_DASH;
	v->a[13644] = anon_sym_GT_AMP_DASH;
	v->a[13645] = actions(65);
	v->a[13646] = 2;
	v->a[13647] = sym_raw_string;
	v->a[13648] = sym_number;
	v->a[13649] = state(443);
	v->a[13650] = 5;
	v->a[13651] = sym_arithmetic_expansion;
	v->a[13652] = sym_string;
	v->a[13653] = sym_simple_expansion;
	v->a[13654] = sym_expansion;
	v->a[13655] = sym_command_substitution;
	v->a[13656] = actions(55);
	v->a[13657] = 6;
	v->a[13658] = anon_sym_LT;
	v->a[13659] = anon_sym_GT;
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = anon_sym_GT_GT;
	v->a[13661] = anon_sym_LT_AMP;
	v->a[13662] = anon_sym_GT_AMP;
	v->a[13663] = anon_sym_GT_PIPE;
	v->a[13664] = state(1030);
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
	v->a[13677] = sym__variable_assignments;
	v->a[13678] = 32;
	v->a[13679] = actions(3);
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = 1;
	v->a[13681] = sym_comment;
	v->a[13682] = actions(9);
	v->a[13683] = 1;
	v->a[13684] = anon_sym_for;
	v->a[13685] = actions(13);
	v->a[13686] = 1;
	v->a[13687] = anon_sym_if;
	v->a[13688] = actions(15);
	v->a[13689] = 1;
	v->a[13690] = anon_sym_case;
	v->a[13691] = actions(17);
	v->a[13692] = 1;
	v->a[13693] = anon_sym_LPAREN;
	v->a[13694] = actions(19);
	v->a[13695] = 1;
	v->a[13696] = anon_sym_LBRACE;
	v->a[13697] = actions(59);
	v->a[13698] = 1;
	v->a[13699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
