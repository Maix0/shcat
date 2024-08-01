/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_126.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_630(t_small_parse_table_array *v)
{
	v->a[12600] = actions(27);
	v->a[12601] = 1;
	v->a[12602] = anon_sym_DOLLAR;
	v->a[12603] = actions(29);
	v->a[12604] = 1;
	v->a[12605] = anon_sym_DQUOTE;
	v->a[12606] = actions(33);
	v->a[12607] = 1;
	v->a[12608] = anon_sym_DOLLAR_LBRACE;
	v->a[12609] = actions(35);
	v->a[12610] = 1;
	v->a[12611] = anon_sym_DOLLAR_LPAREN;
	v->a[12612] = actions(37);
	v->a[12613] = 1;
	v->a[12614] = anon_sym_BQUOTE;
	v->a[12615] = actions(39);
	v->a[12616] = 1;
	v->a[12617] = sym_variable_name;
	v->a[12618] = state(109);
	v->a[12619] = 1;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = aux_sym__statements_repeat1;
	v->a[12621] = state(166);
	v->a[12622] = 1;
	v->a[12623] = sym_command_name;
	v->a[12624] = state(197);
	v->a[12625] = 1;
	v->a[12626] = sym_variable_assignment;
	v->a[12627] = state(398);
	v->a[12628] = 1;
	v->a[12629] = aux_sym_command_repeat1;
	v->a[12630] = state(549);
	v->a[12631] = 1;
	v->a[12632] = sym_concatenation;
	v->a[12633] = state(556);
	v->a[12634] = 1;
	v->a[12635] = sym_file_redirect;
	v->a[12636] = state(814);
	v->a[12637] = 1;
	v->a[12638] = sym_if_statement;
	v->a[12639] = state(868);
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = 1;
	v->a[12641] = sym__variable_assignments;
	v->a[12642] = state(869);
	v->a[12643] = 1;
	v->a[12644] = sym_command;
	v->a[12645] = state(871);
	v->a[12646] = 1;
	v->a[12647] = sym_negated_command;
	v->a[12648] = state(872);
	v->a[12649] = 1;
	v->a[12650] = sym_list;
	v->a[12651] = state(874);
	v->a[12652] = 1;
	v->a[12653] = sym_subshell;
	v->a[12654] = state(875);
	v->a[12655] = 1;
	v->a[12656] = sym_compound_statement;
	v->a[12657] = state(876);
	v->a[12658] = 1;
	v->a[12659] = sym_function_definition;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = state(879);
	v->a[12661] = 1;
	v->a[12662] = sym_case_statement;
	v->a[12663] = state(882);
	v->a[12664] = 1;
	v->a[12665] = sym_while_statement;
	v->a[12666] = state(883);
	v->a[12667] = 1;
	v->a[12668] = sym_for_statement;
	v->a[12669] = state(885);
	v->a[12670] = 1;
	v->a[12671] = sym_redirected_statement;
	v->a[12672] = state(940);
	v->a[12673] = 1;
	v->a[12674] = sym_pipeline;
	v->a[12675] = state(999);
	v->a[12676] = 1;
	v->a[12677] = aux_sym_redirected_statement_repeat2;
	v->a[12678] = state(1558);
	v->a[12679] = 1;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = sym__statement_not_pipeline;
	v->a[12681] = actions(11);
	v->a[12682] = 2;
	v->a[12683] = anon_sym_while;
	v->a[12684] = anon_sym_until;
	v->a[12685] = actions(31);
	v->a[12686] = 2;
	v->a[12687] = sym_raw_string;
	v->a[12688] = sym_number;
	v->a[12689] = actions(23);
	v->a[12690] = 3;
	v->a[12691] = anon_sym_LT;
	v->a[12692] = anon_sym_GT;
	v->a[12693] = anon_sym_GT_GT;
	v->a[12694] = state(280);
	v->a[12695] = 5;
	v->a[12696] = sym_arithmetic_expansion;
	v->a[12697] = sym_string;
	v->a[12698] = sym_simple_expansion;
	v->a[12699] = sym_expansion;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
