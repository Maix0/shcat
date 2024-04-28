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
	v->a[1101] = anon_sym_DOLLAR_BQUOTE;
	v->a[1102] = actions(1607);
	v->a[1103] = 1;
	v->a[1104] = sym_test_operator;
	v->a[1105] = actions(1609);
	v->a[1106] = 1;
	v->a[1107] = sym__bare_dollar;
	v->a[1108] = actions(1611);
	v->a[1109] = 1;
	v->a[1110] = sym__brace_start;
	v->a[1111] = state(560);
	v->a[1112] = 1;
	v->a[1113] = aux_sym_command_repeat2;
	v->a[1114] = state(1431);
	v->a[1115] = 1;
	v->a[1116] = aux_sym__literal_repeat1;
	v->a[1117] = state(1521);
	v->a[1118] = 1;
	v->a[1119] = sym_concatenation;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = state(1552);
	v->a[1121] = 1;
	v->a[1122] = sym_herestring_redirect;
	v->a[1123] = state(4952);
	v->a[1124] = 1;
	v->a[1125] = sym_subshell;
	v->a[1126] = actions(1579);
	v->a[1127] = 2;
	v->a[1128] = anon_sym_LPAREN_LPAREN;
	v->a[1129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1130] = actions(1581);
	v->a[1131] = 2;
	v->a[1132] = anon_sym_EQ_EQ;
	v->a[1133] = anon_sym_EQ_TILDE;
	v->a[1134] = actions(1605);
	v->a[1135] = 2;
	v->a[1136] = anon_sym_LT_LPAREN;
	v->a[1137] = anon_sym_GT_LPAREN;
	v->a[1138] = actions(1442);
	v->a[1139] = 3;
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = sym_file_descriptor;
	v->a[1141] = ts_builtin_sym_end;
	v->a[1142] = aux_sym_heredoc_redirect_token1;
	v->a[1143] = actions(1577);
	v->a[1144] = 3;
	v->a[1145] = sym_raw_string;
	v->a[1146] = sym_ansi_c_string;
	v->a[1147] = sym_word;
	v->a[1148] = state(1093);
	v->a[1149] = 9;
	v->a[1150] = sym_arithmetic_expansion;
	v->a[1151] = sym_brace_expression;
	v->a[1152] = sym_string;
	v->a[1153] = sym_translated_string;
	v->a[1154] = sym_number;
	v->a[1155] = sym_simple_expansion;
	v->a[1156] = sym_expansion;
	v->a[1157] = sym_command_substitution;
	v->a[1158] = sym_process_substitution;
	v->a[1159] = actions(1440);
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = 19;
	v->a[1161] = anon_sym_SEMI;
	v->a[1162] = anon_sym_PIPE_PIPE;
	v->a[1163] = anon_sym_AMP_AMP;
	v->a[1164] = anon_sym_PIPE;
	v->a[1165] = anon_sym_AMP;
	v->a[1166] = anon_sym_LT;
	v->a[1167] = anon_sym_GT;
	v->a[1168] = anon_sym_LT_LT;
	v->a[1169] = anon_sym_GT_GT;
	v->a[1170] = anon_sym_SEMI_SEMI;
	v->a[1171] = anon_sym_PIPE_AMP;
	v->a[1172] = anon_sym_AMP_GT;
	v->a[1173] = anon_sym_AMP_GT_GT;
	v->a[1174] = anon_sym_LT_AMP;
	v->a[1175] = anon_sym_GT_AMP;
	v->a[1176] = anon_sym_GT_PIPE;
	v->a[1177] = anon_sym_LT_AMP_DASH;
	v->a[1178] = anon_sym_GT_AMP_DASH;
	v->a[1179] = anon_sym_LT_LT_DASH;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = 8;
	v->a[1181] = actions(3);
	v->a[1182] = 1;
	v->a[1183] = sym_comment;
	v->a[1184] = actions(1619);
	v->a[1185] = 1;
	v->a[1186] = anon_sym_DQUOTE;
	v->a[1187] = actions(1623);
	v->a[1188] = 1;
	v->a[1189] = sym_variable_name;
	v->a[1190] = state(868);
	v->a[1191] = 1;
	v->a[1192] = sym_string;
	v->a[1193] = actions(1621);
	v->a[1194] = 2;
	v->a[1195] = aux_sym__simple_variable_name_token1;
	v->a[1196] = aux_sym__multiline_variable_name_token1;
	v->a[1197] = actions(1241);
	v->a[1198] = 4;
	v->a[1199] = sym_file_descriptor;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
