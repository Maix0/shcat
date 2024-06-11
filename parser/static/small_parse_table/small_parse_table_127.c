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
	v->a[12700] = anon_sym_LBRACE;
	v->a[12701] = actions(59);
	v->a[12702] = 1;
	v->a[12703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12704] = actions(61);
	v->a[12705] = 1;
	v->a[12706] = anon_sym_DOLLAR;
	v->a[12707] = actions(63);
	v->a[12708] = 1;
	v->a[12709] = anon_sym_DQUOTE;
	v->a[12710] = actions(67);
	v->a[12711] = 1;
	v->a[12712] = anon_sym_DOLLAR_LBRACE;
	v->a[12713] = actions(69);
	v->a[12714] = 1;
	v->a[12715] = anon_sym_DOLLAR_LPAREN;
	v->a[12716] = actions(71);
	v->a[12717] = 1;
	v->a[12718] = anon_sym_BQUOTE;
	v->a[12719] = actions(220);
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = 1;
	v->a[12721] = sym_word;
	v->a[12722] = actions(222);
	v->a[12723] = 1;
	v->a[12724] = anon_sym_BANG;
	v->a[12725] = actions(230);
	v->a[12726] = 1;
	v->a[12727] = sym_file_descriptor;
	v->a[12728] = actions(232);
	v->a[12729] = 1;
	v->a[12730] = sym_variable_name;
	v->a[12731] = state(126);
	v->a[12732] = 1;
	v->a[12733] = aux_sym__statements_repeat1;
	v->a[12734] = state(184);
	v->a[12735] = 1;
	v->a[12736] = sym_command_name;
	v->a[12737] = state(268);
	v->a[12738] = 1;
	v->a[12739] = sym_variable_assignment;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = state(647);
	v->a[12741] = 1;
	v->a[12742] = sym_concatenation;
	v->a[12743] = state(800);
	v->a[12744] = 1;
	v->a[12745] = sym_file_redirect;
	v->a[12746] = state(828);
	v->a[12747] = 1;
	v->a[12748] = aux_sym_command_repeat1;
	v->a[12749] = state(1314);
	v->a[12750] = 1;
	v->a[12751] = sym_pipeline;
	v->a[12752] = state(1331);
	v->a[12753] = 1;
	v->a[12754] = aux_sym_redirected_statement_repeat2;
	v->a[12755] = state(2252);
	v->a[12756] = 1;
	v->a[12757] = sym__statement_not_pipeline;
	v->a[12758] = state(2470);
	v->a[12759] = 1;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = sym__statements;
	v->a[12761] = actions(11);
	v->a[12762] = 2;
	v->a[12763] = anon_sym_while;
	v->a[12764] = anon_sym_until;
	v->a[12765] = actions(226);
	v->a[12766] = 2;
	v->a[12767] = anon_sym_LT_AMP_DASH;
	v->a[12768] = anon_sym_GT_AMP_DASH;
	v->a[12769] = actions(228);
	v->a[12770] = 2;
	v->a[12771] = sym_raw_string;
	v->a[12772] = sym_number;
	v->a[12773] = state(294);
	v->a[12774] = 5;
	v->a[12775] = sym_arithmetic_expansion;
	v->a[12776] = sym_string;
	v->a[12777] = sym_simple_expansion;
	v->a[12778] = sym_expansion;
	v->a[12779] = sym_command_substitution;
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = actions(224);
	v->a[12781] = 8;
	v->a[12782] = anon_sym_LT;
	v->a[12783] = anon_sym_GT;
	v->a[12784] = anon_sym_GT_GT;
	v->a[12785] = anon_sym_AMP_GT;
	v->a[12786] = anon_sym_AMP_GT_GT;
	v->a[12787] = anon_sym_LT_AMP;
	v->a[12788] = anon_sym_GT_AMP;
	v->a[12789] = anon_sym_GT_PIPE;
	v->a[12790] = state(1188);
	v->a[12791] = 12;
	v->a[12792] = sym_redirected_statement;
	v->a[12793] = sym_for_statement;
	v->a[12794] = sym_while_statement;
	v->a[12795] = sym_if_statement;
	v->a[12796] = sym_case_statement;
	v->a[12797] = sym_function_definition;
	v->a[12798] = sym_compound_statement;
	v->a[12799] = sym_subshell;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
