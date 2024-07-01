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
	v->a[12700] = anon_sym_GT_GT;
	v->a[12701] = anon_sym_LT_AMP;
	v->a[12702] = anon_sym_GT_AMP;
	v->a[12703] = anon_sym_GT_PIPE;
	v->a[12704] = state(1087);
	v->a[12705] = 12;
	v->a[12706] = sym_redirected_statement;
	v->a[12707] = sym_for_statement;
	v->a[12708] = sym_while_statement;
	v->a[12709] = sym_if_statement;
	v->a[12710] = sym_case_statement;
	v->a[12711] = sym_function_definition;
	v->a[12712] = sym_compound_statement;
	v->a[12713] = sym_subshell;
	v->a[12714] = sym_list;
	v->a[12715] = sym_negated_command;
	v->a[12716] = sym_command;
	v->a[12717] = sym__variable_assignments;
	v->a[12718] = 32;
	v->a[12719] = actions(3);
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = 1;
	v->a[12721] = sym_comment;
	v->a[12722] = actions(9);
	v->a[12723] = 1;
	v->a[12724] = anon_sym_for;
	v->a[12725] = actions(13);
	v->a[12726] = 1;
	v->a[12727] = anon_sym_if;
	v->a[12728] = actions(15);
	v->a[12729] = 1;
	v->a[12730] = anon_sym_case;
	v->a[12731] = actions(17);
	v->a[12732] = 1;
	v->a[12733] = anon_sym_LPAREN;
	v->a[12734] = actions(19);
	v->a[12735] = 1;
	v->a[12736] = anon_sym_LBRACE;
	v->a[12737] = actions(59);
	v->a[12738] = 1;
	v->a[12739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = actions(61);
	v->a[12741] = 1;
	v->a[12742] = anon_sym_DOLLAR;
	v->a[12743] = actions(63);
	v->a[12744] = 1;
	v->a[12745] = anon_sym_DQUOTE;
	v->a[12746] = actions(67);
	v->a[12747] = 1;
	v->a[12748] = anon_sym_DOLLAR_LBRACE;
	v->a[12749] = actions(69);
	v->a[12750] = 1;
	v->a[12751] = anon_sym_DOLLAR_LPAREN;
	v->a[12752] = actions(71);
	v->a[12753] = 1;
	v->a[12754] = anon_sym_BQUOTE;
	v->a[12755] = actions(73);
	v->a[12756] = 1;
	v->a[12757] = sym_file_descriptor;
	v->a[12758] = actions(75);
	v->a[12759] = 1;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = sym_variable_name;
	v->a[12761] = actions(240);
	v->a[12762] = 1;
	v->a[12763] = sym_word;
	v->a[12764] = actions(242);
	v->a[12765] = 1;
	v->a[12766] = anon_sym_BANG;
	v->a[12767] = state(136);
	v->a[12768] = 1;
	v->a[12769] = aux_sym__statements_repeat1;
	v->a[12770] = state(188);
	v->a[12771] = 1;
	v->a[12772] = sym_command_name;
	v->a[12773] = state(297);
	v->a[12774] = 1;
	v->a[12775] = sym_variable_assignment;
	v->a[12776] = state(650);
	v->a[12777] = 1;
	v->a[12778] = sym_concatenation;
	v->a[12779] = state(749);
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = 1;
	v->a[12781] = aux_sym_command_repeat1;
	v->a[12782] = state(795);
	v->a[12783] = 1;
	v->a[12784] = sym_file_redirect;
	v->a[12785] = state(1154);
	v->a[12786] = 1;
	v->a[12787] = sym_pipeline;
	v->a[12788] = state(1240);
	v->a[12789] = 1;
	v->a[12790] = aux_sym_redirected_statement_repeat2;
	v->a[12791] = state(2119);
	v->a[12792] = 1;
	v->a[12793] = sym__statement_not_pipeline;
	v->a[12794] = state(2210);
	v->a[12795] = 1;
	v->a[12796] = sym__statements;
	v->a[12797] = actions(11);
	v->a[12798] = 2;
	v->a[12799] = anon_sym_while;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
