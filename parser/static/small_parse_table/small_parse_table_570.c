/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_570.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2850(t_small_parse_table_array *v)
{
	v->a[57000] = anon_sym_RBRACE;
	v->a[57001] = anon_sym_DQUOTE;
	v->a[57002] = sym_raw_string;
	v->a[57003] = 3;
	v->a[57004] = actions(3);
	v->a[57005] = 1;
	v->a[57006] = sym_comment;
	v->a[57007] = actions(1050);
	v->a[57008] = 2;
	v->a[57009] = sym__concat;
	v->a[57010] = aux_sym_heredoc_redirect_token1;
	v->a[57011] = actions(1052);
	v->a[57012] = 4;
	v->a[57013] = anon_sym_in;
	v->a[57014] = anon_sym_SEMI_SEMI;
	v->a[57015] = aux_sym_concatenation_token1;
	v->a[57016] = anon_sym_SEMI;
	v->a[57017] = 3;
	v->a[57018] = actions(1114);
	v->a[57019] = 1;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = anon_sym_DOLLAR;
	v->a[57021] = actions(1436);
	v->a[57022] = 1;
	v->a[57023] = sym_comment;
	v->a[57024] = actions(1116);
	v->a[57025] = 5;
	v->a[57026] = sym_heredoc_content;
	v->a[57027] = sym_heredoc_end;
	v->a[57028] = anon_sym_DOLLAR_LBRACE;
	v->a[57029] = anon_sym_DOLLAR_LPAREN;
	v->a[57030] = anon_sym_BQUOTE;
	v->a[57031] = 3;
	v->a[57032] = actions(3);
	v->a[57033] = 1;
	v->a[57034] = sym_comment;
	v->a[57035] = actions(1126);
	v->a[57036] = 2;
	v->a[57037] = sym__concat;
	v->a[57038] = aux_sym_heredoc_redirect_token1;
	v->a[57039] = actions(1124);
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = 4;
	v->a[57041] = anon_sym_in;
	v->a[57042] = anon_sym_SEMI_SEMI;
	v->a[57043] = aux_sym_concatenation_token1;
	v->a[57044] = anon_sym_SEMI;
	v->a[57045] = 6;
	v->a[57046] = actions(1436);
	v->a[57047] = 1;
	v->a[57048] = sym_comment;
	v->a[57049] = actions(2930);
	v->a[57050] = 1;
	v->a[57051] = anon_sym_elif;
	v->a[57052] = actions(2932);
	v->a[57053] = 1;
	v->a[57054] = anon_sym_else;
	v->a[57055] = actions(2958);
	v->a[57056] = 1;
	v->a[57057] = anon_sym_fi;
	v->a[57058] = state(1704);
	v->a[57059] = 1;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = sym_else_clause;
	v->a[57061] = state(1503);
	v->a[57062] = 2;
	v->a[57063] = sym_elif_clause;
	v->a[57064] = aux_sym_if_statement_repeat1;
	v->a[57065] = 6;
	v->a[57066] = actions(1436);
	v->a[57067] = 1;
	v->a[57068] = sym_comment;
	v->a[57069] = actions(2960);
	v->a[57070] = 1;
	v->a[57071] = sym_simple_heredoc_body;
	v->a[57072] = actions(2962);
	v->a[57073] = 1;
	v->a[57074] = sym__heredoc_body_beginning;
	v->a[57075] = state(1061);
	v->a[57076] = 1;
	v->a[57077] = sym__simple_heredoc_body;
	v->a[57078] = state(1063);
	v->a[57079] = 1;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = sym__heredoc_body;
	v->a[57081] = state(1664);
	v->a[57082] = 1;
	v->a[57083] = sym_heredoc_body;
	v->a[57084] = 5;
	v->a[57085] = actions(1436);
	v->a[57086] = 1;
	v->a[57087] = sym_comment;
	v->a[57088] = actions(2962);
	v->a[57089] = 1;
	v->a[57090] = sym__heredoc_body_beginning;
	v->a[57091] = actions(2964);
	v->a[57092] = 1;
	v->a[57093] = sym_simple_heredoc_body;
	v->a[57094] = state(1662);
	v->a[57095] = 1;
	v->a[57096] = sym_heredoc_body;
	v->a[57097] = state(1247);
	v->a[57098] = 2;
	v->a[57099] = sym__heredoc_body;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
