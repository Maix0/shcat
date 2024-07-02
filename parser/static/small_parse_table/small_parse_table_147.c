/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_147.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_735(t_small_parse_table_array *v)
{
	v->a[14700] = sym_variable_name;
	v->a[14701] = state(127);
	v->a[14702] = 1;
	v->a[14703] = aux_sym__statements_repeat1;
	v->a[14704] = state(175);
	v->a[14705] = 1;
	v->a[14706] = sym_command_name;
	v->a[14707] = state(250);
	v->a[14708] = 1;
	v->a[14709] = sym_variable_assignment;
	v->a[14710] = state(583);
	v->a[14711] = 1;
	v->a[14712] = sym_concatenation;
	v->a[14713] = state(621);
	v->a[14714] = 1;
	v->a[14715] = sym_file_redirect;
	v->a[14716] = state(624);
	v->a[14717] = 1;
	v->a[14718] = aux_sym_command_repeat1;
	v->a[14719] = state(929);
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = 1;
	v->a[14721] = sym_subshell;
	v->a[14722] = state(930);
	v->a[14723] = 1;
	v->a[14724] = sym_compound_statement;
	v->a[14725] = state(933);
	v->a[14726] = 1;
	v->a[14727] = sym_command;
	v->a[14728] = state(934);
	v->a[14729] = 1;
	v->a[14730] = sym_negated_command;
	v->a[14731] = state(940);
	v->a[14732] = 1;
	v->a[14733] = sym_list;
	v->a[14734] = state(950);
	v->a[14735] = 1;
	v->a[14736] = sym_function_definition;
	v->a[14737] = state(954);
	v->a[14738] = 1;
	v->a[14739] = sym_case_statement;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = state(957);
	v->a[14741] = 1;
	v->a[14742] = sym_if_statement;
	v->a[14743] = state(959);
	v->a[14744] = 1;
	v->a[14745] = sym_while_statement;
	v->a[14746] = state(961);
	v->a[14747] = 1;
	v->a[14748] = sym_for_statement;
	v->a[14749] = state(962);
	v->a[14750] = 1;
	v->a[14751] = sym_redirected_statement;
	v->a[14752] = state(963);
	v->a[14753] = 1;
	v->a[14754] = sym__variable_assignments;
	v->a[14755] = state(1064);
	v->a[14756] = 1;
	v->a[14757] = sym_pipeline;
	v->a[14758] = state(1104);
	v->a[14759] = 1;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = aux_sym_redirected_statement_repeat2;
	v->a[14761] = state(1915);
	v->a[14762] = 1;
	v->a[14763] = sym__statement_not_pipeline;
	v->a[14764] = actions(11);
	v->a[14765] = 2;
	v->a[14766] = anon_sym_while;
	v->a[14767] = anon_sym_until;
	v->a[14768] = actions(31);
	v->a[14769] = 2;
	v->a[14770] = sym_raw_string;
	v->a[14771] = sym_number;
	v->a[14772] = state(345);
	v->a[14773] = 5;
	v->a[14774] = sym_arithmetic_expansion;
	v->a[14775] = sym_string;
	v->a[14776] = sym_simple_expansion;
	v->a[14777] = sym_expansion;
	v->a[14778] = sym_command_substitution;
	v->a[14779] = actions(23);
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = 7;
	v->a[14781] = anon_sym_LT;
	v->a[14782] = anon_sym_GT;
	v->a[14783] = anon_sym_GT_GT;
	v->a[14784] = anon_sym_LT_AMP;
	v->a[14785] = anon_sym_GT_AMP;
	v->a[14786] = anon_sym_GT_PIPE;
	v->a[14787] = anon_sym_LT_GT;
	v->a[14788] = 30;
	v->a[14789] = actions(3);
	v->a[14790] = 1;
	v->a[14791] = sym_comment;
	v->a[14792] = actions(9);
	v->a[14793] = 1;
	v->a[14794] = anon_sym_for;
	v->a[14795] = actions(13);
	v->a[14796] = 1;
	v->a[14797] = anon_sym_if;
	v->a[14798] = actions(15);
	v->a[14799] = 1;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
