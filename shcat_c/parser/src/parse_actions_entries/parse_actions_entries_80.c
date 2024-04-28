/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_80.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_400(t_parse_actions_entries_array *v)
{
	v->a[8000] = entry(1, true);
	v->a[8001] = shift(3476);
	v->a[8002] = entry(1, true);
	v->a[8003] = shift(5716);
	v->a[8004] = entry(1, true);
	v->a[8005] = shift(3466);
	v->a[8006] = entry(1, false);
	v->a[8007] = shift(3516);
	v->a[8008] = entry(1, false);
	v->a[8009] = shift(6332);
	v->a[8010] = entry(1, true);
	v->a[8011] = shift(4668);
	v->a[8012] = entry(1, false);
	v->a[8013] = shift(255);
	v->a[8014] = entry(1, true);
	v->a[8015] = shift(256);
	v->a[8016] = entry(1, true);
	v->a[8017] = shift(257);
	v->a[8018] = entry(1, true);
	v->a[8019] = shift(228);
	parse_actions_entries_401(v);
}

void	parse_actions_entries_401(t_parse_actions_entries_array *v)
{
	v->a[8020] = entry(1, false);
	v->a[8021] = shift(3601);
	v->a[8022] = entry(1, true);
	v->a[8023] = shift(3601);
	v->a[8024] = entry(1, true);
	v->a[8025] = shift(3465);
	v->a[8026] = entry(1, true);
	v->a[8027] = shift(7620);
	v->a[8028] = entry(1, false);
	v->a[8029] = shift(6755);
	v->a[8030] = entry(1, false);
	v->a[8031] = shift(6187);
	v->a[8032] = entry(1, false);
	v->a[8033] = shift(6197);
	v->a[8034] = entry(1, false);
	v->a[8035] = shift(5260);
	v->a[8036] = entry(1, true);
	v->a[8037] = shift(6197);
	v->a[8038] = entry(1, true);
	v->a[8039] = reduce(sym__expansion_body, 2, 0, 12);
	parse_actions_entries_402(v);
}

void	parse_actions_entries_402(t_parse_actions_entries_array *v)
{
	v->a[8040] = entry(1, true);
	v->a[8041] = shift(6121);
	v->a[8042] = entry(1, true);
	v->a[8043] = shift(7006);
	v->a[8044] = entry(1, true);
	v->a[8045] = shift(5249);
	v->a[8046] = entry(1, true);
	v->a[8047] = shift(6187);
	v->a[8048] = entry(1, true);
	v->a[8049] = shift(6755);
	v->a[8050] = entry(1, true);
	v->a[8051] = shift(6489);
	v->a[8052] = entry(1, false);
	v->a[8053] = shift(4802);
	v->a[8054] = entry(1, true);
	v->a[8055] = shift(4487);
	v->a[8056] = entry(1, true);
	v->a[8057] = shift(4802);
	v->a[8058] = entry(1, true);
	v->a[8059] = shift(4775);
	parse_actions_entries_403(v);
}

void	parse_actions_entries_403(t_parse_actions_entries_array *v)
{
	v->a[8060] = entry(1, false);
	v->a[8061] = shift(2324);
	v->a[8062] = entry(1, true);
	v->a[8063] = shift(4196);
	v->a[8064] = entry(1, false);
	v->a[8065] = shift(3592);
	v->a[8066] = entry(1, true);
	v->a[8067] = shift(4195);
	v->a[8068] = entry(1, true);
	v->a[8069] = shift(2342);
	v->a[8070] = entry(1, true);
	v->a[8071] = shift(5758);
	v->a[8072] = entry(1, true);
	v->a[8073] = shift(2324);
	v->a[8074] = entry(1, true);
	v->a[8075] = shift(4649);
	v->a[8076] = entry(1, true);
	v->a[8077] = shift(238);
	v->a[8078] = entry(1, true);
	v->a[8079] = shift(241);
	parse_actions_entries_404(v);
}

void	parse_actions_entries_404(t_parse_actions_entries_array *v)
{
	v->a[8080] = entry(1, true);
	v->a[8081] = shift(214);
	v->a[8082] = entry(1, false);
	v->a[8083] = shift(2158);
	v->a[8084] = entry(1, true);
	v->a[8085] = shift(2158);
	v->a[8086] = entry(1, true);
	v->a[8087] = shift(2323);
	v->a[8088] = entry(1, false);
	v->a[8089] = shift(4550);
	v->a[8090] = entry(1, true);
	v->a[8091] = shift(4345);
	v->a[8092] = entry(1, true);
	v->a[8093] = shift(4550);
	v->a[8094] = entry(1, true);
	v->a[8095] = shift(4559);
	v->a[8096] = entry(1, false);
	v->a[8097] = shift(1148);
	v->a[8098] = entry(1, true);
	v->a[8099] = shift(3764);
	parse_actions_entries_405(v);
}

/* EOF parse_actions_entries_80.c */
