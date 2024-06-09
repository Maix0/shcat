/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_11.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_55(t_small_parse_table_array *v)
{
	v->a[1100] = state(1048);
	v->a[1101] = 12;
	v->a[1102] = sym_redirected_statement;
	v->a[1103] = sym_for_statement;
	v->a[1104] = sym_while_statement;
	v->a[1105] = sym_if_statement;
	v->a[1106] = sym_case_statement;
	v->a[1107] = sym_function_definition;
	v->a[1108] = sym_compound_statement;
	v->a[1109] = sym_subshell;
	v->a[1110] = sym_list;
	v->a[1111] = sym_negated_command;
	v->a[1112] = sym_command;
	v->a[1113] = sym_variable_assignments;
	v->a[1114] = 36;
	v->a[1115] = actions(3);
	v->a[1116] = 1;
	v->a[1117] = sym_comment;
	v->a[1118] = actions(95);
	v->a[1119] = 1;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = sym_word;
	v->a[1121] = actions(97);
	v->a[1122] = 1;
	v->a[1123] = anon_sym_for;
	v->a[1124] = actions(101);
	v->a[1125] = 1;
	v->a[1126] = anon_sym_if;
	v->a[1127] = actions(103);
	v->a[1128] = 1;
	v->a[1129] = anon_sym_case;
	v->a[1130] = actions(105);
	v->a[1131] = 1;
	v->a[1132] = anon_sym_LPAREN;
	v->a[1133] = actions(109);
	v->a[1134] = 1;
	v->a[1135] = anon_sym_LBRACE;
	v->a[1136] = actions(111);
	v->a[1137] = 1;
	v->a[1138] = anon_sym_BANG;
	v->a[1139] = actions(117);
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = 1;
	v->a[1141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1142] = actions(119);
	v->a[1143] = 1;
	v->a[1144] = anon_sym_DOLLAR;
	v->a[1145] = actions(121);
	v->a[1146] = 1;
	v->a[1147] = anon_sym_DQUOTE;
	v->a[1148] = actions(123);
	v->a[1149] = 1;
	v->a[1150] = sym_raw_string;
	v->a[1151] = actions(125);
	v->a[1152] = 1;
	v->a[1153] = aux_sym_number_token1;
	v->a[1154] = actions(127);
	v->a[1155] = 1;
	v->a[1156] = aux_sym_number_token2;
	v->a[1157] = actions(129);
	v->a[1158] = 1;
	v->a[1159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = actions(131);
	v->a[1161] = 1;
	v->a[1162] = anon_sym_DOLLAR_LPAREN;
	v->a[1163] = actions(133);
	v->a[1164] = 1;
	v->a[1165] = anon_sym_BQUOTE;
	v->a[1166] = actions(135);
	v->a[1167] = 1;
	v->a[1168] = sym_file_descriptor;
	v->a[1169] = actions(137);
	v->a[1170] = 1;
	v->a[1171] = sym_variable_name;
	v->a[1172] = actions(141);
	v->a[1173] = 1;
	v->a[1174] = anon_sym_LF;
	v->a[1175] = state(139);
	v->a[1176] = 1;
	v->a[1177] = aux_sym__statements_repeat1;
	v->a[1178] = state(173);
	v->a[1179] = 1;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = sym_command_name;
	v->a[1181] = state(269);
	v->a[1182] = 1;
	v->a[1183] = sym_variable_assignment;
	v->a[1184] = state(663);
	v->a[1185] = 1;
	v->a[1186] = aux_sym_command_repeat1;
	v->a[1187] = state(665);
	v->a[1188] = 1;
	v->a[1189] = sym_concatenation;
	v->a[1190] = state(689);
	v->a[1191] = 1;
	v->a[1192] = aux_sym__case_item_last_repeat2;
	v->a[1193] = state(749);
	v->a[1194] = 1;
	v->a[1195] = sym_file_redirect;
	v->a[1196] = state(1145);
	v->a[1197] = 1;
	v->a[1198] = aux_sym_redirected_statement_repeat2;
	v->a[1199] = state(1190);
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
