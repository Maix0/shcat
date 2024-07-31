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
	v->a[11500] = sym_command_substitution;
	v->a[11501] = actions(210);
	v->a[11502] = 7;
	v->a[11503] = anon_sym_LT;
	v->a[11504] = anon_sym_GT;
	v->a[11505] = anon_sym_GT_GT;
	v->a[11506] = anon_sym_LT_AMP;
	v->a[11507] = anon_sym_GT_AMP;
	v->a[11508] = anon_sym_GT_PIPE;
	v->a[11509] = anon_sym_LT_GT;
	v->a[11510] = state(884);
	v->a[11511] = 12;
	v->a[11512] = sym_redirected_statement;
	v->a[11513] = sym_for_statement;
	v->a[11514] = sym_while_statement;
	v->a[11515] = sym_if_statement;
	v->a[11516] = sym_case_statement;
	v->a[11517] = sym_function_definition;
	v->a[11518] = sym_compound_statement;
	v->a[11519] = sym_subshell;
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = sym_list;
	v->a[11521] = sym_negated_command;
	v->a[11522] = sym_command;
	v->a[11523] = sym__variable_assignments;
	v->a[11524] = 30;
	v->a[11525] = actions(3);
	v->a[11526] = 1;
	v->a[11527] = sym_comment;
	v->a[11528] = actions(9);
	v->a[11529] = 1;
	v->a[11530] = anon_sym_for;
	v->a[11531] = actions(13);
	v->a[11532] = 1;
	v->a[11533] = anon_sym_if;
	v->a[11534] = actions(15);
	v->a[11535] = 1;
	v->a[11536] = anon_sym_case;
	v->a[11537] = actions(17);
	v->a[11538] = 1;
	v->a[11539] = anon_sym_LPAREN;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = actions(19);
	v->a[11541] = 1;
	v->a[11542] = anon_sym_LBRACE;
	v->a[11543] = actions(53);
	v->a[11544] = 1;
	v->a[11545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11546] = actions(55);
	v->a[11547] = 1;
	v->a[11548] = anon_sym_DOLLAR;
	v->a[11549] = actions(57);
	v->a[11550] = 1;
	v->a[11551] = anon_sym_DQUOTE;
	v->a[11552] = actions(61);
	v->a[11553] = 1;
	v->a[11554] = anon_sym_DOLLAR_LBRACE;
	v->a[11555] = actions(63);
	v->a[11556] = 1;
	v->a[11557] = anon_sym_DOLLAR_LPAREN;
	v->a[11558] = actions(65);
	v->a[11559] = 1;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = anon_sym_BQUOTE;
	v->a[11561] = actions(206);
	v->a[11562] = 1;
	v->a[11563] = sym_word;
	v->a[11564] = actions(208);
	v->a[11565] = 1;
	v->a[11566] = anon_sym_BANG;
	v->a[11567] = actions(214);
	v->a[11568] = 1;
	v->a[11569] = sym_variable_name;
	v->a[11570] = state(106);
	v->a[11571] = 1;
	v->a[11572] = aux_sym__statements_repeat1;
	v->a[11573] = state(227);
	v->a[11574] = 1;
	v->a[11575] = sym_command_name;
	v->a[11576] = state(277);
	v->a[11577] = 1;
	v->a[11578] = sym_variable_assignment;
	v->a[11579] = state(506);
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = 1;
	v->a[11581] = aux_sym_command_repeat1;
	v->a[11582] = state(602);
	v->a[11583] = 1;
	v->a[11584] = sym_concatenation;
	v->a[11585] = state(605);
	v->a[11586] = 1;
	v->a[11587] = sym_file_redirect;
	v->a[11588] = state(911);
	v->a[11589] = 1;
	v->a[11590] = sym_pipeline;
	v->a[11591] = state(1001);
	v->a[11592] = 1;
	v->a[11593] = aux_sym_redirected_statement_repeat2;
	v->a[11594] = state(1606);
	v->a[11595] = 1;
	v->a[11596] = sym__statement_not_pipeline;
	v->a[11597] = state(1700);
	v->a[11598] = 1;
	v->a[11599] = sym__statements;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
