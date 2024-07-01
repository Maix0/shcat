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
	v->a[12700] = sym_concatenation;
	v->a[12701] = state(658);
	v->a[12702] = 1;
	v->a[12703] = aux_sym_command_repeat1;
	v->a[12704] = state(764);
	v->a[12705] = 1;
	v->a[12706] = sym_file_redirect;
	v->a[12707] = state(1052);
	v->a[12708] = 1;
	v->a[12709] = sym_pipeline;
	v->a[12710] = state(1190);
	v->a[12711] = 1;
	v->a[12712] = aux_sym_redirected_statement_repeat2;
	v->a[12713] = state(1890);
	v->a[12714] = 1;
	v->a[12715] = sym__statement_not_pipeline;
	v->a[12716] = state(2110);
	v->a[12717] = 1;
	v->a[12718] = sym__statements;
	v->a[12719] = actions(11);
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = 2;
	v->a[12721] = anon_sym_while;
	v->a[12722] = anon_sym_until;
	v->a[12723] = actions(61);
	v->a[12724] = 2;
	v->a[12725] = sym_raw_string;
	v->a[12726] = sym_number;
	v->a[12727] = state(436);
	v->a[12728] = 5;
	v->a[12729] = sym_arithmetic_expansion;
	v->a[12730] = sym_string;
	v->a[12731] = sym_simple_expansion;
	v->a[12732] = sym_expansion;
	v->a[12733] = sym_command_substitution;
	v->a[12734] = actions(53);
	v->a[12735] = 7;
	v->a[12736] = anon_sym_LT;
	v->a[12737] = anon_sym_GT;
	v->a[12738] = anon_sym_GT_GT;
	v->a[12739] = anon_sym_LT_AMP;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = anon_sym_GT_AMP;
	v->a[12741] = anon_sym_GT_PIPE;
	v->a[12742] = anon_sym_LT_GT;
	v->a[12743] = state(967);
	v->a[12744] = 12;
	v->a[12745] = sym_redirected_statement;
	v->a[12746] = sym_for_statement;
	v->a[12747] = sym_while_statement;
	v->a[12748] = sym_if_statement;
	v->a[12749] = sym_case_statement;
	v->a[12750] = sym_function_definition;
	v->a[12751] = sym_compound_statement;
	v->a[12752] = sym_subshell;
	v->a[12753] = sym_list;
	v->a[12754] = sym_negated_command;
	v->a[12755] = sym_command;
	v->a[12756] = sym__variable_assignments;
	v->a[12757] = 31;
	v->a[12758] = actions(3);
	v->a[12759] = 1;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = sym_comment;
	v->a[12761] = actions(9);
	v->a[12762] = 1;
	v->a[12763] = anon_sym_for;
	v->a[12764] = actions(13);
	v->a[12765] = 1;
	v->a[12766] = anon_sym_if;
	v->a[12767] = actions(15);
	v->a[12768] = 1;
	v->a[12769] = anon_sym_case;
	v->a[12770] = actions(17);
	v->a[12771] = 1;
	v->a[12772] = anon_sym_LPAREN;
	v->a[12773] = actions(19);
	v->a[12774] = 1;
	v->a[12775] = anon_sym_LBRACE;
	v->a[12776] = actions(55);
	v->a[12777] = 1;
	v->a[12778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12779] = actions(57);
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = 1;
	v->a[12781] = anon_sym_DOLLAR;
	v->a[12782] = actions(59);
	v->a[12783] = 1;
	v->a[12784] = anon_sym_DQUOTE;
	v->a[12785] = actions(63);
	v->a[12786] = 1;
	v->a[12787] = anon_sym_DOLLAR_LBRACE;
	v->a[12788] = actions(65);
	v->a[12789] = 1;
	v->a[12790] = anon_sym_DOLLAR_LPAREN;
	v->a[12791] = actions(67);
	v->a[12792] = 1;
	v->a[12793] = anon_sym_BQUOTE;
	v->a[12794] = actions(211);
	v->a[12795] = 1;
	v->a[12796] = sym_word;
	v->a[12797] = actions(213);
	v->a[12798] = 1;
	v->a[12799] = anon_sym_BANG;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
