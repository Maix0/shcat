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
	v->a[12600] = actions(75);
	v->a[12601] = 1;
	v->a[12602] = sym_variable_name;
	v->a[12603] = actions(236);
	v->a[12604] = 1;
	v->a[12605] = sym_word;
	v->a[12606] = actions(238);
	v->a[12607] = 1;
	v->a[12608] = anon_sym_BANG;
	v->a[12609] = state(140);
	v->a[12610] = 1;
	v->a[12611] = aux_sym__statements_repeat1;
	v->a[12612] = state(189);
	v->a[12613] = 1;
	v->a[12614] = sym_command_name;
	v->a[12615] = state(286);
	v->a[12616] = 1;
	v->a[12617] = sym_variable_assignment;
	v->a[12618] = state(647);
	v->a[12619] = 1;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = sym_concatenation;
	v->a[12621] = state(746);
	v->a[12622] = 1;
	v->a[12623] = aux_sym_command_repeat1;
	v->a[12624] = state(905);
	v->a[12625] = 1;
	v->a[12626] = sym_file_redirect;
	v->a[12627] = state(1422);
	v->a[12628] = 1;
	v->a[12629] = sym_pipeline;
	v->a[12630] = state(1429);
	v->a[12631] = 1;
	v->a[12632] = aux_sym_redirected_statement_repeat2;
	v->a[12633] = state(2271);
	v->a[12634] = 1;
	v->a[12635] = sym__statement_not_pipeline;
	v->a[12636] = state(2479);
	v->a[12637] = 1;
	v->a[12638] = sym__statements;
	v->a[12639] = actions(11);
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = 2;
	v->a[12641] = anon_sym_while;
	v->a[12642] = anon_sym_until;
	v->a[12643] = actions(57);
	v->a[12644] = 2;
	v->a[12645] = anon_sym_LT_AMP_DASH;
	v->a[12646] = anon_sym_GT_AMP_DASH;
	v->a[12647] = actions(65);
	v->a[12648] = 2;
	v->a[12649] = sym_raw_string;
	v->a[12650] = sym_number;
	v->a[12651] = state(394);
	v->a[12652] = 5;
	v->a[12653] = sym_arithmetic_expansion;
	v->a[12654] = sym_string;
	v->a[12655] = sym_simple_expansion;
	v->a[12656] = sym_expansion;
	v->a[12657] = sym_command_substitution;
	v->a[12658] = actions(55);
	v->a[12659] = 8;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = anon_sym_LT;
	v->a[12661] = anon_sym_GT;
	v->a[12662] = anon_sym_GT_GT;
	v->a[12663] = anon_sym_AMP_GT;
	v->a[12664] = anon_sym_AMP_GT_GT;
	v->a[12665] = anon_sym_LT_AMP;
	v->a[12666] = anon_sym_GT_AMP;
	v->a[12667] = anon_sym_GT_PIPE;
	v->a[12668] = state(1211);
	v->a[12669] = 12;
	v->a[12670] = sym_redirected_statement;
	v->a[12671] = sym_for_statement;
	v->a[12672] = sym_while_statement;
	v->a[12673] = sym_if_statement;
	v->a[12674] = sym_case_statement;
	v->a[12675] = sym_function_definition;
	v->a[12676] = sym_compound_statement;
	v->a[12677] = sym_subshell;
	v->a[12678] = sym_list;
	v->a[12679] = sym_negated_command;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = sym_command;
	v->a[12681] = sym__variable_assignments;
	v->a[12682] = 32;
	v->a[12683] = actions(3);
	v->a[12684] = 1;
	v->a[12685] = sym_comment;
	v->a[12686] = actions(9);
	v->a[12687] = 1;
	v->a[12688] = anon_sym_for;
	v->a[12689] = actions(13);
	v->a[12690] = 1;
	v->a[12691] = anon_sym_if;
	v->a[12692] = actions(15);
	v->a[12693] = 1;
	v->a[12694] = anon_sym_case;
	v->a[12695] = actions(17);
	v->a[12696] = 1;
	v->a[12697] = anon_sym_LPAREN;
	v->a[12698] = actions(19);
	v->a[12699] = 1;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
