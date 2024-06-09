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
	v->a[1000] = entry(1, false);
	v->a[1001] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1002] = entry(1, false);
	v->a[1003] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[1004] = entry(1, false);
	v->a[1005] = reduce(sym_list, 3, 0, 22);
	v->a[1006] = entry(1, true);
	v->a[1007] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1008] = entry(2, true);
	v->a[1009] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1010] = shift(2224);
	v->a[1011] = entry(1, false);
	v->a[1012] = shift(1199);
	v->a[1013] = entry(1, false);
	v->a[1014] = shift(800);
	v->a[1015] = entry(1, false);
	v->a[1016] = shift(821);
	v->a[1017] = entry(1, false);
	v->a[1018] = shift(1821);
	v->a[1019] = entry(1, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(1782);
	v->a[1021] = entry(1, false);
	v->a[1022] = shift(845);
	v->a[1023] = entry(1, false);
	v->a[1024] = shift(1971);
	v->a[1025] = entry(1, false);
	v->a[1026] = shift(1700);
	v->a[1027] = entry(1, false);
	v->a[1028] = shift(89);
	v->a[1029] = entry(1, false);
	v->a[1030] = shift(87);
	v->a[1031] = entry(1, true);
	v->a[1032] = shift(932);
	v->a[1033] = entry(1, false);
	v->a[1034] = reduce(sym__statements, 2, 0, 0);
	v->a[1035] = entry(1, false);
	v->a[1036] = shift(146);
	v->a[1037] = entry(1, false);
	v->a[1038] = shift(2178);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = shift(748);
	v->a[1041] = entry(2, true);
	v->a[1042] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1043] = shift(2072);
	v->a[1044] = entry(1, false);
	v->a[1045] = shift(910);
	v->a[1046] = entry(1, false);
	v->a[1047] = shift(925);
	v->a[1048] = entry(1, true);
	v->a[1049] = shift(925);
	v->a[1050] = entry(1, false);
	v->a[1051] = shift(806);
	v->a[1052] = entry(1, false);
	v->a[1053] = shift(866);
	v->a[1054] = entry(1, true);
	v->a[1055] = shift(866);
	v->a[1056] = entry(1, true);
	v->a[1057] = reduce(sym__statements, 1, 0, 0);
	v->a[1058] = entry(1, false);
	v->a[1059] = shift(761);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = entry(1, false);
	v->a[1061] = shift(151);
	v->a[1062] = entry(1, false);
	v->a[1063] = shift(2232);
	v->a[1064] = entry(2, true);
	v->a[1065] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1066] = shift(2067);
	v->a[1067] = entry(1, true);
	v->a[1068] = reduce(sym__statements, 2, 0, 0);
	v->a[1069] = entry(1, false);
	v->a[1070] = shift(767);
	v->a[1071] = entry(1, true);
	v->a[1072] = reduce(sym_list, 3, 0, 22);
	v->a[1073] = entry(1, false);
	v->a[1074] = reduce(sym__statements, 1, 0, 0);
	v->a[1075] = entry(1, false);
	v->a[1076] = shift(715);
	v->a[1077] = entry(1, false);
	v->a[1078] = shift(694);
	v->a[1079] = entry(1, false);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = shift(144);
	v->a[1081] = entry(1, true);
	v->a[1082] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[1083] = entry(1, false);
	v->a[1084] = shift(1208);
	v->a[1085] = entry(1, false);
	v->a[1086] = shift(1075);
	v->a[1087] = entry(1, false);
	v->a[1088] = shift(1056);
	v->a[1089] = entry(1, false);
	v->a[1090] = shift(750);
	v->a[1091] = entry(1, false);
	v->a[1092] = shift(766);
	v->a[1093] = entry(1, false);
	v->a[1094] = shift(150);
	v->a[1095] = entry(2, true);
	v->a[1096] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1097] = shift(2174);
	v->a[1098] = entry(1, false);
	v->a[1099] = shift(1456);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
