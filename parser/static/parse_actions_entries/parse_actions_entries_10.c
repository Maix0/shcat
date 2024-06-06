/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_10.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_50(t_parse_actions_entries_array *v)
{
	v->a[1000] = shift_repeat(275);
	v->a[1001] = entry(2, true);
	v->a[1002] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1003] = shift_repeat(566);
	v->a[1004] = entry(2, true);
	v->a[1005] = reduce(aux_sym_unset_command_repeat1, 2, 0, 0);
	v->a[1006] = shift_repeat(4070);
	v->a[1007] = entry(1, false);
	v->a[1008] = shift(656);
	v->a[1009] = entry(1, false);
	v->a[1010] = shift(1768);
	v->a[1011] = entry(1, false);
	v->a[1012] = shift(3175);
	v->a[1013] = entry(1, false);
	v->a[1014] = shift(753);
	v->a[1015] = entry(1, false);
	v->a[1016] = shift(3136);
	v->a[1017] = entry(1, false);
	v->a[1018] = shift(868);
	v->a[1019] = entry(1, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(3308);
	v->a[1021] = entry(1, false);
	v->a[1022] = shift(3128);
	v->a[1023] = entry(1, false);
	v->a[1024] = shift(99);
	v->a[1025] = entry(1, false);
	v->a[1026] = shift(100);
	v->a[1027] = entry(1, false);
	v->a[1028] = shift(103);
	v->a[1029] = entry(1, false);
	v->a[1030] = shift(302);
	v->a[1031] = entry(1, true);
	v->a[1032] = shift(3896);
	v->a[1033] = entry(1, true);
	v->a[1034] = shift(656);
	v->a[1035] = entry(1, true);
	v->a[1036] = shift(4050);
	v->a[1037] = entry(1, false);
	v->a[1038] = shift(566);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = reduce(sym_unset_command, 2, 0, 0);
	v->a[1041] = entry(1, true);
	v->a[1042] = reduce(sym_unset_command, 2, 0, 0);
	v->a[1043] = entry(1, false);
	v->a[1044] = shift(1849);
	v->a[1045] = entry(1, false);
	v->a[1046] = shift(3148);
	v->a[1047] = entry(1, false);
	v->a[1048] = shift(554);
	v->a[1049] = entry(1, false);
	v->a[1050] = shift(3132);
	v->a[1051] = entry(1, false);
	v->a[1052] = shift(680);
	v->a[1053] = entry(1, false);
	v->a[1054] = shift(3267);
	v->a[1055] = entry(1, false);
	v->a[1056] = shift(3116);
	v->a[1057] = entry(1, false);
	v->a[1058] = shift(152);
	v->a[1059] = entry(1, false);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = shift(140);
	v->a[1061] = entry(1, false);
	v->a[1062] = shift(136);
	v->a[1063] = entry(1, false);
	v->a[1064] = shift(275);
	v->a[1065] = entry(1, true);
	v->a[1066] = shift(566);
	v->a[1067] = entry(1, true);
	v->a[1068] = shift(4070);
	v->a[1069] = entry(1, false);
	v->a[1070] = shift(693);
	v->a[1071] = entry(1, false);
	v->a[1072] = shift(1757);
	v->a[1073] = entry(1, false);
	v->a[1074] = shift(3163);
	v->a[1075] = entry(1, false);
	v->a[1076] = shift(671);
	v->a[1077] = entry(1, false);
	v->a[1078] = shift(2990);
	v->a[1079] = entry(1, false);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = shift(857);
	v->a[1081] = entry(1, false);
	v->a[1082] = shift(3276);
	v->a[1083] = entry(1, false);
	v->a[1084] = shift(2996);
	v->a[1085] = entry(1, false);
	v->a[1086] = shift(169);
	v->a[1087] = entry(1, false);
	v->a[1088] = shift(166);
	v->a[1089] = entry(1, false);
	v->a[1090] = shift(163);
	v->a[1091] = entry(1, false);
	v->a[1092] = shift(285);
	v->a[1093] = entry(1, true);
	v->a[1094] = shift(3826);
	v->a[1095] = entry(1, true);
	v->a[1096] = shift(693);
	v->a[1097] = entry(1, true);
	v->a[1098] = shift(4042);
	v->a[1099] = entry(2, false);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
