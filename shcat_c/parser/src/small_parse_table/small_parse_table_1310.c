/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1310.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6550(t_small_parse_table_array *v)
{
	v->a[131000] = anon_sym_PIPE;
	v->a[131001] = anon_sym_EQ_EQ;
	v->a[131002] = anon_sym_LT;
	v->a[131003] = anon_sym_GT;
	v->a[131004] = anon_sym_LT_LT;
	v->a[131005] = anon_sym_EQ_TILDE;
	v->a[131006] = anon_sym_AMP_GT;
	v->a[131007] = anon_sym_LT_AMP;
	v->a[131008] = anon_sym_GT_AMP;
	v->a[131009] = anon_sym_DOLLAR;
	v->a[131010] = aux_sym_number_token1;
	v->a[131011] = aux_sym_number_token2;
	v->a[131012] = anon_sym_DOLLAR_LPAREN;
	v->a[131013] = sym_word;
	v->a[131014] = actions(1263);
	v->a[131015] = 26;
	v->a[131016] = sym_file_descriptor;
	v->a[131017] = sym_test_operator;
	v->a[131018] = sym__bare_dollar;
	v->a[131019] = sym__brace_start;
	small_parse_table_6551(v);
}

void	small_parse_table_6551(t_small_parse_table_array *v)
{
	v->a[131020] = anon_sym_LPAREN_LPAREN;
	v->a[131021] = anon_sym_PIPE_PIPE;
	v->a[131022] = anon_sym_AMP_AMP;
	v->a[131023] = anon_sym_GT_GT;
	v->a[131024] = anon_sym_PIPE_AMP;
	v->a[131025] = anon_sym_AMP_GT_GT;
	v->a[131026] = anon_sym_GT_PIPE;
	v->a[131027] = anon_sym_LT_AMP_DASH;
	v->a[131028] = anon_sym_GT_AMP_DASH;
	v->a[131029] = anon_sym_LT_LT_DASH;
	v->a[131030] = anon_sym_LT_LT_LT;
	v->a[131031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131032] = anon_sym_DOLLAR_LBRACK;
	v->a[131033] = sym__special_character;
	v->a[131034] = anon_sym_DQUOTE;
	v->a[131035] = sym_raw_string;
	v->a[131036] = sym_ansi_c_string;
	v->a[131037] = anon_sym_DOLLAR_LBRACE;
	v->a[131038] = anon_sym_BQUOTE;
	v->a[131039] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6552(v);
}

void	small_parse_table_6552(t_small_parse_table_array *v)
{
	v->a[131040] = anon_sym_LT_LPAREN;
	v->a[131041] = anon_sym_GT_LPAREN;
	v->a[131042] = 5;
	v->a[131043] = actions(71);
	v->a[131044] = 1;
	v->a[131045] = sym_comment;
	v->a[131046] = state(2550);
	v->a[131047] = 1;
	v->a[131048] = aux_sym_concatenation_repeat1;
	v->a[131049] = actions(6664);
	v->a[131050] = 2;
	v->a[131051] = sym__concat;
	v->a[131052] = aux_sym_concatenation_token1;
	v->a[131053] = actions(5393);
	v->a[131054] = 13;
	v->a[131055] = anon_sym_PIPE;
	v->a[131056] = anon_sym_LT;
	v->a[131057] = anon_sym_GT;
	v->a[131058] = anon_sym_LT_LT;
	v->a[131059] = anon_sym_AMP_GT;
	small_parse_table_6553(v);
}

void	small_parse_table_6553(t_small_parse_table_array *v)
{
	v->a[131060] = anon_sym_LT_AMP;
	v->a[131061] = anon_sym_GT_AMP;
	v->a[131062] = anon_sym_DOLLAR;
	v->a[131063] = aux_sym_number_token1;
	v->a[131064] = aux_sym_number_token2;
	v->a[131065] = anon_sym_DOLLAR_LPAREN;
	v->a[131066] = anon_sym_BQUOTE;
	v->a[131067] = sym_word;
	v->a[131068] = actions(5395);
	v->a[131069] = 24;
	v->a[131070] = sym_file_descriptor;
	v->a[131071] = sym_test_operator;
	v->a[131072] = sym__brace_start;
	v->a[131073] = anon_sym_LPAREN_LPAREN;
	v->a[131074] = anon_sym_PIPE_PIPE;
	v->a[131075] = anon_sym_AMP_AMP;
	v->a[131076] = anon_sym_GT_GT;
	v->a[131077] = anon_sym_PIPE_AMP;
	v->a[131078] = anon_sym_AMP_GT_GT;
	v->a[131079] = anon_sym_GT_PIPE;
	small_parse_table_6554(v);
}

void	small_parse_table_6554(t_small_parse_table_array *v)
{
	v->a[131080] = anon_sym_LT_AMP_DASH;
	v->a[131081] = anon_sym_GT_AMP_DASH;
	v->a[131082] = anon_sym_LT_LT_DASH;
	v->a[131083] = anon_sym_LT_LT_LT;
	v->a[131084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131085] = anon_sym_DOLLAR_LBRACK;
	v->a[131086] = sym__special_character;
	v->a[131087] = anon_sym_DQUOTE;
	v->a[131088] = sym_raw_string;
	v->a[131089] = sym_ansi_c_string;
	v->a[131090] = anon_sym_DOLLAR_LBRACE;
	v->a[131091] = anon_sym_DOLLAR_BQUOTE;
	v->a[131092] = anon_sym_LT_LPAREN;
	v->a[131093] = anon_sym_GT_LPAREN;
	v->a[131094] = 6;
	v->a[131095] = actions(71);
	v->a[131096] = 1;
	v->a[131097] = sym_comment;
	v->a[131098] = actions(6668);
	v->a[131099] = 1;
	small_parse_table_6555(v);
}

/* EOF small_parse_table_1310.c */
