/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_352.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1760(t_small_parse_table_array *v)
{
	v->a[35200] = anon_sym_DOLLAR_LBRACE;
	v->a[35201] = anon_sym_DOLLAR_LPAREN;
	v->a[35202] = anon_sym_BQUOTE;
	v->a[35203] = sym_word;
	v->a[35204] = anon_sym_SEMI;
	v->a[35205] = 17;
	v->a[35206] = actions(1074);
	v->a[35207] = 1;
	v->a[35208] = sym_comment;
	v->a[35209] = actions(1136);
	v->a[35210] = 1;
	v->a[35211] = anon_sym_PIPE;
	v->a[35212] = actions(1138);
	v->a[35213] = 1;
	v->a[35214] = anon_sym_AMP_AMP;
	v->a[35215] = actions(1140);
	v->a[35216] = 1;
	v->a[35217] = anon_sym_PIPE_PIPE;
	v->a[35218] = actions(1150);
	v->a[35219] = 1;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = anon_sym_CARET;
	v->a[35221] = actions(1152);
	v->a[35222] = 1;
	v->a[35223] = anon_sym_AMP;
	v->a[35224] = actions(1239);
	v->a[35225] = 1;
	v->a[35226] = anon_sym_EQ;
	v->a[35227] = actions(1241);
	v->a[35228] = 1;
	v->a[35229] = anon_sym_QMARK;
	v->a[35230] = actions(1290);
	v->a[35231] = 1;
	v->a[35232] = anon_sym_RPAREN_RPAREN;
	v->a[35233] = actions(1144);
	v->a[35234] = 2;
	v->a[35235] = anon_sym_LT;
	v->a[35236] = anon_sym_GT;
	v->a[35237] = actions(1146);
	v->a[35238] = 2;
	v->a[35239] = anon_sym_GT_GT;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = anon_sym_LT_LT;
	v->a[35241] = actions(1154);
	v->a[35242] = 2;
	v->a[35243] = anon_sym_EQ_EQ;
	v->a[35244] = anon_sym_BANG_EQ;
	v->a[35245] = actions(1156);
	v->a[35246] = 2;
	v->a[35247] = anon_sym_LT_EQ;
	v->a[35248] = anon_sym_GT_EQ;
	v->a[35249] = actions(1158);
	v->a[35250] = 2;
	v->a[35251] = anon_sym_PLUS;
	v->a[35252] = anon_sym_DASH;
	v->a[35253] = actions(1162);
	v->a[35254] = 2;
	v->a[35255] = anon_sym_PLUS_PLUS2;
	v->a[35256] = anon_sym_DASH_DASH2;
	v->a[35257] = actions(1160);
	v->a[35258] = 3;
	v->a[35259] = anon_sym_STAR;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = anon_sym_SLASH;
	v->a[35261] = anon_sym_PERCENT;
	v->a[35262] = actions(1252);
	v->a[35263] = 10;
	v->a[35264] = anon_sym_PLUS_EQ;
	v->a[35265] = anon_sym_DASH_EQ;
	v->a[35266] = anon_sym_STAR_EQ;
	v->a[35267] = anon_sym_SLASH_EQ;
	v->a[35268] = anon_sym_PERCENT_EQ;
	v->a[35269] = anon_sym_LT_LT_EQ;
	v->a[35270] = anon_sym_GT_GT_EQ;
	v->a[35271] = anon_sym_AMP_EQ;
	v->a[35272] = anon_sym_CARET_EQ;
	v->a[35273] = anon_sym_PIPE_EQ;
	v->a[35274] = 3;
	v->a[35275] = actions(3);
	v->a[35276] = 1;
	v->a[35277] = sym_comment;
	v->a[35278] = actions(1104);
	v->a[35279] = 4;
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = sym_file_descriptor;
	v->a[35281] = sym__concat;
	v->a[35282] = sym_variable_name;
	v->a[35283] = ts_builtin_sym_end;
	v->a[35284] = actions(1102);
	v->a[35285] = 29;
	v->a[35286] = anon_sym_PIPE;
	v->a[35287] = anon_sym_SEMI_SEMI;
	v->a[35288] = anon_sym_AMP_AMP;
	v->a[35289] = anon_sym_PIPE_PIPE;
	v->a[35290] = anon_sym_LT;
	v->a[35291] = anon_sym_GT;
	v->a[35292] = anon_sym_GT_GT;
	v->a[35293] = anon_sym_AMP_GT;
	v->a[35294] = anon_sym_AMP_GT_GT;
	v->a[35295] = anon_sym_LT_AMP;
	v->a[35296] = anon_sym_GT_AMP;
	v->a[35297] = anon_sym_GT_PIPE;
	v->a[35298] = anon_sym_LT_AMP_DASH;
	v->a[35299] = anon_sym_GT_AMP_DASH;
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
