/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_631.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3155(t_small_parse_table_array *v)
{
	v->a[63100] = actions(3);
	v->a[63101] = 1;
	v->a[63102] = sym_comment;
	v->a[63103] = actions(766);
	v->a[63104] = 1;
	v->a[63105] = anon_sym_PIPE;
	v->a[63106] = actions(809);
	v->a[63107] = 1;
	v->a[63108] = anon_sym_BQUOTE;
	v->a[63109] = actions(2031);
	v->a[63110] = 1;
	v->a[63111] = aux_sym_heredoc_redirect_token1;
	v->a[63112] = actions(2033);
	v->a[63113] = 1;
	v->a[63114] = sym_file_descriptor;
	v->a[63115] = state(829);
	v->a[63116] = 1;
	v->a[63117] = sym_terminator;
	v->a[63118] = actions(804);
	v->a[63119] = 2;
	small_parse_table_3156(v);
}

void	small_parse_table_3156(t_small_parse_table_array *v)
{
	v->a[63120] = anon_sym_LT_LT;
	v->a[63121] = anon_sym_LT_LT_DASH;
	v->a[63122] = actions(842);
	v->a[63123] = 2;
	v->a[63124] = anon_sym_AMP_AMP;
	v->a[63125] = anon_sym_PIPE_PIPE;
	v->a[63126] = actions(2029);
	v->a[63127] = 2;
	v->a[63128] = anon_sym_LT_AMP_DASH;
	v->a[63129] = anon_sym_GT_AMP_DASH;
	v->a[63130] = actions(800);
	v->a[63131] = 3;
	v->a[63132] = anon_sym_SEMI_SEMI;
	v->a[63133] = anon_sym_AMP;
	v->a[63134] = anon_sym_SEMI;
	v->a[63135] = state(1157);
	v->a[63136] = 3;
	v->a[63137] = sym_file_redirect;
	v->a[63138] = sym_heredoc_redirect;
	v->a[63139] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3157(v);
}

void	small_parse_table_3157(t_small_parse_table_array *v)
{
	v->a[63140] = actions(2027);
	v->a[63141] = 8;
	v->a[63142] = anon_sym_LT;
	v->a[63143] = anon_sym_GT;
	v->a[63144] = anon_sym_GT_GT;
	v->a[63145] = anon_sym_AMP_GT;
	v->a[63146] = anon_sym_AMP_GT_GT;
	v->a[63147] = anon_sym_LT_AMP;
	v->a[63148] = anon_sym_GT_AMP;
	v->a[63149] = anon_sym_GT_PIPE;
	v->a[63150] = 12;
	v->a[63151] = actions(3);
	v->a[63152] = 1;
	v->a[63153] = sym_comment;
	v->a[63154] = actions(764);
	v->a[63155] = 1;
	v->a[63156] = anon_sym_RPAREN;
	v->a[63157] = actions(766);
	v->a[63158] = 1;
	v->a[63159] = anon_sym_PIPE;
	small_parse_table_3158(v);
}

void	small_parse_table_3158(t_small_parse_table_array *v)
{
	v->a[63160] = actions(2031);
	v->a[63161] = 1;
	v->a[63162] = aux_sym_heredoc_redirect_token1;
	v->a[63163] = actions(2043);
	v->a[63164] = 1;
	v->a[63165] = sym_file_descriptor;
	v->a[63166] = state(731);
	v->a[63167] = 1;
	v->a[63168] = sym_terminator;
	v->a[63169] = actions(802);
	v->a[63170] = 2;
	v->a[63171] = anon_sym_AMP_AMP;
	v->a[63172] = anon_sym_PIPE_PIPE;
	v->a[63173] = actions(804);
	v->a[63174] = 2;
	v->a[63175] = anon_sym_LT_LT;
	v->a[63176] = anon_sym_LT_LT_DASH;
	v->a[63177] = actions(2041);
	v->a[63178] = 2;
	v->a[63179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3159(v);
}

void	small_parse_table_3159(t_small_parse_table_array *v)
{
	v->a[63180] = anon_sym_GT_AMP_DASH;
	v->a[63181] = actions(800);
	v->a[63182] = 3;
	v->a[63183] = anon_sym_SEMI_SEMI;
	v->a[63184] = anon_sym_AMP;
	v->a[63185] = anon_sym_SEMI;
	v->a[63186] = state(1137);
	v->a[63187] = 3;
	v->a[63188] = sym_file_redirect;
	v->a[63189] = sym_heredoc_redirect;
	v->a[63190] = aux_sym_redirected_statement_repeat1;
	v->a[63191] = actions(2039);
	v->a[63192] = 8;
	v->a[63193] = anon_sym_LT;
	v->a[63194] = anon_sym_GT;
	v->a[63195] = anon_sym_GT_GT;
	v->a[63196] = anon_sym_AMP_GT;
	v->a[63197] = anon_sym_AMP_GT_GT;
	v->a[63198] = anon_sym_LT_AMP;
	v->a[63199] = anon_sym_GT_AMP;
	small_parse_table_3160(v);
}

/* EOF small_parse_table_631.c */
