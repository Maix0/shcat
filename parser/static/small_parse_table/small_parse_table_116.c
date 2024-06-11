/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_116.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_580(t_small_parse_table_array *v)
{
	v->a[11600] = actions(19);
	v->a[11601] = 1;
	v->a[11602] = anon_sym_LBRACE;
	v->a[11603] = actions(59);
	v->a[11604] = 1;
	v->a[11605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11606] = actions(61);
	v->a[11607] = 1;
	v->a[11608] = anon_sym_DOLLAR;
	v->a[11609] = actions(63);
	v->a[11610] = 1;
	v->a[11611] = anon_sym_DQUOTE;
	v->a[11612] = actions(67);
	v->a[11613] = 1;
	v->a[11614] = anon_sym_DOLLAR_LBRACE;
	v->a[11615] = actions(69);
	v->a[11616] = 1;
	v->a[11617] = anon_sym_DOLLAR_LPAREN;
	v->a[11618] = actions(71);
	v->a[11619] = 1;
	small_parse_table_581(v);
}

void	small_parse_table_581(t_small_parse_table_array *v)
{
	v->a[11620] = anon_sym_BQUOTE;
	v->a[11621] = actions(220);
	v->a[11622] = 1;
	v->a[11623] = sym_word;
	v->a[11624] = actions(222);
	v->a[11625] = 1;
	v->a[11626] = anon_sym_BANG;
	v->a[11627] = actions(230);
	v->a[11628] = 1;
	v->a[11629] = sym_file_descriptor;
	v->a[11630] = actions(232);
	v->a[11631] = 1;
	v->a[11632] = sym_variable_name;
	v->a[11633] = state(126);
	v->a[11634] = 1;
	v->a[11635] = aux_sym__statements_repeat1;
	v->a[11636] = state(184);
	v->a[11637] = 1;
	v->a[11638] = sym_command_name;
	v->a[11639] = state(268);
	small_parse_table_582(v);
}

void	small_parse_table_582(t_small_parse_table_array *v)
{
	v->a[11640] = 1;
	v->a[11641] = sym_variable_assignment;
	v->a[11642] = state(647);
	v->a[11643] = 1;
	v->a[11644] = sym_concatenation;
	v->a[11645] = state(769);
	v->a[11646] = 1;
	v->a[11647] = sym_file_redirect;
	v->a[11648] = state(828);
	v->a[11649] = 1;
	v->a[11650] = aux_sym_command_repeat1;
	v->a[11651] = state(1314);
	v->a[11652] = 1;
	v->a[11653] = sym_pipeline;
	v->a[11654] = state(1331);
	v->a[11655] = 1;
	v->a[11656] = aux_sym_redirected_statement_repeat2;
	v->a[11657] = state(2252);
	v->a[11658] = 1;
	v->a[11659] = sym__statement_not_pipeline;
	small_parse_table_583(v);
}

void	small_parse_table_583(t_small_parse_table_array *v)
{
	v->a[11660] = state(2406);
	v->a[11661] = 1;
	v->a[11662] = sym__statements;
	v->a[11663] = actions(11);
	v->a[11664] = 2;
	v->a[11665] = anon_sym_while;
	v->a[11666] = anon_sym_until;
	v->a[11667] = actions(226);
	v->a[11668] = 2;
	v->a[11669] = anon_sym_LT_AMP_DASH;
	v->a[11670] = anon_sym_GT_AMP_DASH;
	v->a[11671] = actions(228);
	v->a[11672] = 2;
	v->a[11673] = sym_raw_string;
	v->a[11674] = sym_number;
	v->a[11675] = state(294);
	v->a[11676] = 5;
	v->a[11677] = sym_arithmetic_expansion;
	v->a[11678] = sym_string;
	v->a[11679] = sym_simple_expansion;
	small_parse_table_584(v);
}

void	small_parse_table_584(t_small_parse_table_array *v)
{
	v->a[11680] = sym_expansion;
	v->a[11681] = sym_command_substitution;
	v->a[11682] = actions(224);
	v->a[11683] = 8;
	v->a[11684] = anon_sym_LT;
	v->a[11685] = anon_sym_GT;
	v->a[11686] = anon_sym_GT_GT;
	v->a[11687] = anon_sym_AMP_GT;
	v->a[11688] = anon_sym_AMP_GT_GT;
	v->a[11689] = anon_sym_LT_AMP;
	v->a[11690] = anon_sym_GT_AMP;
	v->a[11691] = anon_sym_GT_PIPE;
	v->a[11692] = state(1188);
	v->a[11693] = 12;
	v->a[11694] = sym_redirected_statement;
	v->a[11695] = sym_for_statement;
	v->a[11696] = sym_while_statement;
	v->a[11697] = sym_if_statement;
	v->a[11698] = sym_case_statement;
	v->a[11699] = sym_function_definition;
	small_parse_table_585(v);
}

/* EOF small_parse_table_116.c */
