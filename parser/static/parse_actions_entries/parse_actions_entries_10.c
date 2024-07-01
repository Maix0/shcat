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
	v->a[1000] = shift(641);
	v->a[1001] = entry(1, false);
	v->a[1002] = shift(628);
	v->a[1003] = entry(1, false);
	v->a[1004] = reduce(sym_string, 3, 0, 0);
	v->a[1005] = entry(1, true);
	v->a[1006] = reduce(sym_string, 3, 0, 0);
	v->a[1007] = entry(1, false);
	v->a[1008] = reduce(sym_string, 3, 0, 25);
	v->a[1009] = entry(1, true);
	v->a[1010] = reduce(sym_string, 3, 0, 25);
	v->a[1011] = entry(1, false);
	v->a[1012] = shift(2060);
	v->a[1013] = entry(1, false);
	v->a[1014] = reduce(sym_string, 4, 0, 39);
	v->a[1015] = entry(1, true);
	v->a[1016] = reduce(sym_string, 4, 0, 39);
	v->a[1017] = entry(1, false);
	v->a[1018] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1019] = entry(1, true);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1021] = entry(1, false);
	v->a[1022] = shift(922);
	v->a[1023] = entry(1, true);
	v->a[1024] = shift(945);
	v->a[1025] = entry(1, false);
	v->a[1026] = reduce(sym_expansion, 2, 0, 0);
	v->a[1027] = entry(1, true);
	v->a[1028] = reduce(sym_expansion, 2, 0, 0);
	v->a[1029] = entry(1, false);
	v->a[1030] = shift(774);
	v->a[1031] = entry(1, false);
	v->a[1032] = reduce(sym_string, 2, 0, 0);
	v->a[1033] = entry(1, true);
	v->a[1034] = reduce(sym_string, 2, 0, 0);
	v->a[1035] = entry(1, false);
	v->a[1036] = reduce(sym_simple_expansion, 2, 0, 8);
	v->a[1037] = entry(1, true);
	v->a[1038] = reduce(sym_simple_expansion, 2, 0, 8);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1041] = entry(1, true);
	v->a[1042] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1043] = entry(1, false);
	v->a[1044] = shift(2031);
	v->a[1045] = entry(1, false);
	v->a[1046] = shift(788);
	v->a[1047] = entry(1, false);
	v->a[1048] = shift(2022);
	v->a[1049] = entry(1, false);
	v->a[1050] = shift(2023);
	v->a[1051] = entry(1, false);
	v->a[1052] = shift(939);
	v->a[1053] = entry(1, true);
	v->a[1054] = shift(940);
	v->a[1055] = entry(1, true);
	v->a[1056] = shift(903);
	v->a[1057] = entry(1, false);
	v->a[1058] = shift(900);
	v->a[1059] = entry(1, false);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = shift(944);
	v->a[1061] = entry(1, false);
	v->a[1062] = shift(949);
	v->a[1063] = entry(1, false);
	v->a[1064] = shift(950);
	v->a[1065] = entry(1, true);
	v->a[1066] = shift(951);
	v->a[1067] = entry(1, true);
	v->a[1068] = shift(900);
	v->a[1069] = entry(1, false);
	v->a[1070] = shift(952);
	v->a[1071] = entry(1, false);
	v->a[1072] = shift(943);
	v->a[1073] = entry(1, true);
	v->a[1074] = shift(910);
	v->a[1075] = entry(1, true);
	v->a[1076] = shift(375);
	v->a[1077] = entry(1, true);
	v->a[1078] = shift(559);
	v->a[1079] = entry(1, true);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = shift(956);
	v->a[1081] = entry(1, false);
	v->a[1082] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1083] = entry(1, false);
	v->a[1084] = shift(1469);
	v->a[1085] = entry(1, true);
	v->a[1086] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1087] = entry(1, true);
	v->a[1088] = shift(1530);
	v->a[1089] = entry(1, true);
	v->a[1090] = shift(890);
	v->a[1091] = entry(1, true);
	v->a[1092] = shift(1572);
	v->a[1093] = entry(1, true);
	v->a[1094] = shift(610);
	v->a[1095] = entry(1, true);
	v->a[1096] = reduce(sym_command_name, 1, 0, 0);
	v->a[1097] = entry(1, false);
	v->a[1098] = reduce(sym_command_name, 1, 0, 0);
	v->a[1099] = entry(1, false);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
