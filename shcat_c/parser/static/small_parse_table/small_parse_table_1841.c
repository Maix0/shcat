/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1841.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9205(t_small_parse_table_array *v)
{
	v->a[184100] = actions(7569);
	v->a[184101] = 2;
	v->a[184102] = anon_sym_PLUS_PLUS;
	v->a[184103] = anon_sym_DASH_DASH;
	v->a[184104] = actions(7591);
	v->a[184105] = 2;
	v->a[184106] = anon_sym_PLUS;
	v->a[184107] = anon_sym_DASH;
	v->a[184108] = actions(7593);
	v->a[184109] = 3;
	v->a[184110] = anon_sym_STAR;
	v->a[184111] = anon_sym_SLASH;
	v->a[184112] = anon_sym_PERCENT;
	v->a[184113] = actions(7139);
	v->a[184114] = 8;
	v->a[184115] = anon_sym_EQ;
	v->a[184116] = anon_sym_PIPE;
	v->a[184117] = anon_sym_CARET;
	v->a[184118] = anon_sym_AMP;
	v->a[184119] = anon_sym_LT;
	small_parse_table_9206(v);
}

void	small_parse_table_9206(t_small_parse_table_array *v)
{
	v->a[184120] = anon_sym_GT;
	v->a[184121] = anon_sym_LT_LT;
	v->a[184122] = anon_sym_GT_GT;
	v->a[184123] = actions(7137);
	v->a[184124] = 20;
	v->a[184125] = anon_sym_PLUS_EQ;
	v->a[184126] = anon_sym_DASH_EQ;
	v->a[184127] = anon_sym_STAR_EQ;
	v->a[184128] = anon_sym_SLASH_EQ;
	v->a[184129] = anon_sym_PERCENT_EQ;
	v->a[184130] = anon_sym_STAR_STAR_EQ;
	v->a[184131] = anon_sym_LT_LT_EQ;
	v->a[184132] = anon_sym_GT_GT_EQ;
	v->a[184133] = anon_sym_AMP_EQ;
	v->a[184134] = anon_sym_CARET_EQ;
	v->a[184135] = anon_sym_PIPE_EQ;
	v->a[184136] = anon_sym_PIPE_PIPE;
	v->a[184137] = anon_sym_AMP_AMP;
	v->a[184138] = anon_sym_EQ_EQ;
	v->a[184139] = anon_sym_BANG_EQ;
	small_parse_table_9207(v);
}

void	small_parse_table_9207(t_small_parse_table_array *v)
{
	v->a[184140] = anon_sym_LT_EQ;
	v->a[184141] = anon_sym_GT_EQ;
	v->a[184142] = anon_sym_RBRACK;
	v->a[184143] = anon_sym_EQ_TILDE;
	v->a[184144] = anon_sym_QMARK;
	v->a[184145] = 8;
	v->a[184146] = actions(3);
	v->a[184147] = 1;
	v->a[184148] = sym_comment;
	v->a[184149] = actions(1241);
	v->a[184150] = 1;
	v->a[184151] = sym_file_descriptor;
	v->a[184152] = actions(4084);
	v->a[184153] = 1;
	v->a[184154] = anon_sym_DQUOTE;
	v->a[184155] = actions(7613);
	v->a[184156] = 1;
	v->a[184157] = sym_variable_name;
	v->a[184158] = state(4606);
	v->a[184159] = 1;
	small_parse_table_9208(v);
}

void	small_parse_table_9208(t_small_parse_table_array *v)
{
	v->a[184160] = sym_string;
	v->a[184161] = actions(7611);
	v->a[184162] = 2;
	v->a[184163] = aux_sym__simple_variable_name_token1;
	v->a[184164] = aux_sym__multiline_variable_name_token1;
	v->a[184165] = actions(7609);
	v->a[184166] = 9;
	v->a[184167] = anon_sym_DASH;
	v->a[184168] = anon_sym_STAR;
	v->a[184169] = anon_sym_BANG;
	v->a[184170] = anon_sym_QMARK;
	v->a[184171] = anon_sym_DOLLAR;
	v->a[184172] = anon_sym_POUND;
	v->a[184173] = anon_sym_AT2;
	v->a[184174] = anon_sym_0;
	v->a[184175] = anon_sym__;
	v->a[184176] = actions(1239);
	v->a[184177] = 21;
	v->a[184178] = anon_sym_SEMI;
	v->a[184179] = anon_sym_PIPE_PIPE;
	small_parse_table_9209(v);
}

void	small_parse_table_9209(t_small_parse_table_array *v)
{
	v->a[184180] = anon_sym_AMP_AMP;
	v->a[184181] = anon_sym_PIPE;
	v->a[184182] = anon_sym_AMP;
	v->a[184183] = anon_sym_LT;
	v->a[184184] = anon_sym_GT;
	v->a[184185] = anon_sym_LT_LT;
	v->a[184186] = anon_sym_GT_GT;
	v->a[184187] = anon_sym_RPAREN;
	v->a[184188] = anon_sym_SEMI_SEMI;
	v->a[184189] = anon_sym_PIPE_AMP;
	v->a[184190] = anon_sym_AMP_GT;
	v->a[184191] = anon_sym_AMP_GT_GT;
	v->a[184192] = anon_sym_LT_AMP;
	v->a[184193] = anon_sym_GT_AMP;
	v->a[184194] = anon_sym_GT_PIPE;
	v->a[184195] = anon_sym_LT_AMP_DASH;
	v->a[184196] = anon_sym_GT_AMP_DASH;
	v->a[184197] = anon_sym_LT_LT_DASH;
	v->a[184198] = aux_sym_heredoc_redirect_token1;
	v->a[184199] = 3;
	small_parse_table_9210(v);
}

/* EOF small_parse_table_1841.c */
