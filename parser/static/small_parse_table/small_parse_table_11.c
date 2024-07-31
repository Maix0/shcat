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
	v->a[1100] = 7;
	v->a[1101] = anon_sym_LT;
	v->a[1102] = anon_sym_GT;
	v->a[1103] = anon_sym_GT_GT;
	v->a[1104] = anon_sym_LT_AMP;
	v->a[1105] = anon_sym_GT_AMP;
	v->a[1106] = anon_sym_GT_PIPE;
	v->a[1107] = anon_sym_LT_GT;
	v->a[1108] = state(819);
	v->a[1109] = 12;
	v->a[1110] = sym_redirected_statement;
	v->a[1111] = sym_for_statement;
	v->a[1112] = sym_while_statement;
	v->a[1113] = sym_if_statement;
	v->a[1114] = sym_case_statement;
	v->a[1115] = sym_function_definition;
	v->a[1116] = sym_compound_statement;
	v->a[1117] = sym_subshell;
	v->a[1118] = sym_list;
	v->a[1119] = sym_negated_command;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = sym_command;
	v->a[1121] = sym__variable_assignments;
	v->a[1122] = 32;
	v->a[1123] = actions(3);
	v->a[1124] = 1;
	v->a[1125] = sym_comment;
	v->a[1126] = actions(79);
	v->a[1127] = 1;
	v->a[1128] = sym_word;
	v->a[1129] = actions(81);
	v->a[1130] = 1;
	v->a[1131] = anon_sym_for;
	v->a[1132] = actions(85);
	v->a[1133] = 1;
	v->a[1134] = anon_sym_if;
	v->a[1135] = actions(87);
	v->a[1136] = 1;
	v->a[1137] = anon_sym_case;
	v->a[1138] = actions(89);
	v->a[1139] = 1;
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = anon_sym_LPAREN;
	v->a[1141] = actions(93);
	v->a[1142] = 1;
	v->a[1143] = anon_sym_LBRACE;
	v->a[1144] = actions(95);
	v->a[1145] = 1;
	v->a[1146] = anon_sym_BANG;
	v->a[1147] = actions(99);
	v->a[1148] = 1;
	v->a[1149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1150] = actions(101);
	v->a[1151] = 1;
	v->a[1152] = anon_sym_DOLLAR;
	v->a[1153] = actions(103);
	v->a[1154] = 1;
	v->a[1155] = anon_sym_DQUOTE;
	v->a[1156] = actions(107);
	v->a[1157] = 1;
	v->a[1158] = anon_sym_DOLLAR_LBRACE;
	v->a[1159] = actions(109);
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = 1;
	v->a[1161] = anon_sym_DOLLAR_LPAREN;
	v->a[1162] = actions(111);
	v->a[1163] = 1;
	v->a[1164] = anon_sym_BQUOTE;
	v->a[1165] = actions(113);
	v->a[1166] = 1;
	v->a[1167] = sym_variable_name;
	v->a[1168] = actions(115);
	v->a[1169] = 1;
	v->a[1170] = anon_sym_LF;
	v->a[1171] = state(112);
	v->a[1172] = 1;
	v->a[1173] = aux_sym__statements_repeat1;
	v->a[1174] = state(185);
	v->a[1175] = 1;
	v->a[1176] = sym_command_name;
	v->a[1177] = state(255);
	v->a[1178] = 1;
	v->a[1179] = sym_variable_assignment;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = state(491);
	v->a[1181] = 1;
	v->a[1182] = aux_sym_command_repeat1;
	v->a[1183] = state(511);
	v->a[1184] = 1;
	v->a[1185] = aux_sym__case_item_last_repeat2;
	v->a[1186] = state(599);
	v->a[1187] = 1;
	v->a[1188] = sym_concatenation;
	v->a[1189] = state(615);
	v->a[1190] = 1;
	v->a[1191] = sym_file_redirect;
	v->a[1192] = state(941);
	v->a[1193] = 1;
	v->a[1194] = sym_pipeline;
	v->a[1195] = state(1015);
	v->a[1196] = 1;
	v->a[1197] = aux_sym_redirected_statement_repeat2;
	v->a[1198] = state(1599);
	v->a[1199] = 1;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
