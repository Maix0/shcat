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
	v->a[1200] = sym_test_operator;
	v->a[1201] = sym__bare_dollar;
	v->a[1202] = sym__brace_start;
	v->a[1203] = actions(1617);
	v->a[1204] = 9;
	v->a[1205] = anon_sym_DASH;
	v->a[1206] = anon_sym_STAR;
	v->a[1207] = anon_sym_BANG;
	v->a[1208] = anon_sym_QMARK;
	v->a[1209] = anon_sym_DOLLAR;
	v->a[1210] = anon_sym_POUND;
	v->a[1211] = anon_sym_AT2;
	v->a[1212] = anon_sym_0;
	v->a[1213] = anon_sym__;
	v->a[1214] = actions(1239);
	v->a[1215] = 42;
	v->a[1216] = anon_sym_LPAREN_LPAREN;
	v->a[1217] = anon_sym_SEMI;
	v->a[1218] = anon_sym_PIPE_PIPE;
	v->a[1219] = anon_sym_AMP_AMP;
	small_parse_table_61(v);
}

void	small_parse_table_61(t_small_parse_table_array *v)
{
	v->a[1220] = anon_sym_PIPE;
	v->a[1221] = anon_sym_AMP;
	v->a[1222] = anon_sym_EQ_EQ;
	v->a[1223] = anon_sym_LT;
	v->a[1224] = anon_sym_GT;
	v->a[1225] = anon_sym_LT_LT;
	v->a[1226] = anon_sym_GT_GT;
	v->a[1227] = anon_sym_LPAREN;
	v->a[1228] = anon_sym_esac;
	v->a[1229] = anon_sym_SEMI_SEMI;
	v->a[1230] = anon_sym_SEMI_AMP;
	v->a[1231] = anon_sym_SEMI_SEMI_AMP;
	v->a[1232] = anon_sym_PIPE_AMP;
	v->a[1233] = anon_sym_EQ_TILDE;
	v->a[1234] = anon_sym_AMP_GT;
	v->a[1235] = anon_sym_AMP_GT_GT;
	v->a[1236] = anon_sym_LT_AMP;
	v->a[1237] = anon_sym_GT_AMP;
	v->a[1238] = anon_sym_GT_PIPE;
	v->a[1239] = anon_sym_LT_AMP_DASH;
	small_parse_table_62(v);
}

void	small_parse_table_62(t_small_parse_table_array *v)
{
	v->a[1240] = anon_sym_GT_AMP_DASH;
	v->a[1241] = anon_sym_LT_LT_DASH;
	v->a[1242] = aux_sym_heredoc_redirect_token1;
	v->a[1243] = anon_sym_LT_LT_LT;
	v->a[1244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1245] = anon_sym_DOLLAR_LBRACK;
	v->a[1246] = sym__special_character;
	v->a[1247] = sym_raw_string;
	v->a[1248] = sym_ansi_c_string;
	v->a[1249] = aux_sym_number_token1;
	v->a[1250] = aux_sym_number_token2;
	v->a[1251] = anon_sym_DOLLAR_LBRACE;
	v->a[1252] = anon_sym_DOLLAR_LPAREN;
	v->a[1253] = anon_sym_BQUOTE;
	v->a[1254] = anon_sym_DOLLAR_BQUOTE;
	v->a[1255] = anon_sym_LT_LPAREN;
	v->a[1256] = anon_sym_GT_LPAREN;
	v->a[1257] = sym_word;
	v->a[1258] = 8;
	v->a[1259] = actions(3);
	small_parse_table_63(v);
}

void	small_parse_table_63(t_small_parse_table_array *v)
{
	v->a[1260] = 1;
	v->a[1261] = sym_comment;
	v->a[1262] = actions(1619);
	v->a[1263] = 1;
	v->a[1264] = anon_sym_DQUOTE;
	v->a[1265] = actions(1623);
	v->a[1266] = 1;
	v->a[1267] = sym_variable_name;
	v->a[1268] = state(868);
	v->a[1269] = 1;
	v->a[1270] = sym_string;
	v->a[1271] = actions(1621);
	v->a[1272] = 2;
	v->a[1273] = aux_sym__simple_variable_name_token1;
	v->a[1274] = aux_sym__multiline_variable_name_token1;
	v->a[1275] = actions(1235);
	v->a[1276] = 4;
	v->a[1277] = sym_file_descriptor;
	v->a[1278] = sym_test_operator;
	v->a[1279] = sym__bare_dollar;
	small_parse_table_64(v);
}

void	small_parse_table_64(t_small_parse_table_array *v)
{
	v->a[1280] = sym__brace_start;
	v->a[1281] = actions(1617);
	v->a[1282] = 9;
	v->a[1283] = anon_sym_DASH;
	v->a[1284] = anon_sym_STAR;
	v->a[1285] = anon_sym_BANG;
	v->a[1286] = anon_sym_QMARK;
	v->a[1287] = anon_sym_DOLLAR;
	v->a[1288] = anon_sym_POUND;
	v->a[1289] = anon_sym_AT2;
	v->a[1290] = anon_sym_0;
	v->a[1291] = anon_sym__;
	v->a[1292] = actions(1227);
	v->a[1293] = 42;
	v->a[1294] = anon_sym_LPAREN_LPAREN;
	v->a[1295] = anon_sym_SEMI;
	v->a[1296] = anon_sym_PIPE_PIPE;
	v->a[1297] = anon_sym_AMP_AMP;
	v->a[1298] = anon_sym_PIPE;
	v->a[1299] = anon_sym_AMP;
	small_parse_table_65(v);
}

/* EOF small_parse_table_12.c */
