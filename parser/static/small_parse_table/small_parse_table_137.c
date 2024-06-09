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
	v->a[13700] = actions(171);
	v->a[13701] = 1;
	v->a[13702] = anon_sym_LBRACE;
	v->a[13703] = actions(174);
	v->a[13704] = 1;
	v->a[13705] = anon_sym_BANG;
	v->a[13706] = actions(183);
	v->a[13707] = 1;
	v->a[13708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13709] = actions(186);
	v->a[13710] = 1;
	v->a[13711] = anon_sym_DOLLAR;
	v->a[13712] = actions(189);
	v->a[13713] = 1;
	v->a[13714] = anon_sym_DQUOTE;
	v->a[13715] = actions(192);
	v->a[13716] = 1;
	v->a[13717] = sym_raw_string;
	v->a[13718] = actions(195);
	v->a[13719] = 1;
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = aux_sym_number_token1;
	v->a[13721] = actions(198);
	v->a[13722] = 1;
	v->a[13723] = aux_sym_number_token2;
	v->a[13724] = actions(201);
	v->a[13725] = 1;
	v->a[13726] = anon_sym_DOLLAR_LBRACE;
	v->a[13727] = actions(204);
	v->a[13728] = 1;
	v->a[13729] = anon_sym_DOLLAR_LPAREN;
	v->a[13730] = actions(207);
	v->a[13731] = 1;
	v->a[13732] = anon_sym_BQUOTE;
	v->a[13733] = actions(210);
	v->a[13734] = 1;
	v->a[13735] = sym_file_descriptor;
	v->a[13736] = actions(213);
	v->a[13737] = 1;
	v->a[13738] = sym_variable_name;
	v->a[13739] = state(107);
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = 1;
	v->a[13741] = aux_sym__terminated_statement;
	v->a[13742] = state(190);
	v->a[13743] = 1;
	v->a[13744] = sym_command_name;
	v->a[13745] = state(280);
	v->a[13746] = 1;
	v->a[13747] = sym_variable_assignment;
	v->a[13748] = state(582);
	v->a[13749] = 1;
	v->a[13750] = sym_concatenation;
	v->a[13751] = state(587);
	v->a[13752] = 1;
	v->a[13753] = aux_sym_command_repeat1;
	v->a[13754] = state(718);
	v->a[13755] = 1;
	v->a[13756] = sym_file_redirect;
	v->a[13757] = state(1213);
	v->a[13758] = 1;
	v->a[13759] = aux_sym_redirected_statement_repeat2;
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = state(1233);
	v->a[13761] = 1;
	v->a[13762] = sym_pipeline;
	v->a[13763] = state(2035);
	v->a[13764] = 1;
	v->a[13765] = sym__statement_not_pipeline;
	v->a[13766] = actions(157);
	v->a[13767] = 2;
	v->a[13768] = anon_sym_while;
	v->a[13769] = anon_sym_until;
	v->a[13770] = actions(180);
	v->a[13771] = 2;
	v->a[13772] = anon_sym_LT_AMP_DASH;
	v->a[13773] = anon_sym_GT_AMP_DASH;
	v->a[13774] = state(397);
	v->a[13775] = 6;
	v->a[13776] = sym_arithmetic_expansion;
	v->a[13777] = sym_string;
	v->a[13778] = sym_number;
	v->a[13779] = sym_simple_expansion;
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = sym_expansion;
	v->a[13781] = sym_command_substitution;
	v->a[13782] = actions(177);
	v->a[13783] = 8;
	v->a[13784] = anon_sym_LT;
	v->a[13785] = anon_sym_GT;
	v->a[13786] = anon_sym_GT_GT;
	v->a[13787] = anon_sym_AMP_GT;
	v->a[13788] = anon_sym_AMP_GT_GT;
	v->a[13789] = anon_sym_LT_AMP;
	v->a[13790] = anon_sym_GT_AMP;
	v->a[13791] = anon_sym_GT_PIPE;
	v->a[13792] = state(1172);
	v->a[13793] = 12;
	v->a[13794] = sym_redirected_statement;
	v->a[13795] = sym_for_statement;
	v->a[13796] = sym_while_statement;
	v->a[13797] = sym_if_statement;
	v->a[13798] = sym_case_statement;
	v->a[13799] = sym_function_definition;
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
