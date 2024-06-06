/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1450.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7250(t_small_parse_table_array *v)
{
	v->a[145000] = 3;
	v->a[145001] = anon_sym_SEMI_SEMI;
	v->a[145002] = anon_sym_AMP;
	v->a[145003] = anon_sym_SEMI;
	v->a[145004] = 6;
	v->a[145005] = actions(57);
	v->a[145006] = 1;
	v->a[145007] = sym_comment;
	v->a[145008] = actions(8637);
	v->a[145009] = 1;
	v->a[145010] = sym__heredoc_body_beginning;
	v->a[145011] = actions(8639);
	v->a[145012] = 1;
	v->a[145013] = sym_simple_heredoc_body;
	v->a[145014] = state(2206);
	v->a[145015] = 1;
	v->a[145016] = sym__simple_heredoc_body;
	v->a[145017] = state(2209);
	v->a[145018] = 1;
	v->a[145019] = sym__heredoc_body;
	small_parse_table_7251(v);
}

void	small_parse_table_7251(t_small_parse_table_array *v)
{
	v->a[145020] = state(3852);
	v->a[145021] = 1;
	v->a[145022] = sym_heredoc_body;
	v->a[145023] = 6;
	v->a[145024] = actions(57);
	v->a[145025] = 1;
	v->a[145026] = sym_comment;
	v->a[145027] = actions(8545);
	v->a[145028] = 1;
	v->a[145029] = anon_sym_PIPE;
	v->a[145030] = actions(8669);
	v->a[145031] = 1;
	v->a[145032] = sym__special_character;
	v->a[145033] = actions(8689);
	v->a[145034] = 1;
	v->a[145035] = anon_sym_RPAREN;
	v->a[145036] = state(3426);
	v->a[145037] = 1;
	v->a[145038] = aux_sym__literal_repeat1;
	v->a[145039] = state(3496);
	small_parse_table_7252(v);
}

void	small_parse_table_7252(t_small_parse_table_array *v)
{
	v->a[145040] = 1;
	v->a[145041] = aux_sym_case_item_repeat1;
	v->a[145042] = 6;
	v->a[145043] = actions(57);
	v->a[145044] = 1;
	v->a[145045] = sym_comment;
	v->a[145046] = actions(8545);
	v->a[145047] = 1;
	v->a[145048] = anon_sym_PIPE;
	v->a[145049] = actions(8669);
	v->a[145050] = 1;
	v->a[145051] = sym__special_character;
	v->a[145052] = actions(8691);
	v->a[145053] = 1;
	v->a[145054] = anon_sym_RPAREN;
	v->a[145055] = state(3426);
	v->a[145056] = 1;
	v->a[145057] = aux_sym__literal_repeat1;
	v->a[145058] = state(3523);
	v->a[145059] = 1;
	small_parse_table_7253(v);
}

void	small_parse_table_7253(t_small_parse_table_array *v)
{
	v->a[145060] = aux_sym_case_item_repeat1;
	v->a[145061] = 4;
	v->a[145062] = actions(57);
	v->a[145063] = 1;
	v->a[145064] = sym_comment;
	v->a[145065] = actions(8693);
	v->a[145066] = 1;
	v->a[145067] = anon_sym_esac;
	v->a[145068] = actions(8695);
	v->a[145069] = 1;
	v->a[145070] = anon_sym_SEMI_SEMI;
	v->a[145071] = actions(8697);
	v->a[145072] = 2;
	v->a[145073] = anon_sym_SEMI_AMP;
	v->a[145074] = anon_sym_SEMI_SEMI_AMP;
	v->a[145075] = 5;
	v->a[145076] = actions(57);
	v->a[145077] = 1;
	v->a[145078] = sym_comment;
	v->a[145079] = actions(8699);
	small_parse_table_7254(v);
}

void	small_parse_table_7254(t_small_parse_table_array *v)
{
	v->a[145080] = 1;
	v->a[145081] = anon_sym_esac;
	v->a[145082] = actions(8701);
	v->a[145083] = 1;
	v->a[145084] = anon_sym_SEMI_SEMI;
	v->a[145085] = actions(8703);
	v->a[145086] = 1;
	v->a[145087] = anon_sym_SEMI_AMP;
	v->a[145088] = actions(8705);
	v->a[145089] = 1;
	v->a[145090] = anon_sym_SEMI_SEMI_AMP;
	v->a[145091] = 2;
	v->a[145092] = actions(57);
	v->a[145093] = 1;
	v->a[145094] = sym_comment;
	v->a[145095] = actions(3050);
	v->a[145096] = 4;
	v->a[145097] = sym__concat;
	v->a[145098] = anon_sym_PIPE;
	v->a[145099] = anon_sym_RPAREN;
	small_parse_table_7255(v);
}

/* EOF small_parse_table_1450.c */
