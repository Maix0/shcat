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
	v->a[1001] = shift(1045);
	v->a[1002] = entry(1, false);
	v->a[1003] = shift(1516);
	v->a[1004] = entry(1, false);
	v->a[1005] = shift(146);
	v->a[1006] = entry(1, false);
	v->a[1007] = shift(149);
	v->a[1008] = entry(1, false);
	v->a[1009] = shift(1387);
	v->a[1010] = entry(1, false);
	v->a[1011] = shift(1857);
	v->a[1012] = entry(1, false);
	v->a[1013] = shift(666);
	v->a[1014] = entry(1, false);
	v->a[1015] = shift(1697);
	v->a[1016] = entry(1, false);
	v->a[1017] = shift(1631);
	v->a[1018] = entry(1, false);
	v->a[1019] = shift(1638);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = entry(1, false);
	v->a[1021] = shift(69);
	v->a[1022] = entry(1, false);
	v->a[1023] = shift(76);
	v->a[1024] = entry(1, true);
	v->a[1025] = shift(1764);
	v->a[1026] = entry(1, false);
	v->a[1027] = shift(762);
	v->a[1028] = entry(1, false);
	v->a[1029] = shift(136);
	v->a[1030] = entry(2, true);
	v->a[1031] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1032] = shift(2075);
	v->a[1033] = entry(1, false);
	v->a[1034] = shift(623);
	v->a[1035] = entry(1, false);
	v->a[1036] = shift(811);
	v->a[1037] = entry(1, false);
	v->a[1038] = shift(708);
	v->a[1039] = entry(1, false);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = shift(1718);
	v->a[1041] = entry(1, false);
	v->a[1042] = shift(1591);
	v->a[1043] = entry(1, false);
	v->a[1044] = shift(1590);
	v->a[1045] = entry(1, false);
	v->a[1046] = shift(84);
	v->a[1047] = entry(1, false);
	v->a[1048] = shift(116);
	v->a[1049] = entry(1, true);
	v->a[1050] = shift(905);
	v->a[1051] = entry(1, false);
	v->a[1052] = shift(1862);
	v->a[1053] = entry(1, false);
	v->a[1054] = shift(1841);
	v->a[1055] = entry(1, true);
	v->a[1056] = reduce(sym_list, 3, 0, 31);
	v->a[1057] = entry(1, false);
	v->a[1058] = reduce(sym_list, 3, 0, 31);
	v->a[1059] = entry(1, false);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = shift(143);
	v->a[1061] = entry(2, true);
	v->a[1062] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1063] = shift(2119);
	v->a[1064] = entry(2, false);
	v->a[1065] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1066] = shift_repeat(623);
	v->a[1067] = entry(1, false);
	v->a[1068] = shift(1826);
	v->a[1069] = entry(1, false);
	v->a[1070] = shift(862);
	v->a[1071] = entry(1, false);
	v->a[1072] = shift(858);
	v->a[1073] = entry(1, true);
	v->a[1074] = shift(858);
	v->a[1075] = entry(1, true);
	v->a[1076] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[1077] = entry(1, false);
	v->a[1078] = shift(1824);
	v->a[1079] = entry(1, false);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = shift(885);
	v->a[1081] = entry(1, false);
	v->a[1082] = shift(886);
	v->a[1083] = entry(1, true);
	v->a[1084] = shift(886);
	v->a[1085] = entry(1, false);
	v->a[1086] = shift(476);
	v->a[1087] = entry(1, false);
	v->a[1088] = shift(698);
	v->a[1089] = entry(1, false);
	v->a[1090] = shift(683);
	v->a[1091] = entry(1, false);
	v->a[1092] = shift(1848);
	v->a[1093] = entry(1, false);
	v->a[1094] = shift(1412);
	v->a[1095] = entry(1, true);
	v->a[1096] = shift(1766);
	v->a[1097] = entry(1, true);
	v->a[1098] = reduce(sym_concatenation, 2, 0, 0);
	v->a[1099] = entry(1, false);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
