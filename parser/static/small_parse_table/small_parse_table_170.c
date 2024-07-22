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
	v->a[17000] = sym_file_descriptor;
	v->a[17001] = actions(221);
	v->a[17002] = 1;
	v->a[17003] = sym_variable_name;
	v->a[17004] = state(170);
	v->a[17005] = 1;
	v->a[17006] = sym_command_name;
	v->a[17007] = state(349);
	v->a[17008] = 1;
	v->a[17009] = sym_variable_assignment;
	v->a[17010] = state(617);
	v->a[17011] = 1;
	v->a[17012] = aux_sym_command_repeat1;
	v->a[17013] = state(661);
	v->a[17014] = 1;
	v->a[17015] = sym_concatenation;
	v->a[17016] = state(665);
	v->a[17017] = 1;
	v->a[17018] = sym_file_redirect;
	v->a[17019] = state(1177);
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = 1;
	v->a[17021] = aux_sym_redirected_statement_repeat2;
	v->a[17022] = state(1442);
	v->a[17023] = 1;
	v->a[17024] = sym_pipeline;
	v->a[17025] = actions(11);
	v->a[17026] = 2;
	v->a[17027] = anon_sym_while;
	v->a[17028] = anon_sym_until;
	v->a[17029] = actions(217);
	v->a[17030] = 2;
	v->a[17031] = sym_raw_string;
	v->a[17032] = sym_number;
	v->a[17033] = state(374);
	v->a[17034] = 5;
	v->a[17035] = sym_arithmetic_expansion;
	v->a[17036] = sym_string;
	v->a[17037] = sym_simple_expansion;
	v->a[17038] = sym_expansion;
	v->a[17039] = sym_command_substitution;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = actions(215);
	v->a[17041] = 7;
	v->a[17042] = anon_sym_LT;
	v->a[17043] = anon_sym_GT;
	v->a[17044] = anon_sym_GT_GT;
	v->a[17045] = anon_sym_LT_AMP;
	v->a[17046] = anon_sym_GT_AMP;
	v->a[17047] = anon_sym_GT_PIPE;
	v->a[17048] = anon_sym_LT_GT;
	v->a[17049] = state(1096);
	v->a[17050] = 13;
	v->a[17051] = sym__statement_not_pipeline;
	v->a[17052] = sym_redirected_statement;
	v->a[17053] = sym_for_statement;
	v->a[17054] = sym_while_statement;
	v->a[17055] = sym_if_statement;
	v->a[17056] = sym_case_statement;
	v->a[17057] = sym_function_definition;
	v->a[17058] = sym_compound_statement;
	v->a[17059] = sym_subshell;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = sym_list;
	v->a[17061] = sym_negated_command;
	v->a[17062] = sym_command;
	v->a[17063] = sym__variable_assignments;
	v->a[17064] = 29;
	v->a[17065] = actions(3);
	v->a[17066] = 1;
	v->a[17067] = sym_comment;
	v->a[17068] = actions(9);
	v->a[17069] = 1;
	v->a[17070] = anon_sym_for;
	v->a[17071] = actions(13);
	v->a[17072] = 1;
	v->a[17073] = anon_sym_if;
	v->a[17074] = actions(15);
	v->a[17075] = 1;
	v->a[17076] = anon_sym_case;
	v->a[17077] = actions(17);
	v->a[17078] = 1;
	v->a[17079] = anon_sym_LPAREN;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = actions(19);
	v->a[17081] = 1;
	v->a[17082] = anon_sym_LBRACE;
	v->a[17083] = actions(55);
	v->a[17084] = 1;
	v->a[17085] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17086] = actions(57);
	v->a[17087] = 1;
	v->a[17088] = anon_sym_DOLLAR;
	v->a[17089] = actions(59);
	v->a[17090] = 1;
	v->a[17091] = anon_sym_DQUOTE;
	v->a[17092] = actions(63);
	v->a[17093] = 1;
	v->a[17094] = anon_sym_DOLLAR_LBRACE;
	v->a[17095] = actions(65);
	v->a[17096] = 1;
	v->a[17097] = anon_sym_DOLLAR_LPAREN;
	v->a[17098] = actions(67);
	v->a[17099] = 1;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
