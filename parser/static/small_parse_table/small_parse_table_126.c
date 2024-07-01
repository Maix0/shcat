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
	v->a[12601] = sym_comment;
	v->a[12602] = actions(9);
	v->a[12603] = 1;
	v->a[12604] = anon_sym_for;
	v->a[12605] = actions(13);
	v->a[12606] = 1;
	v->a[12607] = anon_sym_if;
	v->a[12608] = actions(15);
	v->a[12609] = 1;
	v->a[12610] = anon_sym_case;
	v->a[12611] = actions(17);
	v->a[12612] = 1;
	v->a[12613] = anon_sym_LPAREN;
	v->a[12614] = actions(19);
	v->a[12615] = 1;
	v->a[12616] = anon_sym_LBRACE;
	v->a[12617] = actions(59);
	v->a[12618] = 1;
	v->a[12619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = actions(61);
	v->a[12621] = 1;
	v->a[12622] = anon_sym_DOLLAR;
	v->a[12623] = actions(63);
	v->a[12624] = 1;
	v->a[12625] = anon_sym_DQUOTE;
	v->a[12626] = actions(67);
	v->a[12627] = 1;
	v->a[12628] = anon_sym_DOLLAR_LBRACE;
	v->a[12629] = actions(69);
	v->a[12630] = 1;
	v->a[12631] = anon_sym_DOLLAR_LPAREN;
	v->a[12632] = actions(71);
	v->a[12633] = 1;
	v->a[12634] = anon_sym_BQUOTE;
	v->a[12635] = actions(220);
	v->a[12636] = 1;
	v->a[12637] = sym_word;
	v->a[12638] = actions(222);
	v->a[12639] = 1;
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = anon_sym_BANG;
	v->a[12641] = actions(230);
	v->a[12642] = 1;
	v->a[12643] = sym_file_descriptor;
	v->a[12644] = actions(232);
	v->a[12645] = 1;
	v->a[12646] = sym_variable_name;
	v->a[12647] = state(133);
	v->a[12648] = 1;
	v->a[12649] = aux_sym__statements_repeat1;
	v->a[12650] = state(180);
	v->a[12651] = 1;
	v->a[12652] = sym_command_name;
	v->a[12653] = state(231);
	v->a[12654] = 1;
	v->a[12655] = sym_variable_assignment;
	v->a[12656] = state(650);
	v->a[12657] = 1;
	v->a[12658] = sym_concatenation;
	v->a[12659] = state(710);
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = 1;
	v->a[12661] = aux_sym_command_repeat1;
	v->a[12662] = state(743);
	v->a[12663] = 1;
	v->a[12664] = sym_file_redirect;
	v->a[12665] = state(1095);
	v->a[12666] = 1;
	v->a[12667] = sym_pipeline;
	v->a[12668] = state(1282);
	v->a[12669] = 1;
	v->a[12670] = aux_sym_redirected_statement_repeat2;
	v->a[12671] = state(2127);
	v->a[12672] = 1;
	v->a[12673] = sym__statement_not_pipeline;
	v->a[12674] = state(2336);
	v->a[12675] = 1;
	v->a[12676] = sym__statements;
	v->a[12677] = actions(11);
	v->a[12678] = 2;
	v->a[12679] = anon_sym_while;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = anon_sym_until;
	v->a[12681] = actions(226);
	v->a[12682] = 2;
	v->a[12683] = anon_sym_LT_AMP_DASH;
	v->a[12684] = anon_sym_GT_AMP_DASH;
	v->a[12685] = actions(228);
	v->a[12686] = 2;
	v->a[12687] = sym_raw_string;
	v->a[12688] = sym_number;
	v->a[12689] = state(382);
	v->a[12690] = 5;
	v->a[12691] = sym_arithmetic_expansion;
	v->a[12692] = sym_string;
	v->a[12693] = sym_simple_expansion;
	v->a[12694] = sym_expansion;
	v->a[12695] = sym_command_substitution;
	v->a[12696] = actions(224);
	v->a[12697] = 6;
	v->a[12698] = anon_sym_LT;
	v->a[12699] = anon_sym_GT;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
