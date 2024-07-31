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
	v->a[13700] = sym_negated_command;
	v->a[13701] = state(834);
	v->a[13702] = 1;
	v->a[13703] = sym_list;
	v->a[13704] = state(843);
	v->a[13705] = 1;
	v->a[13706] = sym_while_statement;
	v->a[13707] = state(846);
	v->a[13708] = 1;
	v->a[13709] = sym_compound_statement;
	v->a[13710] = state(860);
	v->a[13711] = 1;
	v->a[13712] = sym_function_definition;
	v->a[13713] = state(861);
	v->a[13714] = 1;
	v->a[13715] = sym_case_statement;
	v->a[13716] = state(880);
	v->a[13717] = 1;
	v->a[13718] = sym_if_statement;
	v->a[13719] = state(885);
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = 1;
	v->a[13721] = sym_pipeline;
	v->a[13722] = state(1006);
	v->a[13723] = 1;
	v->a[13724] = aux_sym_redirected_statement_repeat2;
	v->a[13725] = state(1605);
	v->a[13726] = 1;
	v->a[13727] = sym__statement_not_pipeline;
	v->a[13728] = actions(11);
	v->a[13729] = 2;
	v->a[13730] = anon_sym_while;
	v->a[13731] = anon_sym_until;
	v->a[13732] = actions(59);
	v->a[13733] = 2;
	v->a[13734] = sym_raw_string;
	v->a[13735] = sym_number;
	v->a[13736] = state(425);
	v->a[13737] = 5;
	v->a[13738] = sym_arithmetic_expansion;
	v->a[13739] = sym_string;
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = sym_simple_expansion;
	v->a[13741] = sym_expansion;
	v->a[13742] = sym_command_substitution;
	v->a[13743] = actions(51);
	v->a[13744] = 7;
	v->a[13745] = anon_sym_LT;
	v->a[13746] = anon_sym_GT;
	v->a[13747] = anon_sym_GT_GT;
	v->a[13748] = anon_sym_LT_AMP;
	v->a[13749] = anon_sym_GT_AMP;
	v->a[13750] = anon_sym_GT_PIPE;
	v->a[13751] = anon_sym_LT_GT;
	v->a[13752] = 28;
	v->a[13753] = actions(3);
	v->a[13754] = 1;
	v->a[13755] = sym_comment;
	v->a[13756] = actions(9);
	v->a[13757] = 1;
	v->a[13758] = anon_sym_for;
	v->a[13759] = actions(13);
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = 1;
	v->a[13761] = anon_sym_if;
	v->a[13762] = actions(15);
	v->a[13763] = 1;
	v->a[13764] = anon_sym_case;
	v->a[13765] = actions(17);
	v->a[13766] = 1;
	v->a[13767] = anon_sym_LPAREN;
	v->a[13768] = actions(19);
	v->a[13769] = 1;
	v->a[13770] = anon_sym_LBRACE;
	v->a[13771] = actions(53);
	v->a[13772] = 1;
	v->a[13773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13774] = actions(55);
	v->a[13775] = 1;
	v->a[13776] = anon_sym_DOLLAR;
	v->a[13777] = actions(57);
	v->a[13778] = 1;
	v->a[13779] = anon_sym_DQUOTE;
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = actions(61);
	v->a[13781] = 1;
	v->a[13782] = anon_sym_DOLLAR_LBRACE;
	v->a[13783] = actions(63);
	v->a[13784] = 1;
	v->a[13785] = anon_sym_DOLLAR_LPAREN;
	v->a[13786] = actions(65);
	v->a[13787] = 1;
	v->a[13788] = anon_sym_BQUOTE;
	v->a[13789] = actions(297);
	v->a[13790] = 1;
	v->a[13791] = sym_word;
	v->a[13792] = actions(299);
	v->a[13793] = 1;
	v->a[13794] = anon_sym_BANG;
	v->a[13795] = actions(305);
	v->a[13796] = 1;
	v->a[13797] = sym_variable_name;
	v->a[13798] = state(312);
	v->a[13799] = 1;
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
