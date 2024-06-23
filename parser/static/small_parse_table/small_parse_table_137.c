/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_137.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_685(t_small_parse_table_array *v)
{
	v->a[13700] = anon_sym_BANG;
	v->a[13701] = actions(230);
	v->a[13702] = 1;
	v->a[13703] = sym_file_descriptor;
	v->a[13704] = actions(232);
	v->a[13705] = 1;
	v->a[13706] = sym_variable_name;
	v->a[13707] = state(126);
	v->a[13708] = 1;
	v->a[13709] = aux_sym__statements_repeat1;
	v->a[13710] = state(184);
	v->a[13711] = 1;
	v->a[13712] = sym_command_name;
	v->a[13713] = state(268);
	v->a[13714] = 1;
	v->a[13715] = sym_variable_assignment;
	v->a[13716] = state(647);
	v->a[13717] = 1;
	v->a[13718] = sym_concatenation;
	v->a[13719] = state(808);
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = 1;
	v->a[13721] = sym_file_redirect;
	v->a[13722] = state(828);
	v->a[13723] = 1;
	v->a[13724] = aux_sym_command_repeat1;
	v->a[13725] = state(1314);
	v->a[13726] = 1;
	v->a[13727] = sym_pipeline;
	v->a[13728] = state(1331);
	v->a[13729] = 1;
	v->a[13730] = aux_sym_redirected_statement_repeat2;
	v->a[13731] = state(2252);
	v->a[13732] = 1;
	v->a[13733] = sym__statement_not_pipeline;
	v->a[13734] = state(2410);
	v->a[13735] = 1;
	v->a[13736] = sym__statements;
	v->a[13737] = actions(11);
	v->a[13738] = 2;
	v->a[13739] = anon_sym_while;
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = anon_sym_until;
	v->a[13741] = actions(226);
	v->a[13742] = 2;
	v->a[13743] = anon_sym_LT_AMP_DASH;
	v->a[13744] = anon_sym_GT_AMP_DASH;
	v->a[13745] = actions(228);
	v->a[13746] = 2;
	v->a[13747] = sym_raw_string;
	v->a[13748] = sym_number;
	v->a[13749] = state(294);
	v->a[13750] = 5;
	v->a[13751] = sym_arithmetic_expansion;
	v->a[13752] = sym_string;
	v->a[13753] = sym_simple_expansion;
	v->a[13754] = sym_expansion;
	v->a[13755] = sym_command_substitution;
	v->a[13756] = actions(224);
	v->a[13757] = 8;
	v->a[13758] = anon_sym_LT;
	v->a[13759] = anon_sym_GT;
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = anon_sym_GT_GT;
	v->a[13761] = anon_sym_AMP_GT;
	v->a[13762] = anon_sym_AMP_GT_GT;
	v->a[13763] = anon_sym_LT_AMP;
	v->a[13764] = anon_sym_GT_AMP;
	v->a[13765] = anon_sym_GT_PIPE;
	v->a[13766] = state(1188);
	v->a[13767] = 12;
	v->a[13768] = sym_redirected_statement;
	v->a[13769] = sym_for_statement;
	v->a[13770] = sym_while_statement;
	v->a[13771] = sym_if_statement;
	v->a[13772] = sym_case_statement;
	v->a[13773] = sym_function_definition;
	v->a[13774] = sym_compound_statement;
	v->a[13775] = sym_subshell;
	v->a[13776] = sym_list;
	v->a[13777] = sym_negated_command;
	v->a[13778] = sym_command;
	v->a[13779] = sym__variable_assignments;
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = 32;
	v->a[13781] = actions(3);
	v->a[13782] = 1;
	v->a[13783] = sym_comment;
	v->a[13784] = actions(9);
	v->a[13785] = 1;
	v->a[13786] = anon_sym_for;
	v->a[13787] = actions(13);
	v->a[13788] = 1;
	v->a[13789] = anon_sym_if;
	v->a[13790] = actions(15);
	v->a[13791] = 1;
	v->a[13792] = anon_sym_case;
	v->a[13793] = actions(17);
	v->a[13794] = 1;
	v->a[13795] = anon_sym_LPAREN;
	v->a[13796] = actions(19);
	v->a[13797] = 1;
	v->a[13798] = anon_sym_LBRACE;
	v->a[13799] = actions(59);
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
