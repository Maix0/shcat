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
	v->a[1101] = sym_pipeline;
	v->a[1102] = state(1157);
	v->a[1103] = 1;
	v->a[1104] = aux_sym_redirected_statement_repeat2;
	v->a[1105] = state(1901);
	v->a[1106] = 1;
	v->a[1107] = sym__statement_not_pipeline;
	v->a[1108] = state(1925);
	v->a[1109] = 1;
	v->a[1110] = sym__statements;
	v->a[1111] = actions(87);
	v->a[1112] = 2;
	v->a[1113] = anon_sym_while;
	v->a[1114] = anon_sym_until;
	v->a[1115] = actions(109);
	v->a[1116] = 2;
	v->a[1117] = sym_raw_string;
	v->a[1118] = sym_number;
	v->a[1119] = state(348);
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = 5;
	v->a[1121] = sym_arithmetic_expansion;
	v->a[1122] = sym_string;
	v->a[1123] = sym_simple_expansion;
	v->a[1124] = sym_expansion;
	v->a[1125] = sym_command_substitution;
	v->a[1126] = actions(101);
	v->a[1127] = 7;
	v->a[1128] = anon_sym_LT;
	v->a[1129] = anon_sym_GT;
	v->a[1130] = anon_sym_GT_GT;
	v->a[1131] = anon_sym_LT_AMP;
	v->a[1132] = anon_sym_GT_AMP;
	v->a[1133] = anon_sym_GT_PIPE;
	v->a[1134] = anon_sym_LT_GT;
	v->a[1135] = state(1001);
	v->a[1136] = 12;
	v->a[1137] = sym_redirected_statement;
	v->a[1138] = sym_for_statement;
	v->a[1139] = sym_while_statement;
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = sym_if_statement;
	v->a[1141] = sym_case_statement;
	v->a[1142] = sym_function_definition;
	v->a[1143] = sym_compound_statement;
	v->a[1144] = sym_subshell;
	v->a[1145] = sym_list;
	v->a[1146] = sym_negated_command;
	v->a[1147] = sym_command;
	v->a[1148] = sym__variable_assignments;
	v->a[1149] = 33;
	v->a[1150] = actions(3);
	v->a[1151] = 1;
	v->a[1152] = sym_comment;
	v->a[1153] = actions(83);
	v->a[1154] = 1;
	v->a[1155] = sym_word;
	v->a[1156] = actions(85);
	v->a[1157] = 1;
	v->a[1158] = anon_sym_for;
	v->a[1159] = actions(89);
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = 1;
	v->a[1161] = anon_sym_if;
	v->a[1162] = actions(91);
	v->a[1163] = 1;
	v->a[1164] = anon_sym_case;
	v->a[1165] = actions(93);
	v->a[1166] = 1;
	v->a[1167] = anon_sym_LPAREN;
	v->a[1168] = actions(97);
	v->a[1169] = 1;
	v->a[1170] = anon_sym_LBRACE;
	v->a[1171] = actions(99);
	v->a[1172] = 1;
	v->a[1173] = anon_sym_BANG;
	v->a[1174] = actions(103);
	v->a[1175] = 1;
	v->a[1176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1177] = actions(105);
	v->a[1178] = 1;
	v->a[1179] = anon_sym_DOLLAR;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = actions(107);
	v->a[1181] = 1;
	v->a[1182] = anon_sym_DQUOTE;
	v->a[1183] = actions(111);
	v->a[1184] = 1;
	v->a[1185] = anon_sym_DOLLAR_LBRACE;
	v->a[1186] = actions(113);
	v->a[1187] = 1;
	v->a[1188] = anon_sym_DOLLAR_LPAREN;
	v->a[1189] = actions(115);
	v->a[1190] = 1;
	v->a[1191] = anon_sym_BQUOTE;
	v->a[1192] = actions(117);
	v->a[1193] = 1;
	v->a[1194] = sym_file_descriptor;
	v->a[1195] = actions(119);
	v->a[1196] = 1;
	v->a[1197] = sym_variable_name;
	v->a[1198] = actions(123);
	v->a[1199] = 1;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
