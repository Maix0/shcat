/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_115.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_575(t_small_parse_table_array *v)
{
	v->a[11500] = anon_sym_BQUOTE;
	v->a[11501] = actions(113);
	v->a[11502] = 1;
	v->a[11503] = sym_variable_name;
	v->a[11504] = state(109);
	v->a[11505] = 1;
	v->a[11506] = aux_sym__statements_repeat1;
	v->a[11507] = state(170);
	v->a[11508] = 1;
	v->a[11509] = sym_command_name;
	v->a[11510] = state(191);
	v->a[11511] = 1;
	v->a[11512] = sym_variable_assignment;
	v->a[11513] = state(408);
	v->a[11514] = 1;
	v->a[11515] = aux_sym_command_repeat1;
	v->a[11516] = state(541);
	v->a[11517] = 1;
	v->a[11518] = sym_file_redirect;
	v->a[11519] = state(546);
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = 1;
	v->a[11521] = sym_concatenation;
	v->a[11522] = state(819);
	v->a[11523] = 1;
	v->a[11524] = sym_redirected_statement;
	v->a[11525] = state(826);
	v->a[11526] = 1;
	v->a[11527] = sym_for_statement;
	v->a[11528] = state(828);
	v->a[11529] = 1;
	v->a[11530] = sym_while_statement;
	v->a[11531] = state(837);
	v->a[11532] = 1;
	v->a[11533] = sym_case_statement;
	v->a[11534] = state(838);
	v->a[11535] = 1;
	v->a[11536] = sym_function_definition;
	v->a[11537] = state(843);
	v->a[11538] = 1;
	v->a[11539] = sym_compound_statement;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = state(854);
	v->a[11541] = 1;
	v->a[11542] = sym_subshell;
	v->a[11543] = state(856);
	v->a[11544] = 1;
	v->a[11545] = sym_list;
	v->a[11546] = state(860);
	v->a[11547] = 1;
	v->a[11548] = sym_negated_command;
	v->a[11549] = state(862);
	v->a[11550] = 1;
	v->a[11551] = sym_command;
	v->a[11552] = state(863);
	v->a[11553] = 1;
	v->a[11554] = sym__variable_assignments;
	v->a[11555] = state(889);
	v->a[11556] = 1;
	v->a[11557] = sym_if_statement;
	v->a[11558] = state(959);
	v->a[11559] = 1;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = sym_pipeline;
	v->a[11561] = state(990);
	v->a[11562] = 1;
	v->a[11563] = aux_sym_redirected_statement_repeat2;
	v->a[11564] = state(1564);
	v->a[11565] = 1;
	v->a[11566] = sym__statement_not_pipeline;
	v->a[11567] = actions(83);
	v->a[11568] = 2;
	v->a[11569] = anon_sym_while;
	v->a[11570] = anon_sym_until;
	v->a[11571] = actions(105);
	v->a[11572] = 2;
	v->a[11573] = sym_raw_string;
	v->a[11574] = sym_number;
	v->a[11575] = actions(97);
	v->a[11576] = 3;
	v->a[11577] = anon_sym_LT;
	v->a[11578] = anon_sym_GT;
	v->a[11579] = anon_sym_GT_GT;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = state(276);
	v->a[11581] = 5;
	v->a[11582] = sym_arithmetic_expansion;
	v->a[11583] = sym_string;
	v->a[11584] = sym_simple_expansion;
	v->a[11585] = sym_expansion;
	v->a[11586] = sym_command_substitution;
	v->a[11587] = 29;
	v->a[11588] = actions(3);
	v->a[11589] = 1;
	v->a[11590] = sym_comment;
	v->a[11591] = actions(9);
	v->a[11592] = 1;
	v->a[11593] = anon_sym_for;
	v->a[11594] = actions(13);
	v->a[11595] = 1;
	v->a[11596] = anon_sym_if;
	v->a[11597] = actions(15);
	v->a[11598] = 1;
	v->a[11599] = anon_sym_case;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
