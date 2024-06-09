/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_127.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_635(t_small_parse_table_array *v)
{
	v->a[12700] = actions(81);
	v->a[12701] = 1;
	v->a[12702] = sym_file_descriptor;
	v->a[12703] = actions(83);
	v->a[12704] = 1;
	v->a[12705] = sym_variable_name;
	v->a[12706] = actions(238);
	v->a[12707] = 1;
	v->a[12708] = sym_word;
	v->a[12709] = actions(240);
	v->a[12710] = 1;
	v->a[12711] = anon_sym_BANG;
	v->a[12712] = state(132);
	v->a[12713] = 1;
	v->a[12714] = aux_sym__statements_repeat1;
	v->a[12715] = state(185);
	v->a[12716] = 1;
	v->a[12717] = sym_command_name;
	v->a[12718] = state(297);
	v->a[12719] = 1;
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = sym_variable_assignment;
	v->a[12721] = state(582);
	v->a[12722] = 1;
	v->a[12723] = sym_concatenation;
	v->a[12724] = state(614);
	v->a[12725] = 1;
	v->a[12726] = aux_sym_command_repeat1;
	v->a[12727] = state(769);
	v->a[12728] = 1;
	v->a[12729] = sym_file_redirect;
	v->a[12730] = state(1133);
	v->a[12731] = 1;
	v->a[12732] = aux_sym_redirected_statement_repeat2;
	v->a[12733] = state(1142);
	v->a[12734] = 1;
	v->a[12735] = sym_pipeline;
	v->a[12736] = state(2041);
	v->a[12737] = 1;
	v->a[12738] = sym__statement_not_pipeline;
	v->a[12739] = state(2169);
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = 1;
	v->a[12741] = sym__statements;
	v->a[12742] = actions(11);
	v->a[12743] = 2;
	v->a[12744] = anon_sym_while;
	v->a[12745] = anon_sym_until;
	v->a[12746] = actions(61);
	v->a[12747] = 2;
	v->a[12748] = anon_sym_LT_AMP_DASH;
	v->a[12749] = anon_sym_GT_AMP_DASH;
	v->a[12750] = state(397);
	v->a[12751] = 6;
	v->a[12752] = sym_arithmetic_expansion;
	v->a[12753] = sym_string;
	v->a[12754] = sym_number;
	v->a[12755] = sym_simple_expansion;
	v->a[12756] = sym_expansion;
	v->a[12757] = sym_command_substitution;
	v->a[12758] = actions(59);
	v->a[12759] = 8;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = anon_sym_LT;
	v->a[12761] = anon_sym_GT;
	v->a[12762] = anon_sym_GT_GT;
	v->a[12763] = anon_sym_AMP_GT;
	v->a[12764] = anon_sym_AMP_GT_GT;
	v->a[12765] = anon_sym_LT_AMP;
	v->a[12766] = anon_sym_GT_AMP;
	v->a[12767] = anon_sym_GT_PIPE;
	v->a[12768] = state(1071);
	v->a[12769] = 12;
	v->a[12770] = sym_redirected_statement;
	v->a[12771] = sym_for_statement;
	v->a[12772] = sym_while_statement;
	v->a[12773] = sym_if_statement;
	v->a[12774] = sym_case_statement;
	v->a[12775] = sym_function_definition;
	v->a[12776] = sym_compound_statement;
	v->a[12777] = sym_subshell;
	v->a[12778] = sym_list;
	v->a[12779] = sym_negated_command;
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = sym_command;
	v->a[12781] = sym_variable_assignments;
	v->a[12782] = 34;
	v->a[12783] = actions(3);
	v->a[12784] = 1;
	v->a[12785] = sym_comment;
	v->a[12786] = actions(9);
	v->a[12787] = 1;
	v->a[12788] = anon_sym_for;
	v->a[12789] = actions(13);
	v->a[12790] = 1;
	v->a[12791] = anon_sym_if;
	v->a[12792] = actions(15);
	v->a[12793] = 1;
	v->a[12794] = anon_sym_case;
	v->a[12795] = actions(17);
	v->a[12796] = 1;
	v->a[12797] = anon_sym_LPAREN;
	v->a[12798] = actions(19);
	v->a[12799] = 1;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
