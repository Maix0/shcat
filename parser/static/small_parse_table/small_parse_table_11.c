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
	v->a[1100] = 1;
	v->a[1101] = anon_sym_LPAREN;
	v->a[1102] = actions(19);
	v->a[1103] = 1;
	v->a[1104] = anon_sym_LBRACE;
	v->a[1105] = actions(41);
	v->a[1106] = 1;
	v->a[1107] = sym_word;
	v->a[1108] = actions(49);
	v->a[1109] = 1;
	v->a[1110] = anon_sym_BANG;
	v->a[1111] = actions(53);
	v->a[1112] = 1;
	v->a[1113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1114] = actions(55);
	v->a[1115] = 1;
	v->a[1116] = anon_sym_DOLLAR;
	v->a[1117] = actions(57);
	v->a[1118] = 1;
	v->a[1119] = anon_sym_DQUOTE;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = actions(61);
	v->a[1121] = 1;
	v->a[1122] = anon_sym_DOLLAR_LBRACE;
	v->a[1123] = actions(63);
	v->a[1124] = 1;
	v->a[1125] = anon_sym_DOLLAR_LPAREN;
	v->a[1126] = actions(65);
	v->a[1127] = 1;
	v->a[1128] = anon_sym_BQUOTE;
	v->a[1129] = actions(67);
	v->a[1130] = 1;
	v->a[1131] = sym_variable_name;
	v->a[1132] = actions(115);
	v->a[1133] = 1;
	v->a[1134] = anon_sym_LF;
	v->a[1135] = state(118);
	v->a[1136] = 1;
	v->a[1137] = aux_sym__statements_repeat1;
	v->a[1138] = state(185);
	v->a[1139] = 1;
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = sym_command_name;
	v->a[1141] = state(216);
	v->a[1142] = 1;
	v->a[1143] = sym_variable_assignment;
	v->a[1144] = state(326);
	v->a[1145] = 1;
	v->a[1146] = aux_sym__case_item_last_repeat2;
	v->a[1147] = state(411);
	v->a[1148] = 1;
	v->a[1149] = aux_sym_command_repeat1;
	v->a[1150] = state(551);
	v->a[1151] = 1;
	v->a[1152] = sym_file_redirect;
	v->a[1153] = state(555);
	v->a[1154] = 1;
	v->a[1155] = sym_concatenation;
	v->a[1156] = state(991);
	v->a[1157] = 1;
	v->a[1158] = sym_pipeline;
	v->a[1159] = state(1126);
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = 1;
	v->a[1161] = aux_sym_redirected_statement_repeat2;
	v->a[1162] = state(1561);
	v->a[1163] = 1;
	v->a[1164] = sym__statement_not_pipeline;
	v->a[1165] = state(1713);
	v->a[1166] = 1;
	v->a[1167] = sym__statements;
	v->a[1168] = actions(11);
	v->a[1169] = 2;
	v->a[1170] = anon_sym_while;
	v->a[1171] = anon_sym_until;
	v->a[1172] = actions(59);
	v->a[1173] = 2;
	v->a[1174] = sym_raw_string;
	v->a[1175] = sym_number;
	v->a[1176] = actions(51);
	v->a[1177] = 3;
	v->a[1178] = anon_sym_LT;
	v->a[1179] = anon_sym_GT;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = anon_sym_GT_GT;
	v->a[1181] = state(401);
	v->a[1182] = 5;
	v->a[1183] = sym_arithmetic_expansion;
	v->a[1184] = sym_string;
	v->a[1185] = sym_simple_expansion;
	v->a[1186] = sym_expansion;
	v->a[1187] = sym_command_substitution;
	v->a[1188] = state(972);
	v->a[1189] = 12;
	v->a[1190] = sym_redirected_statement;
	v->a[1191] = sym_for_statement;
	v->a[1192] = sym_while_statement;
	v->a[1193] = sym_if_statement;
	v->a[1194] = sym_case_statement;
	v->a[1195] = sym_function_definition;
	v->a[1196] = sym_compound_statement;
	v->a[1197] = sym_subshell;
	v->a[1198] = sym_list;
	v->a[1199] = sym_negated_command;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
