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
	v->a[1001] = sym_concatenation;
	v->a[1002] = state(736);
	v->a[1003] = 1;
	v->a[1004] = aux_sym_command_repeat1;
	v->a[1005] = state(738);
	v->a[1006] = 1;
	v->a[1007] = sym_file_redirect;
	v->a[1008] = state(767);
	v->a[1009] = 1;
	v->a[1010] = aux_sym__case_item_last_repeat2;
	v->a[1011] = state(1450);
	v->a[1012] = 1;
	v->a[1013] = sym_pipeline;
	v->a[1014] = state(1460);
	v->a[1015] = 1;
	v->a[1016] = aux_sym_redirected_statement_repeat2;
	v->a[1017] = state(2269);
	v->a[1018] = 1;
	v->a[1019] = sym__statement_not_pipeline;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = state(2482);
	v->a[1021] = 1;
	v->a[1022] = sym__statements;
	v->a[1023] = actions(11);
	v->a[1024] = 2;
	v->a[1025] = anon_sym_while;
	v->a[1026] = anon_sym_until;
	v->a[1027] = actions(57);
	v->a[1028] = 2;
	v->a[1029] = anon_sym_LT_AMP_DASH;
	v->a[1030] = anon_sym_GT_AMP_DASH;
	v->a[1031] = actions(65);
	v->a[1032] = 2;
	v->a[1033] = sym_raw_string;
	v->a[1034] = sym_number;
	v->a[1035] = state(394);
	v->a[1036] = 5;
	v->a[1037] = sym_arithmetic_expansion;
	v->a[1038] = sym_string;
	v->a[1039] = sym_simple_expansion;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = sym_expansion;
	v->a[1041] = sym_command_substitution;
	v->a[1042] = actions(55);
	v->a[1043] = 8;
	v->a[1044] = anon_sym_LT;
	v->a[1045] = anon_sym_GT;
	v->a[1046] = anon_sym_GT_GT;
	v->a[1047] = anon_sym_AMP_GT;
	v->a[1048] = anon_sym_AMP_GT_GT;
	v->a[1049] = anon_sym_LT_AMP;
	v->a[1050] = anon_sym_GT_AMP;
	v->a[1051] = anon_sym_GT_PIPE;
	v->a[1052] = state(1434);
	v->a[1053] = 12;
	v->a[1054] = sym_redirected_statement;
	v->a[1055] = sym_for_statement;
	v->a[1056] = sym_while_statement;
	v->a[1057] = sym_if_statement;
	v->a[1058] = sym_case_statement;
	v->a[1059] = sym_function_definition;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = sym_compound_statement;
	v->a[1061] = sym_subshell;
	v->a[1062] = sym_list;
	v->a[1063] = sym_negated_command;
	v->a[1064] = sym_command;
	v->a[1065] = sym__variable_assignments;
	v->a[1066] = 34;
	v->a[1067] = actions(3);
	v->a[1068] = 1;
	v->a[1069] = sym_comment;
	v->a[1070] = actions(87);
	v->a[1071] = 1;
	v->a[1072] = anon_sym_LF;
	v->a[1073] = actions(89);
	v->a[1074] = 1;
	v->a[1075] = sym_word;
	v->a[1076] = actions(91);
	v->a[1077] = 1;
	v->a[1078] = anon_sym_for;
	v->a[1079] = actions(95);
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = 1;
	v->a[1081] = anon_sym_if;
	v->a[1082] = actions(97);
	v->a[1083] = 1;
	v->a[1084] = anon_sym_case;
	v->a[1085] = actions(99);
	v->a[1086] = 1;
	v->a[1087] = anon_sym_LPAREN;
	v->a[1088] = actions(101);
	v->a[1089] = 1;
	v->a[1090] = anon_sym_LBRACE;
	v->a[1091] = actions(103);
	v->a[1092] = 1;
	v->a[1093] = anon_sym_BANG;
	v->a[1094] = actions(109);
	v->a[1095] = 1;
	v->a[1096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1097] = actions(111);
	v->a[1098] = 1;
	v->a[1099] = anon_sym_DOLLAR;
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
