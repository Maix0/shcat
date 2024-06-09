/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_10.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_50(t_small_parse_table_array *v)
{
	v->a[1000] = 1;
	v->a[1001] = anon_sym_LBRACE;
	v->a[1002] = actions(111);
	v->a[1003] = 1;
	v->a[1004] = anon_sym_BANG;
	v->a[1005] = actions(117);
	v->a[1006] = 1;
	v->a[1007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1008] = actions(119);
	v->a[1009] = 1;
	v->a[1010] = anon_sym_DOLLAR;
	v->a[1011] = actions(121);
	v->a[1012] = 1;
	v->a[1013] = anon_sym_DQUOTE;
	v->a[1014] = actions(123);
	v->a[1015] = 1;
	v->a[1016] = sym_raw_string;
	v->a[1017] = actions(125);
	v->a[1018] = 1;
	v->a[1019] = aux_sym_number_token1;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = actions(127);
	v->a[1021] = 1;
	v->a[1022] = aux_sym_number_token2;
	v->a[1023] = actions(129);
	v->a[1024] = 1;
	v->a[1025] = anon_sym_DOLLAR_LBRACE;
	v->a[1026] = actions(131);
	v->a[1027] = 1;
	v->a[1028] = anon_sym_DOLLAR_LPAREN;
	v->a[1029] = actions(133);
	v->a[1030] = 1;
	v->a[1031] = anon_sym_BQUOTE;
	v->a[1032] = actions(135);
	v->a[1033] = 1;
	v->a[1034] = sym_file_descriptor;
	v->a[1035] = actions(137);
	v->a[1036] = 1;
	v->a[1037] = sym_variable_name;
	v->a[1038] = actions(139);
	v->a[1039] = 1;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = anon_sym_LF;
	v->a[1041] = state(19);
	v->a[1042] = 1;
	v->a[1043] = aux_sym__case_item_last_repeat2;
	v->a[1044] = state(139);
	v->a[1045] = 1;
	v->a[1046] = aux_sym__statements_repeat1;
	v->a[1047] = state(173);
	v->a[1048] = 1;
	v->a[1049] = sym_command_name;
	v->a[1050] = state(269);
	v->a[1051] = 1;
	v->a[1052] = sym_variable_assignment;
	v->a[1053] = state(663);
	v->a[1054] = 1;
	v->a[1055] = aux_sym_command_repeat1;
	v->a[1056] = state(665);
	v->a[1057] = 1;
	v->a[1058] = sym_concatenation;
	v->a[1059] = state(749);
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = 1;
	v->a[1061] = sym_file_redirect;
	v->a[1062] = state(1145);
	v->a[1063] = 1;
	v->a[1064] = aux_sym_redirected_statement_repeat2;
	v->a[1065] = state(1190);
	v->a[1066] = 1;
	v->a[1067] = sym_pipeline;
	v->a[1068] = state(2040);
	v->a[1069] = 1;
	v->a[1070] = sym__statement_not_pipeline;
	v->a[1071] = state(2049);
	v->a[1072] = 1;
	v->a[1073] = sym__statements;
	v->a[1074] = actions(99);
	v->a[1075] = 2;
	v->a[1076] = anon_sym_while;
	v->a[1077] = anon_sym_until;
	v->a[1078] = actions(115);
	v->a[1079] = 2;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = anon_sym_LT_AMP_DASH;
	v->a[1081] = anon_sym_GT_AMP_DASH;
	v->a[1082] = state(282);
	v->a[1083] = 6;
	v->a[1084] = sym_arithmetic_expansion;
	v->a[1085] = sym_string;
	v->a[1086] = sym_number;
	v->a[1087] = sym_simple_expansion;
	v->a[1088] = sym_expansion;
	v->a[1089] = sym_command_substitution;
	v->a[1090] = actions(113);
	v->a[1091] = 8;
	v->a[1092] = anon_sym_LT;
	v->a[1093] = anon_sym_GT;
	v->a[1094] = anon_sym_GT_GT;
	v->a[1095] = anon_sym_AMP_GT;
	v->a[1096] = anon_sym_AMP_GT_GT;
	v->a[1097] = anon_sym_LT_AMP;
	v->a[1098] = anon_sym_GT_AMP;
	v->a[1099] = anon_sym_GT_PIPE;
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
