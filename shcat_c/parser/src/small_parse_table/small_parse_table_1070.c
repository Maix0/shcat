/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1070.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5350(t_small_parse_table_array *v)
{
	v->a[107000] = actions(5826);
	v->a[107001] = 1;
	v->a[107002] = aux_sym_heredoc_redirect_token1;
	v->a[107003] = actions(5828);
	v->a[107004] = 1;
	v->a[107005] = sym_file_descriptor;
	v->a[107006] = actions(6190);
	v->a[107007] = 1;
	v->a[107008] = anon_sym_RPAREN;
	v->a[107009] = actions(5831);
	v->a[107010] = 3;
	v->a[107011] = sym_variable_name;
	v->a[107012] = sym_test_operator;
	v->a[107013] = sym__brace_start;
	v->a[107014] = actions(5821);
	v->a[107015] = 9;
	v->a[107016] = anon_sym_SEMI;
	v->a[107017] = anon_sym_PIPE_PIPE;
	v->a[107018] = anon_sym_AMP_AMP;
	v->a[107019] = anon_sym_PIPE;
	small_parse_table_5351(v);
}

void	small_parse_table_5351(t_small_parse_table_array *v)
{
	v->a[107020] = anon_sym_AMP;
	v->a[107021] = anon_sym_LT_LT;
	v->a[107022] = anon_sym_SEMI_SEMI;
	v->a[107023] = anon_sym_PIPE_AMP;
	v->a[107024] = anon_sym_LT_LT_DASH;
	v->a[107025] = actions(5823);
	v->a[107026] = 11;
	v->a[107027] = anon_sym_LT;
	v->a[107028] = anon_sym_GT;
	v->a[107029] = anon_sym_GT_GT;
	v->a[107030] = anon_sym_AMP_GT;
	v->a[107031] = anon_sym_AMP_GT_GT;
	v->a[107032] = anon_sym_LT_AMP;
	v->a[107033] = anon_sym_GT_AMP;
	v->a[107034] = anon_sym_GT_PIPE;
	v->a[107035] = anon_sym_LT_AMP_DASH;
	v->a[107036] = anon_sym_GT_AMP_DASH;
	v->a[107037] = anon_sym_LT_LT_LT;
	v->a[107038] = actions(5819);
	v->a[107039] = 17;
	small_parse_table_5352(v);
}

void	small_parse_table_5352(t_small_parse_table_array *v)
{
	v->a[107040] = anon_sym_LPAREN_LPAREN;
	v->a[107041] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107042] = anon_sym_DOLLAR_LBRACK;
	v->a[107043] = anon_sym_DOLLAR;
	v->a[107044] = sym__special_character;
	v->a[107045] = anon_sym_DQUOTE;
	v->a[107046] = sym_raw_string;
	v->a[107047] = sym_ansi_c_string;
	v->a[107048] = aux_sym_number_token1;
	v->a[107049] = aux_sym_number_token2;
	v->a[107050] = anon_sym_DOLLAR_LBRACE;
	v->a[107051] = anon_sym_DOLLAR_LPAREN;
	v->a[107052] = anon_sym_BQUOTE;
	v->a[107053] = anon_sym_DOLLAR_BQUOTE;
	v->a[107054] = anon_sym_LT_LPAREN;
	v->a[107055] = anon_sym_GT_LPAREN;
	v->a[107056] = sym_word;
	v->a[107057] = 3;
	v->a[107058] = actions(3);
	v->a[107059] = 1;
	small_parse_table_5353(v);
}

void	small_parse_table_5353(t_small_parse_table_array *v)
{
	v->a[107060] = sym_comment;
	v->a[107061] = actions(1338);
	v->a[107062] = 6;
	v->a[107063] = sym_file_descriptor;
	v->a[107064] = sym__concat;
	v->a[107065] = sym_test_operator;
	v->a[107066] = sym__brace_start;
	v->a[107067] = ts_builtin_sym_end;
	v->a[107068] = aux_sym_heredoc_redirect_token1;
	v->a[107069] = actions(1336);
	v->a[107070] = 37;
	v->a[107071] = anon_sym_LPAREN_LPAREN;
	v->a[107072] = anon_sym_SEMI;
	v->a[107073] = anon_sym_PIPE_PIPE;
	v->a[107074] = anon_sym_AMP_AMP;
	v->a[107075] = anon_sym_PIPE;
	v->a[107076] = anon_sym_AMP;
	v->a[107077] = anon_sym_LT;
	v->a[107078] = anon_sym_GT;
	v->a[107079] = anon_sym_LT_LT;
	small_parse_table_5354(v);
}

void	small_parse_table_5354(t_small_parse_table_array *v)
{
	v->a[107080] = anon_sym_GT_GT;
	v->a[107081] = anon_sym_SEMI_SEMI;
	v->a[107082] = anon_sym_PIPE_AMP;
	v->a[107083] = anon_sym_AMP_GT;
	v->a[107084] = anon_sym_AMP_GT_GT;
	v->a[107085] = anon_sym_LT_AMP;
	v->a[107086] = anon_sym_GT_AMP;
	v->a[107087] = anon_sym_GT_PIPE;
	v->a[107088] = anon_sym_LT_AMP_DASH;
	v->a[107089] = anon_sym_GT_AMP_DASH;
	v->a[107090] = anon_sym_LT_LT_DASH;
	v->a[107091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107092] = anon_sym_DOLLAR_LBRACK;
	v->a[107093] = aux_sym_concatenation_token1;
	v->a[107094] = anon_sym_DOLLAR;
	v->a[107095] = sym__special_character;
	v->a[107096] = anon_sym_DQUOTE;
	v->a[107097] = sym_raw_string;
	v->a[107098] = sym_ansi_c_string;
	v->a[107099] = aux_sym_number_token1;
	small_parse_table_5355(v);
}

/* EOF small_parse_table_1070.c */
