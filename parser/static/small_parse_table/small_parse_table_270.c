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
	v->a[27000] = anon_sym_LT_AMP;
	v->a[27001] = anon_sym_GT_AMP;
	v->a[27002] = anon_sym_GT_PIPE;
	v->a[27003] = anon_sym_LT_AMP_DASH;
	v->a[27004] = anon_sym_GT_AMP_DASH;
	v->a[27005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27006] = anon_sym_DOLLAR;
	v->a[27007] = anon_sym_DQUOTE;
	v->a[27008] = sym_raw_string;
	v->a[27009] = sym_number;
	v->a[27010] = anon_sym_DOLLAR_LBRACE;
	v->a[27011] = anon_sym_DOLLAR_LPAREN;
	v->a[27012] = anon_sym_BQUOTE;
	v->a[27013] = sym_word;
	v->a[27014] = 12;
	v->a[27015] = actions(3);
	v->a[27016] = 1;
	v->a[27017] = sym_comment;
	v->a[27018] = actions(754);
	v->a[27019] = 1;
	small_parse_table_1351(v);
}

void	small_parse_table_1351(t_small_parse_table_array *v)
{
	v->a[27020] = sym_file_descriptor;
	v->a[27021] = actions(879);
	v->a[27022] = 1;
	v->a[27023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27024] = actions(881);
	v->a[27025] = 1;
	v->a[27026] = anon_sym_DOLLAR;
	v->a[27027] = actions(883);
	v->a[27028] = 1;
	v->a[27029] = anon_sym_DQUOTE;
	v->a[27030] = actions(885);
	v->a[27031] = 1;
	v->a[27032] = anon_sym_DOLLAR_LBRACE;
	v->a[27033] = actions(887);
	v->a[27034] = 1;
	v->a[27035] = anon_sym_DOLLAR_LPAREN;
	v->a[27036] = actions(889);
	v->a[27037] = 1;
	v->a[27038] = anon_sym_BQUOTE;
	v->a[27039] = state(1359);
	small_parse_table_1352(v);
}

void	small_parse_table_1352(t_small_parse_table_array *v)
{
	v->a[27040] = 1;
	v->a[27041] = sym_concatenation;
	v->a[27042] = actions(955);
	v->a[27043] = 3;
	v->a[27044] = sym_raw_string;
	v->a[27045] = sym_number;
	v->a[27046] = sym_word;
	v->a[27047] = state(1158);
	v->a[27048] = 5;
	v->a[27049] = sym_arithmetic_expansion;
	v->a[27050] = sym_string;
	v->a[27051] = sym_simple_expansion;
	v->a[27052] = sym_expansion;
	v->a[27053] = sym_command_substitution;
	v->a[27054] = actions(756);
	v->a[27055] = 20;
	v->a[27056] = anon_sym_esac;
	v->a[27057] = anon_sym_PIPE;
	v->a[27058] = anon_sym_SEMI_SEMI;
	v->a[27059] = anon_sym_AMP_AMP;
	small_parse_table_1353(v);
}

void	small_parse_table_1353(t_small_parse_table_array *v)
{
	v->a[27060] = anon_sym_PIPE_PIPE;
	v->a[27061] = anon_sym_LT;
	v->a[27062] = anon_sym_GT;
	v->a[27063] = anon_sym_GT_GT;
	v->a[27064] = anon_sym_AMP_GT;
	v->a[27065] = anon_sym_AMP_GT_GT;
	v->a[27066] = anon_sym_LT_AMP;
	v->a[27067] = anon_sym_GT_AMP;
	v->a[27068] = anon_sym_GT_PIPE;
	v->a[27069] = anon_sym_LT_AMP_DASH;
	v->a[27070] = anon_sym_GT_AMP_DASH;
	v->a[27071] = anon_sym_LT_LT;
	v->a[27072] = anon_sym_LT_LT_DASH;
	v->a[27073] = aux_sym_heredoc_redirect_token1;
	v->a[27074] = anon_sym_AMP;
	v->a[27075] = anon_sym_SEMI;
	v->a[27076] = 6;
	v->a[27077] = actions(3);
	v->a[27078] = 1;
	v->a[27079] = sym_comment;
	small_parse_table_1354(v);
}

void	small_parse_table_1354(t_small_parse_table_array *v)
{
	v->a[27080] = actions(959);
	v->a[27081] = 1;
	v->a[27082] = aux_sym_concatenation_token1;
	v->a[27083] = actions(963);
	v->a[27084] = 1;
	v->a[27085] = sym__concat;
	v->a[27086] = state(293);
	v->a[27087] = 1;
	v->a[27088] = aux_sym_concatenation_repeat1;
	v->a[27089] = actions(961);
	v->a[27090] = 2;
	v->a[27091] = sym_file_descriptor;
	v->a[27092] = sym__bare_dollar;
	v->a[27093] = actions(957);
	v->a[27094] = 30;
	v->a[27095] = anon_sym_LPAREN;
	v->a[27096] = anon_sym_PIPE;
	v->a[27097] = anon_sym_RPAREN;
	v->a[27098] = anon_sym_SEMI_SEMI;
	v->a[27099] = anon_sym_AMP_AMP;
	small_parse_table_1355(v);
}

/* EOF small_parse_table_270.c */
