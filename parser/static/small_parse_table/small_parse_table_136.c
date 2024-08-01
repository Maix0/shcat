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
	v->a[13601] = anon_sym_LPAREN;
	v->a[13602] = actions(19);
	v->a[13603] = 1;
	v->a[13604] = anon_sym_LBRACE;
	v->a[13605] = actions(53);
	v->a[13606] = 1;
	v->a[13607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13608] = actions(55);
	v->a[13609] = 1;
	v->a[13610] = anon_sym_DOLLAR;
	v->a[13611] = actions(57);
	v->a[13612] = 1;
	v->a[13613] = anon_sym_DQUOTE;
	v->a[13614] = actions(61);
	v->a[13615] = 1;
	v->a[13616] = anon_sym_DOLLAR_LBRACE;
	v->a[13617] = actions(63);
	v->a[13618] = 1;
	v->a[13619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = actions(65);
	v->a[13621] = 1;
	v->a[13622] = anon_sym_BQUOTE;
	v->a[13623] = actions(208);
	v->a[13624] = 1;
	v->a[13625] = sym_word;
	v->a[13626] = actions(210);
	v->a[13627] = 1;
	v->a[13628] = anon_sym_BANG;
	v->a[13629] = actions(216);
	v->a[13630] = 1;
	v->a[13631] = sym_variable_name;
	v->a[13632] = state(158);
	v->a[13633] = 1;
	v->a[13634] = sym_command_name;
	v->a[13635] = state(227);
	v->a[13636] = 1;
	v->a[13637] = sym_variable_assignment;
	v->a[13638] = state(298);
	v->a[13639] = 1;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = aux_sym_command_repeat1;
	v->a[13641] = state(551);
	v->a[13642] = 1;
	v->a[13643] = sym_file_redirect;
	v->a[13644] = state(555);
	v->a[13645] = 1;
	v->a[13646] = sym_concatenation;
	v->a[13647] = state(918);
	v->a[13648] = 1;
	v->a[13649] = sym_pipeline;
	v->a[13650] = state(1019);
	v->a[13651] = 1;
	v->a[13652] = aux_sym_redirected_statement_repeat2;
	v->a[13653] = state(1557);
	v->a[13654] = 1;
	v->a[13655] = sym__statement_not_pipeline;
	v->a[13656] = actions(11);
	v->a[13657] = 2;
	v->a[13658] = anon_sym_while;
	v->a[13659] = anon_sym_until;
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = actions(214);
	v->a[13661] = 2;
	v->a[13662] = sym_raw_string;
	v->a[13663] = sym_number;
	v->a[13664] = actions(212);
	v->a[13665] = 3;
	v->a[13666] = anon_sym_LT;
	v->a[13667] = anon_sym_GT;
	v->a[13668] = anon_sym_GT_GT;
	v->a[13669] = state(277);
	v->a[13670] = 5;
	v->a[13671] = sym_arithmetic_expansion;
	v->a[13672] = sym_string;
	v->a[13673] = sym_simple_expansion;
	v->a[13674] = sym_expansion;
	v->a[13675] = sym_command_substitution;
	v->a[13676] = state(917);
	v->a[13677] = 12;
	v->a[13678] = sym_redirected_statement;
	v->a[13679] = sym_for_statement;
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = sym_while_statement;
	v->a[13681] = sym_if_statement;
	v->a[13682] = sym_case_statement;
	v->a[13683] = sym_function_definition;
	v->a[13684] = sym_compound_statement;
	v->a[13685] = sym_subshell;
	v->a[13686] = sym_list;
	v->a[13687] = sym_negated_command;
	v->a[13688] = sym_command;
	v->a[13689] = sym__variable_assignments;
	v->a[13690] = 28;
	v->a[13691] = actions(3);
	v->a[13692] = 1;
	v->a[13693] = sym_comment;
	v->a[13694] = actions(297);
	v->a[13695] = 1;
	v->a[13696] = sym_word;
	v->a[13697] = actions(299);
	v->a[13698] = 1;
	v->a[13699] = anon_sym_for;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
