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
	v->a[27000] = aux_sym_heredoc_redirect_token1;
	v->a[27001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27002] = anon_sym_DOLLAR;
	v->a[27003] = anon_sym_DQUOTE;
	v->a[27004] = sym_raw_string;
	v->a[27005] = sym_number;
	v->a[27006] = anon_sym_DOLLAR_LBRACE;
	v->a[27007] = anon_sym_DOLLAR_LPAREN;
	v->a[27008] = anon_sym_BQUOTE;
	v->a[27009] = sym_word;
	v->a[27010] = anon_sym_SEMI;
	v->a[27011] = 6;
	v->a[27012] = actions(3);
	v->a[27013] = 1;
	v->a[27014] = sym_comment;
	v->a[27015] = actions(987);
	v->a[27016] = 1;
	v->a[27017] = aux_sym_concatenation_token1;
	v->a[27018] = actions(989);
	v->a[27019] = 1;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = sym__concat;
	v->a[27021] = actions(1077);
	v->a[27022] = 1;
	v->a[27023] = sym__bare_dollar;
	v->a[27024] = state(326);
	v->a[27025] = 1;
	v->a[27026] = aux_sym_concatenation_repeat1;
	v->a[27027] = actions(1079);
	v->a[27028] = 25;
	v->a[27029] = anon_sym_PIPE;
	v->a[27030] = anon_sym_RPAREN;
	v->a[27031] = anon_sym_SEMI_SEMI;
	v->a[27032] = anon_sym_AMP_AMP;
	v->a[27033] = anon_sym_PIPE_PIPE;
	v->a[27034] = anon_sym_LT;
	v->a[27035] = anon_sym_GT;
	v->a[27036] = anon_sym_GT_GT;
	v->a[27037] = anon_sym_LT_AMP;
	v->a[27038] = anon_sym_GT_AMP;
	v->a[27039] = anon_sym_GT_PIPE;
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = anon_sym_LT_GT;
	v->a[27041] = anon_sym_LT_LT;
	v->a[27042] = anon_sym_LT_LT_DASH;
	v->a[27043] = aux_sym_heredoc_redirect_token1;
	v->a[27044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27045] = anon_sym_DOLLAR;
	v->a[27046] = anon_sym_DQUOTE;
	v->a[27047] = sym_raw_string;
	v->a[27048] = sym_number;
	v->a[27049] = anon_sym_DOLLAR_LBRACE;
	v->a[27050] = anon_sym_DOLLAR_LPAREN;
	v->a[27051] = anon_sym_BQUOTE;
	v->a[27052] = sym_word;
	v->a[27053] = anon_sym_SEMI;
	v->a[27054] = 11;
	v->a[27055] = actions(3);
	v->a[27056] = 1;
	v->a[27057] = sym_comment;
	v->a[27058] = actions(886);
	v->a[27059] = 1;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27061] = actions(888);
	v->a[27062] = 1;
	v->a[27063] = anon_sym_DOLLAR;
	v->a[27064] = actions(890);
	v->a[27065] = 1;
	v->a[27066] = anon_sym_DQUOTE;
	v->a[27067] = actions(892);
	v->a[27068] = 1;
	v->a[27069] = anon_sym_DOLLAR_LBRACE;
	v->a[27070] = actions(894);
	v->a[27071] = 1;
	v->a[27072] = anon_sym_DOLLAR_LPAREN;
	v->a[27073] = actions(896);
	v->a[27074] = 1;
	v->a[27075] = anon_sym_BQUOTE;
	v->a[27076] = state(356);
	v->a[27077] = 2;
	v->a[27078] = sym_concatenation;
	v->a[27079] = aux_sym_for_statement_repeat1;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = actions(1085);
	v->a[27081] = 3;
	v->a[27082] = sym_raw_string;
	v->a[27083] = sym_number;
	v->a[27084] = sym_word;
	v->a[27085] = state(632);
	v->a[27086] = 5;
	v->a[27087] = sym_arithmetic_expansion;
	v->a[27088] = sym_string;
	v->a[27089] = sym_simple_expansion;
	v->a[27090] = sym_expansion;
	v->a[27091] = sym_command_substitution;
	v->a[27092] = actions(487);
	v->a[27093] = 13;
	v->a[27094] = anon_sym_PIPE;
	v->a[27095] = anon_sym_AMP_AMP;
	v->a[27096] = anon_sym_PIPE_PIPE;
	v->a[27097] = anon_sym_LT;
	v->a[27098] = anon_sym_GT;
	v->a[27099] = anon_sym_GT_GT;
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
