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
	v->a[12600] = 1;
	v->a[12601] = sym__statements;
	v->a[12602] = actions(11);
	v->a[12603] = 2;
	v->a[12604] = anon_sym_while;
	v->a[12605] = anon_sym_until;
	v->a[12606] = actions(217);
	v->a[12607] = 2;
	v->a[12608] = sym_raw_string;
	v->a[12609] = sym_number;
	v->a[12610] = state(374);
	v->a[12611] = 5;
	v->a[12612] = sym_arithmetic_expansion;
	v->a[12613] = sym_string;
	v->a[12614] = sym_simple_expansion;
	v->a[12615] = sym_expansion;
	v->a[12616] = sym_command_substitution;
	v->a[12617] = actions(215);
	v->a[12618] = 7;
	v->a[12619] = anon_sym_LT;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = anon_sym_GT;
	v->a[12621] = anon_sym_GT_GT;
	v->a[12622] = anon_sym_LT_AMP;
	v->a[12623] = anon_sym_GT_AMP;
	v->a[12624] = anon_sym_GT_PIPE;
	v->a[12625] = anon_sym_LT_GT;
	v->a[12626] = state(989);
	v->a[12627] = 12;
	v->a[12628] = sym_redirected_statement;
	v->a[12629] = sym_for_statement;
	v->a[12630] = sym_while_statement;
	v->a[12631] = sym_if_statement;
	v->a[12632] = sym_case_statement;
	v->a[12633] = sym_function_definition;
	v->a[12634] = sym_compound_statement;
	v->a[12635] = sym_subshell;
	v->a[12636] = sym_list;
	v->a[12637] = sym_negated_command;
	v->a[12638] = sym_command;
	v->a[12639] = sym__variable_assignments;
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = 31;
	v->a[12641] = actions(3);
	v->a[12642] = 1;
	v->a[12643] = sym_comment;
	v->a[12644] = actions(9);
	v->a[12645] = 1;
	v->a[12646] = anon_sym_for;
	v->a[12647] = actions(13);
	v->a[12648] = 1;
	v->a[12649] = anon_sym_if;
	v->a[12650] = actions(15);
	v->a[12651] = 1;
	v->a[12652] = anon_sym_case;
	v->a[12653] = actions(17);
	v->a[12654] = 1;
	v->a[12655] = anon_sym_LPAREN;
	v->a[12656] = actions(19);
	v->a[12657] = 1;
	v->a[12658] = anon_sym_LBRACE;
	v->a[12659] = actions(55);
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = 1;
	v->a[12661] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12662] = actions(57);
	v->a[12663] = 1;
	v->a[12664] = anon_sym_DOLLAR;
	v->a[12665] = actions(59);
	v->a[12666] = 1;
	v->a[12667] = anon_sym_DQUOTE;
	v->a[12668] = actions(63);
	v->a[12669] = 1;
	v->a[12670] = anon_sym_DOLLAR_LBRACE;
	v->a[12671] = actions(65);
	v->a[12672] = 1;
	v->a[12673] = anon_sym_DOLLAR_LPAREN;
	v->a[12674] = actions(67);
	v->a[12675] = 1;
	v->a[12676] = anon_sym_BQUOTE;
	v->a[12677] = actions(69);
	v->a[12678] = 1;
	v->a[12679] = sym_file_descriptor;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = actions(71);
	v->a[12681] = 1;
	v->a[12682] = sym_variable_name;
	v->a[12683] = actions(223);
	v->a[12684] = 1;
	v->a[12685] = sym_word;
	v->a[12686] = actions(225);
	v->a[12687] = 1;
	v->a[12688] = anon_sym_BANG;
	v->a[12689] = state(129);
	v->a[12690] = 1;
	v->a[12691] = aux_sym__statements_repeat1;
	v->a[12692] = state(178);
	v->a[12693] = 1;
	v->a[12694] = sym_command_name;
	v->a[12695] = state(339);
	v->a[12696] = 1;
	v->a[12697] = sym_variable_assignment;
	v->a[12698] = state(585);
	v->a[12699] = 1;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
