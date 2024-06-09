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
	v->a[12601] = aux_sym_command_repeat1;
	v->a[12602] = state(718);
	v->a[12603] = 1;
	v->a[12604] = sym_file_redirect;
	v->a[12605] = state(1213);
	v->a[12606] = 1;
	v->a[12607] = aux_sym_redirected_statement_repeat2;
	v->a[12608] = state(1217);
	v->a[12609] = 1;
	v->a[12610] = sym_pipeline;
	v->a[12611] = state(2035);
	v->a[12612] = 1;
	v->a[12613] = sym__statement_not_pipeline;
	v->a[12614] = actions(11);
	v->a[12615] = 2;
	v->a[12616] = anon_sym_while;
	v->a[12617] = anon_sym_until;
	v->a[12618] = actions(61);
	v->a[12619] = 2;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = anon_sym_LT_AMP_DASH;
	v->a[12621] = anon_sym_GT_AMP_DASH;
	v->a[12622] = state(397);
	v->a[12623] = 6;
	v->a[12624] = sym_arithmetic_expansion;
	v->a[12625] = sym_string;
	v->a[12626] = sym_number;
	v->a[12627] = sym_simple_expansion;
	v->a[12628] = sym_expansion;
	v->a[12629] = sym_command_substitution;
	v->a[12630] = actions(59);
	v->a[12631] = 8;
	v->a[12632] = anon_sym_LT;
	v->a[12633] = anon_sym_GT;
	v->a[12634] = anon_sym_GT_GT;
	v->a[12635] = anon_sym_AMP_GT;
	v->a[12636] = anon_sym_AMP_GT_GT;
	v->a[12637] = anon_sym_LT_AMP;
	v->a[12638] = anon_sym_GT_AMP;
	v->a[12639] = anon_sym_GT_PIPE;
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = state(1121);
	v->a[12641] = 12;
	v->a[12642] = sym_redirected_statement;
	v->a[12643] = sym_for_statement;
	v->a[12644] = sym_while_statement;
	v->a[12645] = sym_if_statement;
	v->a[12646] = sym_case_statement;
	v->a[12647] = sym_function_definition;
	v->a[12648] = sym_compound_statement;
	v->a[12649] = sym_subshell;
	v->a[12650] = sym_list;
	v->a[12651] = sym_negated_command;
	v->a[12652] = sym_command;
	v->a[12653] = sym_variable_assignments;
	v->a[12654] = 34;
	v->a[12655] = actions(3);
	v->a[12656] = 1;
	v->a[12657] = sym_comment;
	v->a[12658] = actions(9);
	v->a[12659] = 1;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = anon_sym_for;
	v->a[12661] = actions(13);
	v->a[12662] = 1;
	v->a[12663] = anon_sym_if;
	v->a[12664] = actions(15);
	v->a[12665] = 1;
	v->a[12666] = anon_sym_case;
	v->a[12667] = actions(17);
	v->a[12668] = 1;
	v->a[12669] = anon_sym_LPAREN;
	v->a[12670] = actions(19);
	v->a[12671] = 1;
	v->a[12672] = anon_sym_LBRACE;
	v->a[12673] = actions(63);
	v->a[12674] = 1;
	v->a[12675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12676] = actions(65);
	v->a[12677] = 1;
	v->a[12678] = anon_sym_DOLLAR;
	v->a[12679] = actions(67);
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = 1;
	v->a[12681] = anon_sym_DQUOTE;
	v->a[12682] = actions(69);
	v->a[12683] = 1;
	v->a[12684] = sym_raw_string;
	v->a[12685] = actions(71);
	v->a[12686] = 1;
	v->a[12687] = aux_sym_number_token1;
	v->a[12688] = actions(73);
	v->a[12689] = 1;
	v->a[12690] = aux_sym_number_token2;
	v->a[12691] = actions(75);
	v->a[12692] = 1;
	v->a[12693] = anon_sym_DOLLAR_LBRACE;
	v->a[12694] = actions(77);
	v->a[12695] = 1;
	v->a[12696] = anon_sym_DOLLAR_LPAREN;
	v->a[12697] = actions(79);
	v->a[12698] = 1;
	v->a[12699] = anon_sym_BQUOTE;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
