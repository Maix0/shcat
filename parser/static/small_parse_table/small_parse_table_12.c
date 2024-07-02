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
	v->a[1200] = anon_sym_LF;
	v->a[1201] = state(8);
	v->a[1202] = 1;
	v->a[1203] = aux_sym__case_item_last_repeat2;
	v->a[1204] = state(122);
	v->a[1205] = 1;
	v->a[1206] = aux_sym__statements_repeat1;
	v->a[1207] = state(172);
	v->a[1208] = 1;
	v->a[1209] = sym_command_name;
	v->a[1210] = state(234);
	v->a[1211] = 1;
	v->a[1212] = sym_variable_assignment;
	v->a[1213] = state(567);
	v->a[1214] = 1;
	v->a[1215] = sym_concatenation;
	v->a[1216] = state(634);
	v->a[1217] = 1;
	v->a[1218] = sym_file_redirect;
	v->a[1219] = state(670);
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = 1;
	v->a[1221] = aux_sym_command_repeat1;
	v->a[1222] = state(1014);
	v->a[1223] = 1;
	v->a[1224] = sym_pipeline;
	v->a[1225] = state(1157);
	v->a[1226] = 1;
	v->a[1227] = aux_sym_redirected_statement_repeat2;
	v->a[1228] = state(1899);
	v->a[1229] = 1;
	v->a[1230] = sym__statements;
	v->a[1231] = state(1901);
	v->a[1232] = 1;
	v->a[1233] = sym__statement_not_pipeline;
	v->a[1234] = actions(87);
	v->a[1235] = 2;
	v->a[1236] = anon_sym_while;
	v->a[1237] = anon_sym_until;
	v->a[1238] = actions(109);
	v->a[1239] = 2;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = sym_raw_string;
	v->a[1241] = sym_number;
	v->a[1242] = state(348);
	v->a[1243] = 5;
	v->a[1244] = sym_arithmetic_expansion;
	v->a[1245] = sym_string;
	v->a[1246] = sym_simple_expansion;
	v->a[1247] = sym_expansion;
	v->a[1248] = sym_command_substitution;
	v->a[1249] = actions(101);
	v->a[1250] = 7;
	v->a[1251] = anon_sym_LT;
	v->a[1252] = anon_sym_GT;
	v->a[1253] = anon_sym_GT_GT;
	v->a[1254] = anon_sym_LT_AMP;
	v->a[1255] = anon_sym_GT_AMP;
	v->a[1256] = anon_sym_GT_PIPE;
	v->a[1257] = anon_sym_LT_GT;
	v->a[1258] = state(1001);
	v->a[1259] = 12;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = sym_redirected_statement;
	v->a[1261] = sym_for_statement;
	v->a[1262] = sym_while_statement;
	v->a[1263] = sym_if_statement;
	v->a[1264] = sym_case_statement;
	v->a[1265] = sym_function_definition;
	v->a[1266] = sym_compound_statement;
	v->a[1267] = sym_subshell;
	v->a[1268] = sym_list;
	v->a[1269] = sym_negated_command;
	v->a[1270] = sym_command;
	v->a[1271] = sym__variable_assignments;
	v->a[1272] = 33;
	v->a[1273] = actions(3);
	v->a[1274] = 1;
	v->a[1275] = sym_comment;
	v->a[1276] = actions(9);
	v->a[1277] = 1;
	v->a[1278] = anon_sym_for;
	v->a[1279] = actions(13);
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = 1;
	v->a[1281] = anon_sym_if;
	v->a[1282] = actions(15);
	v->a[1283] = 1;
	v->a[1284] = anon_sym_case;
	v->a[1285] = actions(17);
	v->a[1286] = 1;
	v->a[1287] = anon_sym_LPAREN;
	v->a[1288] = actions(19);
	v->a[1289] = 1;
	v->a[1290] = anon_sym_LBRACE;
	v->a[1291] = actions(43);
	v->a[1292] = 1;
	v->a[1293] = sym_word;
	v->a[1294] = actions(51);
	v->a[1295] = 1;
	v->a[1296] = anon_sym_BANG;
	v->a[1297] = actions(55);
	v->a[1298] = 1;
	v->a[1299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
