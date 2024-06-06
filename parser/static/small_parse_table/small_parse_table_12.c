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
	v->a[1200] = actions(816);
	v->a[1201] = 4;
	v->a[1202] = sym_file_descriptor;
	v->a[1203] = sym_test_operator;
	v->a[1204] = sym__bare_dollar;
	v->a[1205] = sym__brace_start;
	v->a[1206] = actions(830);
	v->a[1207] = 9;
	v->a[1208] = anon_sym_BANG;
	v->a[1209] = anon_sym_DASH;
	v->a[1210] = anon_sym_STAR;
	v->a[1211] = anon_sym_QMARK;
	v->a[1212] = anon_sym_DOLLAR;
	v->a[1213] = anon_sym_POUND;
	v->a[1214] = anon_sym_AT;
	v->a[1215] = anon_sym_0;
	v->a[1216] = anon_sym__;
	v->a[1217] = actions(810);
	v->a[1218] = 34;
	v->a[1219] = anon_sym_LPAREN;
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = anon_sym_PIPE;
	v->a[1221] = anon_sym_SEMI_SEMI;
	v->a[1222] = anon_sym_SEMI_AMP;
	v->a[1223] = anon_sym_SEMI_SEMI_AMP;
	v->a[1224] = anon_sym_PIPE_AMP;
	v->a[1225] = anon_sym_AMP_AMP;
	v->a[1226] = anon_sym_PIPE_PIPE;
	v->a[1227] = anon_sym_LT;
	v->a[1228] = anon_sym_GT;
	v->a[1229] = anon_sym_GT_GT;
	v->a[1230] = anon_sym_AMP_GT;
	v->a[1231] = anon_sym_AMP_GT_GT;
	v->a[1232] = anon_sym_LT_AMP;
	v->a[1233] = anon_sym_GT_AMP;
	v->a[1234] = anon_sym_GT_PIPE;
	v->a[1235] = anon_sym_LT_AMP_DASH;
	v->a[1236] = anon_sym_GT_AMP_DASH;
	v->a[1237] = anon_sym_LT_LT;
	v->a[1238] = anon_sym_LT_LT_DASH;
	v->a[1239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1241] = anon_sym_AMP;
	v->a[1242] = sym__special_character;
	v->a[1243] = anon_sym_DQUOTE;
	v->a[1244] = sym_raw_string;
	v->a[1245] = aux_sym_number_token1;
	v->a[1246] = aux_sym_number_token2;
	v->a[1247] = anon_sym_DOLLAR_LBRACE;
	v->a[1248] = anon_sym_DOLLAR_LPAREN;
	v->a[1249] = anon_sym_BQUOTE;
	v->a[1250] = anon_sym_DOLLAR_BQUOTE;
	v->a[1251] = sym_word;
	v->a[1252] = anon_sym_SEMI;
	v->a[1253] = 21;
	v->a[1254] = actions(3);
	v->a[1255] = 1;
	v->a[1256] = sym_comment;
	v->a[1257] = actions(889);
	v->a[1258] = 1;
	v->a[1259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = actions(891);
	v->a[1261] = 1;
	v->a[1262] = anon_sym_DOLLAR;
	v->a[1263] = actions(893);
	v->a[1264] = 1;
	v->a[1265] = sym__special_character;
	v->a[1266] = actions(895);
	v->a[1267] = 1;
	v->a[1268] = anon_sym_DQUOTE;
	v->a[1269] = actions(897);
	v->a[1270] = 1;
	v->a[1271] = aux_sym_number_token1;
	v->a[1272] = actions(899);
	v->a[1273] = 1;
	v->a[1274] = aux_sym_number_token2;
	v->a[1275] = actions(901);
	v->a[1276] = 1;
	v->a[1277] = anon_sym_DOLLAR_LBRACE;
	v->a[1278] = actions(903);
	v->a[1279] = 1;
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = anon_sym_DOLLAR_LPAREN;
	v->a[1281] = actions(905);
	v->a[1282] = 1;
	v->a[1283] = anon_sym_BQUOTE;
	v->a[1284] = actions(907);
	v->a[1285] = 1;
	v->a[1286] = anon_sym_DOLLAR_BQUOTE;
	v->a[1287] = actions(911);
	v->a[1288] = 1;
	v->a[1289] = sym_variable_name;
	v->a[1290] = actions(913);
	v->a[1291] = 1;
	v->a[1292] = sym_test_operator;
	v->a[1293] = actions(915);
	v->a[1294] = 1;
	v->a[1295] = sym__brace_start;
	v->a[1296] = actions(947);
	v->a[1297] = 1;
	v->a[1298] = aux_sym__simple_variable_name_token1;
	v->a[1299] = state(962);
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
