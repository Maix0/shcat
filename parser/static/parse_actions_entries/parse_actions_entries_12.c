/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_12.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_60(t_parse_actions_entries_array *v)
{
	v->a[1200] = entry(2, false);
	v->a[1201] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1202] = shift_repeat(1338);
	v->a[1203] = entry(2, false);
	v->a[1204] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1205] = shift_repeat(64);
	v->a[1206] = entry(2, false);
	v->a[1207] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1208] = shift_repeat(67);
	v->a[1209] = entry(1, false);
	v->a[1210] = shift(1084);
	v->a[1211] = entry(1, true);
	v->a[1212] = shift(1084);
	v->a[1213] = entry(1, false);
	v->a[1214] = shift(125);
	v->a[1215] = entry(1, false);
	v->a[1216] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1217] = entry(1, false);
	v->a[1218] = reduce(sym__heredoc_expression, 2, 0, 52);
	v->a[1219] = entry(2, false);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1221] = shift_repeat(1084);
	v->a[1222] = entry(2, true);
	v->a[1223] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1224] = shift_repeat(1084);
	v->a[1225] = entry(1, false);
	v->a[1226] = shift(1125);
	v->a[1227] = entry(1, true);
	v->a[1228] = shift(1125);
	v->a[1229] = entry(1, true);
	v->a[1230] = shift(1072);
	v->a[1231] = entry(2, false);
	v->a[1232] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1233] = shift_repeat(1125);
	v->a[1234] = entry(2, true);
	v->a[1235] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1236] = shift_repeat(1125);
	v->a[1237] = entry(1, true);
	v->a[1238] = shift(1103);
	v->a[1239] = entry(1, true);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = shift(1052);
	v->a[1241] = entry(1, true);
	v->a[1242] = shift(1061);
	v->a[1243] = entry(1, true);
	v->a[1244] = shift(1099);
	v->a[1245] = entry(1, false);
	v->a[1246] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1247] = entry(1, false);
	v->a[1248] = reduce(sym__statements, 2, 0, 8);
	v->a[1249] = entry(1, true);
	v->a[1250] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1251] = entry(1, false);
	v->a[1252] = shift(808);
	v->a[1253] = entry(1, false);
	v->a[1254] = shift(813);
	v->a[1255] = entry(1, true);
	v->a[1256] = shift(813);
	v->a[1257] = entry(1, false);
	v->a[1258] = shift(1782);
	v->a[1259] = entry(2, true);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1261] = shift(1674);
	v->a[1262] = entry(1, false);
	v->a[1263] = shift(950);
	v->a[1264] = entry(1, false);
	v->a[1265] = shift(948);
	v->a[1266] = entry(1, true);
	v->a[1267] = shift(948);
	v->a[1268] = entry(1, false);
	v->a[1269] = reduce(sym__statements, 3, 0, 31);
	v->a[1270] = entry(1, true);
	v->a[1271] = shift(1059);
	v->a[1272] = entry(1, false);
	v->a[1273] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1274] = entry(2, false);
	v->a[1275] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1276] = shift_repeat(511);
	v->a[1277] = entry(1, true);
	v->a[1278] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1279] = entry(1, false);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1281] = entry(1, false);
	v->a[1282] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1283] = entry(2, false);
	v->a[1284] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1285] = shift(461);
	v->a[1286] = entry(2, false);
	v->a[1287] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1288] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1289] = entry(1, true);
	v->a[1290] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1291] = entry(2, false);
	v->a[1292] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1293] = shift(378);
	v->a[1294] = entry(2, false);
	v->a[1295] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1296] = shift(944);
	v->a[1297] = entry(2, false);
	v->a[1298] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1299] = shift(400);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
