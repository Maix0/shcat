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
	v->a[27000] = actions(682);
	v->a[27001] = 1;
	v->a[27002] = anon_sym_PIPE;
	v->a[27003] = actions(690);
	v->a[27004] = 1;
	v->a[27005] = sym_file_descriptor;
	v->a[27006] = actions(926);
	v->a[27007] = 1;
	v->a[27008] = sym_variable_name;
	v->a[27009] = state(773);
	v->a[27010] = 1;
	v->a[27011] = sym_terminator;
	v->a[27012] = actions(754);
	v->a[27013] = 2;
	v->a[27014] = anon_sym_LT_LT;
	v->a[27015] = anon_sym_LT_LT_DASH;
	v->a[27016] = actions(924);
	v->a[27017] = 2;
	v->a[27018] = anon_sym_AMP_AMP;
	v->a[27019] = anon_sym_PIPE_PIPE;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = state(1298);
	v->a[27021] = 2;
	v->a[27022] = sym_variable_assignment;
	v->a[27023] = aux_sym__variable_assignments_repeat1;
	v->a[27024] = state(1268);
	v->a[27025] = 3;
	v->a[27026] = sym_file_redirect;
	v->a[27027] = sym_heredoc_redirect;
	v->a[27028] = aux_sym_redirected_statement_repeat1;
	v->a[27029] = actions(1029);
	v->a[27030] = 4;
	v->a[27031] = anon_sym_SEMI_SEMI;
	v->a[27032] = aux_sym_heredoc_redirect_token1;
	v->a[27033] = anon_sym_AMP;
	v->a[27034] = anon_sym_SEMI;
	v->a[27035] = actions(678);
	v->a[27036] = 17;
	v->a[27037] = anon_sym_LT;
	v->a[27038] = anon_sym_GT;
	v->a[27039] = anon_sym_GT_GT;
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = anon_sym_LT_AMP;
	v->a[27041] = anon_sym_GT_AMP;
	v->a[27042] = anon_sym_GT_PIPE;
	v->a[27043] = anon_sym_LT_AMP_DASH;
	v->a[27044] = anon_sym_GT_AMP_DASH;
	v->a[27045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27046] = anon_sym_DOLLAR;
	v->a[27047] = anon_sym_DQUOTE;
	v->a[27048] = sym_raw_string;
	v->a[27049] = sym_number;
	v->a[27050] = anon_sym_DOLLAR_LBRACE;
	v->a[27051] = anon_sym_DOLLAR_LPAREN;
	v->a[27052] = anon_sym_BQUOTE;
	v->a[27053] = sym_word;
	v->a[27054] = 12;
	v->a[27055] = actions(3);
	v->a[27056] = 1;
	v->a[27057] = sym_comment;
	v->a[27058] = actions(680);
	v->a[27059] = 1;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = anon_sym_BQUOTE;
	v->a[27061] = actions(682);
	v->a[27062] = 1;
	v->a[27063] = anon_sym_PIPE;
	v->a[27064] = actions(690);
	v->a[27065] = 1;
	v->a[27066] = sym_file_descriptor;
	v->a[27067] = actions(965);
	v->a[27068] = 1;
	v->a[27069] = sym_variable_name;
	v->a[27070] = state(871);
	v->a[27071] = 1;
	v->a[27072] = sym_terminator;
	v->a[27073] = actions(754);
	v->a[27074] = 2;
	v->a[27075] = anon_sym_LT_LT;
	v->a[27076] = anon_sym_LT_LT_DASH;
	v->a[27077] = actions(963);
	v->a[27078] = 2;
	v->a[27079] = anon_sym_AMP_AMP;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = anon_sym_PIPE_PIPE;
	v->a[27081] = state(1181);
	v->a[27082] = 2;
	v->a[27083] = sym_variable_assignment;
	v->a[27084] = aux_sym__variable_assignments_repeat1;
	v->a[27085] = state(1165);
	v->a[27086] = 3;
	v->a[27087] = sym_file_redirect;
	v->a[27088] = sym_heredoc_redirect;
	v->a[27089] = aux_sym_redirected_statement_repeat1;
	v->a[27090] = actions(750);
	v->a[27091] = 4;
	v->a[27092] = anon_sym_SEMI_SEMI;
	v->a[27093] = aux_sym_heredoc_redirect_token1;
	v->a[27094] = anon_sym_AMP;
	v->a[27095] = anon_sym_SEMI;
	v->a[27096] = actions(678);
	v->a[27097] = 16;
	v->a[27098] = anon_sym_LT;
	v->a[27099] = anon_sym_GT;
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
