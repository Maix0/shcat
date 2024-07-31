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
	v->a[1000] = sym_command;
	v->a[1001] = sym__variable_assignments;
	v->a[1002] = 32;
	v->a[1003] = actions(3);
	v->a[1004] = 1;
	v->a[1005] = sym_comment;
	v->a[1006] = actions(79);
	v->a[1007] = 1;
	v->a[1008] = sym_word;
	v->a[1009] = actions(81);
	v->a[1010] = 1;
	v->a[1011] = anon_sym_for;
	v->a[1012] = actions(85);
	v->a[1013] = 1;
	v->a[1014] = anon_sym_if;
	v->a[1015] = actions(87);
	v->a[1016] = 1;
	v->a[1017] = anon_sym_case;
	v->a[1018] = actions(89);
	v->a[1019] = 1;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = anon_sym_LPAREN;
	v->a[1021] = actions(93);
	v->a[1022] = 1;
	v->a[1023] = anon_sym_LBRACE;
	v->a[1024] = actions(95);
	v->a[1025] = 1;
	v->a[1026] = anon_sym_BANG;
	v->a[1027] = actions(99);
	v->a[1028] = 1;
	v->a[1029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1030] = actions(101);
	v->a[1031] = 1;
	v->a[1032] = anon_sym_DOLLAR;
	v->a[1033] = actions(103);
	v->a[1034] = 1;
	v->a[1035] = anon_sym_DQUOTE;
	v->a[1036] = actions(107);
	v->a[1037] = 1;
	v->a[1038] = anon_sym_DOLLAR_LBRACE;
	v->a[1039] = actions(109);
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = 1;
	v->a[1041] = anon_sym_DOLLAR_LPAREN;
	v->a[1042] = actions(111);
	v->a[1043] = 1;
	v->a[1044] = anon_sym_BQUOTE;
	v->a[1045] = actions(113);
	v->a[1046] = 1;
	v->a[1047] = sym_variable_name;
	v->a[1048] = actions(117);
	v->a[1049] = 1;
	v->a[1050] = anon_sym_LF;
	v->a[1051] = state(32);
	v->a[1052] = 1;
	v->a[1053] = aux_sym__case_item_last_repeat2;
	v->a[1054] = state(112);
	v->a[1055] = 1;
	v->a[1056] = aux_sym__statements_repeat1;
	v->a[1057] = state(185);
	v->a[1058] = 1;
	v->a[1059] = sym_command_name;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = state(255);
	v->a[1061] = 1;
	v->a[1062] = sym_variable_assignment;
	v->a[1063] = state(491);
	v->a[1064] = 1;
	v->a[1065] = aux_sym_command_repeat1;
	v->a[1066] = state(599);
	v->a[1067] = 1;
	v->a[1068] = sym_concatenation;
	v->a[1069] = state(615);
	v->a[1070] = 1;
	v->a[1071] = sym_file_redirect;
	v->a[1072] = state(941);
	v->a[1073] = 1;
	v->a[1074] = sym_pipeline;
	v->a[1075] = state(1015);
	v->a[1076] = 1;
	v->a[1077] = aux_sym_redirected_statement_repeat2;
	v->a[1078] = state(1610);
	v->a[1079] = 1;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = sym__statement_not_pipeline;
	v->a[1081] = state(1623);
	v->a[1082] = 1;
	v->a[1083] = sym__statements;
	v->a[1084] = actions(83);
	v->a[1085] = 2;
	v->a[1086] = anon_sym_while;
	v->a[1087] = anon_sym_until;
	v->a[1088] = actions(105);
	v->a[1089] = 2;
	v->a[1090] = sym_raw_string;
	v->a[1091] = sym_number;
	v->a[1092] = state(341);
	v->a[1093] = 5;
	v->a[1094] = sym_arithmetic_expansion;
	v->a[1095] = sym_string;
	v->a[1096] = sym_simple_expansion;
	v->a[1097] = sym_expansion;
	v->a[1098] = sym_command_substitution;
	v->a[1099] = actions(97);
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
