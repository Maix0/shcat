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
	v->a[17000] = sym_variable_assignments;
	v->a[17001] = 31;
	v->a[17002] = actions(3);
	v->a[17003] = 1;
	v->a[17004] = sym_comment;
	v->a[17005] = actions(9);
	v->a[17006] = 1;
	v->a[17007] = anon_sym_for;
	v->a[17008] = actions(13);
	v->a[17009] = 1;
	v->a[17010] = anon_sym_if;
	v->a[17011] = actions(15);
	v->a[17012] = 1;
	v->a[17013] = anon_sym_case;
	v->a[17014] = actions(17);
	v->a[17015] = 1;
	v->a[17016] = anon_sym_LPAREN;
	v->a[17017] = actions(19);
	v->a[17018] = 1;
	v->a[17019] = anon_sym_LBRACE;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = actions(45);
	v->a[17021] = 1;
	v->a[17022] = sym_word;
	v->a[17023] = actions(53);
	v->a[17024] = 1;
	v->a[17025] = anon_sym_BANG;
	v->a[17026] = actions(59);
	v->a[17027] = 1;
	v->a[17028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17029] = actions(61);
	v->a[17030] = 1;
	v->a[17031] = anon_sym_DOLLAR;
	v->a[17032] = actions(63);
	v->a[17033] = 1;
	v->a[17034] = anon_sym_DQUOTE;
	v->a[17035] = actions(67);
	v->a[17036] = 1;
	v->a[17037] = anon_sym_DOLLAR_LBRACE;
	v->a[17038] = actions(69);
	v->a[17039] = 1;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = anon_sym_DOLLAR_LPAREN;
	v->a[17041] = actions(71);
	v->a[17042] = 1;
	v->a[17043] = anon_sym_BQUOTE;
	v->a[17044] = actions(73);
	v->a[17045] = 1;
	v->a[17046] = sym_file_descriptor;
	v->a[17047] = actions(75);
	v->a[17048] = 1;
	v->a[17049] = sym_variable_name;
	v->a[17050] = state(44);
	v->a[17051] = 1;
	v->a[17052] = aux_sym__terminated_statement;
	v->a[17053] = state(187);
	v->a[17054] = 1;
	v->a[17055] = sym_command_name;
	v->a[17056] = state(274);
	v->a[17057] = 1;
	v->a[17058] = sym_variable_assignment;
	v->a[17059] = state(647);
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = 1;
	v->a[17061] = sym_concatenation;
	v->a[17062] = state(736);
	v->a[17063] = 1;
	v->a[17064] = aux_sym_command_repeat1;
	v->a[17065] = state(738);
	v->a[17066] = 1;
	v->a[17067] = sym_file_redirect;
	v->a[17068] = state(1439);
	v->a[17069] = 1;
	v->a[17070] = sym_pipeline;
	v->a[17071] = state(1460);
	v->a[17072] = 1;
	v->a[17073] = aux_sym_redirected_statement_repeat2;
	v->a[17074] = state(2269);
	v->a[17075] = 1;
	v->a[17076] = sym__statement_not_pipeline;
	v->a[17077] = actions(11);
	v->a[17078] = 2;
	v->a[17079] = anon_sym_while;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = anon_sym_until;
	v->a[17081] = actions(57);
	v->a[17082] = 2;
	v->a[17083] = anon_sym_LT_AMP_DASH;
	v->a[17084] = anon_sym_GT_AMP_DASH;
	v->a[17085] = actions(65);
	v->a[17086] = 2;
	v->a[17087] = sym_raw_string;
	v->a[17088] = sym_number;
	v->a[17089] = state(394);
	v->a[17090] = 5;
	v->a[17091] = sym_arithmetic_expansion;
	v->a[17092] = sym_string;
	v->a[17093] = sym_simple_expansion;
	v->a[17094] = sym_expansion;
	v->a[17095] = sym_command_substitution;
	v->a[17096] = actions(55);
	v->a[17097] = 8;
	v->a[17098] = anon_sym_LT;
	v->a[17099] = anon_sym_GT;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
