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
	v->a[13600] = anon_sym_DOLLAR;
	v->a[13601] = actions(59);
	v->a[13602] = 1;
	v->a[13603] = anon_sym_DQUOTE;
	v->a[13604] = actions(63);
	v->a[13605] = 1;
	v->a[13606] = anon_sym_DOLLAR_LBRACE;
	v->a[13607] = actions(65);
	v->a[13608] = 1;
	v->a[13609] = anon_sym_DOLLAR_LPAREN;
	v->a[13610] = actions(67);
	v->a[13611] = 1;
	v->a[13612] = anon_sym_BQUOTE;
	v->a[13613] = actions(69);
	v->a[13614] = 1;
	v->a[13615] = sym_file_descriptor;
	v->a[13616] = actions(71);
	v->a[13617] = 1;
	v->a[13618] = sym_variable_name;
	v->a[13619] = actions(223);
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = 1;
	v->a[13621] = sym_word;
	v->a[13622] = actions(225);
	v->a[13623] = 1;
	v->a[13624] = anon_sym_BANG;
	v->a[13625] = state(129);
	v->a[13626] = 1;
	v->a[13627] = aux_sym__statements_repeat1;
	v->a[13628] = state(178);
	v->a[13629] = 1;
	v->a[13630] = sym_command_name;
	v->a[13631] = state(339);
	v->a[13632] = 1;
	v->a[13633] = sym_variable_assignment;
	v->a[13634] = state(585);
	v->a[13635] = 1;
	v->a[13636] = aux_sym_command_repeat1;
	v->a[13637] = state(661);
	v->a[13638] = 1;
	v->a[13639] = sym_concatenation;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = state(774);
	v->a[13641] = 1;
	v->a[13642] = sym_file_redirect;
	v->a[13643] = state(1089);
	v->a[13644] = 1;
	v->a[13645] = sym_pipeline;
	v->a[13646] = state(1149);
	v->a[13647] = 1;
	v->a[13648] = aux_sym_redirected_statement_repeat2;
	v->a[13649] = state(1922);
	v->a[13650] = 1;
	v->a[13651] = sym__statement_not_pipeline;
	v->a[13652] = state(2117);
	v->a[13653] = 1;
	v->a[13654] = sym__statements;
	v->a[13655] = actions(11);
	v->a[13656] = 2;
	v->a[13657] = anon_sym_while;
	v->a[13658] = anon_sym_until;
	v->a[13659] = actions(61);
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = 2;
	v->a[13661] = sym_raw_string;
	v->a[13662] = sym_number;
	v->a[13663] = state(455);
	v->a[13664] = 5;
	v->a[13665] = sym_arithmetic_expansion;
	v->a[13666] = sym_string;
	v->a[13667] = sym_simple_expansion;
	v->a[13668] = sym_expansion;
	v->a[13669] = sym_command_substitution;
	v->a[13670] = actions(53);
	v->a[13671] = 7;
	v->a[13672] = anon_sym_LT;
	v->a[13673] = anon_sym_GT;
	v->a[13674] = anon_sym_GT_GT;
	v->a[13675] = anon_sym_LT_AMP;
	v->a[13676] = anon_sym_GT_AMP;
	v->a[13677] = anon_sym_GT_PIPE;
	v->a[13678] = anon_sym_LT_GT;
	v->a[13679] = state(965);
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = 12;
	v->a[13681] = sym_redirected_statement;
	v->a[13682] = sym_for_statement;
	v->a[13683] = sym_while_statement;
	v->a[13684] = sym_if_statement;
	v->a[13685] = sym_case_statement;
	v->a[13686] = sym_function_definition;
	v->a[13687] = sym_compound_statement;
	v->a[13688] = sym_subshell;
	v->a[13689] = sym_list;
	v->a[13690] = sym_negated_command;
	v->a[13691] = sym_command;
	v->a[13692] = sym__variable_assignments;
	v->a[13693] = 31;
	v->a[13694] = actions(3);
	v->a[13695] = 1;
	v->a[13696] = sym_comment;
	v->a[13697] = actions(9);
	v->a[13698] = 1;
	v->a[13699] = anon_sym_for;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
