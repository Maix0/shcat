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
	v->a[1200] = 1;
	v->a[1201] = sym_pipeline;
	v->a[1202] = state(2040);
	v->a[1203] = 1;
	v->a[1204] = sym__statement_not_pipeline;
	v->a[1205] = state(2046);
	v->a[1206] = 1;
	v->a[1207] = sym__statements;
	v->a[1208] = actions(99);
	v->a[1209] = 2;
	v->a[1210] = anon_sym_while;
	v->a[1211] = anon_sym_until;
	v->a[1212] = actions(115);
	v->a[1213] = 2;
	v->a[1214] = anon_sym_LT_AMP_DASH;
	v->a[1215] = anon_sym_GT_AMP_DASH;
	v->a[1216] = state(282);
	v->a[1217] = 6;
	v->a[1218] = sym_arithmetic_expansion;
	v->a[1219] = sym_string;
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = sym_number;
	v->a[1221] = sym_simple_expansion;
	v->a[1222] = sym_expansion;
	v->a[1223] = sym_command_substitution;
	v->a[1224] = actions(113);
	v->a[1225] = 8;
	v->a[1226] = anon_sym_LT;
	v->a[1227] = anon_sym_GT;
	v->a[1228] = anon_sym_GT_GT;
	v->a[1229] = anon_sym_AMP_GT;
	v->a[1230] = anon_sym_AMP_GT_GT;
	v->a[1231] = anon_sym_LT_AMP;
	v->a[1232] = anon_sym_GT_AMP;
	v->a[1233] = anon_sym_GT_PIPE;
	v->a[1234] = state(1048);
	v->a[1235] = 12;
	v->a[1236] = sym_redirected_statement;
	v->a[1237] = sym_for_statement;
	v->a[1238] = sym_while_statement;
	v->a[1239] = sym_if_statement;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = sym_case_statement;
	v->a[1241] = sym_function_definition;
	v->a[1242] = sym_compound_statement;
	v->a[1243] = sym_subshell;
	v->a[1244] = sym_list;
	v->a[1245] = sym_negated_command;
	v->a[1246] = sym_command;
	v->a[1247] = sym_variable_assignments;
	v->a[1248] = 36;
	v->a[1249] = actions(3);
	v->a[1250] = 1;
	v->a[1251] = sym_comment;
	v->a[1252] = actions(9);
	v->a[1253] = 1;
	v->a[1254] = anon_sym_for;
	v->a[1255] = actions(13);
	v->a[1256] = 1;
	v->a[1257] = anon_sym_if;
	v->a[1258] = actions(15);
	v->a[1259] = 1;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = anon_sym_case;
	v->a[1261] = actions(17);
	v->a[1262] = 1;
	v->a[1263] = anon_sym_LPAREN;
	v->a[1264] = actions(19);
	v->a[1265] = 1;
	v->a[1266] = anon_sym_LBRACE;
	v->a[1267] = actions(49);
	v->a[1268] = 1;
	v->a[1269] = sym_word;
	v->a[1270] = actions(57);
	v->a[1271] = 1;
	v->a[1272] = anon_sym_BANG;
	v->a[1273] = actions(63);
	v->a[1274] = 1;
	v->a[1275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1276] = actions(65);
	v->a[1277] = 1;
	v->a[1278] = anon_sym_DOLLAR;
	v->a[1279] = actions(67);
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = 1;
	v->a[1281] = anon_sym_DQUOTE;
	v->a[1282] = actions(69);
	v->a[1283] = 1;
	v->a[1284] = sym_raw_string;
	v->a[1285] = actions(71);
	v->a[1286] = 1;
	v->a[1287] = aux_sym_number_token1;
	v->a[1288] = actions(73);
	v->a[1289] = 1;
	v->a[1290] = aux_sym_number_token2;
	v->a[1291] = actions(75);
	v->a[1292] = 1;
	v->a[1293] = anon_sym_DOLLAR_LBRACE;
	v->a[1294] = actions(77);
	v->a[1295] = 1;
	v->a[1296] = anon_sym_DOLLAR_LPAREN;
	v->a[1297] = actions(79);
	v->a[1298] = 1;
	v->a[1299] = anon_sym_BQUOTE;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
