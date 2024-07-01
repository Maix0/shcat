/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_170.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_850(t_small_parse_table_array *v)
{
	v->a[17000] = 1;
	v->a[17001] = anon_sym_LBRACE;
	v->a[17002] = actions(45);
	v->a[17003] = 1;
	v->a[17004] = sym_word;
	v->a[17005] = actions(53);
	v->a[17006] = 1;
	v->a[17007] = anon_sym_BANG;
	v->a[17008] = actions(59);
	v->a[17009] = 1;
	v->a[17010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17011] = actions(61);
	v->a[17012] = 1;
	v->a[17013] = anon_sym_DOLLAR;
	v->a[17014] = actions(63);
	v->a[17015] = 1;
	v->a[17016] = anon_sym_DQUOTE;
	v->a[17017] = actions(67);
	v->a[17018] = 1;
	v->a[17019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = actions(69);
	v->a[17021] = 1;
	v->a[17022] = anon_sym_DOLLAR_LPAREN;
	v->a[17023] = actions(71);
	v->a[17024] = 1;
	v->a[17025] = anon_sym_BQUOTE;
	v->a[17026] = actions(73);
	v->a[17027] = 1;
	v->a[17028] = sym_file_descriptor;
	v->a[17029] = actions(75);
	v->a[17030] = 1;
	v->a[17031] = sym_variable_name;
	v->a[17032] = state(55);
	v->a[17033] = 1;
	v->a[17034] = aux_sym__terminated_statement;
	v->a[17035] = state(189);
	v->a[17036] = 1;
	v->a[17037] = sym_command_name;
	v->a[17038] = state(291);
	v->a[17039] = 1;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = sym_variable_assignment;
	v->a[17041] = state(650);
	v->a[17042] = 1;
	v->a[17043] = sym_concatenation;
	v->a[17044] = state(712);
	v->a[17045] = 1;
	v->a[17046] = sym_file_redirect;
	v->a[17047] = state(713);
	v->a[17048] = 1;
	v->a[17049] = aux_sym_command_repeat1;
	v->a[17050] = state(1251);
	v->a[17051] = 1;
	v->a[17052] = sym_pipeline;
	v->a[17053] = state(1333);
	v->a[17054] = 1;
	v->a[17055] = aux_sym_redirected_statement_repeat2;
	v->a[17056] = state(2103);
	v->a[17057] = 1;
	v->a[17058] = sym__statement_not_pipeline;
	v->a[17059] = actions(11);
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = 2;
	v->a[17061] = anon_sym_while;
	v->a[17062] = anon_sym_until;
	v->a[17063] = actions(57);
	v->a[17064] = 2;
	v->a[17065] = anon_sym_LT_AMP_DASH;
	v->a[17066] = anon_sym_GT_AMP_DASH;
	v->a[17067] = actions(65);
	v->a[17068] = 2;
	v->a[17069] = sym_raw_string;
	v->a[17070] = sym_number;
	v->a[17071] = state(443);
	v->a[17072] = 5;
	v->a[17073] = sym_arithmetic_expansion;
	v->a[17074] = sym_string;
	v->a[17075] = sym_simple_expansion;
	v->a[17076] = sym_expansion;
	v->a[17077] = sym_command_substitution;
	v->a[17078] = actions(55);
	v->a[17079] = 6;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = anon_sym_LT;
	v->a[17081] = anon_sym_GT;
	v->a[17082] = anon_sym_GT_GT;
	v->a[17083] = anon_sym_LT_AMP;
	v->a[17084] = anon_sym_GT_AMP;
	v->a[17085] = anon_sym_GT_PIPE;
	v->a[17086] = state(1094);
	v->a[17087] = 12;
	v->a[17088] = sym_redirected_statement;
	v->a[17089] = sym_for_statement;
	v->a[17090] = sym_while_statement;
	v->a[17091] = sym_if_statement;
	v->a[17092] = sym_case_statement;
	v->a[17093] = sym_function_definition;
	v->a[17094] = sym_compound_statement;
	v->a[17095] = sym_subshell;
	v->a[17096] = sym_list;
	v->a[17097] = sym_negated_command;
	v->a[17098] = sym_command;
	v->a[17099] = sym__variable_assignments;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
