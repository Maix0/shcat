/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1651.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8255(t_small_parse_table_array *v)
{
	v->a[165100] = anon_sym_EQ;
	v->a[165101] = anon_sym_PIPE;
	v->a[165102] = anon_sym_CARET;
	v->a[165103] = anon_sym_AMP;
	v->a[165104] = anon_sym_LT;
	v->a[165105] = anon_sym_GT;
	v->a[165106] = anon_sym_LT_LT;
	v->a[165107] = anon_sym_GT_GT;
	v->a[165108] = anon_sym_PLUS;
	v->a[165109] = anon_sym_DASH;
	v->a[165110] = anon_sym_STAR;
	v->a[165111] = anon_sym_SLASH;
	v->a[165112] = anon_sym_PERCENT;
	v->a[165113] = anon_sym_STAR_STAR;
	v->a[165114] = actions(6842);
	v->a[165115] = 22;
	v->a[165116] = anon_sym_PLUS_PLUS;
	v->a[165117] = anon_sym_DASH_DASH;
	v->a[165118] = anon_sym_PLUS_EQ;
	v->a[165119] = anon_sym_DASH_EQ;
	small_parse_table_8256(v);
}

void	small_parse_table_8256(t_small_parse_table_array *v)
{
	v->a[165120] = anon_sym_STAR_EQ;
	v->a[165121] = anon_sym_SLASH_EQ;
	v->a[165122] = anon_sym_PERCENT_EQ;
	v->a[165123] = anon_sym_STAR_STAR_EQ;
	v->a[165124] = anon_sym_LT_LT_EQ;
	v->a[165125] = anon_sym_GT_GT_EQ;
	v->a[165126] = anon_sym_AMP_EQ;
	v->a[165127] = anon_sym_CARET_EQ;
	v->a[165128] = anon_sym_PIPE_EQ;
	v->a[165129] = anon_sym_PIPE_PIPE;
	v->a[165130] = anon_sym_AMP_AMP;
	v->a[165131] = anon_sym_EQ_EQ;
	v->a[165132] = anon_sym_BANG_EQ;
	v->a[165133] = anon_sym_LT_EQ;
	v->a[165134] = anon_sym_GT_EQ;
	v->a[165135] = anon_sym_RPAREN;
	v->a[165136] = anon_sym_EQ_TILDE;
	v->a[165137] = anon_sym_QMARK;
	v->a[165138] = 20;
	v->a[165139] = actions(71);
	small_parse_table_8257(v);
}

void	small_parse_table_8257(t_small_parse_table_array *v)
{
	v->a[165140] = 1;
	v->a[165141] = sym_comment;
	v->a[165142] = actions(7172);
	v->a[165143] = 1;
	v->a[165144] = anon_sym_EQ;
	v->a[165145] = actions(7176);
	v->a[165146] = 1;
	v->a[165147] = anon_sym_PIPE_PIPE;
	v->a[165148] = actions(7178);
	v->a[165149] = 1;
	v->a[165150] = anon_sym_AMP_AMP;
	v->a[165151] = actions(7180);
	v->a[165152] = 1;
	v->a[165153] = anon_sym_PIPE;
	v->a[165154] = actions(7182);
	v->a[165155] = 1;
	v->a[165156] = anon_sym_CARET;
	v->a[165157] = actions(7184);
	v->a[165158] = 1;
	v->a[165159] = anon_sym_AMP;
	small_parse_table_8258(v);
}

void	small_parse_table_8258(t_small_parse_table_array *v)
{
	v->a[165160] = actions(7198);
	v->a[165161] = 1;
	v->a[165162] = anon_sym_STAR_STAR;
	v->a[165163] = actions(7200);
	v->a[165164] = 1;
	v->a[165165] = anon_sym_EQ_TILDE;
	v->a[165166] = actions(7202);
	v->a[165167] = 1;
	v->a[165168] = anon_sym_QMARK;
	v->a[165169] = actions(7206);
	v->a[165170] = 1;
	v->a[165171] = sym_test_operator;
	v->a[165172] = actions(7483);
	v->a[165173] = 1;
	v->a[165174] = anon_sym_COLON;
	v->a[165175] = actions(6793);
	v->a[165176] = 2;
	v->a[165177] = anon_sym_PLUS_PLUS;
	v->a[165178] = anon_sym_DASH_DASH;
	v->a[165179] = actions(7186);
	small_parse_table_8259(v);
}

void	small_parse_table_8259(t_small_parse_table_array *v)
{
	v->a[165180] = 2;
	v->a[165181] = anon_sym_EQ_EQ;
	v->a[165182] = anon_sym_BANG_EQ;
	v->a[165183] = actions(7188);
	v->a[165184] = 2;
	v->a[165185] = anon_sym_LT;
	v->a[165186] = anon_sym_GT;
	v->a[165187] = actions(7190);
	v->a[165188] = 2;
	v->a[165189] = anon_sym_LT_EQ;
	v->a[165190] = anon_sym_GT_EQ;
	v->a[165191] = actions(7192);
	v->a[165192] = 2;
	v->a[165193] = anon_sym_LT_LT;
	v->a[165194] = anon_sym_GT_GT;
	v->a[165195] = actions(7194);
	v->a[165196] = 2;
	v->a[165197] = anon_sym_PLUS;
	v->a[165198] = anon_sym_DASH;
	v->a[165199] = actions(7196);
	small_parse_table_8260(v);
}

/* EOF small_parse_table_1651.c */
