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
	v->a[1200] = sym_word;
	v->a[1201] = actions(91);
	v->a[1202] = 1;
	v->a[1203] = anon_sym_for;
	v->a[1204] = actions(95);
	v->a[1205] = 1;
	v->a[1206] = anon_sym_if;
	v->a[1207] = actions(97);
	v->a[1208] = 1;
	v->a[1209] = anon_sym_case;
	v->a[1210] = actions(99);
	v->a[1211] = 1;
	v->a[1212] = anon_sym_LPAREN;
	v->a[1213] = actions(101);
	v->a[1214] = 1;
	v->a[1215] = anon_sym_LBRACE;
	v->a[1216] = actions(103);
	v->a[1217] = 1;
	v->a[1218] = anon_sym_BANG;
	v->a[1219] = actions(109);
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = 1;
	v->a[1221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1222] = actions(111);
	v->a[1223] = 1;
	v->a[1224] = anon_sym_DOLLAR;
	v->a[1225] = actions(113);
	v->a[1226] = 1;
	v->a[1227] = anon_sym_DQUOTE;
	v->a[1228] = actions(117);
	v->a[1229] = 1;
	v->a[1230] = anon_sym_DOLLAR_LBRACE;
	v->a[1231] = actions(119);
	v->a[1232] = 1;
	v->a[1233] = anon_sym_DOLLAR_LPAREN;
	v->a[1234] = actions(121);
	v->a[1235] = 1;
	v->a[1236] = anon_sym_BQUOTE;
	v->a[1237] = actions(123);
	v->a[1238] = 1;
	v->a[1239] = sym_file_descriptor;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = actions(125);
	v->a[1241] = 1;
	v->a[1242] = sym_variable_name;
	v->a[1243] = actions(127);
	v->a[1244] = 1;
	v->a[1245] = anon_sym_LF;
	v->a[1246] = state(16);
	v->a[1247] = 1;
	v->a[1248] = aux_sym__case_item_last_repeat2;
	v->a[1249] = state(129);
	v->a[1250] = 1;
	v->a[1251] = aux_sym__statements_repeat1;
	v->a[1252] = state(182);
	v->a[1253] = 1;
	v->a[1254] = sym_command_name;
	v->a[1255] = state(271);
	v->a[1256] = 1;
	v->a[1257] = sym_variable_assignment;
	v->a[1258] = state(621);
	v->a[1259] = 1;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = sym_concatenation;
	v->a[1261] = state(692);
	v->a[1262] = 1;
	v->a[1263] = sym_file_redirect;
	v->a[1264] = state(810);
	v->a[1265] = 1;
	v->a[1266] = aux_sym_command_repeat1;
	v->a[1267] = state(1321);
	v->a[1268] = 1;
	v->a[1269] = sym_pipeline;
	v->a[1270] = state(1432);
	v->a[1271] = 1;
	v->a[1272] = aux_sym_redirected_statement_repeat2;
	v->a[1273] = state(2254);
	v->a[1274] = 1;
	v->a[1275] = sym__statement_not_pipeline;
	v->a[1276] = state(2270);
	v->a[1277] = 1;
	v->a[1278] = sym__statements;
	v->a[1279] = actions(93);
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = 2;
	v->a[1281] = anon_sym_while;
	v->a[1282] = anon_sym_until;
	v->a[1283] = actions(107);
	v->a[1284] = 2;
	v->a[1285] = anon_sym_LT_AMP_DASH;
	v->a[1286] = anon_sym_GT_AMP_DASH;
	v->a[1287] = actions(115);
	v->a[1288] = 2;
	v->a[1289] = sym_raw_string;
	v->a[1290] = sym_number;
	v->a[1291] = state(282);
	v->a[1292] = 5;
	v->a[1293] = sym_arithmetic_expansion;
	v->a[1294] = sym_string;
	v->a[1295] = sym_simple_expansion;
	v->a[1296] = sym_expansion;
	v->a[1297] = sym_command_substitution;
	v->a[1298] = actions(105);
	v->a[1299] = 8;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
