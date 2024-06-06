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
	v->a[17000] = 9;
	v->a[17001] = anon_sym_BANG;
	v->a[17002] = anon_sym_DASH;
	v->a[17003] = anon_sym_STAR;
	v->a[17004] = anon_sym_QMARK;
	v->a[17005] = anon_sym_DOLLAR;
	v->a[17006] = anon_sym_POUND;
	v->a[17007] = anon_sym_AT;
	v->a[17008] = anon_sym_0;
	v->a[17009] = anon_sym__;
	v->a[17010] = actions(810);
	v->a[17011] = 28;
	v->a[17012] = anon_sym_PIPE;
	v->a[17013] = anon_sym_PIPE_AMP;
	v->a[17014] = anon_sym_AMP_AMP;
	v->a[17015] = anon_sym_PIPE_PIPE;
	v->a[17016] = anon_sym_LT;
	v->a[17017] = anon_sym_GT;
	v->a[17018] = anon_sym_GT_GT;
	v->a[17019] = anon_sym_AMP_GT;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = anon_sym_AMP_GT_GT;
	v->a[17021] = anon_sym_LT_AMP;
	v->a[17022] = anon_sym_GT_AMP;
	v->a[17023] = anon_sym_GT_PIPE;
	v->a[17024] = anon_sym_LT_AMP_DASH;
	v->a[17025] = anon_sym_GT_AMP_DASH;
	v->a[17026] = anon_sym_LT_LT;
	v->a[17027] = anon_sym_LT_LT_DASH;
	v->a[17028] = aux_sym_heredoc_redirect_token1;
	v->a[17029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17030] = sym__special_character;
	v->a[17031] = anon_sym_DQUOTE;
	v->a[17032] = sym_raw_string;
	v->a[17033] = aux_sym_number_token1;
	v->a[17034] = aux_sym_number_token2;
	v->a[17035] = anon_sym_DOLLAR_LBRACE;
	v->a[17036] = anon_sym_DOLLAR_LPAREN;
	v->a[17037] = anon_sym_BQUOTE;
	v->a[17038] = anon_sym_DOLLAR_BQUOTE;
	v->a[17039] = sym_word;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = 6;
	v->a[17041] = actions(3);
	v->a[17042] = 1;
	v->a[17043] = sym_comment;
	v->a[17044] = actions(1806);
	v->a[17045] = 1;
	v->a[17046] = sym_variable_name;
	v->a[17047] = actions(1804);
	v->a[17048] = 2;
	v->a[17049] = aux_sym__simple_variable_name_token1;
	v->a[17050] = aux_sym__multiline_variable_name_token1;
	v->a[17051] = actions(828);
	v->a[17052] = 3;
	v->a[17053] = sym_file_descriptor;
	v->a[17054] = sym_test_operator;
	v->a[17055] = sym__brace_start;
	v->a[17056] = actions(1802);
	v->a[17057] = 9;
	v->a[17058] = anon_sym_BANG;
	v->a[17059] = anon_sym_DASH;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = anon_sym_STAR;
	v->a[17061] = anon_sym_QMARK;
	v->a[17062] = anon_sym_DOLLAR;
	v->a[17063] = anon_sym_POUND;
	v->a[17064] = anon_sym_AT;
	v->a[17065] = anon_sym_0;
	v->a[17066] = anon_sym__;
	v->a[17067] = actions(826);
	v->a[17068] = 28;
	v->a[17069] = anon_sym_PIPE;
	v->a[17070] = anon_sym_PIPE_AMP;
	v->a[17071] = anon_sym_AMP_AMP;
	v->a[17072] = anon_sym_PIPE_PIPE;
	v->a[17073] = anon_sym_LT;
	v->a[17074] = anon_sym_GT;
	v->a[17075] = anon_sym_GT_GT;
	v->a[17076] = anon_sym_AMP_GT;
	v->a[17077] = anon_sym_AMP_GT_GT;
	v->a[17078] = anon_sym_LT_AMP;
	v->a[17079] = anon_sym_GT_AMP;
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = anon_sym_GT_PIPE;
	v->a[17081] = anon_sym_LT_AMP_DASH;
	v->a[17082] = anon_sym_GT_AMP_DASH;
	v->a[17083] = anon_sym_LT_LT;
	v->a[17084] = anon_sym_LT_LT_DASH;
	v->a[17085] = aux_sym_heredoc_redirect_token1;
	v->a[17086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17087] = sym__special_character;
	v->a[17088] = anon_sym_DQUOTE;
	v->a[17089] = sym_raw_string;
	v->a[17090] = aux_sym_number_token1;
	v->a[17091] = aux_sym_number_token2;
	v->a[17092] = anon_sym_DOLLAR_LBRACE;
	v->a[17093] = anon_sym_DOLLAR_LPAREN;
	v->a[17094] = anon_sym_BQUOTE;
	v->a[17095] = anon_sym_DOLLAR_BQUOTE;
	v->a[17096] = sym_word;
	v->a[17097] = 6;
	v->a[17098] = actions(3);
	v->a[17099] = 1;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
