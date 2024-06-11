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
	v->a[1100] = actions(113);
	v->a[1101] = 1;
	v->a[1102] = anon_sym_DQUOTE;
	v->a[1103] = actions(117);
	v->a[1104] = 1;
	v->a[1105] = anon_sym_DOLLAR_LBRACE;
	v->a[1106] = actions(119);
	v->a[1107] = 1;
	v->a[1108] = anon_sym_DOLLAR_LPAREN;
	v->a[1109] = actions(121);
	v->a[1110] = 1;
	v->a[1111] = anon_sym_BQUOTE;
	v->a[1112] = actions(123);
	v->a[1113] = 1;
	v->a[1114] = sym_file_descriptor;
	v->a[1115] = actions(125);
	v->a[1116] = 1;
	v->a[1117] = sym_variable_name;
	v->a[1118] = state(129);
	v->a[1119] = 1;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = aux_sym__statements_repeat1;
	v->a[1121] = state(182);
	v->a[1122] = 1;
	v->a[1123] = sym_command_name;
	v->a[1124] = state(271);
	v->a[1125] = 1;
	v->a[1126] = sym_variable_assignment;
	v->a[1127] = state(621);
	v->a[1128] = 1;
	v->a[1129] = sym_concatenation;
	v->a[1130] = state(692);
	v->a[1131] = 1;
	v->a[1132] = sym_file_redirect;
	v->a[1133] = state(767);
	v->a[1134] = 1;
	v->a[1135] = aux_sym__case_item_last_repeat2;
	v->a[1136] = state(810);
	v->a[1137] = 1;
	v->a[1138] = aux_sym_command_repeat1;
	v->a[1139] = state(1321);
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = 1;
	v->a[1141] = sym_pipeline;
	v->a[1142] = state(1432);
	v->a[1143] = 1;
	v->a[1144] = aux_sym_redirected_statement_repeat2;
	v->a[1145] = state(2254);
	v->a[1146] = 1;
	v->a[1147] = sym__statement_not_pipeline;
	v->a[1148] = state(2272);
	v->a[1149] = 1;
	v->a[1150] = sym__statements;
	v->a[1151] = actions(93);
	v->a[1152] = 2;
	v->a[1153] = anon_sym_while;
	v->a[1154] = anon_sym_until;
	v->a[1155] = actions(107);
	v->a[1156] = 2;
	v->a[1157] = anon_sym_LT_AMP_DASH;
	v->a[1158] = anon_sym_GT_AMP_DASH;
	v->a[1159] = actions(115);
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = 2;
	v->a[1161] = sym_raw_string;
	v->a[1162] = sym_number;
	v->a[1163] = state(282);
	v->a[1164] = 5;
	v->a[1165] = sym_arithmetic_expansion;
	v->a[1166] = sym_string;
	v->a[1167] = sym_simple_expansion;
	v->a[1168] = sym_expansion;
	v->a[1169] = sym_command_substitution;
	v->a[1170] = actions(105);
	v->a[1171] = 8;
	v->a[1172] = anon_sym_LT;
	v->a[1173] = anon_sym_GT;
	v->a[1174] = anon_sym_GT_GT;
	v->a[1175] = anon_sym_AMP_GT;
	v->a[1176] = anon_sym_AMP_GT_GT;
	v->a[1177] = anon_sym_LT_AMP;
	v->a[1178] = anon_sym_GT_AMP;
	v->a[1179] = anon_sym_GT_PIPE;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = state(1296);
	v->a[1181] = 12;
	v->a[1182] = sym_redirected_statement;
	v->a[1183] = sym_for_statement;
	v->a[1184] = sym_while_statement;
	v->a[1185] = sym_if_statement;
	v->a[1186] = sym_case_statement;
	v->a[1187] = sym_function_definition;
	v->a[1188] = sym_compound_statement;
	v->a[1189] = sym_subshell;
	v->a[1190] = sym_list;
	v->a[1191] = sym_negated_command;
	v->a[1192] = sym_command;
	v->a[1193] = sym_variable_assignments;
	v->a[1194] = 34;
	v->a[1195] = actions(3);
	v->a[1196] = 1;
	v->a[1197] = sym_comment;
	v->a[1198] = actions(89);
	v->a[1199] = 1;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
