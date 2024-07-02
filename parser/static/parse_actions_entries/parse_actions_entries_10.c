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
	v->a[1000] = shift(919);
	v->a[1001] = entry(1, true);
	v->a[1002] = shift(408);
	v->a[1003] = entry(1, true);
	v->a[1004] = shift(1870);
	v->a[1005] = entry(1, true);
	v->a[1006] = shift(332);
	v->a[1007] = entry(1, false);
	v->a[1008] = shift(790);
	v->a[1009] = entry(1, true);
	v->a[1010] = shift(787);
	v->a[1011] = entry(1, true);
	v->a[1012] = shift(840);
	v->a[1013] = entry(1, true);
	v->a[1014] = shift(600);
	v->a[1015] = entry(1, true);
	v->a[1016] = shift(1457);
	v->a[1017] = entry(1, true);
	v->a[1018] = shift(216);
	v->a[1019] = entry(1, true);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(582);
	v->a[1021] = entry(1, true);
	v->a[1022] = shift(1145);
	v->a[1023] = entry(1, true);
	v->a[1024] = shift(556);
	v->a[1025] = entry(1, true);
	v->a[1026] = shift(415);
	v->a[1027] = entry(1, true);
	v->a[1028] = shift(786);
	v->a[1029] = entry(1, true);
	v->a[1030] = shift(498);
	v->a[1031] = entry(1, true);
	v->a[1032] = shift(1746);
	v->a[1033] = entry(1, false);
	v->a[1034] = shift(755);
	v->a[1035] = entry(1, false);
	v->a[1036] = shift(718);
	v->a[1037] = entry(1, true);
	v->a[1038] = shift(495);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = shift(566);
	v->a[1041] = entry(1, true);
	v->a[1042] = shift(1766);
	v->a[1043] = entry(1, true);
	v->a[1044] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1045] = entry(1, false);
	v->a[1046] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1047] = entry(1, false);
	v->a[1048] = shift(1289);
	v->a[1049] = entry(1, true);
	v->a[1050] = shift(1285);
	v->a[1051] = entry(1, true);
	v->a[1052] = reduce(sym_command_name, 1, 0, 0);
	v->a[1053] = entry(1, false);
	v->a[1054] = reduce(sym_command_name, 1, 0, 0);
	v->a[1055] = entry(1, true);
	v->a[1056] = shift(1289);
	v->a[1057] = entry(1, false);
	v->a[1058] = shift(1589);
	v->a[1059] = entry(1, false);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = shift(139);
	v->a[1061] = entry(1, false);
	v->a[1062] = shift(142);
	v->a[1063] = entry(1, false);
	v->a[1064] = shift(1380);
	v->a[1065] = entry(1, false);
	v->a[1066] = shift(1817);
	v->a[1067] = entry(1, false);
	v->a[1068] = shift(739);
	v->a[1069] = entry(1, false);
	v->a[1070] = shift(1643);
	v->a[1071] = entry(1, false);
	v->a[1072] = shift(1644);
	v->a[1073] = entry(1, false);
	v->a[1074] = shift(1611);
	v->a[1075] = entry(1, false);
	v->a[1076] = shift(85);
	v->a[1077] = entry(1, false);
	v->a[1078] = shift(89);
	v->a[1079] = entry(1, true);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = shift(1774);
	v->a[1081] = entry(1, false);
	v->a[1082] = shift(1352);
	v->a[1083] = entry(1, true);
	v->a[1084] = shift(1352);
	v->a[1085] = entry(1, false);
	v->a[1086] = shift(1326);
	v->a[1087] = entry(1, true);
	v->a[1088] = shift(1326);
	v->a[1089] = entry(2, false);
	v->a[1090] = reduce(sym_command_name, 1, 0, 0);
	v->a[1091] = shift(2071);
	v->a[1092] = entry(1, true);
	v->a[1093] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1094] = entry(1, false);
	v->a[1095] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1096] = entry(2, false);
	v->a[1097] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1098] = shift_repeat(1289);
	v->a[1099] = entry(2, true);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
