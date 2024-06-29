/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_301.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1505(t_small_parse_table_array *v)
{
	v->a[30100] = sym__bare_dollar;
	v->a[30101] = actions(983);
	v->a[30102] = 29;
	v->a[30103] = anon_sym_PIPE;
	v->a[30104] = anon_sym_RPAREN;
	v->a[30105] = anon_sym_SEMI_SEMI;
	v->a[30106] = anon_sym_AMP_AMP;
	v->a[30107] = anon_sym_PIPE_PIPE;
	v->a[30108] = anon_sym_LT;
	v->a[30109] = anon_sym_GT;
	v->a[30110] = anon_sym_GT_GT;
	v->a[30111] = anon_sym_AMP_GT;
	v->a[30112] = anon_sym_AMP_GT_GT;
	v->a[30113] = anon_sym_LT_AMP;
	v->a[30114] = anon_sym_GT_AMP;
	v->a[30115] = anon_sym_GT_PIPE;
	v->a[30116] = anon_sym_LT_AMP_DASH;
	v->a[30117] = anon_sym_GT_AMP_DASH;
	v->a[30118] = anon_sym_LT_LT;
	v->a[30119] = anon_sym_LT_LT_DASH;
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = aux_sym_heredoc_redirect_token1;
	v->a[30121] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30122] = anon_sym_AMP;
	v->a[30123] = anon_sym_DOLLAR;
	v->a[30124] = anon_sym_DQUOTE;
	v->a[30125] = sym_raw_string;
	v->a[30126] = sym_number;
	v->a[30127] = anon_sym_DOLLAR_LBRACE;
	v->a[30128] = anon_sym_DOLLAR_LPAREN;
	v->a[30129] = anon_sym_BQUOTE;
	v->a[30130] = sym_word;
	v->a[30131] = anon_sym_SEMI;
	v->a[30132] = 7;
	v->a[30133] = actions(1074);
	v->a[30134] = 1;
	v->a[30135] = sym_comment;
	v->a[30136] = actions(1146);
	v->a[30137] = 2;
	v->a[30138] = anon_sym_GT_GT;
	v->a[30139] = anon_sym_LT_LT;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = actions(1158);
	v->a[30141] = 2;
	v->a[30142] = anon_sym_PLUS;
	v->a[30143] = anon_sym_DASH;
	v->a[30144] = actions(1162);
	v->a[30145] = 2;
	v->a[30146] = anon_sym_PLUS_PLUS2;
	v->a[30147] = anon_sym_DASH_DASH2;
	v->a[30148] = actions(1160);
	v->a[30149] = 3;
	v->a[30150] = anon_sym_STAR;
	v->a[30151] = anon_sym_SLASH;
	v->a[30152] = anon_sym_PERCENT;
	v->a[30153] = actions(1186);
	v->a[30154] = 6;
	v->a[30155] = anon_sym_PIPE;
	v->a[30156] = anon_sym_EQ;
	v->a[30157] = anon_sym_LT;
	v->a[30158] = anon_sym_GT;
	v->a[30159] = anon_sym_CARET;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = anon_sym_AMP;
	v->a[30161] = actions(1188);
	v->a[30162] = 19;
	v->a[30163] = anon_sym_AMP_AMP;
	v->a[30164] = anon_sym_PIPE_PIPE;
	v->a[30165] = anon_sym_RPAREN_RPAREN;
	v->a[30166] = anon_sym_PLUS_EQ;
	v->a[30167] = anon_sym_DASH_EQ;
	v->a[30168] = anon_sym_STAR_EQ;
	v->a[30169] = anon_sym_SLASH_EQ;
	v->a[30170] = anon_sym_PERCENT_EQ;
	v->a[30171] = anon_sym_LT_LT_EQ;
	v->a[30172] = anon_sym_GT_GT_EQ;
	v->a[30173] = anon_sym_AMP_EQ;
	v->a[30174] = anon_sym_CARET_EQ;
	v->a[30175] = anon_sym_PIPE_EQ;
	v->a[30176] = anon_sym_EQ_EQ;
	v->a[30177] = anon_sym_BANG_EQ;
	v->a[30178] = anon_sym_LT_EQ;
	v->a[30179] = anon_sym_GT_EQ;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = anon_sym_QMARK;
	v->a[30181] = anon_sym_COLON;
	v->a[30182] = 4;
	v->a[30183] = actions(1074);
	v->a[30184] = 1;
	v->a[30185] = sym_comment;
	v->a[30186] = actions(1162);
	v->a[30187] = 2;
	v->a[30188] = anon_sym_PLUS_PLUS2;
	v->a[30189] = anon_sym_DASH_DASH2;
	v->a[30190] = actions(1186);
	v->a[30191] = 13;
	v->a[30192] = anon_sym_PIPE;
	v->a[30193] = anon_sym_EQ;
	v->a[30194] = anon_sym_LT;
	v->a[30195] = anon_sym_GT;
	v->a[30196] = anon_sym_GT_GT;
	v->a[30197] = anon_sym_LT_LT;
	v->a[30198] = anon_sym_CARET;
	v->a[30199] = anon_sym_AMP;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
