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
	v->a[13700] = actions(303);
	v->a[13701] = 1;
	v->a[13702] = anon_sym_if;
	v->a[13703] = actions(305);
	v->a[13704] = 1;
	v->a[13705] = anon_sym_case;
	v->a[13706] = actions(307);
	v->a[13707] = 1;
	v->a[13708] = anon_sym_LPAREN;
	v->a[13709] = actions(309);
	v->a[13710] = 1;
	v->a[13711] = anon_sym_LBRACE;
	v->a[13712] = actions(311);
	v->a[13713] = 1;
	v->a[13714] = anon_sym_BANG;
	v->a[13715] = actions(315);
	v->a[13716] = 1;
	v->a[13717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13718] = actions(317);
	v->a[13719] = 1;
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = anon_sym_DOLLAR;
	v->a[13721] = actions(319);
	v->a[13722] = 1;
	v->a[13723] = anon_sym_DQUOTE;
	v->a[13724] = actions(323);
	v->a[13725] = 1;
	v->a[13726] = anon_sym_DOLLAR_LBRACE;
	v->a[13727] = actions(325);
	v->a[13728] = 1;
	v->a[13729] = anon_sym_DOLLAR_LPAREN;
	v->a[13730] = actions(327);
	v->a[13731] = 1;
	v->a[13732] = anon_sym_BQUOTE;
	v->a[13733] = actions(329);
	v->a[13734] = 1;
	v->a[13735] = sym_variable_name;
	v->a[13736] = state(274);
	v->a[13737] = 1;
	v->a[13738] = sym_command_name;
	v->a[13739] = state(328);
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = 1;
	v->a[13741] = aux_sym_command_repeat1;
	v->a[13742] = state(435);
	v->a[13743] = 1;
	v->a[13744] = sym_variable_assignment;
	v->a[13745] = state(707);
	v->a[13746] = 1;
	v->a[13747] = sym_file_redirect;
	v->a[13748] = state(772);
	v->a[13749] = 1;
	v->a[13750] = sym_concatenation;
	v->a[13751] = state(1308);
	v->a[13752] = 1;
	v->a[13753] = sym_pipeline;
	v->a[13754] = state(1343);
	v->a[13755] = 1;
	v->a[13756] = aux_sym_redirected_statement_repeat2;
	v->a[13757] = state(1566);
	v->a[13758] = 1;
	v->a[13759] = sym__statement_not_pipeline;
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = actions(301);
	v->a[13761] = 2;
	v->a[13762] = anon_sym_while;
	v->a[13763] = anon_sym_until;
	v->a[13764] = actions(321);
	v->a[13765] = 2;
	v->a[13766] = sym_raw_string;
	v->a[13767] = sym_number;
	v->a[13768] = actions(313);
	v->a[13769] = 3;
	v->a[13770] = anon_sym_LT;
	v->a[13771] = anon_sym_GT;
	v->a[13772] = anon_sym_GT_GT;
	v->a[13773] = state(606);
	v->a[13774] = 5;
	v->a[13775] = sym_arithmetic_expansion;
	v->a[13776] = sym_string;
	v->a[13777] = sym_simple_expansion;
	v->a[13778] = sym_expansion;
	v->a[13779] = sym_command_substitution;
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = state(1287);
	v->a[13781] = 12;
	v->a[13782] = sym_redirected_statement;
	v->a[13783] = sym_for_statement;
	v->a[13784] = sym_while_statement;
	v->a[13785] = sym_if_statement;
	v->a[13786] = sym_case_statement;
	v->a[13787] = sym_function_definition;
	v->a[13788] = sym_compound_statement;
	v->a[13789] = sym_subshell;
	v->a[13790] = sym_list;
	v->a[13791] = sym_negated_command;
	v->a[13792] = sym_command;
	v->a[13793] = sym__variable_assignments;
	v->a[13794] = 28;
	v->a[13795] = actions(3);
	v->a[13796] = 1;
	v->a[13797] = sym_comment;
	v->a[13798] = actions(7);
	v->a[13799] = 1;
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
