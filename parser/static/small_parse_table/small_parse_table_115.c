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
	v->a[11500] = anon_sym_DOLLAR_LBRACE;
	v->a[11501] = actions(65);
	v->a[11502] = 1;
	v->a[11503] = anon_sym_DOLLAR_LPAREN;
	v->a[11504] = actions(67);
	v->a[11505] = 1;
	v->a[11506] = anon_sym_BQUOTE;
	v->a[11507] = actions(69);
	v->a[11508] = 1;
	v->a[11509] = sym_file_descriptor;
	v->a[11510] = actions(71);
	v->a[11511] = 1;
	v->a[11512] = sym_variable_name;
	v->a[11513] = actions(223);
	v->a[11514] = 1;
	v->a[11515] = sym_word;
	v->a[11516] = actions(225);
	v->a[11517] = 1;
	v->a[11518] = anon_sym_BANG;
	v->a[11519] = state(129);
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = 1;
	v->a[11521] = aux_sym__statements_repeat1;
	v->a[11522] = state(178);
	v->a[11523] = 1;
	v->a[11524] = sym_command_name;
	v->a[11525] = state(339);
	v->a[11526] = 1;
	v->a[11527] = sym_variable_assignment;
	v->a[11528] = state(585);
	v->a[11529] = 1;
	v->a[11530] = aux_sym_command_repeat1;
	v->a[11531] = state(661);
	v->a[11532] = 1;
	v->a[11533] = sym_concatenation;
	v->a[11534] = state(774);
	v->a[11535] = 1;
	v->a[11536] = sym_file_redirect;
	v->a[11537] = state(1089);
	v->a[11538] = 1;
	v->a[11539] = sym_pipeline;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = state(1149);
	v->a[11541] = 1;
	v->a[11542] = aux_sym_redirected_statement_repeat2;
	v->a[11543] = state(1922);
	v->a[11544] = 1;
	v->a[11545] = sym__statement_not_pipeline;
	v->a[11546] = state(1928);
	v->a[11547] = 1;
	v->a[11548] = sym__statements;
	v->a[11549] = actions(11);
	v->a[11550] = 2;
	v->a[11551] = anon_sym_while;
	v->a[11552] = anon_sym_until;
	v->a[11553] = actions(61);
	v->a[11554] = 2;
	v->a[11555] = sym_raw_string;
	v->a[11556] = sym_number;
	v->a[11557] = state(455);
	v->a[11558] = 5;
	v->a[11559] = sym_arithmetic_expansion;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = sym_string;
	v->a[11561] = sym_simple_expansion;
	v->a[11562] = sym_expansion;
	v->a[11563] = sym_command_substitution;
	v->a[11564] = actions(53);
	v->a[11565] = 7;
	v->a[11566] = anon_sym_LT;
	v->a[11567] = anon_sym_GT;
	v->a[11568] = anon_sym_GT_GT;
	v->a[11569] = anon_sym_LT_AMP;
	v->a[11570] = anon_sym_GT_AMP;
	v->a[11571] = anon_sym_GT_PIPE;
	v->a[11572] = anon_sym_LT_GT;
	v->a[11573] = state(965);
	v->a[11574] = 12;
	v->a[11575] = sym_redirected_statement;
	v->a[11576] = sym_for_statement;
	v->a[11577] = sym_while_statement;
	v->a[11578] = sym_if_statement;
	v->a[11579] = sym_case_statement;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = sym_function_definition;
	v->a[11581] = sym_compound_statement;
	v->a[11582] = sym_subshell;
	v->a[11583] = sym_list;
	v->a[11584] = sym_negated_command;
	v->a[11585] = sym_command;
	v->a[11586] = sym__variable_assignments;
	v->a[11587] = 31;
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
