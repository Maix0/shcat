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
	v->a[1200] = shift(1064);
	v->a[1201] = entry(1, true);
	v->a[1202] = shift(2097);
	v->a[1203] = entry(1, false);
	v->a[1204] = reduce(sym_expansion, 2, 0, 0);
	v->a[1205] = entry(1, true);
	v->a[1206] = reduce(sym_expansion, 2, 0, 0);
	v->a[1207] = entry(1, false);
	v->a[1208] = shift(1630);
	v->a[1209] = entry(1, true);
	v->a[1210] = shift(1630);
	v->a[1211] = entry(1, false);
	v->a[1212] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1213] = entry(1, true);
	v->a[1214] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1215] = entry(1, false);
	v->a[1216] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1217] = entry(1, false);
	v->a[1218] = shift(1632);
	v->a[1219] = entry(1, true);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1221] = entry(1, true);
	v->a[1222] = shift(1632);
	v->a[1223] = entry(1, false);
	v->a[1224] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1225] = entry(1, true);
	v->a[1226] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[1227] = entry(1, true);
	v->a[1228] = shift(1675);
	v->a[1229] = entry(1, false);
	v->a[1230] = reduce(sym_arithmetic_ternary_expression, 5, 0, 58);
	v->a[1231] = entry(1, true);
	v->a[1232] = reduce(sym_arithmetic_ternary_expression, 5, 0, 58);
	v->a[1233] = entry(2, false);
	v->a[1234] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1235] = shift_repeat(1693);
	v->a[1236] = entry(2, true);
	v->a[1237] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1238] = shift_repeat(1693);
	v->a[1239] = entry(2, false);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1241] = shift_repeat(1668);
	v->a[1242] = entry(2, true);
	v->a[1243] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1244] = shift_repeat(1668);
	v->a[1245] = entry(1, false);
	v->a[1246] = reduce(sym_arithmetic_unary_expression, 2, 0, 23);
	v->a[1247] = entry(1, true);
	v->a[1248] = reduce(sym_arithmetic_unary_expression, 2, 0, 23);
	v->a[1249] = entry(2, false);
	v->a[1250] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1251] = shift_repeat(909);
	v->a[1252] = entry(1, true);
	v->a[1253] = shift(1658);
	v->a[1254] = entry(2, false);
	v->a[1255] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1256] = shift_repeat(910);
	v->a[1257] = entry(2, false);
	v->a[1258] = reduce(sym_command_name, 1, 0, 0);
	v->a[1259] = shift(2436);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = entry(2, false);
	v->a[1261] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1262] = shift_repeat(1632);
	v->a[1263] = entry(2, true);
	v->a[1264] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1265] = shift_repeat(1632);
	v->a[1266] = entry(2, false);
	v->a[1267] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1268] = shift_repeat(1662);
	v->a[1269] = entry(2, true);
	v->a[1270] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1271] = shift_repeat(1662);
	v->a[1272] = entry(2, false);
	v->a[1273] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1274] = shift_repeat(1630);
	v->a[1275] = entry(2, true);
	v->a[1276] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1277] = shift_repeat(1630);
	v->a[1278] = entry(2, false);
	v->a[1279] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = shift_repeat(1659);
	v->a[1281] = entry(2, true);
	v->a[1282] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1283] = shift_repeat(1659);
	v->a[1284] = entry(1, true);
	v->a[1285] = shift(1669);
	v->a[1286] = entry(1, true);
	v->a[1287] = shift(1006);
	v->a[1288] = entry(1, true);
	v->a[1289] = shift(1120);
	v->a[1290] = entry(1, true);
	v->a[1291] = shift(464);
	v->a[1292] = entry(1, true);
	v->a[1293] = shift(435);
	v->a[1294] = entry(1, true);
	v->a[1295] = shift(479);
	v->a[1296] = entry(1, true);
	v->a[1297] = shift(485);
	v->a[1298] = entry(1, false);
	v->a[1299] = shift(1127);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
