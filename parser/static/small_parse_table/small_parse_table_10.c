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
	v->a[1000] = anon_sym_DOLLAR;
	v->a[1001] = actions(103);
	v->a[1002] = 1;
	v->a[1003] = anon_sym_DQUOTE;
	v->a[1004] = actions(107);
	v->a[1005] = 1;
	v->a[1006] = anon_sym_DOLLAR_LBRACE;
	v->a[1007] = actions(109);
	v->a[1008] = 1;
	v->a[1009] = anon_sym_DOLLAR_LPAREN;
	v->a[1010] = actions(111);
	v->a[1011] = 1;
	v->a[1012] = anon_sym_BQUOTE;
	v->a[1013] = actions(113);
	v->a[1014] = 1;
	v->a[1015] = sym_variable_name;
	v->a[1016] = actions(115);
	v->a[1017] = 1;
	v->a[1018] = anon_sym_LF;
	v->a[1019] = state(104);
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = 1;
	v->a[1021] = aux_sym__statements_repeat1;
	v->a[1022] = state(170);
	v->a[1023] = 1;
	v->a[1024] = sym_command_name;
	v->a[1025] = state(177);
	v->a[1026] = 1;
	v->a[1027] = sym_variable_assignment;
	v->a[1028] = state(326);
	v->a[1029] = 1;
	v->a[1030] = aux_sym__case_item_last_repeat2;
	v->a[1031] = state(408);
	v->a[1032] = 1;
	v->a[1033] = aux_sym_command_repeat1;
	v->a[1034] = state(541);
	v->a[1035] = 1;
	v->a[1036] = sym_file_redirect;
	v->a[1037] = state(546);
	v->a[1038] = 1;
	v->a[1039] = sym_concatenation;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = state(913);
	v->a[1041] = 1;
	v->a[1042] = sym_pipeline;
	v->a[1043] = state(990);
	v->a[1044] = 1;
	v->a[1045] = aux_sym_redirected_statement_repeat2;
	v->a[1046] = state(1564);
	v->a[1047] = 1;
	v->a[1048] = sym__statement_not_pipeline;
	v->a[1049] = state(1568);
	v->a[1050] = 1;
	v->a[1051] = sym__statements;
	v->a[1052] = actions(83);
	v->a[1053] = 2;
	v->a[1054] = anon_sym_while;
	v->a[1055] = anon_sym_until;
	v->a[1056] = actions(105);
	v->a[1057] = 2;
	v->a[1058] = sym_raw_string;
	v->a[1059] = sym_number;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = actions(97);
	v->a[1061] = 3;
	v->a[1062] = anon_sym_LT;
	v->a[1063] = anon_sym_GT;
	v->a[1064] = anon_sym_GT_GT;
	v->a[1065] = state(276);
	v->a[1066] = 5;
	v->a[1067] = sym_arithmetic_expansion;
	v->a[1068] = sym_string;
	v->a[1069] = sym_simple_expansion;
	v->a[1070] = sym_expansion;
	v->a[1071] = sym_command_substitution;
	v->a[1072] = state(867);
	v->a[1073] = 12;
	v->a[1074] = sym_redirected_statement;
	v->a[1075] = sym_for_statement;
	v->a[1076] = sym_while_statement;
	v->a[1077] = sym_if_statement;
	v->a[1078] = sym_case_statement;
	v->a[1079] = sym_function_definition;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = sym_compound_statement;
	v->a[1081] = sym_subshell;
	v->a[1082] = sym_list;
	v->a[1083] = sym_negated_command;
	v->a[1084] = sym_command;
	v->a[1085] = sym__variable_assignments;
	v->a[1086] = 32;
	v->a[1087] = actions(3);
	v->a[1088] = 1;
	v->a[1089] = sym_comment;
	v->a[1090] = actions(9);
	v->a[1091] = 1;
	v->a[1092] = anon_sym_for;
	v->a[1093] = actions(13);
	v->a[1094] = 1;
	v->a[1095] = anon_sym_if;
	v->a[1096] = actions(15);
	v->a[1097] = 1;
	v->a[1098] = anon_sym_case;
	v->a[1099] = actions(17);
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
