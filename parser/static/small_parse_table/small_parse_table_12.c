/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_12.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_60(t_small_parse_table_array *v)
{
	v->a[1200] = actions(61);
	v->a[1201] = 1;
	v->a[1202] = anon_sym_DOLLAR;
	v->a[1203] = actions(63);
	v->a[1204] = 1;
	v->a[1205] = anon_sym_DQUOTE;
	v->a[1206] = actions(67);
	v->a[1207] = 1;
	v->a[1208] = anon_sym_DOLLAR_LBRACE;
	v->a[1209] = actions(69);
	v->a[1210] = 1;
	v->a[1211] = anon_sym_DOLLAR_LPAREN;
	v->a[1212] = actions(71);
	v->a[1213] = 1;
	v->a[1214] = anon_sym_BQUOTE;
	v->a[1215] = actions(73);
	v->a[1216] = 1;
	v->a[1217] = sym_file_descriptor;
	v->a[1218] = actions(75);
	v->a[1219] = 1;
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = sym_variable_name;
	v->a[1221] = actions(148);
	v->a[1222] = 1;
	v->a[1223] = anon_sym_LF;
	v->a[1224] = state(16);
	v->a[1225] = 1;
	v->a[1226] = aux_sym__case_item_last_repeat2;
	v->a[1227] = state(135);
	v->a[1228] = 1;
	v->a[1229] = aux_sym__statements_repeat1;
	v->a[1230] = state(189);
	v->a[1231] = 1;
	v->a[1232] = sym_command_name;
	v->a[1233] = state(303);
	v->a[1234] = 1;
	v->a[1235] = sym_variable_assignment;
	v->a[1236] = state(650);
	v->a[1237] = 1;
	v->a[1238] = sym_concatenation;
	v->a[1239] = state(712);
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = 1;
	v->a[1241] = sym_file_redirect;
	v->a[1242] = state(713);
	v->a[1243] = 1;
	v->a[1244] = aux_sym_command_repeat1;
	v->a[1245] = state(1227);
	v->a[1246] = 1;
	v->a[1247] = sym_pipeline;
	v->a[1248] = state(1333);
	v->a[1249] = 1;
	v->a[1250] = aux_sym_redirected_statement_repeat2;
	v->a[1251] = state(2103);
	v->a[1252] = 1;
	v->a[1253] = sym__statement_not_pipeline;
	v->a[1254] = state(2184);
	v->a[1255] = 1;
	v->a[1256] = sym__statements;
	v->a[1257] = actions(11);
	v->a[1258] = 2;
	v->a[1259] = anon_sym_while;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = anon_sym_until;
	v->a[1261] = actions(57);
	v->a[1262] = 2;
	v->a[1263] = anon_sym_LT_AMP_DASH;
	v->a[1264] = anon_sym_GT_AMP_DASH;
	v->a[1265] = actions(65);
	v->a[1266] = 2;
	v->a[1267] = sym_raw_string;
	v->a[1268] = sym_number;
	v->a[1269] = state(443);
	v->a[1270] = 5;
	v->a[1271] = sym_arithmetic_expansion;
	v->a[1272] = sym_string;
	v->a[1273] = sym_simple_expansion;
	v->a[1274] = sym_expansion;
	v->a[1275] = sym_command_substitution;
	v->a[1276] = actions(55);
	v->a[1277] = 6;
	v->a[1278] = anon_sym_LT;
	v->a[1279] = anon_sym_GT;
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = anon_sym_GT_GT;
	v->a[1281] = anon_sym_LT_AMP;
	v->a[1282] = anon_sym_GT_AMP;
	v->a[1283] = anon_sym_GT_PIPE;
	v->a[1284] = state(1179);
	v->a[1285] = 12;
	v->a[1286] = sym_redirected_statement;
	v->a[1287] = sym_for_statement;
	v->a[1288] = sym_while_statement;
	v->a[1289] = sym_if_statement;
	v->a[1290] = sym_case_statement;
	v->a[1291] = sym_function_definition;
	v->a[1292] = sym_compound_statement;
	v->a[1293] = sym_subshell;
	v->a[1294] = sym_list;
	v->a[1295] = sym_negated_command;
	v->a[1296] = sym_command;
	v->a[1297] = sym__variable_assignments;
	v->a[1298] = 34;
	v->a[1299] = actions(3);
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
