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
	v->a[27001] = sym_subshell;
	v->a[27002] = actions(815);
	v->a[27003] = 3;
	v->a[27004] = sym_raw_string;
	v->a[27005] = sym_number;
	v->a[27006] = sym_word;
	v->a[27007] = state(682);
	v->a[27008] = 5;
	v->a[27009] = sym_arithmetic_expansion;
	v->a[27010] = sym_string;
	v->a[27011] = sym_simple_expansion;
	v->a[27012] = sym_expansion;
	v->a[27013] = sym_command_substitution;
	v->a[27014] = actions(471);
	v->a[27015] = 13;
	v->a[27016] = anon_sym_PIPE;
	v->a[27017] = anon_sym_AMP_AMP;
	v->a[27018] = anon_sym_PIPE_PIPE;
	v->a[27019] = anon_sym_LT;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = anon_sym_GT;
	v->a[27021] = anon_sym_GT_GT;
	v->a[27022] = anon_sym_LT_AMP;
	v->a[27023] = anon_sym_GT_AMP;
	v->a[27024] = anon_sym_GT_PIPE;
	v->a[27025] = anon_sym_LT_GT;
	v->a[27026] = anon_sym_LT_LT;
	v->a[27027] = anon_sym_LT_LT_DASH;
	v->a[27028] = aux_sym_heredoc_redirect_token1;
	v->a[27029] = 17;
	v->a[27030] = actions(501);
	v->a[27031] = 1;
	v->a[27032] = sym_comment;
	v->a[27033] = actions(650);
	v->a[27034] = 1;
	v->a[27035] = anon_sym_PIPE;
	v->a[27036] = actions(652);
	v->a[27037] = 1;
	v->a[27038] = anon_sym_AMP_AMP;
	v->a[27039] = actions(654);
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = 1;
	v->a[27041] = anon_sym_PIPE_PIPE;
	v->a[27042] = actions(664);
	v->a[27043] = 1;
	v->a[27044] = anon_sym_CARET;
	v->a[27045] = actions(666);
	v->a[27046] = 1;
	v->a[27047] = anon_sym_AMP;
	v->a[27048] = actions(721);
	v->a[27049] = 1;
	v->a[27050] = anon_sym_QMARK;
	v->a[27051] = actions(723);
	v->a[27052] = 1;
	v->a[27053] = anon_sym_EQ;
	v->a[27054] = actions(994);
	v->a[27055] = 1;
	v->a[27056] = anon_sym_RPAREN_RPAREN;
	v->a[27057] = actions(499);
	v->a[27058] = 2;
	v->a[27059] = anon_sym_PLUS_PLUS2;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = anon_sym_DASH_DASH2;
	v->a[27061] = actions(658);
	v->a[27062] = 2;
	v->a[27063] = anon_sym_LT;
	v->a[27064] = anon_sym_GT;
	v->a[27065] = actions(660);
	v->a[27066] = 2;
	v->a[27067] = anon_sym_GT_GT;
	v->a[27068] = anon_sym_LT_LT;
	v->a[27069] = actions(668);
	v->a[27070] = 2;
	v->a[27071] = anon_sym_EQ_EQ;
	v->a[27072] = anon_sym_BANG_EQ;
	v->a[27073] = actions(670);
	v->a[27074] = 2;
	v->a[27075] = anon_sym_LT_EQ;
	v->a[27076] = anon_sym_GT_EQ;
	v->a[27077] = actions(672);
	v->a[27078] = 2;
	v->a[27079] = anon_sym_PLUS;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = anon_sym_DASH;
	v->a[27081] = actions(674);
	v->a[27082] = 3;
	v->a[27083] = anon_sym_STAR;
	v->a[27084] = anon_sym_SLASH;
	v->a[27085] = anon_sym_PERCENT;
	v->a[27086] = actions(802);
	v->a[27087] = 10;
	v->a[27088] = anon_sym_PLUS_EQ;
	v->a[27089] = anon_sym_DASH_EQ;
	v->a[27090] = anon_sym_STAR_EQ;
	v->a[27091] = anon_sym_SLASH_EQ;
	v->a[27092] = anon_sym_PERCENT_EQ;
	v->a[27093] = anon_sym_LT_LT_EQ;
	v->a[27094] = anon_sym_GT_GT_EQ;
	v->a[27095] = anon_sym_AMP_EQ;
	v->a[27096] = anon_sym_CARET_EQ;
	v->a[27097] = anon_sym_PIPE_EQ;
	v->a[27098] = 17;
	v->a[27099] = actions(501);
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
