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
	v->a[1000] = entry(1, true);
	v->a[1001] = reduce(sym_command_name, 1, 0, 0);
	v->a[1002] = entry(1, true);
	v->a[1003] = shift(1560);
	v->a[1004] = entry(1, false);
	v->a[1005] = shift(1185);
	v->a[1006] = entry(1, false);
	v->a[1007] = shift(1495);
	v->a[1008] = entry(1, true);
	v->a[1009] = shift(1495);
	v->a[1010] = entry(2, false);
	v->a[1011] = reduce(sym_command_name, 1, 0, 0);
	v->a[1012] = shift(2314);
	v->a[1013] = entry(2, false);
	v->a[1014] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1015] = shift_repeat(1477);
	v->a[1016] = entry(2, true);
	v->a[1017] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1018] = shift_repeat(1477);
	v->a[1019] = entry(2, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1021] = shift_repeat(1495);
	v->a[1022] = entry(2, true);
	v->a[1023] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1024] = shift_repeat(1495);
	v->a[1025] = entry(1, true);
	v->a[1026] = shift(1562);
	v->a[1027] = entry(1, true);
	v->a[1028] = shift(1477);
	v->a[1029] = entry(1, true);
	v->a[1030] = shift(1494);
	v->a[1031] = entry(2, false);
	v->a[1032] = reduce(sym_command_name, 1, 0, 0);
	v->a[1033] = shift(2240);
	v->a[1034] = entry(1, false);
	v->a[1035] = shift(1186);
	v->a[1036] = entry(1, false);
	v->a[1037] = shift(1152);
	v->a[1038] = entry(1, false);
	v->a[1039] = shift(1508);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = entry(1, true);
	v->a[1041] = shift(1547);
	v->a[1042] = entry(1, false);
	v->a[1043] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1044] = entry(1, true);
	v->a[1045] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1046] = entry(1, false);
	v->a[1047] = reduce(sym_simple_expansion, 2, 0, 8);
	v->a[1048] = entry(1, true);
	v->a[1049] = reduce(sym_simple_expansion, 2, 0, 8);
	v->a[1050] = entry(2, false);
	v->a[1051] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1052] = shift_repeat(1504);
	v->a[1053] = entry(2, true);
	v->a[1054] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1055] = shift_repeat(1504);
	v->a[1056] = entry(1, true);
	v->a[1057] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	v->a[1058] = entry(1, false);
	v->a[1059] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = entry(1, false);
	v->a[1061] = shift(1538);
	v->a[1062] = entry(1, true);
	v->a[1063] = shift(1534);
	v->a[1064] = entry(1, false);
	v->a[1065] = shift(1598);
	v->a[1066] = entry(1, false);
	v->a[1067] = shift(927);
	v->a[1068] = entry(1, true);
	v->a[1069] = shift(1939);
	v->a[1070] = entry(1, true);
	v->a[1071] = reduce(sym_string, 2, 0, 0);
	v->a[1072] = entry(1, false);
	v->a[1073] = reduce(sym_string, 2, 0, 0);
	v->a[1074] = entry(1, true);
	v->a[1075] = shift_extra();
	v->a[1076] = entry(2, false);
	v->a[1077] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1078] = shift_repeat(1538);
	v->a[1079] = entry(2, true);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1081] = shift_repeat(1538);
	v->a[1082] = entry(1, false);
	v->a[1083] = shift(1488);
	v->a[1084] = entry(1, true);
	v->a[1085] = shift(1509);
	v->a[1086] = entry(1, false);
	v->a[1087] = reduce(sym_expansion, 2, 0, 0);
	v->a[1088] = entry(1, true);
	v->a[1089] = reduce(sym_expansion, 2, 0, 0);
	v->a[1090] = entry(1, false);
	v->a[1091] = reduce(sym_variable_assignment, 3, 0, 20);
	v->a[1092] = entry(1, false);
	v->a[1093] = shift(1476);
	v->a[1094] = entry(1, true);
	v->a[1095] = reduce(sym_variable_assignment, 3, 0, 20);
	v->a[1096] = entry(1, true);
	v->a[1097] = shift(1476);
	v->a[1098] = entry(1, false);
	v->a[1099] = reduce(sym_string, 3, 0, 25);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
