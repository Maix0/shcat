/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1440.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7200(t_small_parse_table_array *v)
{
	v->a[144000] = state(2368);
	v->a[144001] = 1;
	v->a[144002] = sym__heredoc_body;
	v->a[144003] = state(2369);
	v->a[144004] = 1;
	v->a[144005] = sym__simple_heredoc_body;
	v->a[144006] = state(3949);
	v->a[144007] = 1;
	v->a[144008] = sym_heredoc_body;
	v->a[144009] = 4;
	v->a[144010] = actions(3);
	v->a[144011] = 1;
	v->a[144012] = sym_comment;
	v->a[144013] = actions(8647);
	v->a[144014] = 1;
	v->a[144015] = anon_sym_in;
	v->a[144016] = actions(8651);
	v->a[144017] = 1;
	v->a[144018] = aux_sym_heredoc_redirect_token1;
	v->a[144019] = actions(8649);
	small_parse_table_7201(v);
}

void	small_parse_table_7201(t_small_parse_table_array *v)
{
	v->a[144020] = 3;
	v->a[144021] = anon_sym_SEMI_SEMI;
	v->a[144022] = anon_sym_AMP;
	v->a[144023] = anon_sym_SEMI;
	v->a[144024] = 5;
	v->a[144025] = actions(57);
	v->a[144026] = 1;
	v->a[144027] = sym_comment;
	v->a[144028] = actions(8637);
	v->a[144029] = 1;
	v->a[144030] = sym__heredoc_body_beginning;
	v->a[144031] = actions(8639);
	v->a[144032] = 1;
	v->a[144033] = sym_simple_heredoc_body;
	v->a[144034] = state(3852);
	v->a[144035] = 1;
	v->a[144036] = sym_heredoc_body;
	v->a[144037] = state(2246);
	v->a[144038] = 2;
	v->a[144039] = sym__heredoc_body;
	small_parse_table_7202(v);
}

void	small_parse_table_7202(t_small_parse_table_array *v)
{
	v->a[144040] = sym__simple_heredoc_body;
	v->a[144041] = 5;
	v->a[144042] = actions(57);
	v->a[144043] = 1;
	v->a[144044] = sym_comment;
	v->a[144045] = actions(8637);
	v->a[144046] = 1;
	v->a[144047] = sym__heredoc_body_beginning;
	v->a[144048] = actions(8639);
	v->a[144049] = 1;
	v->a[144050] = sym_simple_heredoc_body;
	v->a[144051] = state(3852);
	v->a[144052] = 1;
	v->a[144053] = sym_heredoc_body;
	v->a[144054] = state(2302);
	v->a[144055] = 2;
	v->a[144056] = sym__heredoc_body;
	v->a[144057] = sym__simple_heredoc_body;
	v->a[144058] = 5;
	v->a[144059] = actions(57);
	small_parse_table_7203(v);
}

void	small_parse_table_7203(t_small_parse_table_array *v)
{
	v->a[144060] = 1;
	v->a[144061] = sym_comment;
	v->a[144062] = actions(8635);
	v->a[144063] = 1;
	v->a[144064] = sym_simple_heredoc_body;
	v->a[144065] = actions(8637);
	v->a[144066] = 1;
	v->a[144067] = sym__heredoc_body_beginning;
	v->a[144068] = state(3949);
	v->a[144069] = 1;
	v->a[144070] = sym_heredoc_body;
	v->a[144071] = state(2360);
	v->a[144072] = 2;
	v->a[144073] = sym__heredoc_body;
	v->a[144074] = sym__simple_heredoc_body;
	v->a[144075] = 5;
	v->a[144076] = actions(57);
	v->a[144077] = 1;
	v->a[144078] = sym_comment;
	v->a[144079] = actions(8637);
	small_parse_table_7204(v);
}

void	small_parse_table_7204(t_small_parse_table_array *v)
{
	v->a[144080] = 1;
	v->a[144081] = sym__heredoc_body_beginning;
	v->a[144082] = actions(8653);
	v->a[144083] = 1;
	v->a[144084] = sym_simple_heredoc_body;
	v->a[144085] = state(3836);
	v->a[144086] = 1;
	v->a[144087] = sym_heredoc_body;
	v->a[144088] = state(2798);
	v->a[144089] = 2;
	v->a[144090] = sym__heredoc_body;
	v->a[144091] = sym__simple_heredoc_body;
	v->a[144092] = 6;
	v->a[144093] = actions(57);
	v->a[144094] = 1;
	v->a[144095] = sym_comment;
	v->a[144096] = actions(8637);
	v->a[144097] = 1;
	v->a[144098] = sym__heredoc_body_beginning;
	v->a[144099] = actions(8655);
	small_parse_table_7205(v);
}

/* EOF small_parse_table_1440.c */
