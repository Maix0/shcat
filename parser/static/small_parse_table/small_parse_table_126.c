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
	v->a[12600] = anon_sym_BANG;
	v->a[12601] = actions(53);
	v->a[12602] = 1;
	v->a[12603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12604] = actions(55);
	v->a[12605] = 1;
	v->a[12606] = anon_sym_DOLLAR;
	v->a[12607] = actions(57);
	v->a[12608] = 1;
	v->a[12609] = anon_sym_DQUOTE;
	v->a[12610] = actions(61);
	v->a[12611] = 1;
	v->a[12612] = anon_sym_DOLLAR_LBRACE;
	v->a[12613] = actions(63);
	v->a[12614] = 1;
	v->a[12615] = anon_sym_DOLLAR_LPAREN;
	v->a[12616] = actions(65);
	v->a[12617] = 1;
	v->a[12618] = anon_sym_BQUOTE;
	v->a[12619] = actions(67);
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = 1;
	v->a[12621] = sym_variable_name;
	v->a[12622] = state(78);
	v->a[12623] = 1;
	v->a[12624] = aux_sym__terminated_statement;
	v->a[12625] = state(271);
	v->a[12626] = 1;
	v->a[12627] = sym_command_name;
	v->a[12628] = state(298);
	v->a[12629] = 1;
	v->a[12630] = sym_variable_assignment;
	v->a[12631] = state(482);
	v->a[12632] = 1;
	v->a[12633] = aux_sym_command_repeat1;
	v->a[12634] = state(600);
	v->a[12635] = 1;
	v->a[12636] = sym_file_redirect;
	v->a[12637] = state(602);
	v->a[12638] = 1;
	v->a[12639] = sym_concatenation;
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = state(1012);
	v->a[12641] = 1;
	v->a[12642] = sym_pipeline;
	v->a[12643] = state(1068);
	v->a[12644] = 1;
	v->a[12645] = aux_sym_redirected_statement_repeat2;
	v->a[12646] = state(1609);
	v->a[12647] = 1;
	v->a[12648] = sym__statement_not_pipeline;
	v->a[12649] = actions(11);
	v->a[12650] = 2;
	v->a[12651] = anon_sym_while;
	v->a[12652] = anon_sym_until;
	v->a[12653] = actions(59);
	v->a[12654] = 2;
	v->a[12655] = sym_raw_string;
	v->a[12656] = sym_number;
	v->a[12657] = state(425);
	v->a[12658] = 5;
	v->a[12659] = sym_arithmetic_expansion;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = sym_string;
	v->a[12661] = sym_simple_expansion;
	v->a[12662] = sym_expansion;
	v->a[12663] = sym_command_substitution;
	v->a[12664] = actions(51);
	v->a[12665] = 7;
	v->a[12666] = anon_sym_LT;
	v->a[12667] = anon_sym_GT;
	v->a[12668] = anon_sym_GT_GT;
	v->a[12669] = anon_sym_LT_AMP;
	v->a[12670] = anon_sym_GT_AMP;
	v->a[12671] = anon_sym_GT_PIPE;
	v->a[12672] = anon_sym_LT_GT;
	v->a[12673] = state(933);
	v->a[12674] = 12;
	v->a[12675] = sym_redirected_statement;
	v->a[12676] = sym_for_statement;
	v->a[12677] = sym_while_statement;
	v->a[12678] = sym_if_statement;
	v->a[12679] = sym_case_statement;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = sym_function_definition;
	v->a[12681] = sym_compound_statement;
	v->a[12682] = sym_subshell;
	v->a[12683] = sym_list;
	v->a[12684] = sym_negated_command;
	v->a[12685] = sym_command;
	v->a[12686] = sym__variable_assignments;
	v->a[12687] = 29;
	v->a[12688] = actions(3);
	v->a[12689] = 1;
	v->a[12690] = sym_comment;
	v->a[12691] = actions(9);
	v->a[12692] = 1;
	v->a[12693] = anon_sym_for;
	v->a[12694] = actions(13);
	v->a[12695] = 1;
	v->a[12696] = anon_sym_if;
	v->a[12697] = actions(15);
	v->a[12698] = 1;
	v->a[12699] = anon_sym_case;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
