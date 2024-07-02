/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_261.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1305(t_small_parse_table_array *v)
{
	v->a[26100] = 1;
	v->a[26101] = anon_sym_CARET;
	v->a[26102] = actions(732);
	v->a[26103] = 1;
	v->a[26104] = anon_sym_PIPE;
	v->a[26105] = actions(734);
	v->a[26106] = 1;
	v->a[26107] = anon_sym_AMP_AMP;
	v->a[26108] = actions(736);
	v->a[26109] = 1;
	v->a[26110] = anon_sym_PIPE_PIPE;
	v->a[26111] = actions(738);
	v->a[26112] = 1;
	v->a[26113] = anon_sym_QMARK;
	v->a[26114] = actions(740);
	v->a[26115] = 1;
	v->a[26116] = anon_sym_EQ;
	v->a[26117] = actions(987);
	v->a[26118] = 1;
	v->a[26119] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = actions(664);
	v->a[26121] = 2;
	v->a[26122] = anon_sym_LT;
	v->a[26123] = anon_sym_GT;
	v->a[26124] = actions(666);
	v->a[26125] = 2;
	v->a[26126] = anon_sym_GT_GT;
	v->a[26127] = anon_sym_LT_LT;
	v->a[26128] = actions(670);
	v->a[26129] = 2;
	v->a[26130] = anon_sym_EQ_EQ;
	v->a[26131] = anon_sym_BANG_EQ;
	v->a[26132] = actions(672);
	v->a[26133] = 2;
	v->a[26134] = anon_sym_LT_EQ;
	v->a[26135] = anon_sym_GT_EQ;
	v->a[26136] = actions(674);
	v->a[26137] = 2;
	v->a[26138] = anon_sym_PLUS;
	v->a[26139] = anon_sym_DASH;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = actions(678);
	v->a[26141] = 2;
	v->a[26142] = anon_sym_PLUS_PLUS2;
	v->a[26143] = anon_sym_DASH_DASH2;
	v->a[26144] = actions(676);
	v->a[26145] = 3;
	v->a[26146] = anon_sym_STAR;
	v->a[26147] = anon_sym_SLASH;
	v->a[26148] = anon_sym_PERCENT;
	v->a[26149] = actions(912);
	v->a[26150] = 10;
	v->a[26151] = anon_sym_PLUS_EQ;
	v->a[26152] = anon_sym_DASH_EQ;
	v->a[26153] = anon_sym_STAR_EQ;
	v->a[26154] = anon_sym_SLASH_EQ;
	v->a[26155] = anon_sym_PERCENT_EQ;
	v->a[26156] = anon_sym_LT_LT_EQ;
	v->a[26157] = anon_sym_GT_GT_EQ;
	v->a[26158] = anon_sym_AMP_EQ;
	v->a[26159] = anon_sym_CARET_EQ;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = anon_sym_PIPE_EQ;
	v->a[26161] = 6;
	v->a[26162] = actions(3);
	v->a[26163] = 1;
	v->a[26164] = sym_comment;
	v->a[26165] = actions(361);
	v->a[26166] = 1;
	v->a[26167] = sym_file_descriptor;
	v->a[26168] = actions(993);
	v->a[26169] = 1;
	v->a[26170] = sym_variable_name;
	v->a[26171] = actions(991);
	v->a[26172] = 2;
	v->a[26173] = aux_sym__simple_variable_name_token1;
	v->a[26174] = aux_sym__multiline_variable_name_token1;
	v->a[26175] = actions(989);
	v->a[26176] = 9;
	v->a[26177] = anon_sym_BANG;
	v->a[26178] = anon_sym_DASH;
	v->a[26179] = anon_sym_STAR;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_QMARK;
	v->a[26181] = anon_sym_DOLLAR;
	v->a[26182] = anon_sym_POUND;
	v->a[26183] = anon_sym_AT;
	v->a[26184] = anon_sym_0;
	v->a[26185] = anon_sym__;
	v->a[26186] = actions(363);
	v->a[26187] = 20;
	v->a[26188] = anon_sym_PIPE;
	v->a[26189] = anon_sym_AMP_AMP;
	v->a[26190] = anon_sym_PIPE_PIPE;
	v->a[26191] = anon_sym_LT;
	v->a[26192] = anon_sym_GT;
	v->a[26193] = anon_sym_GT_GT;
	v->a[26194] = anon_sym_LT_AMP;
	v->a[26195] = anon_sym_GT_AMP;
	v->a[26196] = anon_sym_GT_PIPE;
	v->a[26197] = anon_sym_LT_GT;
	v->a[26198] = anon_sym_LT_LT;
	v->a[26199] = anon_sym_LT_LT_DASH;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
