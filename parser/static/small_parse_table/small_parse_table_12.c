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
	v->a[1200] = sym__statements;
	v->a[1201] = state(1610);
	v->a[1202] = 1;
	v->a[1203] = sym__statement_not_pipeline;
	v->a[1204] = actions(83);
	v->a[1205] = 2;
	v->a[1206] = anon_sym_while;
	v->a[1207] = anon_sym_until;
	v->a[1208] = actions(105);
	v->a[1209] = 2;
	v->a[1210] = sym_raw_string;
	v->a[1211] = sym_number;
	v->a[1212] = state(341);
	v->a[1213] = 5;
	v->a[1214] = sym_arithmetic_expansion;
	v->a[1215] = sym_string;
	v->a[1216] = sym_simple_expansion;
	v->a[1217] = sym_expansion;
	v->a[1218] = sym_command_substitution;
	v->a[1219] = actions(97);
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = 7;
	v->a[1221] = anon_sym_LT;
	v->a[1222] = anon_sym_GT;
	v->a[1223] = anon_sym_GT_GT;
	v->a[1224] = anon_sym_LT_AMP;
	v->a[1225] = anon_sym_GT_AMP;
	v->a[1226] = anon_sym_GT_PIPE;
	v->a[1227] = anon_sym_LT_GT;
	v->a[1228] = state(819);
	v->a[1229] = 12;
	v->a[1230] = sym_redirected_statement;
	v->a[1231] = sym_for_statement;
	v->a[1232] = sym_while_statement;
	v->a[1233] = sym_if_statement;
	v->a[1234] = sym_case_statement;
	v->a[1235] = sym_function_definition;
	v->a[1236] = sym_compound_statement;
	v->a[1237] = sym_subshell;
	v->a[1238] = sym_list;
	v->a[1239] = sym_negated_command;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = sym_command;
	v->a[1241] = sym__variable_assignments;
	v->a[1242] = 32;
	v->a[1243] = actions(3);
	v->a[1244] = 1;
	v->a[1245] = sym_comment;
	v->a[1246] = actions(79);
	v->a[1247] = 1;
	v->a[1248] = sym_word;
	v->a[1249] = actions(81);
	v->a[1250] = 1;
	v->a[1251] = anon_sym_for;
	v->a[1252] = actions(85);
	v->a[1253] = 1;
	v->a[1254] = anon_sym_if;
	v->a[1255] = actions(87);
	v->a[1256] = 1;
	v->a[1257] = anon_sym_case;
	v->a[1258] = actions(89);
	v->a[1259] = 1;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = anon_sym_LPAREN;
	v->a[1261] = actions(93);
	v->a[1262] = 1;
	v->a[1263] = anon_sym_LBRACE;
	v->a[1264] = actions(95);
	v->a[1265] = 1;
	v->a[1266] = anon_sym_BANG;
	v->a[1267] = actions(99);
	v->a[1268] = 1;
	v->a[1269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1270] = actions(101);
	v->a[1271] = 1;
	v->a[1272] = anon_sym_DOLLAR;
	v->a[1273] = actions(103);
	v->a[1274] = 1;
	v->a[1275] = anon_sym_DQUOTE;
	v->a[1276] = actions(107);
	v->a[1277] = 1;
	v->a[1278] = anon_sym_DOLLAR_LBRACE;
	v->a[1279] = actions(109);
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = 1;
	v->a[1281] = anon_sym_DOLLAR_LPAREN;
	v->a[1282] = actions(111);
	v->a[1283] = 1;
	v->a[1284] = anon_sym_BQUOTE;
	v->a[1285] = actions(113);
	v->a[1286] = 1;
	v->a[1287] = sym_variable_name;
	v->a[1288] = actions(119);
	v->a[1289] = 1;
	v->a[1290] = anon_sym_LF;
	v->a[1291] = state(11);
	v->a[1292] = 1;
	v->a[1293] = aux_sym__case_item_last_repeat2;
	v->a[1294] = state(112);
	v->a[1295] = 1;
	v->a[1296] = aux_sym__statements_repeat1;
	v->a[1297] = state(185);
	v->a[1298] = 1;
	v->a[1299] = sym_command_name;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
