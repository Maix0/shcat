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
	v->a[1000] = shift(859);
	v->a[1001] = entry(1, true);
	v->a[1002] = shift(394);
	v->a[1003] = entry(1, true);
	v->a[1004] = shift(948);
	v->a[1005] = entry(1, true);
	v->a[1006] = shift(847);
	v->a[1007] = entry(1, false);
	v->a[1008] = shift(716);
	v->a[1009] = entry(1, true);
	v->a[1010] = shift(916);
	v->a[1011] = entry(1, true);
	v->a[1012] = shift(1191);
	v->a[1013] = entry(1, false);
	v->a[1014] = shift(772);
	v->a[1015] = entry(1, true);
	v->a[1016] = shift(819);
	v->a[1017] = entry(1, true);
	v->a[1018] = shift(322);
	v->a[1019] = entry(1, true);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(406);
	v->a[1021] = entry(1, true);
	v->a[1022] = shift(1862);
	v->a[1023] = entry(1, true);
	v->a[1024] = shift(568);
	v->a[1025] = entry(1, false);
	v->a[1026] = shift(875);
	v->a[1027] = entry(1, false);
	v->a[1028] = shift(874);
	v->a[1029] = entry(1, true);
	v->a[1030] = shift(874);
	v->a[1031] = entry(1, true);
	v->a[1032] = shift(1445);
	v->a[1033] = entry(1, true);
	v->a[1034] = shift(405);
	v->a[1035] = entry(1, false);
	v->a[1036] = shift(886);
	v->a[1037] = entry(1, false);
	v->a[1038] = shift(897);
	v->a[1039] = entry(1, true);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = shift(897);
	v->a[1041] = entry(1, true);
	v->a[1042] = shift(612);
	v->a[1043] = entry(1, false);
	v->a[1044] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1045] = entry(1, false);
	v->a[1046] = shift(1339);
	v->a[1047] = entry(1, true);
	v->a[1048] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1049] = entry(1, true);
	v->a[1050] = shift(1336);
	v->a[1051] = entry(1, false);
	v->a[1052] = shift(1321);
	v->a[1053] = entry(1, true);
	v->a[1054] = shift(1322);
	v->a[1055] = entry(1, true);
	v->a[1056] = reduce(sym_command_name, 1, 0, 0);
	v->a[1057] = entry(1, false);
	v->a[1058] = reduce(sym_command_name, 1, 0, 0);
	v->a[1059] = entry(2, false);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = reduce(sym_command_name, 1, 0, 0);
	v->a[1061] = shift(2109);
	v->a[1062] = entry(1, true);
	v->a[1063] = shift(1321);
	v->a[1064] = entry(1, false);
	v->a[1065] = shift(1573);
	v->a[1066] = entry(1, false);
	v->a[1067] = shift(142);
	v->a[1068] = entry(1, false);
	v->a[1069] = shift(137);
	v->a[1070] = entry(1, false);
	v->a[1071] = shift(1395);
	v->a[1072] = entry(1, false);
	v->a[1073] = shift(1848);
	v->a[1074] = entry(1, false);
	v->a[1075] = shift(747);
	v->a[1076] = entry(1, false);
	v->a[1077] = shift(1622);
	v->a[1078] = entry(1, false);
	v->a[1079] = shift(1623);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = entry(1, false);
	v->a[1081] = shift(1537);
	v->a[1082] = entry(1, false);
	v->a[1083] = shift(76);
	v->a[1084] = entry(1, false);
	v->a[1085] = shift(77);
	v->a[1086] = entry(1, true);
	v->a[1087] = shift(1770);
	v->a[1088] = entry(1, false);
	v->a[1089] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1090] = entry(2, false);
	v->a[1091] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1092] = shift_repeat(1339);
	v->a[1093] = entry(1, true);
	v->a[1094] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1095] = entry(2, true);
	v->a[1096] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1097] = shift_repeat(1339);
	v->a[1098] = entry(1, false);
	v->a[1099] = shift(1815);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
