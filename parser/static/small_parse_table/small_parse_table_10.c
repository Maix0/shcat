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
	v->a[1000] = actions(95);
	v->a[1001] = 2;
	v->a[1002] = anon_sym_while;
	v->a[1003] = anon_sym_until;
	v->a[1004] = actions(118);
	v->a[1005] = 2;
	v->a[1006] = anon_sym_LT_AMP_DASH;
	v->a[1007] = anon_sym_GT_AMP_DASH;
	v->a[1008] = actions(130);
	v->a[1009] = 2;
	v->a[1010] = sym_raw_string;
	v->a[1011] = sym_number;
	v->a[1012] = actions(101);
	v->a[1013] = 3;
	v->a[1014] = anon_sym_fi;
	v->a[1015] = anon_sym_elif;
	v->a[1016] = anon_sym_else;
	v->a[1017] = state(443);
	v->a[1018] = 5;
	v->a[1019] = sym_arithmetic_expansion;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = sym_string;
	v->a[1021] = sym_simple_expansion;
	v->a[1022] = sym_expansion;
	v->a[1023] = sym_command_substitution;
	v->a[1024] = actions(115);
	v->a[1025] = 6;
	v->a[1026] = anon_sym_LT;
	v->a[1027] = anon_sym_GT;
	v->a[1028] = anon_sym_GT_GT;
	v->a[1029] = anon_sym_LT_AMP;
	v->a[1030] = anon_sym_GT_AMP;
	v->a[1031] = anon_sym_GT_PIPE;
	v->a[1032] = state(1187);
	v->a[1033] = 12;
	v->a[1034] = sym_redirected_statement;
	v->a[1035] = sym_for_statement;
	v->a[1036] = sym_while_statement;
	v->a[1037] = sym_if_statement;
	v->a[1038] = sym_case_statement;
	v->a[1039] = sym_function_definition;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = sym_compound_statement;
	v->a[1041] = sym_subshell;
	v->a[1042] = sym_list;
	v->a[1043] = sym_negated_command;
	v->a[1044] = sym_command;
	v->a[1045] = sym__variable_assignments;
	v->a[1046] = 34;
	v->a[1047] = actions(3);
	v->a[1048] = 1;
	v->a[1049] = sym_comment;
	v->a[1050] = actions(9);
	v->a[1051] = 1;
	v->a[1052] = anon_sym_for;
	v->a[1053] = actions(13);
	v->a[1054] = 1;
	v->a[1055] = anon_sym_if;
	v->a[1056] = actions(15);
	v->a[1057] = 1;
	v->a[1058] = anon_sym_case;
	v->a[1059] = actions(17);
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = 1;
	v->a[1061] = anon_sym_LPAREN;
	v->a[1062] = actions(19);
	v->a[1063] = 1;
	v->a[1064] = anon_sym_LBRACE;
	v->a[1065] = actions(45);
	v->a[1066] = 1;
	v->a[1067] = sym_word;
	v->a[1068] = actions(53);
	v->a[1069] = 1;
	v->a[1070] = anon_sym_BANG;
	v->a[1071] = actions(59);
	v->a[1072] = 1;
	v->a[1073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1074] = actions(61);
	v->a[1075] = 1;
	v->a[1076] = anon_sym_DOLLAR;
	v->a[1077] = actions(63);
	v->a[1078] = 1;
	v->a[1079] = anon_sym_DQUOTE;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = actions(67);
	v->a[1081] = 1;
	v->a[1082] = anon_sym_DOLLAR_LBRACE;
	v->a[1083] = actions(69);
	v->a[1084] = 1;
	v->a[1085] = anon_sym_DOLLAR_LPAREN;
	v->a[1086] = actions(71);
	v->a[1087] = 1;
	v->a[1088] = anon_sym_BQUOTE;
	v->a[1089] = actions(73);
	v->a[1090] = 1;
	v->a[1091] = sym_file_descriptor;
	v->a[1092] = actions(75);
	v->a[1093] = 1;
	v->a[1094] = sym_variable_name;
	v->a[1095] = actions(87);
	v->a[1096] = 1;
	v->a[1097] = anon_sym_LF;
	v->a[1098] = state(135);
	v->a[1099] = 1;
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
