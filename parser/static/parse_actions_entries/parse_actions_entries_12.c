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
	v->a[1200] = shift(1529);
	v->a[1201] = entry(1, true);
	v->a[1202] = shift(1526);
	v->a[1203] = entry(1, false);
	v->a[1204] = shift(1016);
	v->a[1205] = entry(1, false);
	v->a[1206] = shift(1011);
	v->a[1207] = entry(1, true);
	v->a[1208] = shift(1011);
	v->a[1209] = entry(1, false);
	v->a[1210] = reduce(sym_arithmetic_postfix_expression, 2, 0, 24);
	v->a[1211] = entry(1, true);
	v->a[1212] = reduce(sym_arithmetic_postfix_expression, 2, 0, 24);
	v->a[1213] = entry(1, false);
	v->a[1214] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1215] = entry(1, true);
	v->a[1216] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1217] = entry(1, true);
	v->a[1218] = shift(1563);
	v->a[1219] = entry(2, false);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1221] = shift_repeat(1529);
	v->a[1222] = entry(2, true);
	v->a[1223] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1224] = shift_repeat(1529);
	v->a[1225] = entry(2, false);
	v->a[1226] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1227] = shift_repeat(795);
	v->a[1228] = entry(1, true);
	v->a[1229] = shift(1529);
	v->a[1230] = entry(2, false);
	v->a[1231] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1232] = shift_repeat(796);
	v->a[1233] = entry(1, true);
	v->a[1234] = shift(1519);
	v->a[1235] = entry(1, false);
	v->a[1236] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	v->a[1237] = entry(1, true);
	v->a[1238] = reduce(sym_arithmetic_binary_expression, 3, 0, 38);
	v->a[1239] = entry(1, false);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = shift(971);
	v->a[1241] = entry(1, true);
	v->a[1242] = shift(991);
	v->a[1243] = entry(1, false);
	v->a[1244] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1245] = entry(1, true);
	v->a[1246] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1247] = entry(2, false);
	v->a[1248] = reduce(sym_command_name, 1, 0, 0);
	v->a[1249] = shift(2221);
	v->a[1250] = entry(1, true);
	v->a[1251] = shift(349);
	v->a[1252] = entry(1, true);
	v->a[1253] = shift(978);
	v->a[1254] = entry(1, false);
	v->a[1255] = shift(1521);
	v->a[1256] = entry(1, true);
	v->a[1257] = shift(1497);
	v->a[1258] = entry(1, false);
	v->a[1259] = shift(1004);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = entry(1, false);
	v->a[1261] = shift(1091);
	v->a[1262] = entry(1, true);
	v->a[1263] = shift(1091);
	v->a[1264] = entry(2, false);
	v->a[1265] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1266] = shift_repeat(1521);
	v->a[1267] = entry(2, true);
	v->a[1268] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1269] = shift_repeat(1521);
	v->a[1270] = entry(1, true);
	v->a[1271] = shift(1293);
	v->a[1272] = entry(1, true);
	v->a[1273] = shift(649);
	v->a[1274] = entry(1, false);
	v->a[1275] = reduce(sym_terminator, 1, 0, 0);
	v->a[1276] = entry(1, true);
	v->a[1277] = reduce(sym_terminator, 1, 0, 0);
	v->a[1278] = entry(1, false);
	v->a[1279] = shift(827);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(2, false);
	v->a[1281] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1282] = shift_repeat(1556);
	v->a[1283] = entry(2, true);
	v->a[1284] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1285] = shift_repeat(1556);
	v->a[1286] = entry(1, false);
	v->a[1287] = shift(1530);
	v->a[1288] = entry(1, true);
	v->a[1289] = shift(1530);
	v->a[1290] = entry(1, true);
	v->a[1291] = shift(2069);
	v->a[1292] = entry(1, true);
	v->a[1293] = shift(445);
	v->a[1294] = entry(1, true);
	v->a[1295] = shift(995);
	v->a[1296] = entry(1, true);
	v->a[1297] = shift(1694);
	v->a[1298] = entry(1, true);
	v->a[1299] = shift(814);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
