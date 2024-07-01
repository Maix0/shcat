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
	v->a[1100] = aux_sym__statements_repeat1;
	v->a[1101] = state(189);
	v->a[1102] = 1;
	v->a[1103] = sym_command_name;
	v->a[1104] = state(303);
	v->a[1105] = 1;
	v->a[1106] = sym_variable_assignment;
	v->a[1107] = state(650);
	v->a[1108] = 1;
	v->a[1109] = sym_concatenation;
	v->a[1110] = state(678);
	v->a[1111] = 1;
	v->a[1112] = aux_sym__case_item_last_repeat2;
	v->a[1113] = state(712);
	v->a[1114] = 1;
	v->a[1115] = sym_file_redirect;
	v->a[1116] = state(713);
	v->a[1117] = 1;
	v->a[1118] = aux_sym_command_repeat1;
	v->a[1119] = state(1227);
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = 1;
	v->a[1121] = sym_pipeline;
	v->a[1122] = state(1333);
	v->a[1123] = 1;
	v->a[1124] = aux_sym_redirected_statement_repeat2;
	v->a[1125] = state(2103);
	v->a[1126] = 1;
	v->a[1127] = sym__statement_not_pipeline;
	v->a[1128] = state(2185);
	v->a[1129] = 1;
	v->a[1130] = sym__statements;
	v->a[1131] = actions(11);
	v->a[1132] = 2;
	v->a[1133] = anon_sym_while;
	v->a[1134] = anon_sym_until;
	v->a[1135] = actions(57);
	v->a[1136] = 2;
	v->a[1137] = anon_sym_LT_AMP_DASH;
	v->a[1138] = anon_sym_GT_AMP_DASH;
	v->a[1139] = actions(65);
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = 2;
	v->a[1141] = sym_raw_string;
	v->a[1142] = sym_number;
	v->a[1143] = state(443);
	v->a[1144] = 5;
	v->a[1145] = sym_arithmetic_expansion;
	v->a[1146] = sym_string;
	v->a[1147] = sym_simple_expansion;
	v->a[1148] = sym_expansion;
	v->a[1149] = sym_command_substitution;
	v->a[1150] = actions(55);
	v->a[1151] = 6;
	v->a[1152] = anon_sym_LT;
	v->a[1153] = anon_sym_GT;
	v->a[1154] = anon_sym_GT_GT;
	v->a[1155] = anon_sym_LT_AMP;
	v->a[1156] = anon_sym_GT_AMP;
	v->a[1157] = anon_sym_GT_PIPE;
	v->a[1158] = state(1179);
	v->a[1159] = 12;
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = sym_redirected_statement;
	v->a[1161] = sym_for_statement;
	v->a[1162] = sym_while_statement;
	v->a[1163] = sym_if_statement;
	v->a[1164] = sym_case_statement;
	v->a[1165] = sym_function_definition;
	v->a[1166] = sym_compound_statement;
	v->a[1167] = sym_subshell;
	v->a[1168] = sym_list;
	v->a[1169] = sym_negated_command;
	v->a[1170] = sym_command;
	v->a[1171] = sym__variable_assignments;
	v->a[1172] = 34;
	v->a[1173] = actions(3);
	v->a[1174] = 1;
	v->a[1175] = sym_comment;
	v->a[1176] = actions(9);
	v->a[1177] = 1;
	v->a[1178] = anon_sym_for;
	v->a[1179] = actions(13);
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = 1;
	v->a[1181] = anon_sym_if;
	v->a[1182] = actions(15);
	v->a[1183] = 1;
	v->a[1184] = anon_sym_case;
	v->a[1185] = actions(17);
	v->a[1186] = 1;
	v->a[1187] = anon_sym_LPAREN;
	v->a[1188] = actions(19);
	v->a[1189] = 1;
	v->a[1190] = anon_sym_LBRACE;
	v->a[1191] = actions(45);
	v->a[1192] = 1;
	v->a[1193] = sym_word;
	v->a[1194] = actions(53);
	v->a[1195] = 1;
	v->a[1196] = anon_sym_BANG;
	v->a[1197] = actions(59);
	v->a[1198] = 1;
	v->a[1199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
