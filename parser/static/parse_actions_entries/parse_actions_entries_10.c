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
	v->a[1000] = shift_repeat(699);
	v->a[1001] = entry(1, false);
	v->a[1002] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1003] = entry(1, true);
	v->a[1004] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1005] = entry(1, true);
	v->a[1006] = shift(761);
	v->a[1007] = entry(1, true);
	v->a[1008] = shift(754);
	v->a[1009] = entry(1, true);
	v->a[1010] = shift(699);
	v->a[1011] = entry(2, false);
	v->a[1012] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1013] = shift_repeat(737);
	v->a[1014] = entry(2, true);
	v->a[1015] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1016] = shift_repeat(737);
	v->a[1017] = entry(1, true);
	v->a[1018] = shift(729);
	v->a[1019] = entry(2, false);
	parse_actions_entries_51(v);
}

void	parse_actions_entries_51(t_parse_actions_entries_array *v)
{
	v->a[1020] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1021] = shift_repeat(735);
	v->a[1022] = entry(2, true);
	v->a[1023] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1024] = shift_repeat(735);
	v->a[1025] = entry(1, true);
	v->a[1026] = shift(718);
	v->a[1027] = entry(2, false);
	v->a[1028] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1029] = shift_repeat(710);
	v->a[1030] = entry(2, true);
	v->a[1031] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1032] = shift_repeat(710);
	v->a[1033] = entry(1, false);
	v->a[1034] = shift(132);
	v->a[1035] = entry(1, false);
	v->a[1036] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1037] = entry(2, true);
	v->a[1038] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1039] = shift(1744);
	parse_actions_entries_52(v);
}

void	parse_actions_entries_52(t_parse_actions_entries_array *v)
{
	v->a[1040] = entry(1, false);
	v->a[1041] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1042] = entry(1, false);
	v->a[1043] = reduce(sym__statements, 3, 0, 30);
	v->a[1044] = entry(1, true);
	v->a[1045] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1046] = entry(1, true);
	v->a[1047] = reduce(sym_expansion, 3, 0, 26);
	v->a[1048] = entry(1, false);
	v->a[1049] = reduce(sym_expansion, 3, 0, 26);
	v->a[1050] = entry(1, true);
	v->a[1051] = reduce(sym_command_substitution, 3, 0, 18);
	v->a[1052] = entry(1, false);
	v->a[1053] = reduce(sym_command_substitution, 3, 0, 18);
	v->a[1054] = entry(1, true);
	v->a[1055] = reduce(sym_command_substitution, 3, 0, 27);
	v->a[1056] = entry(1, false);
	v->a[1057] = reduce(sym_command_substitution, 3, 0, 27);
	v->a[1058] = entry(1, false);
	v->a[1059] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	parse_actions_entries_53(v);
}

void	parse_actions_entries_53(t_parse_actions_entries_array *v)
{
	v->a[1060] = entry(1, true);
	v->a[1061] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1062] = entry(2, false);
	v->a[1063] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1064] = shift_repeat(607);
	v->a[1065] = entry(2, false);
	v->a[1066] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1067] = shift_repeat(628);
	v->a[1068] = entry(2, false);
	v->a[1069] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1070] = shift_repeat(1214);
	v->a[1071] = entry(2, false);
	v->a[1072] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1073] = shift_repeat(1098);
	v->a[1074] = entry(2, false);
	v->a[1075] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1076] = shift_repeat(1091);
	v->a[1077] = entry(2, false);
	v->a[1078] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1079] = shift_repeat(94);
	parse_actions_entries_54(v);
}

void	parse_actions_entries_54(t_parse_actions_entries_array *v)
{
	v->a[1080] = entry(2, false);
	v->a[1081] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1082] = shift_repeat(96);
	v->a[1083] = entry(1, true);
	v->a[1084] = reduce(sym_string, 3, 0, 0);
	v->a[1085] = entry(1, false);
	v->a[1086] = reduce(sym_string, 3, 0, 0);
	v->a[1087] = entry(1, true);
	v->a[1088] = reduce(sym_string, 3, 0, 21);
	v->a[1089] = entry(1, false);
	v->a[1090] = reduce(sym_string, 3, 0, 21);
	v->a[1091] = entry(1, false);
	v->a[1092] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1093] = entry(1, true);
	v->a[1094] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1095] = entry(1, false);
	v->a[1096] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[1097] = entry(1, true);
	v->a[1098] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[1099] = entry(1, false);
	parse_actions_entries_55(v);
}

/* EOF parse_actions_entries_10.c */
