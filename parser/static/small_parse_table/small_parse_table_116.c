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
	v->a[11600] = actions(11);
	v->a[11601] = 2;
	v->a[11602] = anon_sym_while;
	v->a[11603] = anon_sym_until;
	v->a[11604] = actions(212);
	v->a[11605] = 2;
	v->a[11606] = sym_raw_string;
	v->a[11607] = sym_number;
	v->a[11608] = state(327);
	v->a[11609] = 5;
	v->a[11610] = sym_arithmetic_expansion;
	v->a[11611] = sym_string;
	v->a[11612] = sym_simple_expansion;
	v->a[11613] = sym_expansion;
	v->a[11614] = sym_command_substitution;
	v->a[11615] = actions(210);
	v->a[11616] = 7;
	v->a[11617] = anon_sym_LT;
	v->a[11618] = anon_sym_GT;
	v->a[11619] = anon_sym_GT_GT;
	small_parse_table_581(v);
}

void	small_parse_table_581(t_small_parse_table_array *v)
{
	v->a[11620] = anon_sym_LT_AMP;
	v->a[11621] = anon_sym_GT_AMP;
	v->a[11622] = anon_sym_GT_PIPE;
	v->a[11623] = anon_sym_LT_GT;
	v->a[11624] = state(884);
	v->a[11625] = 12;
	v->a[11626] = sym_redirected_statement;
	v->a[11627] = sym_for_statement;
	v->a[11628] = sym_while_statement;
	v->a[11629] = sym_if_statement;
	v->a[11630] = sym_case_statement;
	v->a[11631] = sym_function_definition;
	v->a[11632] = sym_compound_statement;
	v->a[11633] = sym_subshell;
	v->a[11634] = sym_list;
	v->a[11635] = sym_negated_command;
	v->a[11636] = sym_command;
	v->a[11637] = sym__variable_assignments;
	v->a[11638] = 30;
	v->a[11639] = actions(3);
	small_parse_table_582(v);
}

void	small_parse_table_582(t_small_parse_table_array *v)
{
	v->a[11640] = 1;
	v->a[11641] = sym_comment;
	v->a[11642] = actions(9);
	v->a[11643] = 1;
	v->a[11644] = anon_sym_for;
	v->a[11645] = actions(13);
	v->a[11646] = 1;
	v->a[11647] = anon_sym_if;
	v->a[11648] = actions(15);
	v->a[11649] = 1;
	v->a[11650] = anon_sym_case;
	v->a[11651] = actions(17);
	v->a[11652] = 1;
	v->a[11653] = anon_sym_LPAREN;
	v->a[11654] = actions(19);
	v->a[11655] = 1;
	v->a[11656] = anon_sym_LBRACE;
	v->a[11657] = actions(41);
	v->a[11658] = 1;
	v->a[11659] = sym_word;
	small_parse_table_583(v);
}

void	small_parse_table_583(t_small_parse_table_array *v)
{
	v->a[11660] = actions(49);
	v->a[11661] = 1;
	v->a[11662] = anon_sym_BANG;
	v->a[11663] = actions(53);
	v->a[11664] = 1;
	v->a[11665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11666] = actions(55);
	v->a[11667] = 1;
	v->a[11668] = anon_sym_DOLLAR;
	v->a[11669] = actions(57);
	v->a[11670] = 1;
	v->a[11671] = anon_sym_DQUOTE;
	v->a[11672] = actions(61);
	v->a[11673] = 1;
	v->a[11674] = anon_sym_DOLLAR_LBRACE;
	v->a[11675] = actions(63);
	v->a[11676] = 1;
	v->a[11677] = anon_sym_DOLLAR_LPAREN;
	v->a[11678] = actions(65);
	v->a[11679] = 1;
	small_parse_table_584(v);
}

void	small_parse_table_584(t_small_parse_table_array *v)
{
	v->a[11680] = anon_sym_BQUOTE;
	v->a[11681] = actions(67);
	v->a[11682] = 1;
	v->a[11683] = sym_variable_name;
	v->a[11684] = actions(244);
	v->a[11685] = 1;
	v->a[11686] = anon_sym_RBRACE;
	v->a[11687] = state(95);
	v->a[11688] = 1;
	v->a[11689] = aux_sym__terminated_statement;
	v->a[11690] = state(271);
	v->a[11691] = 1;
	v->a[11692] = sym_command_name;
	v->a[11693] = state(302);
	v->a[11694] = 1;
	v->a[11695] = sym_variable_assignment;
	v->a[11696] = state(482);
	v->a[11697] = 1;
	v->a[11698] = aux_sym_command_repeat1;
	v->a[11699] = state(600);
	small_parse_table_585(v);
}

/* EOF small_parse_table_116.c */
