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
	v->a[11500] = anon_sym_GT_GT;
	v->a[11501] = anon_sym_LT_AMP;
	v->a[11502] = anon_sym_GT_AMP;
	v->a[11503] = anon_sym_GT_PIPE;
	v->a[11504] = state(1030);
	v->a[11505] = 12;
	v->a[11506] = sym_redirected_statement;
	v->a[11507] = sym_for_statement;
	v->a[11508] = sym_while_statement;
	v->a[11509] = sym_if_statement;
	v->a[11510] = sym_case_statement;
	v->a[11511] = sym_function_definition;
	v->a[11512] = sym_compound_statement;
	v->a[11513] = sym_subshell;
	v->a[11514] = sym_list;
	v->a[11515] = sym_negated_command;
	v->a[11516] = sym_command;
	v->a[11517] = sym__variable_assignments;
	v->a[11518] = 32;
	v->a[11519] = actions(3);
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = 1;
	v->a[11521] = sym_comment;
	v->a[11522] = actions(9);
	v->a[11523] = 1;
	v->a[11524] = anon_sym_for;
	v->a[11525] = actions(13);
	v->a[11526] = 1;
	v->a[11527] = anon_sym_if;
	v->a[11528] = actions(15);
	v->a[11529] = 1;
	v->a[11530] = anon_sym_case;
	v->a[11531] = actions(17);
	v->a[11532] = 1;
	v->a[11533] = anon_sym_LPAREN;
	v->a[11534] = actions(19);
	v->a[11535] = 1;
	v->a[11536] = anon_sym_LBRACE;
	v->a[11537] = actions(59);
	v->a[11538] = 1;
	v->a[11539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = actions(61);
	v->a[11541] = 1;
	v->a[11542] = anon_sym_DOLLAR;
	v->a[11543] = actions(63);
	v->a[11544] = 1;
	v->a[11545] = anon_sym_DQUOTE;
	v->a[11546] = actions(67);
	v->a[11547] = 1;
	v->a[11548] = anon_sym_DOLLAR_LBRACE;
	v->a[11549] = actions(69);
	v->a[11550] = 1;
	v->a[11551] = anon_sym_DOLLAR_LPAREN;
	v->a[11552] = actions(71);
	v->a[11553] = 1;
	v->a[11554] = anon_sym_BQUOTE;
	v->a[11555] = actions(220);
	v->a[11556] = 1;
	v->a[11557] = sym_word;
	v->a[11558] = actions(222);
	v->a[11559] = 1;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = anon_sym_BANG;
	v->a[11561] = actions(230);
	v->a[11562] = 1;
	v->a[11563] = sym_file_descriptor;
	v->a[11564] = actions(232);
	v->a[11565] = 1;
	v->a[11566] = sym_variable_name;
	v->a[11567] = state(133);
	v->a[11568] = 1;
	v->a[11569] = aux_sym__statements_repeat1;
	v->a[11570] = state(180);
	v->a[11571] = 1;
	v->a[11572] = sym_command_name;
	v->a[11573] = state(231);
	v->a[11574] = 1;
	v->a[11575] = sym_variable_assignment;
	v->a[11576] = state(650);
	v->a[11577] = 1;
	v->a[11578] = sym_concatenation;
	v->a[11579] = state(696);
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = 1;
	v->a[11581] = sym_file_redirect;
	v->a[11582] = state(710);
	v->a[11583] = 1;
	v->a[11584] = aux_sym_command_repeat1;
	v->a[11585] = state(1095);
	v->a[11586] = 1;
	v->a[11587] = sym_pipeline;
	v->a[11588] = state(1282);
	v->a[11589] = 1;
	v->a[11590] = aux_sym_redirected_statement_repeat2;
	v->a[11591] = state(2127);
	v->a[11592] = 1;
	v->a[11593] = sym__statement_not_pipeline;
	v->a[11594] = state(2298);
	v->a[11595] = 1;
	v->a[11596] = sym__statements;
	v->a[11597] = actions(11);
	v->a[11598] = 2;
	v->a[11599] = anon_sym_while;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
