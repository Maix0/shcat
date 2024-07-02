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
	v->a[17000] = actions(355);
	v->a[17001] = 1;
	v->a[17002] = sym_file_descriptor;
	v->a[17003] = actions(357);
	v->a[17004] = 1;
	v->a[17005] = sym_variable_name;
	v->a[17006] = state(322);
	v->a[17007] = 1;
	v->a[17008] = sym_command_name;
	v->a[17009] = state(584);
	v->a[17010] = 1;
	v->a[17011] = sym_concatenation;
	v->a[17012] = state(590);
	v->a[17013] = 1;
	v->a[17014] = sym_variable_assignment;
	v->a[17015] = state(620);
	v->a[17016] = 1;
	v->a[17017] = sym_file_redirect;
	v->a[17018] = state(625);
	v->a[17019] = 1;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = aux_sym_command_repeat1;
	v->a[17021] = state(1399);
	v->a[17022] = 1;
	v->a[17023] = aux_sym_redirected_statement_repeat2;
	v->a[17024] = state(1446);
	v->a[17025] = 1;
	v->a[17026] = sym_pipeline;
	v->a[17027] = actions(11);
	v->a[17028] = 2;
	v->a[17029] = anon_sym_while;
	v->a[17030] = anon_sym_until;
	v->a[17031] = actions(353);
	v->a[17032] = 2;
	v->a[17033] = sym_raw_string;
	v->a[17034] = sym_number;
	v->a[17035] = state(628);
	v->a[17036] = 5;
	v->a[17037] = sym_arithmetic_expansion;
	v->a[17038] = sym_string;
	v->a[17039] = sym_simple_expansion;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = sym_expansion;
	v->a[17041] = sym_command_substitution;
	v->a[17042] = actions(351);
	v->a[17043] = 7;
	v->a[17044] = anon_sym_LT;
	v->a[17045] = anon_sym_GT;
	v->a[17046] = anon_sym_GT_GT;
	v->a[17047] = anon_sym_LT_AMP;
	v->a[17048] = anon_sym_GT_AMP;
	v->a[17049] = anon_sym_GT_PIPE;
	v->a[17050] = anon_sym_LT_GT;
	v->a[17051] = state(1009);
	v->a[17052] = 13;
	v->a[17053] = sym__statement_not_pipeline;
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
	v->a[17070] = actions(9);
	v->a[17071] = 1;
	v->a[17072] = anon_sym_for;
	v->a[17073] = actions(13);
	v->a[17074] = 1;
	v->a[17075] = anon_sym_if;
	v->a[17076] = actions(15);
	v->a[17077] = 1;
	v->a[17078] = anon_sym_case;
	v->a[17079] = actions(17);
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = 1;
	v->a[17081] = anon_sym_LPAREN;
	v->a[17082] = actions(19);
	v->a[17083] = 1;
	v->a[17084] = anon_sym_LBRACE;
	v->a[17085] = actions(55);
	v->a[17086] = 1;
	v->a[17087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17088] = actions(57);
	v->a[17089] = 1;
	v->a[17090] = anon_sym_DOLLAR;
	v->a[17091] = actions(59);
	v->a[17092] = 1;
	v->a[17093] = anon_sym_DQUOTE;
	v->a[17094] = actions(63);
	v->a[17095] = 1;
	v->a[17096] = anon_sym_DOLLAR_LBRACE;
	v->a[17097] = actions(65);
	v->a[17098] = 1;
	v->a[17099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
