/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_270.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1350(t_small_parse_table_array *v)
{
	v->a[27000] = 1;
	v->a[27001] = aux_sym_number_token1;
	v->a[27002] = actions(913);
	v->a[27003] = 1;
	v->a[27004] = aux_sym_number_token2;
	v->a[27005] = actions(915);
	v->a[27006] = 1;
	v->a[27007] = anon_sym_DOLLAR_LBRACE;
	v->a[27008] = actions(917);
	v->a[27009] = 1;
	v->a[27010] = anon_sym_DOLLAR_LPAREN;
	v->a[27011] = actions(919);
	v->a[27012] = 1;
	v->a[27013] = anon_sym_BQUOTE;
	v->a[27014] = state(1105);
	v->a[27015] = 1;
	v->a[27016] = sym_concatenation;
	v->a[27017] = actions(1011);
	v->a[27018] = 2;
	v->a[27019] = sym_raw_string;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = sym_word;
	v->a[27021] = state(1199);
	v->a[27022] = 6;
	v->a[27023] = sym_arithmetic_expansion;
	v->a[27024] = sym_string;
	v->a[27025] = sym_number;
	v->a[27026] = sym_simple_expansion;
	v->a[27027] = sym_expansion;
	v->a[27028] = sym_command_substitution;
	v->a[27029] = actions(748);
	v->a[27030] = 19;
	v->a[27031] = anon_sym_PIPE;
	v->a[27032] = anon_sym_SEMI_SEMI;
	v->a[27033] = anon_sym_AMP_AMP;
	v->a[27034] = anon_sym_PIPE_PIPE;
	v->a[27035] = anon_sym_LT;
	v->a[27036] = anon_sym_GT;
	v->a[27037] = anon_sym_GT_GT;
	v->a[27038] = anon_sym_AMP_GT;
	v->a[27039] = anon_sym_AMP_GT_GT;
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = anon_sym_LT_AMP;
	v->a[27041] = anon_sym_GT_AMP;
	v->a[27042] = anon_sym_GT_PIPE;
	v->a[27043] = anon_sym_LT_AMP_DASH;
	v->a[27044] = anon_sym_GT_AMP_DASH;
	v->a[27045] = anon_sym_LT_LT;
	v->a[27046] = anon_sym_LT_LT_DASH;
	v->a[27047] = aux_sym_heredoc_redirect_token1;
	v->a[27048] = anon_sym_AMP;
	v->a[27049] = anon_sym_SEMI;
	v->a[27050] = 18;
	v->a[27051] = actions(3);
	v->a[27052] = 1;
	v->a[27053] = sym_comment;
	v->a[27054] = actions(373);
	v->a[27055] = 1;
	v->a[27056] = anon_sym_LPAREN;
	v->a[27057] = actions(517);
	v->a[27058] = 1;
	v->a[27059] = sym_file_descriptor;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = actions(1015);
	v->a[27061] = 1;
	v->a[27062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27063] = actions(1017);
	v->a[27064] = 1;
	v->a[27065] = anon_sym_DOLLAR;
	v->a[27066] = actions(1019);
	v->a[27067] = 1;
	v->a[27068] = anon_sym_DQUOTE;
	v->a[27069] = actions(1021);
	v->a[27070] = 1;
	v->a[27071] = aux_sym_number_token1;
	v->a[27072] = actions(1023);
	v->a[27073] = 1;
	v->a[27074] = aux_sym_number_token2;
	v->a[27075] = actions(1025);
	v->a[27076] = 1;
	v->a[27077] = anon_sym_DOLLAR_LBRACE;
	v->a[27078] = actions(1027);
	v->a[27079] = 1;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = anon_sym_DOLLAR_LPAREN;
	v->a[27081] = actions(1029);
	v->a[27082] = 1;
	v->a[27083] = anon_sym_BQUOTE;
	v->a[27084] = actions(1031);
	v->a[27085] = 1;
	v->a[27086] = sym__bare_dollar;
	v->a[27087] = state(373);
	v->a[27088] = 1;
	v->a[27089] = aux_sym_command_repeat2;
	v->a[27090] = state(932);
	v->a[27091] = 1;
	v->a[27092] = sym_concatenation;
	v->a[27093] = state(1517);
	v->a[27094] = 1;
	v->a[27095] = sym_subshell;
	v->a[27096] = actions(1013);
	v->a[27097] = 2;
	v->a[27098] = sym_raw_string;
	v->a[27099] = sym_word;
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
