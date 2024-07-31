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
	v->a[1000] = shift(1086);
	v->a[1001] = entry(1, true);
	v->a[1002] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1003] = entry(1, false);
	v->a[1004] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1005] = entry(2, false);
	v->a[1006] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1007] = shift_repeat(1102);
	v->a[1008] = entry(2, true);
	v->a[1009] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1010] = shift_repeat(1102);
	v->a[1011] = entry(1, true);
	v->a[1012] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1013] = entry(1, false);
	v->a[1014] = shift(1102);
	v->a[1015] = entry(1, true);
	v->a[1016] = shift(1047);
	v->a[1017] = entry(1, false);
	v->a[1018] = shift(716);
	v->a[1019] = entry(1, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(714);
	v->a[1021] = entry(1, true);
	v->a[1022] = shift(714);
	v->a[1023] = entry(1, true);
	v->a[1024] = reduce(sym_variable_assignment, 3, 0, 16);
	v->a[1025] = entry(1, false);
	v->a[1026] = reduce(sym_variable_assignment, 3, 0, 16);
	v->a[1027] = entry(1, false);
	v->a[1028] = shift(1108);
	v->a[1029] = entry(1, true);
	v->a[1030] = shift(1108);
	v->a[1031] = entry(2, false);
	v->a[1032] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1033] = shift_repeat(1100);
	v->a[1034] = entry(2, true);
	v->a[1035] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1036] = shift_repeat(1100);
	v->a[1037] = entry(1, true);
	v->a[1038] = shift(1106);
	v->a[1039] = entry(2, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1041] = shift_repeat(630);
	v->a[1042] = entry(2, false);
	v->a[1043] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1044] = shift_repeat(773);
	v->a[1045] = entry(2, false);
	v->a[1046] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1047] = shift_repeat(1443);
	v->a[1048] = entry(2, false);
	v->a[1049] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1050] = shift_repeat(1385);
	v->a[1051] = entry(2, false);
	v->a[1052] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1053] = shift_repeat(1384);
	v->a[1054] = entry(2, false);
	v->a[1055] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1056] = shift_repeat(48);
	v->a[1057] = entry(2, false);
	v->a[1058] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1059] = shift_repeat(49);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = entry(2, true);
	v->a[1061] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1062] = shift_repeat(750);
	v->a[1063] = entry(2, false);
	v->a[1064] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1065] = shift_repeat(1064);
	v->a[1066] = entry(2, true);
	v->a[1067] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1068] = shift_repeat(1064);
	v->a[1069] = entry(1, true);
	v->a[1070] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1071] = entry(1, false);
	v->a[1072] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1073] = entry(1, false);
	v->a[1074] = shift(630);
	v->a[1075] = entry(1, true);
	v->a[1076] = shift(750);
	v->a[1077] = entry(1, true);
	v->a[1078] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1079] = entry(1, false);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1081] = entry(1, false);
	v->a[1082] = shift(1799);
	v->a[1083] = entry(1, false);
	v->a[1084] = shift(1757);
	v->a[1085] = entry(1, false);
	v->a[1086] = shift(632);
	v->a[1087] = entry(2, false);
	v->a[1088] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1089] = shift_repeat(1057);
	v->a[1090] = entry(2, true);
	v->a[1091] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1092] = shift_repeat(1057);
	v->a[1093] = entry(1, false);
	v->a[1094] = shift(1057);
	v->a[1095] = entry(1, true);
	v->a[1096] = shift(1071);
	v->a[1097] = entry(1, true);
	v->a[1098] = shift(1126);
	v->a[1099] = entry(1, true);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
