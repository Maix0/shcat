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
	v->a[11500] = 1;
	v->a[11501] = sym_word;
	v->a[11502] = actions(222);
	v->a[11503] = 1;
	v->a[11504] = anon_sym_BANG;
	v->a[11505] = actions(230);
	v->a[11506] = 1;
	v->a[11507] = sym_file_descriptor;
	v->a[11508] = actions(232);
	v->a[11509] = 1;
	v->a[11510] = sym_variable_name;
	v->a[11511] = state(126);
	v->a[11512] = 1;
	v->a[11513] = aux_sym__statements_repeat1;
	v->a[11514] = state(184);
	v->a[11515] = 1;
	v->a[11516] = sym_command_name;
	v->a[11517] = state(268);
	v->a[11518] = 1;
	v->a[11519] = sym_variable_assignment;
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = state(647);
	v->a[11521] = 1;
	v->a[11522] = sym_concatenation;
	v->a[11523] = state(799);
	v->a[11524] = 1;
	v->a[11525] = sym_file_redirect;
	v->a[11526] = state(828);
	v->a[11527] = 1;
	v->a[11528] = aux_sym_command_repeat1;
	v->a[11529] = state(1314);
	v->a[11530] = 1;
	v->a[11531] = sym_pipeline;
	v->a[11532] = state(1331);
	v->a[11533] = 1;
	v->a[11534] = aux_sym_redirected_statement_repeat2;
	v->a[11535] = state(2252);
	v->a[11536] = 1;
	v->a[11537] = sym__statement_not_pipeline;
	v->a[11538] = state(2480);
	v->a[11539] = 1;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = sym__statements;
	v->a[11541] = actions(11);
	v->a[11542] = 2;
	v->a[11543] = anon_sym_while;
	v->a[11544] = anon_sym_until;
	v->a[11545] = actions(226);
	v->a[11546] = 2;
	v->a[11547] = anon_sym_LT_AMP_DASH;
	v->a[11548] = anon_sym_GT_AMP_DASH;
	v->a[11549] = actions(228);
	v->a[11550] = 2;
	v->a[11551] = sym_raw_string;
	v->a[11552] = sym_number;
	v->a[11553] = state(294);
	v->a[11554] = 5;
	v->a[11555] = sym_arithmetic_expansion;
	v->a[11556] = sym_string;
	v->a[11557] = sym_simple_expansion;
	v->a[11558] = sym_expansion;
	v->a[11559] = sym_command_substitution;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = actions(224);
	v->a[11561] = 8;
	v->a[11562] = anon_sym_LT;
	v->a[11563] = anon_sym_GT;
	v->a[11564] = anon_sym_GT_GT;
	v->a[11565] = anon_sym_AMP_GT;
	v->a[11566] = anon_sym_AMP_GT_GT;
	v->a[11567] = anon_sym_LT_AMP;
	v->a[11568] = anon_sym_GT_AMP;
	v->a[11569] = anon_sym_GT_PIPE;
	v->a[11570] = state(1188);
	v->a[11571] = 12;
	v->a[11572] = sym_redirected_statement;
	v->a[11573] = sym_for_statement;
	v->a[11574] = sym_while_statement;
	v->a[11575] = sym_if_statement;
	v->a[11576] = sym_case_statement;
	v->a[11577] = sym_function_definition;
	v->a[11578] = sym_compound_statement;
	v->a[11579] = sym_subshell;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = sym_list;
	v->a[11581] = sym_negated_command;
	v->a[11582] = sym_command;
	v->a[11583] = sym__variable_assignments;
	v->a[11584] = 32;
	v->a[11585] = actions(3);
	v->a[11586] = 1;
	v->a[11587] = sym_comment;
	v->a[11588] = actions(9);
	v->a[11589] = 1;
	v->a[11590] = anon_sym_for;
	v->a[11591] = actions(13);
	v->a[11592] = 1;
	v->a[11593] = anon_sym_if;
	v->a[11594] = actions(15);
	v->a[11595] = 1;
	v->a[11596] = anon_sym_case;
	v->a[11597] = actions(17);
	v->a[11598] = 1;
	v->a[11599] = anon_sym_LPAREN;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
