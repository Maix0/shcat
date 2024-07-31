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
	v->a[12700] = actions(17);
	v->a[12701] = 1;
	v->a[12702] = anon_sym_LPAREN;
	v->a[12703] = actions(19);
	v->a[12704] = 1;
	v->a[12705] = anon_sym_LBRACE;
	v->a[12706] = actions(41);
	v->a[12707] = 1;
	v->a[12708] = sym_word;
	v->a[12709] = actions(49);
	v->a[12710] = 1;
	v->a[12711] = anon_sym_BANG;
	v->a[12712] = actions(53);
	v->a[12713] = 1;
	v->a[12714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12715] = actions(55);
	v->a[12716] = 1;
	v->a[12717] = anon_sym_DOLLAR;
	v->a[12718] = actions(57);
	v->a[12719] = 1;
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = anon_sym_DQUOTE;
	v->a[12721] = actions(61);
	v->a[12722] = 1;
	v->a[12723] = anon_sym_DOLLAR_LBRACE;
	v->a[12724] = actions(63);
	v->a[12725] = 1;
	v->a[12726] = anon_sym_DOLLAR_LPAREN;
	v->a[12727] = actions(65);
	v->a[12728] = 1;
	v->a[12729] = anon_sym_BQUOTE;
	v->a[12730] = actions(67);
	v->a[12731] = 1;
	v->a[12732] = sym_variable_name;
	v->a[12733] = state(87);
	v->a[12734] = 1;
	v->a[12735] = aux_sym__terminated_statement;
	v->a[12736] = state(271);
	v->a[12737] = 1;
	v->a[12738] = sym_command_name;
	v->a[12739] = state(298);
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = 1;
	v->a[12741] = sym_variable_assignment;
	v->a[12742] = state(482);
	v->a[12743] = 1;
	v->a[12744] = aux_sym_command_repeat1;
	v->a[12745] = state(600);
	v->a[12746] = 1;
	v->a[12747] = sym_file_redirect;
	v->a[12748] = state(602);
	v->a[12749] = 1;
	v->a[12750] = sym_concatenation;
	v->a[12751] = state(1012);
	v->a[12752] = 1;
	v->a[12753] = sym_pipeline;
	v->a[12754] = state(1068);
	v->a[12755] = 1;
	v->a[12756] = aux_sym_redirected_statement_repeat2;
	v->a[12757] = state(1609);
	v->a[12758] = 1;
	v->a[12759] = sym__statement_not_pipeline;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = actions(11);
	v->a[12761] = 2;
	v->a[12762] = anon_sym_while;
	v->a[12763] = anon_sym_until;
	v->a[12764] = actions(59);
	v->a[12765] = 2;
	v->a[12766] = sym_raw_string;
	v->a[12767] = sym_number;
	v->a[12768] = state(425);
	v->a[12769] = 5;
	v->a[12770] = sym_arithmetic_expansion;
	v->a[12771] = sym_string;
	v->a[12772] = sym_simple_expansion;
	v->a[12773] = sym_expansion;
	v->a[12774] = sym_command_substitution;
	v->a[12775] = actions(51);
	v->a[12776] = 7;
	v->a[12777] = anon_sym_LT;
	v->a[12778] = anon_sym_GT;
	v->a[12779] = anon_sym_GT_GT;
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = anon_sym_LT_AMP;
	v->a[12781] = anon_sym_GT_AMP;
	v->a[12782] = anon_sym_GT_PIPE;
	v->a[12783] = anon_sym_LT_GT;
	v->a[12784] = state(933);
	v->a[12785] = 12;
	v->a[12786] = sym_redirected_statement;
	v->a[12787] = sym_for_statement;
	v->a[12788] = sym_while_statement;
	v->a[12789] = sym_if_statement;
	v->a[12790] = sym_case_statement;
	v->a[12791] = sym_function_definition;
	v->a[12792] = sym_compound_statement;
	v->a[12793] = sym_subshell;
	v->a[12794] = sym_list;
	v->a[12795] = sym_negated_command;
	v->a[12796] = sym_command;
	v->a[12797] = sym__variable_assignments;
	v->a[12798] = 40;
	v->a[12799] = actions(3);
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
