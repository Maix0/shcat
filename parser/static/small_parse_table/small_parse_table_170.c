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
	v->a[17004] = state(173);
	v->a[17005] = 1;
	v->a[17006] = sym_command_name;
	v->a[17007] = state(331);
	v->a[17008] = 1;
	v->a[17009] = sym_variable_assignment;
	v->a[17010] = state(603);
	v->a[17011] = 1;
	v->a[17012] = sym_concatenation;
	v->a[17013] = state(644);
	v->a[17014] = 1;
	v->a[17015] = sym_file_redirect;
	v->a[17016] = state(673);
	v->a[17017] = 1;
	v->a[17018] = aux_sym_command_repeat1;
	v->a[17019] = state(1076);
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = 1;
	v->a[17021] = sym_pipeline;
	v->a[17022] = state(1136);
	v->a[17023] = 1;
	v->a[17024] = aux_sym_redirected_statement_repeat2;
	v->a[17025] = state(1898);
	v->a[17026] = 1;
	v->a[17027] = sym__statement_not_pipeline;
	v->a[17028] = actions(11);
	v->a[17029] = 2;
	v->a[17030] = anon_sym_while;
	v->a[17031] = anon_sym_until;
	v->a[17032] = actions(217);
	v->a[17033] = 2;
	v->a[17034] = sym_raw_string;
	v->a[17035] = sym_number;
	v->a[17036] = state(362);
	v->a[17037] = 5;
	v->a[17038] = sym_arithmetic_expansion;
	v->a[17039] = sym_string;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = sym_simple_expansion;
	v->a[17041] = sym_expansion;
	v->a[17042] = sym_command_substitution;
	v->a[17043] = actions(215);
	v->a[17044] = 7;
	v->a[17045] = anon_sym_LT;
	v->a[17046] = anon_sym_GT;
	v->a[17047] = anon_sym_GT_GT;
	v->a[17048] = anon_sym_LT_AMP;
	v->a[17049] = anon_sym_GT_AMP;
	v->a[17050] = anon_sym_GT_PIPE;
	v->a[17051] = anon_sym_LT_GT;
	v->a[17052] = state(1077);
	v->a[17053] = 12;
	v->a[17054] = sym_redirected_statement;
	v->a[17055] = sym_for_statement;
	v->a[17056] = sym_while_statement;
	v->a[17057] = sym_if_statement;
	v->a[17058] = sym_case_statement;
	v->a[17059] = sym_function_definition;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = sym_compound_statement;
	v->a[17061] = sym_subshell;
	v->a[17062] = sym_list;
	v->a[17063] = sym_negated_command;
	v->a[17064] = sym_command;
	v->a[17065] = sym__variable_assignments;
	v->a[17066] = 29;
	v->a[17067] = actions(3);
	v->a[17068] = 1;
	v->a[17069] = sym_comment;
	v->a[17070] = actions(7);
	v->a[17071] = 1;
	v->a[17072] = sym_word;
	v->a[17073] = actions(9);
	v->a[17074] = 1;
	v->a[17075] = anon_sym_for;
	v->a[17076] = actions(13);
	v->a[17077] = 1;
	v->a[17078] = anon_sym_if;
	v->a[17079] = actions(15);
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = 1;
	v->a[17081] = anon_sym_case;
	v->a[17082] = actions(17);
	v->a[17083] = 1;
	v->a[17084] = anon_sym_LPAREN;
	v->a[17085] = actions(19);
	v->a[17086] = 1;
	v->a[17087] = anon_sym_LBRACE;
	v->a[17088] = actions(21);
	v->a[17089] = 1;
	v->a[17090] = anon_sym_BANG;
	v->a[17091] = actions(25);
	v->a[17092] = 1;
	v->a[17093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17094] = actions(27);
	v->a[17095] = 1;
	v->a[17096] = anon_sym_DOLLAR;
	v->a[17097] = actions(29);
	v->a[17098] = 1;
	v->a[17099] = anon_sym_DQUOTE;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
