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
	v->a[27001] = sym_comment;
	v->a[27002] = actions(3246);
	v->a[27003] = 1;
	v->a[27004] = aux_sym_concatenation_token1;
	v->a[27005] = actions(3292);
	v->a[27006] = 1;
	v->a[27007] = sym__concat;
	v->a[27008] = state(625);
	v->a[27009] = 1;
	v->a[27010] = aux_sym_concatenation_repeat1;
	v->a[27011] = actions(2696);
	v->a[27012] = 5;
	v->a[27013] = sym_file_descriptor;
	v->a[27014] = sym_variable_name;
	v->a[27015] = sym_test_operator;
	v->a[27016] = sym__brace_start;
	v->a[27017] = aux_sym_heredoc_redirect_token1;
	v->a[27018] = actions(2694);
	v->a[27019] = 33;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = anon_sym_PIPE;
	v->a[27021] = anon_sym_SEMI_SEMI;
	v->a[27022] = anon_sym_SEMI_AMP;
	v->a[27023] = anon_sym_SEMI_SEMI_AMP;
	v->a[27024] = anon_sym_PIPE_AMP;
	v->a[27025] = anon_sym_AMP_AMP;
	v->a[27026] = anon_sym_PIPE_PIPE;
	v->a[27027] = anon_sym_LT;
	v->a[27028] = anon_sym_GT;
	v->a[27029] = anon_sym_GT_GT;
	v->a[27030] = anon_sym_AMP_GT;
	v->a[27031] = anon_sym_AMP_GT_GT;
	v->a[27032] = anon_sym_LT_AMP;
	v->a[27033] = anon_sym_GT_AMP;
	v->a[27034] = anon_sym_GT_PIPE;
	v->a[27035] = anon_sym_LT_AMP_DASH;
	v->a[27036] = anon_sym_GT_AMP_DASH;
	v->a[27037] = anon_sym_LT_LT;
	v->a[27038] = anon_sym_LT_LT_DASH;
	v->a[27039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = anon_sym_AMP;
	v->a[27041] = anon_sym_DOLLAR;
	v->a[27042] = sym__special_character;
	v->a[27043] = anon_sym_DQUOTE;
	v->a[27044] = sym_raw_string;
	v->a[27045] = aux_sym_number_token1;
	v->a[27046] = aux_sym_number_token2;
	v->a[27047] = anon_sym_DOLLAR_LBRACE;
	v->a[27048] = anon_sym_DOLLAR_LPAREN;
	v->a[27049] = anon_sym_BQUOTE;
	v->a[27050] = anon_sym_DOLLAR_BQUOTE;
	v->a[27051] = sym_word;
	v->a[27052] = anon_sym_SEMI;
	v->a[27053] = 3;
	v->a[27054] = actions(3);
	v->a[27055] = 1;
	v->a[27056] = sym_comment;
	v->a[27057] = actions(3024);
	v->a[27058] = 6;
	v->a[27059] = sym_file_descriptor;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = sym__concat;
	v->a[27061] = sym_test_operator;
	v->a[27062] = sym__bare_dollar;
	v->a[27063] = sym__brace_start;
	v->a[27064] = aux_sym_heredoc_redirect_token1;
	v->a[27065] = actions(3022);
	v->a[27066] = 35;
	v->a[27067] = anon_sym_LPAREN;
	v->a[27068] = anon_sym_PIPE;
	v->a[27069] = anon_sym_SEMI_SEMI;
	v->a[27070] = anon_sym_SEMI_AMP;
	v->a[27071] = anon_sym_SEMI_SEMI_AMP;
	v->a[27072] = anon_sym_PIPE_AMP;
	v->a[27073] = anon_sym_AMP_AMP;
	v->a[27074] = anon_sym_PIPE_PIPE;
	v->a[27075] = anon_sym_LT;
	v->a[27076] = anon_sym_GT;
	v->a[27077] = anon_sym_GT_GT;
	v->a[27078] = anon_sym_AMP_GT;
	v->a[27079] = anon_sym_AMP_GT_GT;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = anon_sym_LT_AMP;
	v->a[27081] = anon_sym_GT_AMP;
	v->a[27082] = anon_sym_GT_PIPE;
	v->a[27083] = anon_sym_LT_AMP_DASH;
	v->a[27084] = anon_sym_GT_AMP_DASH;
	v->a[27085] = anon_sym_LT_LT;
	v->a[27086] = anon_sym_LT_LT_DASH;
	v->a[27087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27088] = anon_sym_AMP;
	v->a[27089] = aux_sym_concatenation_token1;
	v->a[27090] = anon_sym_DOLLAR;
	v->a[27091] = sym__special_character;
	v->a[27092] = anon_sym_DQUOTE;
	v->a[27093] = sym_raw_string;
	v->a[27094] = aux_sym_number_token1;
	v->a[27095] = aux_sym_number_token2;
	v->a[27096] = anon_sym_DOLLAR_LBRACE;
	v->a[27097] = anon_sym_DOLLAR_LPAREN;
	v->a[27098] = anon_sym_BQUOTE;
	v->a[27099] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
