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
	v->a[11600] = sym_arithmetic_expansion;
	v->a[11601] = sym_string;
	v->a[11602] = sym_number;
	v->a[11603] = sym_simple_expansion;
	v->a[11604] = sym_expansion;
	v->a[11605] = sym_command_substitution;
	v->a[11606] = actions(59);
	v->a[11607] = 8;
	v->a[11608] = anon_sym_LT;
	v->a[11609] = anon_sym_GT;
	v->a[11610] = anon_sym_GT_GT;
	v->a[11611] = anon_sym_AMP_GT;
	v->a[11612] = anon_sym_AMP_GT_GT;
	v->a[11613] = anon_sym_LT_AMP;
	v->a[11614] = anon_sym_GT_AMP;
	v->a[11615] = anon_sym_GT_PIPE;
	v->a[11616] = state(1071);
	v->a[11617] = 12;
	v->a[11618] = sym_redirected_statement;
	v->a[11619] = sym_for_statement;
	small_parse_table_581(v);
}

void	small_parse_table_581(t_small_parse_table_array *v)
{
	v->a[11620] = sym_while_statement;
	v->a[11621] = sym_if_statement;
	v->a[11622] = sym_case_statement;
	v->a[11623] = sym_function_definition;
	v->a[11624] = sym_compound_statement;
	v->a[11625] = sym_subshell;
	v->a[11626] = sym_list;
	v->a[11627] = sym_negated_command;
	v->a[11628] = sym_command;
	v->a[11629] = sym_variable_assignments;
	v->a[11630] = 34;
	v->a[11631] = actions(3);
	v->a[11632] = 1;
	v->a[11633] = sym_comment;
	v->a[11634] = actions(9);
	v->a[11635] = 1;
	v->a[11636] = anon_sym_for;
	v->a[11637] = actions(13);
	v->a[11638] = 1;
	v->a[11639] = anon_sym_if;
	small_parse_table_582(v);
}

void	small_parse_table_582(t_small_parse_table_array *v)
{
	v->a[11640] = actions(15);
	v->a[11641] = 1;
	v->a[11642] = anon_sym_case;
	v->a[11643] = actions(17);
	v->a[11644] = 1;
	v->a[11645] = anon_sym_LPAREN;
	v->a[11646] = actions(19);
	v->a[11647] = 1;
	v->a[11648] = anon_sym_LBRACE;
	v->a[11649] = actions(63);
	v->a[11650] = 1;
	v->a[11651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11652] = actions(65);
	v->a[11653] = 1;
	v->a[11654] = anon_sym_DOLLAR;
	v->a[11655] = actions(67);
	v->a[11656] = 1;
	v->a[11657] = anon_sym_DQUOTE;
	v->a[11658] = actions(71);
	v->a[11659] = 1;
	small_parse_table_583(v);
}

void	small_parse_table_583(t_small_parse_table_array *v)
{
	v->a[11660] = aux_sym_number_token1;
	v->a[11661] = actions(73);
	v->a[11662] = 1;
	v->a[11663] = aux_sym_number_token2;
	v->a[11664] = actions(75);
	v->a[11665] = 1;
	v->a[11666] = anon_sym_DOLLAR_LBRACE;
	v->a[11667] = actions(77);
	v->a[11668] = 1;
	v->a[11669] = anon_sym_DOLLAR_LPAREN;
	v->a[11670] = actions(79);
	v->a[11671] = 1;
	v->a[11672] = anon_sym_BQUOTE;
	v->a[11673] = actions(248);
	v->a[11674] = 1;
	v->a[11675] = sym_word;
	v->a[11676] = actions(250);
	v->a[11677] = 1;
	v->a[11678] = anon_sym_BANG;
	v->a[11679] = actions(256);
	small_parse_table_584(v);
}

void	small_parse_table_584(t_small_parse_table_array *v)
{
	v->a[11680] = 1;
	v->a[11681] = sym_raw_string;
	v->a[11682] = actions(258);
	v->a[11683] = 1;
	v->a[11684] = sym_file_descriptor;
	v->a[11685] = actions(260);
	v->a[11686] = 1;
	v->a[11687] = sym_variable_name;
	v->a[11688] = state(141);
	v->a[11689] = 1;
	v->a[11690] = aux_sym__statements_repeat1;
	v->a[11691] = state(175);
	v->a[11692] = 1;
	v->a[11693] = sym_command_name;
	v->a[11694] = state(278);
	v->a[11695] = 1;
	v->a[11696] = sym_variable_assignment;
	v->a[11697] = state(567);
	v->a[11698] = 1;
	v->a[11699] = aux_sym_command_repeat1;
	small_parse_table_585(v);
}

/* EOF small_parse_table_116.c */
