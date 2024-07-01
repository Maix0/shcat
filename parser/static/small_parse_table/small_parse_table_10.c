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
	v->a[1000] = sym_simple_expansion;
	v->a[1001] = sym_expansion;
	v->a[1002] = sym_command_substitution;
	v->a[1003] = actions(53);
	v->a[1004] = 7;
	v->a[1005] = anon_sym_LT;
	v->a[1006] = anon_sym_GT;
	v->a[1007] = anon_sym_GT_GT;
	v->a[1008] = anon_sym_LT_AMP;
	v->a[1009] = anon_sym_GT_AMP;
	v->a[1010] = anon_sym_GT_PIPE;
	v->a[1011] = anon_sym_LT_GT;
	v->a[1012] = state(1046);
	v->a[1013] = 12;
	v->a[1014] = sym_redirected_statement;
	v->a[1015] = sym_for_statement;
	v->a[1016] = sym_while_statement;
	v->a[1017] = sym_if_statement;
	v->a[1018] = sym_case_statement;
	v->a[1019] = sym_function_definition;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = sym_compound_statement;
	v->a[1021] = sym_subshell;
	v->a[1022] = sym_list;
	v->a[1023] = sym_negated_command;
	v->a[1024] = sym_command;
	v->a[1025] = sym__variable_assignments;
	v->a[1026] = 33;
	v->a[1027] = actions(3);
	v->a[1028] = 1;
	v->a[1029] = sym_comment;
	v->a[1030] = actions(87);
	v->a[1031] = 1;
	v->a[1032] = sym_word;
	v->a[1033] = actions(89);
	v->a[1034] = 1;
	v->a[1035] = anon_sym_for;
	v->a[1036] = actions(93);
	v->a[1037] = 1;
	v->a[1038] = anon_sym_if;
	v->a[1039] = actions(95);
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = 1;
	v->a[1041] = anon_sym_case;
	v->a[1042] = actions(97);
	v->a[1043] = 1;
	v->a[1044] = anon_sym_LPAREN;
	v->a[1045] = actions(99);
	v->a[1046] = 1;
	v->a[1047] = anon_sym_LF;
	v->a[1048] = actions(101);
	v->a[1049] = 1;
	v->a[1050] = anon_sym_LBRACE;
	v->a[1051] = actions(103);
	v->a[1052] = 1;
	v->a[1053] = anon_sym_BANG;
	v->a[1054] = actions(107);
	v->a[1055] = 1;
	v->a[1056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1057] = actions(109);
	v->a[1058] = 1;
	v->a[1059] = anon_sym_DOLLAR;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = actions(111);
	v->a[1061] = 1;
	v->a[1062] = anon_sym_DQUOTE;
	v->a[1063] = actions(115);
	v->a[1064] = 1;
	v->a[1065] = anon_sym_DOLLAR_LBRACE;
	v->a[1066] = actions(117);
	v->a[1067] = 1;
	v->a[1068] = anon_sym_DOLLAR_LPAREN;
	v->a[1069] = actions(119);
	v->a[1070] = 1;
	v->a[1071] = anon_sym_BQUOTE;
	v->a[1072] = actions(121);
	v->a[1073] = 1;
	v->a[1074] = sym_file_descriptor;
	v->a[1075] = actions(123);
	v->a[1076] = 1;
	v->a[1077] = sym_variable_name;
	v->a[1078] = state(21);
	v->a[1079] = 1;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = aux_sym__case_item_last_repeat2;
	v->a[1081] = state(127);
	v->a[1082] = 1;
	v->a[1083] = aux_sym__statements_repeat1;
	v->a[1084] = state(178);
	v->a[1085] = 1;
	v->a[1086] = sym_command_name;
	v->a[1087] = state(228);
	v->a[1088] = 1;
	v->a[1089] = sym_variable_assignment;
	v->a[1090] = state(592);
	v->a[1091] = 1;
	v->a[1092] = sym_concatenation;
	v->a[1093] = state(641);
	v->a[1094] = 1;
	v->a[1095] = sym_file_redirect;
	v->a[1096] = state(662);
	v->a[1097] = 1;
	v->a[1098] = aux_sym_command_repeat1;
	v->a[1099] = state(1017);
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
