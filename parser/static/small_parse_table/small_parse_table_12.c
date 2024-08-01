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
	v->a[1200] = sym_command;
	v->a[1201] = sym__variable_assignments;
	v->a[1202] = 32;
	v->a[1203] = actions(3);
	v->a[1204] = 1;
	v->a[1205] = sym_comment;
	v->a[1206] = actions(79);
	v->a[1207] = 1;
	v->a[1208] = sym_word;
	v->a[1209] = actions(81);
	v->a[1210] = 1;
	v->a[1211] = anon_sym_for;
	v->a[1212] = actions(85);
	v->a[1213] = 1;
	v->a[1214] = anon_sym_if;
	v->a[1215] = actions(87);
	v->a[1216] = 1;
	v->a[1217] = anon_sym_case;
	v->a[1218] = actions(89);
	v->a[1219] = 1;
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = anon_sym_LPAREN;
	v->a[1221] = actions(93);
	v->a[1222] = 1;
	v->a[1223] = anon_sym_LBRACE;
	v->a[1224] = actions(95);
	v->a[1225] = 1;
	v->a[1226] = anon_sym_BANG;
	v->a[1227] = actions(99);
	v->a[1228] = 1;
	v->a[1229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1230] = actions(101);
	v->a[1231] = 1;
	v->a[1232] = anon_sym_DOLLAR;
	v->a[1233] = actions(103);
	v->a[1234] = 1;
	v->a[1235] = anon_sym_DQUOTE;
	v->a[1236] = actions(107);
	v->a[1237] = 1;
	v->a[1238] = anon_sym_DOLLAR_LBRACE;
	v->a[1239] = actions(109);
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = 1;
	v->a[1241] = anon_sym_DOLLAR_LPAREN;
	v->a[1242] = actions(111);
	v->a[1243] = 1;
	v->a[1244] = anon_sym_BQUOTE;
	v->a[1245] = actions(113);
	v->a[1246] = 1;
	v->a[1247] = sym_variable_name;
	v->a[1248] = actions(115);
	v->a[1249] = 1;
	v->a[1250] = anon_sym_LF;
	v->a[1251] = state(104);
	v->a[1252] = 1;
	v->a[1253] = aux_sym__statements_repeat1;
	v->a[1254] = state(170);
	v->a[1255] = 1;
	v->a[1256] = sym_command_name;
	v->a[1257] = state(177);
	v->a[1258] = 1;
	v->a[1259] = sym_variable_assignment;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = state(326);
	v->a[1261] = 1;
	v->a[1262] = aux_sym__case_item_last_repeat2;
	v->a[1263] = state(408);
	v->a[1264] = 1;
	v->a[1265] = aux_sym_command_repeat1;
	v->a[1266] = state(541);
	v->a[1267] = 1;
	v->a[1268] = sym_file_redirect;
	v->a[1269] = state(546);
	v->a[1270] = 1;
	v->a[1271] = sym_concatenation;
	v->a[1272] = state(913);
	v->a[1273] = 1;
	v->a[1274] = sym_pipeline;
	v->a[1275] = state(990);
	v->a[1276] = 1;
	v->a[1277] = aux_sym_redirected_statement_repeat2;
	v->a[1278] = state(1552);
	v->a[1279] = 1;
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = sym__statements;
	v->a[1281] = state(1564);
	v->a[1282] = 1;
	v->a[1283] = sym__statement_not_pipeline;
	v->a[1284] = actions(83);
	v->a[1285] = 2;
	v->a[1286] = anon_sym_while;
	v->a[1287] = anon_sym_until;
	v->a[1288] = actions(105);
	v->a[1289] = 2;
	v->a[1290] = sym_raw_string;
	v->a[1291] = sym_number;
	v->a[1292] = actions(97);
	v->a[1293] = 3;
	v->a[1294] = anon_sym_LT;
	v->a[1295] = anon_sym_GT;
	v->a[1296] = anon_sym_GT_GT;
	v->a[1297] = state(276);
	v->a[1298] = 5;
	v->a[1299] = sym_arithmetic_expansion;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
