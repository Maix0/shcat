/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_430.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2150(t_small_parse_table_array *v)
{
	v->a[43000] = 1;
	v->a[43001] = sym_file_descriptor;
	v->a[43002] = actions(1524);
	v->a[43003] = 1;
	v->a[43004] = sym_variable_name;
	v->a[43005] = state(1382);
	v->a[43006] = 2;
	v->a[43007] = sym_variable_assignment;
	v->a[43008] = aux_sym__variable_assignments_repeat1;
	v->a[43009] = state(1384);
	v->a[43010] = 3;
	v->a[43011] = sym_file_redirect;
	v->a[43012] = sym_heredoc_redirect;
	v->a[43013] = aux_sym_redirected_statement_repeat1;
	v->a[43014] = actions(960);
	v->a[43015] = 4;
	v->a[43016] = anon_sym_AMP_AMP;
	v->a[43017] = anon_sym_PIPE_PIPE;
	v->a[43018] = anon_sym_LT_LT;
	v->a[43019] = anon_sym_LT_LT_DASH;
	small_parse_table_2151(v);
}

void	small_parse_table_2151(t_small_parse_table_array *v)
{
	v->a[43020] = actions(734);
	v->a[43021] = 16;
	v->a[43022] = anon_sym_LT;
	v->a[43023] = anon_sym_GT;
	v->a[43024] = anon_sym_GT_GT;
	v->a[43025] = anon_sym_LT_AMP;
	v->a[43026] = anon_sym_GT_AMP;
	v->a[43027] = anon_sym_GT_PIPE;
	v->a[43028] = anon_sym_LT_GT;
	v->a[43029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43030] = anon_sym_DOLLAR;
	v->a[43031] = anon_sym_DQUOTE;
	v->a[43032] = sym_raw_string;
	v->a[43033] = sym_number;
	v->a[43034] = anon_sym_DOLLAR_LBRACE;
	v->a[43035] = anon_sym_DOLLAR_LPAREN;
	v->a[43036] = anon_sym_BQUOTE;
	v->a[43037] = sym_word;
	v->a[43038] = 4;
	v->a[43039] = actions(3);
	small_parse_table_2152(v);
}

void	small_parse_table_2152(t_small_parse_table_array *v)
{
	v->a[43040] = 1;
	v->a[43041] = sym_comment;
	v->a[43042] = actions(1439);
	v->a[43043] = 2;
	v->a[43044] = anon_sym_RPAREN;
	v->a[43045] = anon_sym_SEMI_SEMI;
	v->a[43046] = actions(1441);
	v->a[43047] = 2;
	v->a[43048] = sym_file_descriptor;
	v->a[43049] = sym_variable_name;
	v->a[43050] = actions(1437);
	v->a[43051] = 24;
	v->a[43052] = anon_sym_for;
	v->a[43053] = anon_sym_while;
	v->a[43054] = anon_sym_until;
	v->a[43055] = anon_sym_if;
	v->a[43056] = anon_sym_case;
	v->a[43057] = anon_sym_LPAREN;
	v->a[43058] = anon_sym_LBRACE;
	v->a[43059] = anon_sym_BANG;
	small_parse_table_2153(v);
}

void	small_parse_table_2153(t_small_parse_table_array *v)
{
	v->a[43060] = anon_sym_LT;
	v->a[43061] = anon_sym_GT;
	v->a[43062] = anon_sym_GT_GT;
	v->a[43063] = anon_sym_LT_AMP;
	v->a[43064] = anon_sym_GT_AMP;
	v->a[43065] = anon_sym_GT_PIPE;
	v->a[43066] = anon_sym_LT_GT;
	v->a[43067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43068] = anon_sym_DOLLAR;
	v->a[43069] = anon_sym_DQUOTE;
	v->a[43070] = sym_raw_string;
	v->a[43071] = sym_number;
	v->a[43072] = anon_sym_DOLLAR_LBRACE;
	v->a[43073] = anon_sym_DOLLAR_LPAREN;
	v->a[43074] = anon_sym_BQUOTE;
	v->a[43075] = sym_word;
	v->a[43076] = 7;
	v->a[43077] = actions(3);
	v->a[43078] = 1;
	v->a[43079] = sym_comment;
	small_parse_table_2154(v);
}

void	small_parse_table_2154(t_small_parse_table_array *v)
{
	v->a[43080] = actions(1432);
	v->a[43081] = 1;
	v->a[43082] = sym_file_descriptor;
	v->a[43083] = actions(1435);
	v->a[43084] = 1;
	v->a[43085] = sym_variable_name;
	v->a[43086] = actions(1527);
	v->a[43087] = 1;
	v->a[43088] = anon_sym_RPAREN;
	v->a[43089] = actions(1429);
	v->a[43090] = 7;
	v->a[43091] = anon_sym_LT;
	v->a[43092] = anon_sym_GT;
	v->a[43093] = anon_sym_GT_GT;
	v->a[43094] = anon_sym_LT_AMP;
	v->a[43095] = anon_sym_GT_AMP;
	v->a[43096] = anon_sym_GT_PIPE;
	v->a[43097] = anon_sym_LT_GT;
	v->a[43098] = actions(1422);
	v->a[43099] = 9;
	small_parse_table_2155(v);
}

/* EOF small_parse_table_430.c */
