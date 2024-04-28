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
	v->a[17000] = actions(3335);
	v->a[17001] = 2;
	v->a[17002] = anon_sym_LPAREN_LPAREN;
	v->a[17003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17004] = actions(3355);
	v->a[17005] = 2;
	v->a[17006] = anon_sym_LT_LPAREN;
	v->a[17007] = anon_sym_GT_LPAREN;
	v->a[17008] = state(660);
	v->a[17009] = 2;
	v->a[17010] = sym_concatenation;
	v->a[17011] = aux_sym_for_statement_repeat1;
	v->a[17012] = actions(3333);
	v->a[17013] = 3;
	v->a[17014] = sym_raw_string;
	v->a[17015] = sym_ansi_c_string;
	v->a[17016] = sym_word;
	v->a[17017] = state(1526);
	v->a[17018] = 9;
	v->a[17019] = sym_arithmetic_expansion;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = sym_brace_expression;
	v->a[17021] = sym_string;
	v->a[17022] = sym_translated_string;
	v->a[17023] = sym_number;
	v->a[17024] = sym_simple_expansion;
	v->a[17025] = sym_expansion;
	v->a[17026] = sym_command_substitution;
	v->a[17027] = sym_process_substitution;
	v->a[17028] = actions(2094);
	v->a[17029] = 21;
	v->a[17030] = anon_sym_SEMI;
	v->a[17031] = anon_sym_PIPE_PIPE;
	v->a[17032] = anon_sym_AMP_AMP;
	v->a[17033] = anon_sym_PIPE;
	v->a[17034] = anon_sym_AMP;
	v->a[17035] = anon_sym_LT;
	v->a[17036] = anon_sym_GT;
	v->a[17037] = anon_sym_LT_LT;
	v->a[17038] = anon_sym_GT_GT;
	v->a[17039] = anon_sym_SEMI_SEMI;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = anon_sym_SEMI_AMP;
	v->a[17041] = anon_sym_SEMI_SEMI_AMP;
	v->a[17042] = anon_sym_PIPE_AMP;
	v->a[17043] = anon_sym_AMP_GT;
	v->a[17044] = anon_sym_AMP_GT_GT;
	v->a[17045] = anon_sym_LT_AMP;
	v->a[17046] = anon_sym_GT_AMP;
	v->a[17047] = anon_sym_GT_PIPE;
	v->a[17048] = anon_sym_LT_AMP_DASH;
	v->a[17049] = anon_sym_GT_AMP_DASH;
	v->a[17050] = anon_sym_LT_LT_DASH;
	v->a[17051] = 6;
	v->a[17052] = actions(3);
	v->a[17053] = 1;
	v->a[17054] = sym_comment;
	v->a[17055] = state(1740);
	v->a[17056] = 1;
	v->a[17057] = aux_sym__literal_repeat1;
	v->a[17058] = state(1957);
	v->a[17059] = 1;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = sym_concatenation;
	v->a[17061] = actions(2500);
	v->a[17062] = 5;
	v->a[17063] = sym_file_descriptor;
	v->a[17064] = sym_variable_name;
	v->a[17065] = sym_test_operator;
	v->a[17066] = sym__brace_start;
	v->a[17067] = aux_sym_heredoc_redirect_token1;
	v->a[17068] = state(1336);
	v->a[17069] = 9;
	v->a[17070] = sym_arithmetic_expansion;
	v->a[17071] = sym_brace_expression;
	v->a[17072] = sym_string;
	v->a[17073] = sym_translated_string;
	v->a[17074] = sym_number;
	v->a[17075] = sym_simple_expansion;
	v->a[17076] = sym_expansion;
	v->a[17077] = sym_command_substitution;
	v->a[17078] = sym_process_substitution;
	v->a[17079] = actions(2498);
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = 38;
	v->a[17081] = anon_sym_LPAREN_LPAREN;
	v->a[17082] = anon_sym_SEMI;
	v->a[17083] = anon_sym_PIPE_PIPE;
	v->a[17084] = anon_sym_AMP_AMP;
	v->a[17085] = anon_sym_PIPE;
	v->a[17086] = anon_sym_AMP;
	v->a[17087] = anon_sym_LT;
	v->a[17088] = anon_sym_GT;
	v->a[17089] = anon_sym_LT_LT;
	v->a[17090] = anon_sym_GT_GT;
	v->a[17091] = anon_sym_RPAREN;
	v->a[17092] = anon_sym_SEMI_SEMI;
	v->a[17093] = anon_sym_PIPE_AMP;
	v->a[17094] = anon_sym_AMP_GT;
	v->a[17095] = anon_sym_AMP_GT_GT;
	v->a[17096] = anon_sym_LT_AMP;
	v->a[17097] = anon_sym_GT_AMP;
	v->a[17098] = anon_sym_GT_PIPE;
	v->a[17099] = anon_sym_LT_AMP_DASH;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
