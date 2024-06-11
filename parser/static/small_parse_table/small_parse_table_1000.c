/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1000.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5000(t_small_parse_table_array *v)
{
	v->a[100000] = sym_simple_heredoc_body;
	v->a[100001] = state(1366);
	v->a[100002] = 1;
	v->a[100003] = sym__heredoc_body;
	v->a[100004] = state(1367);
	v->a[100005] = 1;
	v->a[100006] = sym__simple_heredoc_body;
	v->a[100007] = state(2390);
	v->a[100008] = 1;
	v->a[100009] = sym_heredoc_body;
	v->a[100010] = 6;
	v->a[100011] = actions(1094);
	v->a[100012] = 1;
	v->a[100013] = sym_comment;
	v->a[100014] = actions(4464);
	v->a[100015] = 1;
	v->a[100016] = sym__heredoc_body_beginning;
	v->a[100017] = actions(4470);
	v->a[100018] = 1;
	v->a[100019] = sym_simple_heredoc_body;
	small_parse_table_5001(v);
}

void	small_parse_table_5001(t_small_parse_table_array *v)
{
	v->a[100020] = state(1363);
	v->a[100021] = 1;
	v->a[100022] = sym__heredoc_body;
	v->a[100023] = state(1364);
	v->a[100024] = 1;
	v->a[100025] = sym__simple_heredoc_body;
	v->a[100026] = state(2390);
	v->a[100027] = 1;
	v->a[100028] = sym_heredoc_body;
	v->a[100029] = 6;
	v->a[100030] = actions(1094);
	v->a[100031] = 1;
	v->a[100032] = sym_comment;
	v->a[100033] = actions(4462);
	v->a[100034] = 1;
	v->a[100035] = sym_simple_heredoc_body;
	v->a[100036] = actions(4464);
	v->a[100037] = 1;
	v->a[100038] = sym__heredoc_body_beginning;
	v->a[100039] = state(1473);
	small_parse_table_5002(v);
}

void	small_parse_table_5002(t_small_parse_table_array *v)
{
	v->a[100040] = 1;
	v->a[100041] = sym__simple_heredoc_body;
	v->a[100042] = state(1476);
	v->a[100043] = 1;
	v->a[100044] = sym__heredoc_body;
	v->a[100045] = state(2439);
	v->a[100046] = 1;
	v->a[100047] = sym_heredoc_body;
	v->a[100048] = 2;
	v->a[100049] = actions(1094);
	v->a[100050] = 1;
	v->a[100051] = sym_comment;
	v->a[100052] = actions(1124);
	v->a[100053] = 5;
	v->a[100054] = sym__concat;
	v->a[100055] = anon_sym_PIPE;
	v->a[100056] = anon_sym_RPAREN;
	v->a[100057] = anon_sym_RBRACE;
	v->a[100058] = aux_sym_concatenation_token1;
	v->a[100059] = 5;
	small_parse_table_5003(v);
}

void	small_parse_table_5003(t_small_parse_table_array *v)
{
	v->a[100060] = actions(1094);
	v->a[100061] = 1;
	v->a[100062] = sym_comment;
	v->a[100063] = actions(4464);
	v->a[100064] = 1;
	v->a[100065] = sym__heredoc_body_beginning;
	v->a[100066] = actions(4470);
	v->a[100067] = 1;
	v->a[100068] = sym_simple_heredoc_body;
	v->a[100069] = state(2390);
	v->a[100070] = 1;
	v->a[100071] = sym_heredoc_body;
	v->a[100072] = state(1348);
	v->a[100073] = 2;
	v->a[100074] = sym__heredoc_body;
	v->a[100075] = sym__simple_heredoc_body;
	v->a[100076] = 2;
	v->a[100077] = actions(1094);
	v->a[100078] = 1;
	v->a[100079] = sym_comment;
	small_parse_table_5004(v);
}

void	small_parse_table_5004(t_small_parse_table_array *v)
{
	v->a[100080] = actions(1205);
	v->a[100081] = 5;
	v->a[100082] = sym__concat;
	v->a[100083] = anon_sym_PIPE;
	v->a[100084] = anon_sym_RPAREN;
	v->a[100085] = anon_sym_RBRACE;
	v->a[100086] = aux_sym_concatenation_token1;
	v->a[100087] = 4;
	v->a[100088] = actions(3);
	v->a[100089] = 1;
	v->a[100090] = sym_comment;
	v->a[100091] = actions(4408);
	v->a[100092] = 1;
	v->a[100093] = anon_sym_in;
	v->a[100094] = actions(4412);
	v->a[100095] = 1;
	v->a[100096] = aux_sym_heredoc_redirect_token1;
	v->a[100097] = actions(4410);
	v->a[100098] = 3;
	v->a[100099] = anon_sym_SEMI_SEMI;
	small_parse_table_5005(v);
}

/* EOF small_parse_table_1000.c */
