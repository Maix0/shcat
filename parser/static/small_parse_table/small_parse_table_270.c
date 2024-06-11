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
	v->a[27000] = anon_sym_GT_GT;
	v->a[27001] = anon_sym_AMP_GT;
	v->a[27002] = anon_sym_AMP_GT_GT;
	v->a[27003] = anon_sym_LT_AMP;
	v->a[27004] = anon_sym_GT_AMP;
	v->a[27005] = anon_sym_GT_PIPE;
	v->a[27006] = anon_sym_LT_AMP_DASH;
	v->a[27007] = anon_sym_GT_AMP_DASH;
	v->a[27008] = anon_sym_LT_LT;
	v->a[27009] = anon_sym_LT_LT_DASH;
	v->a[27010] = aux_sym_heredoc_redirect_token1;
	v->a[27011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27012] = anon_sym_AMP;
	v->a[27013] = anon_sym_DOLLAR;
	v->a[27014] = anon_sym_DQUOTE;
	v->a[27015] = sym_raw_string;
	v->a[27016] = sym_number;
	v->a[27017] = anon_sym_DOLLAR_LBRACE;
	v->a[27018] = anon_sym_DOLLAR_LPAREN;
	v->a[27019] = anon_sym_BQUOTE;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = sym_word;
	v->a[27021] = anon_sym_SEMI;
	v->a[27022] = 6;
	v->a[27023] = actions(3);
	v->a[27024] = 1;
	v->a[27025] = sym_comment;
	v->a[27026] = actions(1001);
	v->a[27027] = 1;
	v->a[27028] = aux_sym_concatenation_token1;
	v->a[27029] = actions(1006);
	v->a[27030] = 1;
	v->a[27031] = sym__concat;
	v->a[27032] = state(283);
	v->a[27033] = 1;
	v->a[27034] = aux_sym_concatenation_repeat1;
	v->a[27035] = actions(1004);
	v->a[27036] = 2;
	v->a[27037] = sym_file_descriptor;
	v->a[27038] = sym__bare_dollar;
	v->a[27039] = actions(999);
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = 30;
	v->a[27041] = anon_sym_esac;
	v->a[27042] = anon_sym_LPAREN;
	v->a[27043] = anon_sym_PIPE;
	v->a[27044] = anon_sym_SEMI_SEMI;
	v->a[27045] = anon_sym_AMP_AMP;
	v->a[27046] = anon_sym_PIPE_PIPE;
	v->a[27047] = anon_sym_LT;
	v->a[27048] = anon_sym_GT;
	v->a[27049] = anon_sym_GT_GT;
	v->a[27050] = anon_sym_AMP_GT;
	v->a[27051] = anon_sym_AMP_GT_GT;
	v->a[27052] = anon_sym_LT_AMP;
	v->a[27053] = anon_sym_GT_AMP;
	v->a[27054] = anon_sym_GT_PIPE;
	v->a[27055] = anon_sym_LT_AMP_DASH;
	v->a[27056] = anon_sym_GT_AMP_DASH;
	v->a[27057] = anon_sym_LT_LT;
	v->a[27058] = anon_sym_LT_LT_DASH;
	v->a[27059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27061] = anon_sym_AMP;
	v->a[27062] = anon_sym_DOLLAR;
	v->a[27063] = anon_sym_DQUOTE;
	v->a[27064] = sym_raw_string;
	v->a[27065] = sym_number;
	v->a[27066] = anon_sym_DOLLAR_LBRACE;
	v->a[27067] = anon_sym_DOLLAR_LPAREN;
	v->a[27068] = anon_sym_BQUOTE;
	v->a[27069] = sym_word;
	v->a[27070] = anon_sym_SEMI;
	v->a[27071] = 16;
	v->a[27072] = actions(3);
	v->a[27073] = 1;
	v->a[27074] = sym_comment;
	v->a[27075] = actions(335);
	v->a[27076] = 1;
	v->a[27077] = anon_sym_LPAREN;
	v->a[27078] = actions(471);
	v->a[27079] = 1;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = sym_file_descriptor;
	v->a[27081] = actions(1011);
	v->a[27082] = 1;
	v->a[27083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27084] = actions(1013);
	v->a[27085] = 1;
	v->a[27086] = anon_sym_DOLLAR;
	v->a[27087] = actions(1015);
	v->a[27088] = 1;
	v->a[27089] = anon_sym_DQUOTE;
	v->a[27090] = actions(1017);
	v->a[27091] = 1;
	v->a[27092] = anon_sym_DOLLAR_LBRACE;
	v->a[27093] = actions(1019);
	v->a[27094] = 1;
	v->a[27095] = anon_sym_DOLLAR_LPAREN;
	v->a[27096] = actions(1021);
	v->a[27097] = 1;
	v->a[27098] = anon_sym_BQUOTE;
	v->a[27099] = actions(1023);
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
