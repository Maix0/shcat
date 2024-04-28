/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3130.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15650(t_small_parse_table_array *v)
{
	v->a[313000] = actions(3);
	v->a[313001] = 1;
	v->a[313002] = sym_comment;
	v->a[313003] = actions(14726);
	v->a[313004] = 1;
	v->a[313005] = anon_sym_in;
	v->a[313006] = actions(14730);
	v->a[313007] = 1;
	v->a[313008] = aux_sym_heredoc_redirect_token1;
	v->a[313009] = actions(14728);
	v->a[313010] = 3;
	v->a[313011] = anon_sym_SEMI;
	v->a[313012] = anon_sym_AMP;
	v->a[313013] = anon_sym_SEMI_SEMI;
	v->a[313014] = 5;
	v->a[313015] = actions(71);
	v->a[313016] = 1;
	v->a[313017] = sym_comment;
	v->a[313018] = actions(14710);
	v->a[313019] = 1;
	small_parse_table_15651(v);
}

void	small_parse_table_15651(t_small_parse_table_array *v)
{
	v->a[313020] = sym__heredoc_body_beginning;
	v->a[313021] = actions(14724);
	v->a[313022] = 1;
	v->a[313023] = sym_simple_heredoc_body;
	v->a[313024] = state(7519);
	v->a[313025] = 1;
	v->a[313026] = sym_heredoc_body;
	v->a[313027] = state(4937);
	v->a[313028] = 2;
	v->a[313029] = sym__heredoc_body;
	v->a[313030] = sym__simple_heredoc_body;
	v->a[313031] = 6;
	v->a[313032] = actions(71);
	v->a[313033] = 1;
	v->a[313034] = sym_comment;
	v->a[313035] = actions(14708);
	v->a[313036] = 1;
	v->a[313037] = sym_simple_heredoc_body;
	v->a[313038] = actions(14710);
	v->a[313039] = 1;
	small_parse_table_15652(v);
}

void	small_parse_table_15652(t_small_parse_table_array *v)
{
	v->a[313040] = sym__heredoc_body_beginning;
	v->a[313041] = state(5112);
	v->a[313042] = 1;
	v->a[313043] = sym__simple_heredoc_body;
	v->a[313044] = state(5120);
	v->a[313045] = 1;
	v->a[313046] = sym__heredoc_body;
	v->a[313047] = state(6796);
	v->a[313048] = 1;
	v->a[313049] = sym_heredoc_body;
	v->a[313050] = 5;
	v->a[313051] = actions(71);
	v->a[313052] = 1;
	v->a[313053] = sym_comment;
	v->a[313054] = actions(14710);
	v->a[313055] = 1;
	v->a[313056] = sym__heredoc_body_beginning;
	v->a[313057] = actions(14722);
	v->a[313058] = 1;
	v->a[313059] = sym_simple_heredoc_body;
	small_parse_table_15653(v);
}

void	small_parse_table_15653(t_small_parse_table_array *v)
{
	v->a[313060] = state(6845);
	v->a[313061] = 1;
	v->a[313062] = sym_heredoc_body;
	v->a[313063] = state(4968);
	v->a[313064] = 2;
	v->a[313065] = sym__heredoc_body;
	v->a[313066] = sym__simple_heredoc_body;
	v->a[313067] = 6;
	v->a[313068] = actions(71);
	v->a[313069] = 1;
	v->a[313070] = sym_comment;
	v->a[313071] = actions(14710);
	v->a[313072] = 1;
	v->a[313073] = sym__heredoc_body_beginning;
	v->a[313074] = actions(14712);
	v->a[313075] = 1;
	v->a[313076] = sym_simple_heredoc_body;
	v->a[313077] = state(5645);
	v->a[313078] = 1;
	v->a[313079] = sym__simple_heredoc_body;
	small_parse_table_15654(v);
}

void	small_parse_table_15654(t_small_parse_table_array *v)
{
	v->a[313080] = state(5646);
	v->a[313081] = 1;
	v->a[313082] = sym__heredoc_body;
	v->a[313083] = state(7466);
	v->a[313084] = 1;
	v->a[313085] = sym_heredoc_body;
	v->a[313086] = 6;
	v->a[313087] = actions(71);
	v->a[313088] = 1;
	v->a[313089] = sym_comment;
	v->a[313090] = actions(689);
	v->a[313091] = 1;
	v->a[313092] = anon_sym_LBRACE;
	v->a[313093] = actions(14732);
	v->a[313094] = 1;
	v->a[313095] = anon_sym_SEMI;
	v->a[313096] = actions(14734);
	v->a[313097] = 1;
	v->a[313098] = anon_sym_do;
	v->a[313099] = state(5061);
	small_parse_table_15655(v);
}

/* EOF small_parse_table_3130.c */
