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
	v->a[1000] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1001] = entry(2, false);
	v->a[1002] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1003] = shift_repeat(1623);
	v->a[1004] = entry(1, true);
	v->a[1005] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1006] = entry(2, true);
	v->a[1007] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1008] = shift_repeat(1623);
	v->a[1009] = entry(1, false);
	v->a[1010] = shift(951);
	v->a[1011] = entry(1, false);
	v->a[1012] = shift(1060);
	v->a[1013] = entry(1, false);
	v->a[1014] = shift(2063);
	v->a[1015] = entry(1, false);
	v->a[1016] = shift(2062);
	v->a[1017] = entry(1, false);
	v->a[1018] = shift(1919);
	v->a[1019] = entry(1, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = shift(104);
	v->a[1021] = entry(1, false);
	v->a[1022] = shift(105);
	v->a[1023] = entry(1, true);
	v->a[1024] = shift(1109);
	v->a[1025] = entry(2, false);
	v->a[1026] = reduce(sym_command_name, 1, 0, 0);
	v->a[1027] = shift(2404);
	v->a[1028] = entry(1, true);
	v->a[1029] = shift(1621);
	v->a[1030] = entry(1, false);
	v->a[1031] = shift(954);
	v->a[1032] = entry(1, false);
	v->a[1033] = shift(150);
	v->a[1034] = entry(2, true);
	v->a[1035] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1036] = shift(2451);
	v->a[1037] = entry(1, false);
	v->a[1038] = shift(1250);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = shift(645);
	v->a[1041] = entry(1, false);
	v->a[1042] = shift(897);
	v->a[1043] = entry(1, false);
	v->a[1044] = shift(1247);
	v->a[1045] = entry(2, false);
	v->a[1046] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1047] = shift_repeat(1621);
	v->a[1048] = entry(2, true);
	v->a[1049] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1050] = shift_repeat(1621);
	v->a[1051] = entry(1, true);
	v->a[1052] = shift(1687);
	v->a[1053] = entry(1, false);
	v->a[1054] = shift(961);
	v->a[1055] = entry(2, false);
	v->a[1056] = reduce(sym_command_name, 1, 0, 0);
	v->a[1057] = shift(2324);
	v->a[1058] = entry(1, false);
	v->a[1059] = shift(911);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = entry(1, false);
	v->a[1061] = shift(942);
	v->a[1062] = entry(1, false);
	v->a[1063] = shift(944);
	v->a[1064] = entry(1, false);
	v->a[1065] = shift(945);
	v->a[1066] = entry(1, false);
	v->a[1067] = shift(946);
	v->a[1068] = entry(2, false);
	v->a[1069] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1070] = shift_repeat(1614);
	v->a[1071] = entry(2, true);
	v->a[1072] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1073] = shift_repeat(1614);
	v->a[1074] = entry(1, false);
	v->a[1075] = reduce(sym_command_substitution, 3, 0, 22);
	v->a[1076] = entry(1, true);
	v->a[1077] = reduce(sym_command_substitution, 3, 0, 22);
	v->a[1078] = entry(1, false);
	v->a[1079] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = entry(1, true);
	v->a[1081] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	v->a[1082] = entry(1, false);
	v->a[1083] = shift(1116);
	v->a[1084] = entry(1, false);
	v->a[1085] = shift(1123);
	v->a[1086] = entry(1, true);
	v->a[1087] = shift(1116);
	v->a[1088] = entry(1, false);
	v->a[1089] = shift(1144);
	v->a[1090] = entry(1, false);
	v->a[1091] = shift(1143);
	v->a[1092] = entry(1, true);
	v->a[1093] = shift(346);
	v->a[1094] = entry(1, true);
	v->a[1095] = shift_extra();
	v->a[1096] = entry(1, false);
	v->a[1097] = shift(1693);
	v->a[1098] = entry(1, true);
	v->a[1099] = shift(1693);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
