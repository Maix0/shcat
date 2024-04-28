/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1601.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8005(t_small_parse_table_array *v)
{
	v->a[160100] = anon_sym_SLASH_EQ;
	v->a[160101] = anon_sym_PERCENT_EQ;
	v->a[160102] = anon_sym_STAR_STAR_EQ;
	v->a[160103] = anon_sym_LT_LT_EQ;
	v->a[160104] = anon_sym_GT_GT_EQ;
	v->a[160105] = anon_sym_AMP_EQ;
	v->a[160106] = anon_sym_CARET_EQ;
	v->a[160107] = anon_sym_PIPE_EQ;
	v->a[160108] = anon_sym_PIPE_PIPE;
	v->a[160109] = anon_sym_DASHo;
	v->a[160110] = anon_sym_AMP_AMP;
	v->a[160111] = anon_sym_DASHa;
	v->a[160112] = anon_sym_PIPE;
	v->a[160113] = anon_sym_CARET;
	v->a[160114] = anon_sym_AMP;
	v->a[160115] = anon_sym_EQ_EQ;
	v->a[160116] = anon_sym_BANG_EQ;
	v->a[160117] = anon_sym_LT;
	v->a[160118] = anon_sym_GT;
	v->a[160119] = anon_sym_LT_EQ;
	small_parse_table_8006(v);
}

void	small_parse_table_8006(t_small_parse_table_array *v)
{
	v->a[160120] = anon_sym_GT_EQ;
	v->a[160121] = anon_sym_LT_LT;
	v->a[160122] = anon_sym_GT_GT;
	v->a[160123] = anon_sym_PLUS;
	v->a[160124] = anon_sym_DASH;
	v->a[160125] = anon_sym_STAR;
	v->a[160126] = anon_sym_SLASH;
	v->a[160127] = anon_sym_PERCENT;
	v->a[160128] = anon_sym_STAR_STAR;
	v->a[160129] = 3;
	v->a[160130] = actions(3);
	v->a[160131] = 1;
	v->a[160132] = sym_comment;
	v->a[160133] = actions(1330);
	v->a[160134] = 1;
	v->a[160135] = aux_sym_heredoc_redirect_token1;
	v->a[160136] = actions(1328);
	v->a[160137] = 36;
	v->a[160138] = anon_sym_SEMI;
	v->a[160139] = anon_sym_COMMA;
	small_parse_table_8007(v);
}

void	small_parse_table_8007(t_small_parse_table_array *v)
{
	v->a[160140] = anon_sym_PLUS_PLUS;
	v->a[160141] = anon_sym_DASH_DASH;
	v->a[160142] = anon_sym_PLUS_EQ;
	v->a[160143] = anon_sym_DASH_EQ;
	v->a[160144] = anon_sym_STAR_EQ;
	v->a[160145] = anon_sym_SLASH_EQ;
	v->a[160146] = anon_sym_PERCENT_EQ;
	v->a[160147] = anon_sym_STAR_STAR_EQ;
	v->a[160148] = anon_sym_LT_LT_EQ;
	v->a[160149] = anon_sym_GT_GT_EQ;
	v->a[160150] = anon_sym_AMP_EQ;
	v->a[160151] = anon_sym_CARET_EQ;
	v->a[160152] = anon_sym_PIPE_EQ;
	v->a[160153] = anon_sym_PIPE_PIPE;
	v->a[160154] = anon_sym_DASHo;
	v->a[160155] = anon_sym_AMP_AMP;
	v->a[160156] = anon_sym_DASHa;
	v->a[160157] = anon_sym_PIPE;
	v->a[160158] = anon_sym_CARET;
	v->a[160159] = anon_sym_AMP;
	small_parse_table_8008(v);
}

void	small_parse_table_8008(t_small_parse_table_array *v)
{
	v->a[160160] = anon_sym_EQ_EQ;
	v->a[160161] = anon_sym_BANG_EQ;
	v->a[160162] = anon_sym_LT;
	v->a[160163] = anon_sym_GT;
	v->a[160164] = anon_sym_LT_EQ;
	v->a[160165] = anon_sym_GT_EQ;
	v->a[160166] = anon_sym_LT_LT;
	v->a[160167] = anon_sym_GT_GT;
	v->a[160168] = anon_sym_PLUS;
	v->a[160169] = anon_sym_DASH;
	v->a[160170] = anon_sym_STAR;
	v->a[160171] = anon_sym_SLASH;
	v->a[160172] = anon_sym_PERCENT;
	v->a[160173] = anon_sym_STAR_STAR;
	v->a[160174] = 20;
	v->a[160175] = actions(71);
	v->a[160176] = 1;
	v->a[160177] = sym_comment;
	v->a[160178] = actions(7172);
	v->a[160179] = 1;
	small_parse_table_8009(v);
}

void	small_parse_table_8009(t_small_parse_table_array *v)
{
	v->a[160180] = anon_sym_EQ;
	v->a[160181] = actions(7176);
	v->a[160182] = 1;
	v->a[160183] = anon_sym_PIPE_PIPE;
	v->a[160184] = actions(7178);
	v->a[160185] = 1;
	v->a[160186] = anon_sym_AMP_AMP;
	v->a[160187] = actions(7180);
	v->a[160188] = 1;
	v->a[160189] = anon_sym_PIPE;
	v->a[160190] = actions(7182);
	v->a[160191] = 1;
	v->a[160192] = anon_sym_CARET;
	v->a[160193] = actions(7184);
	v->a[160194] = 1;
	v->a[160195] = anon_sym_AMP;
	v->a[160196] = actions(7198);
	v->a[160197] = 1;
	v->a[160198] = anon_sym_STAR_STAR;
	v->a[160199] = actions(7200);
	small_parse_table_8010(v);
}

/* EOF small_parse_table_1601.c */
