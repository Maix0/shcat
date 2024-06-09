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
	v->a[17000] = anon_sym_LPAREN;
	v->a[17001] = actions(19);
	v->a[17002] = 1;
	v->a[17003] = anon_sym_LBRACE;
	v->a[17004] = actions(49);
	v->a[17005] = 1;
	v->a[17006] = sym_word;
	v->a[17007] = actions(57);
	v->a[17008] = 1;
	v->a[17009] = anon_sym_BANG;
	v->a[17010] = actions(63);
	v->a[17011] = 1;
	v->a[17012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17013] = actions(65);
	v->a[17014] = 1;
	v->a[17015] = anon_sym_DOLLAR;
	v->a[17016] = actions(67);
	v->a[17017] = 1;
	v->a[17018] = anon_sym_DQUOTE;
	v->a[17019] = actions(69);
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = 1;
	v->a[17021] = sym_raw_string;
	v->a[17022] = actions(71);
	v->a[17023] = 1;
	v->a[17024] = aux_sym_number_token1;
	v->a[17025] = actions(73);
	v->a[17026] = 1;
	v->a[17027] = aux_sym_number_token2;
	v->a[17028] = actions(75);
	v->a[17029] = 1;
	v->a[17030] = anon_sym_DOLLAR_LBRACE;
	v->a[17031] = actions(77);
	v->a[17032] = 1;
	v->a[17033] = anon_sym_DOLLAR_LPAREN;
	v->a[17034] = actions(79);
	v->a[17035] = 1;
	v->a[17036] = anon_sym_BQUOTE;
	v->a[17037] = actions(81);
	v->a[17038] = 1;
	v->a[17039] = sym_file_descriptor;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = actions(83);
	v->a[17041] = 1;
	v->a[17042] = sym_variable_name;
	v->a[17043] = state(51);
	v->a[17044] = 1;
	v->a[17045] = aux_sym__terminated_statement;
	v->a[17046] = state(190);
	v->a[17047] = 1;
	v->a[17048] = sym_command_name;
	v->a[17049] = state(285);
	v->a[17050] = 1;
	v->a[17051] = sym_variable_assignment;
	v->a[17052] = state(582);
	v->a[17053] = 1;
	v->a[17054] = sym_concatenation;
	v->a[17055] = state(587);
	v->a[17056] = 1;
	v->a[17057] = aux_sym_command_repeat1;
	v->a[17058] = state(718);
	v->a[17059] = 1;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = sym_file_redirect;
	v->a[17061] = state(1213);
	v->a[17062] = 1;
	v->a[17063] = aux_sym_redirected_statement_repeat2;
	v->a[17064] = state(1217);
	v->a[17065] = 1;
	v->a[17066] = sym_pipeline;
	v->a[17067] = state(2035);
	v->a[17068] = 1;
	v->a[17069] = sym__statement_not_pipeline;
	v->a[17070] = actions(11);
	v->a[17071] = 2;
	v->a[17072] = anon_sym_while;
	v->a[17073] = anon_sym_until;
	v->a[17074] = actions(61);
	v->a[17075] = 2;
	v->a[17076] = anon_sym_LT_AMP_DASH;
	v->a[17077] = anon_sym_GT_AMP_DASH;
	v->a[17078] = state(397);
	v->a[17079] = 6;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = sym_arithmetic_expansion;
	v->a[17081] = sym_string;
	v->a[17082] = sym_number;
	v->a[17083] = sym_simple_expansion;
	v->a[17084] = sym_expansion;
	v->a[17085] = sym_command_substitution;
	v->a[17086] = actions(59);
	v->a[17087] = 8;
	v->a[17088] = anon_sym_LT;
	v->a[17089] = anon_sym_GT;
	v->a[17090] = anon_sym_GT_GT;
	v->a[17091] = anon_sym_AMP_GT;
	v->a[17092] = anon_sym_AMP_GT_GT;
	v->a[17093] = anon_sym_LT_AMP;
	v->a[17094] = anon_sym_GT_AMP;
	v->a[17095] = anon_sym_GT_PIPE;
	v->a[17096] = state(1121);
	v->a[17097] = 12;
	v->a[17098] = sym_redirected_statement;
	v->a[17099] = sym_for_statement;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
