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
	v->a[35200] = actions(1082);
	v->a[35201] = 2;
	v->a[35202] = anon_sym_LT;
	v->a[35203] = anon_sym_GT;
	v->a[35204] = actions(1084);
	v->a[35205] = 2;
	v->a[35206] = anon_sym_GT_GT;
	v->a[35207] = anon_sym_LT_LT;
	v->a[35208] = actions(1086);
	v->a[35209] = 2;
	v->a[35210] = anon_sym_LT_EQ;
	v->a[35211] = anon_sym_GT_EQ;
	v->a[35212] = actions(1088);
	v->a[35213] = 2;
	v->a[35214] = anon_sym_PLUS;
	v->a[35215] = anon_sym_DASH;
	v->a[35216] = actions(1092);
	v->a[35217] = 2;
	v->a[35218] = anon_sym_PLUS_PLUS2;
	v->a[35219] = anon_sym_DASH_DASH2;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = actions(1116);
	v->a[35221] = 2;
	v->a[35222] = anon_sym_EQ_EQ;
	v->a[35223] = anon_sym_BANG_EQ;
	v->a[35224] = actions(1090);
	v->a[35225] = 3;
	v->a[35226] = anon_sym_STAR;
	v->a[35227] = anon_sym_SLASH;
	v->a[35228] = anon_sym_PERCENT;
	v->a[35229] = actions(1288);
	v->a[35230] = 10;
	v->a[35231] = anon_sym_PLUS_EQ;
	v->a[35232] = anon_sym_DASH_EQ;
	v->a[35233] = anon_sym_STAR_EQ;
	v->a[35234] = anon_sym_SLASH_EQ;
	v->a[35235] = anon_sym_PERCENT_EQ;
	v->a[35236] = anon_sym_LT_LT_EQ;
	v->a[35237] = anon_sym_GT_GT_EQ;
	v->a[35238] = anon_sym_AMP_EQ;
	v->a[35239] = anon_sym_CARET_EQ;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = anon_sym_PIPE_EQ;
	v->a[35241] = 3;
	v->a[35242] = actions(1094);
	v->a[35243] = 1;
	v->a[35244] = sym_comment;
	v->a[35245] = actions(1139);
	v->a[35246] = 13;
	v->a[35247] = anon_sym_PIPE;
	v->a[35248] = anon_sym_EQ;
	v->a[35249] = anon_sym_LT;
	v->a[35250] = anon_sym_GT;
	v->a[35251] = anon_sym_GT_GT;
	v->a[35252] = anon_sym_LT_LT;
	v->a[35253] = anon_sym_CARET;
	v->a[35254] = anon_sym_AMP;
	v->a[35255] = anon_sym_PLUS;
	v->a[35256] = anon_sym_DASH;
	v->a[35257] = anon_sym_STAR;
	v->a[35258] = anon_sym_SLASH;
	v->a[35259] = anon_sym_PERCENT;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = actions(1141);
	v->a[35261] = 20;
	v->a[35262] = anon_sym_RPAREN;
	v->a[35263] = anon_sym_AMP_AMP;
	v->a[35264] = anon_sym_PIPE_PIPE;
	v->a[35265] = anon_sym_PLUS_EQ;
	v->a[35266] = anon_sym_DASH_EQ;
	v->a[35267] = anon_sym_STAR_EQ;
	v->a[35268] = anon_sym_SLASH_EQ;
	v->a[35269] = anon_sym_PERCENT_EQ;
	v->a[35270] = anon_sym_LT_LT_EQ;
	v->a[35271] = anon_sym_GT_GT_EQ;
	v->a[35272] = anon_sym_AMP_EQ;
	v->a[35273] = anon_sym_CARET_EQ;
	v->a[35274] = anon_sym_PIPE_EQ;
	v->a[35275] = anon_sym_EQ_EQ;
	v->a[35276] = anon_sym_BANG_EQ;
	v->a[35277] = anon_sym_LT_EQ;
	v->a[35278] = anon_sym_GT_EQ;
	v->a[35279] = anon_sym_QMARK;
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = anon_sym_PLUS_PLUS2;
	v->a[35281] = anon_sym_DASH_DASH2;
	v->a[35282] = 3;
	v->a[35283] = actions(3);
	v->a[35284] = 1;
	v->a[35285] = sym_comment;
	v->a[35286] = actions(1159);
	v->a[35287] = 3;
	v->a[35288] = sym_file_descriptor;
	v->a[35289] = sym__concat;
	v->a[35290] = sym_variable_name;
	v->a[35291] = actions(1157);
	v->a[35292] = 30;
	v->a[35293] = anon_sym_esac;
	v->a[35294] = anon_sym_PIPE;
	v->a[35295] = anon_sym_SEMI_SEMI;
	v->a[35296] = anon_sym_AMP_AMP;
	v->a[35297] = anon_sym_PIPE_PIPE;
	v->a[35298] = anon_sym_LT;
	v->a[35299] = anon_sym_GT;
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
