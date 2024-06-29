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
	v->a[17000] = anon_sym_LT_AMP_DASH;
	v->a[17001] = anon_sym_GT_AMP_DASH;
	v->a[17002] = actions(228);
	v->a[17003] = 2;
	v->a[17004] = sym_raw_string;
	v->a[17005] = sym_number;
	v->a[17006] = state(299);
	v->a[17007] = 5;
	v->a[17008] = sym_arithmetic_expansion;
	v->a[17009] = sym_string;
	v->a[17010] = sym_simple_expansion;
	v->a[17011] = sym_expansion;
	v->a[17012] = sym_command_substitution;
	v->a[17013] = actions(224);
	v->a[17014] = 8;
	v->a[17015] = anon_sym_LT;
	v->a[17016] = anon_sym_GT;
	v->a[17017] = anon_sym_GT_GT;
	v->a[17018] = anon_sym_AMP_GT;
	v->a[17019] = anon_sym_AMP_GT_GT;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = anon_sym_LT_AMP;
	v->a[17021] = anon_sym_GT_AMP;
	v->a[17022] = anon_sym_GT_PIPE;
	v->a[17023] = 31;
	v->a[17024] = actions(3);
	v->a[17025] = 1;
	v->a[17026] = sym_comment;
	v->a[17027] = actions(9);
	v->a[17028] = 1;
	v->a[17029] = anon_sym_for;
	v->a[17030] = actions(13);
	v->a[17031] = 1;
	v->a[17032] = anon_sym_if;
	v->a[17033] = actions(15);
	v->a[17034] = 1;
	v->a[17035] = anon_sym_case;
	v->a[17036] = actions(17);
	v->a[17037] = 1;
	v->a[17038] = anon_sym_LPAREN;
	v->a[17039] = actions(19);
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = 1;
	v->a[17041] = anon_sym_LBRACE;
	v->a[17042] = actions(45);
	v->a[17043] = 1;
	v->a[17044] = sym_word;
	v->a[17045] = actions(53);
	v->a[17046] = 1;
	v->a[17047] = anon_sym_BANG;
	v->a[17048] = actions(59);
	v->a[17049] = 1;
	v->a[17050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17051] = actions(61);
	v->a[17052] = 1;
	v->a[17053] = anon_sym_DOLLAR;
	v->a[17054] = actions(63);
	v->a[17055] = 1;
	v->a[17056] = anon_sym_DQUOTE;
	v->a[17057] = actions(67);
	v->a[17058] = 1;
	v->a[17059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = actions(69);
	v->a[17061] = 1;
	v->a[17062] = anon_sym_DOLLAR_LPAREN;
	v->a[17063] = actions(71);
	v->a[17064] = 1;
	v->a[17065] = anon_sym_BQUOTE;
	v->a[17066] = actions(73);
	v->a[17067] = 1;
	v->a[17068] = sym_file_descriptor;
	v->a[17069] = actions(75);
	v->a[17070] = 1;
	v->a[17071] = sym_variable_name;
	v->a[17072] = state(37);
	v->a[17073] = 1;
	v->a[17074] = aux_sym__terminated_statement;
	v->a[17075] = state(191);
	v->a[17076] = 1;
	v->a[17077] = sym_command_name;
	v->a[17078] = state(280);
	v->a[17079] = 1;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = sym_variable_assignment;
	v->a[17081] = state(624);
	v->a[17082] = 1;
	v->a[17083] = sym_concatenation;
	v->a[17084] = state(726);
	v->a[17085] = 1;
	v->a[17086] = sym_file_redirect;
	v->a[17087] = state(733);
	v->a[17088] = 1;
	v->a[17089] = aux_sym_command_repeat1;
	v->a[17090] = state(1235);
	v->a[17091] = 1;
	v->a[17092] = sym_pipeline;
	v->a[17093] = state(1307);
	v->a[17094] = 1;
	v->a[17095] = aux_sym_redirected_statement_repeat2;
	v->a[17096] = state(2117);
	v->a[17097] = 1;
	v->a[17098] = sym__statement_not_pipeline;
	v->a[17099] = actions(11);
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
