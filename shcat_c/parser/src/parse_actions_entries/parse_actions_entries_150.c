/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_150.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_750(t_parse_actions_entries_array *v)
{
	v->a[15000] = shift(3056);
	v->a[15001] = entry(1, true);
	v->a[15002] = shift(40);
	v->a[15003] = entry(1, true);
	v->a[15004] = shift(1455);
	v->a[15005] = entry(1, true);
	v->a[15006] = shift(1753);
	v->a[15007] = entry(1, true);
	v->a[15008] = shift(4280);
	v->a[15009] = entry(1, true);
	v->a[15010] = shift(27);
	v->a[15011] = entry(1, true);
	v->a[15012] = shift(22);
	v->a[15013] = entry(1, true);
	v->a[15014] = shift(33);
	v->a[15015] = entry(1, true);
	v->a[15016] = shift(28);
	v->a[15017] = entry(2, true);
	v->a[15018] = reduce(aux_sym_case_item_repeat1, 2, 0, 80);
	v->a[15019] = shift_repeat(3574);
	parse_actions_entries_751(v);
}

void	parse_actions_entries_751(t_parse_actions_entries_array *v)
{
	v->a[15020] = entry(1, true);
	v->a[15021] = reduce(aux_sym_case_item_repeat1, 2, 0, 80);
	v->a[15022] = entry(1, true);
	v->a[15023] = shift(5414);
	v->a[15024] = entry(1, true);
	v->a[15025] = shift(2260);
	v->a[15026] = entry(1, true);
	v->a[15027] = shift(4343);
	v->a[15028] = entry(1, true);
	v->a[15029] = shift(3509);
	v->a[15030] = entry(1, true);
	v->a[15031] = shift(3493);
	v->a[15032] = entry(1, true);
	v->a[15033] = shift(2946);
	v->a[15034] = entry(1, true);
	v->a[15035] = shift(2644);
	v->a[15036] = entry(1, true);
	v->a[15037] = shift(6615);
	v->a[15038] = entry(1, true);
	v->a[15039] = shift(1005);
	parse_actions_entries_752(v);
}

void	parse_actions_entries_752(t_parse_actions_entries_array *v)
{
	v->a[15040] = entry(1, true);
	v->a[15041] = shift(6776);
	v->a[15042] = entry(1, true);
	v->a[15043] = shift(6778);
	v->a[15044] = entry(1, false);
	v->a[15045] = shift(5336);
	v->a[15046] = entry(1, true);
	v->a[15047] = shift(872);
	v->a[15048] = entry(1, true);
	v->a[15049] = shift(515);
	v->a[15050] = entry(1, true);
	v->a[15051] = shift(442);
	v->a[15052] = entry(1, true);
	v->a[15053] = shift(3524);
	v->a[15054] = entry(1, true);
	v->a[15055] = shift(1598);
	v->a[15056] = entry(1, true);
	v->a[15057] = reduce(sym__for_body, 5, 0, 102);
	v->a[15058] = entry(1, true);
	v->a[15059] = shift(3499);
	parse_actions_entries_753(v);
}

void	parse_actions_entries_753(t_parse_actions_entries_array *v)
{
	v->a[15060] = entry(1, false);
	v->a[15061] = shift(5342);
	v->a[15062] = entry(1, true);
	v->a[15063] = shift(2683);
	v->a[15064] = entry(1, true);
	v->a[15065] = shift(2675);
	v->a[15066] = entry(1, true);
	v->a[15067] = shift(1504);
	v->a[15068] = entry(1, true);
	v->a[15069] = shift(1995);
	v->a[15070] = entry(1, true);
	v->a[15071] = shift(1409);
	v->a[15072] = entry(1, true);
	v->a[15073] = reduce(sym__for_body, 5, 0, 101);
	v->a[15074] = entry(1, true);
	v->a[15075] = shift(44);
	v->a[15076] = entry(1, true);
	v->a[15077] = shift(3507);
	v->a[15078] = entry(1, true);
	v->a[15079] = shift(2721);
	parse_actions_entries_754(v);
}

void	parse_actions_entries_754(t_parse_actions_entries_array *v)
{
	v->a[15080] = entry(1, true);
	v->a[15081] = shift(980);
	v->a[15082] = entry(1, true);
	v->a[15083] = reduce(sym__for_body, 5, 0, 100);
	v->a[15084] = entry(1, true);
	v->a[15085] = shift(2504);
	v->a[15086] = entry(1, true);
	v->a[15087] = shift(3489);
	v->a[15088] = entry(1, true);
	v->a[15089] = shift(3526);
	v->a[15090] = entry(1, false);
	v->a[15091] = shift(5343);
	v->a[15092] = entry(1, true);
	v->a[15093] = shift(3530);
	v->a[15094] = entry(1, true);
	v->a[15095] = shift(3311);
	v->a[15096] = entry(1, true);
	v->a[15097] = shift(3189);
	v->a[15098] = entry(1, true);
	v->a[15099] = shift(3514);
	parse_actions_entries_755(v);
}

/* EOF parse_actions_entries_150.c */
