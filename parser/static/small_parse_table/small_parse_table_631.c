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
	v->a[63100] = aux_sym_redirected_statement_repeat2;
	v->a[63101] = actions(1941);
	v->a[63102] = 7;
	v->a[63103] = anon_sym_LT;
	v->a[63104] = anon_sym_GT;
	v->a[63105] = anon_sym_GT_GT;
	v->a[63106] = anon_sym_LT_AMP;
	v->a[63107] = anon_sym_GT_AMP;
	v->a[63108] = anon_sym_GT_PIPE;
	v->a[63109] = anon_sym_LT_GT;
	v->a[63110] = actions(2069);
	v->a[63111] = 7;
	v->a[63112] = anon_sym_PIPE;
	v->a[63113] = anon_sym_SEMI_SEMI;
	v->a[63114] = anon_sym_AMP_AMP;
	v->a[63115] = anon_sym_PIPE_PIPE;
	v->a[63116] = anon_sym_LT_LT;
	v->a[63117] = anon_sym_LT_LT_DASH;
	v->a[63118] = anon_sym_SEMI;
	v->a[63119] = 6;
	small_parse_table_3156(v);
}

void	small_parse_table_3156(t_small_parse_table_array *v)
{
	v->a[63120] = actions(3);
	v->a[63121] = 1;
	v->a[63122] = sym_comment;
	v->a[63123] = actions(2157);
	v->a[63124] = 1;
	v->a[63125] = aux_sym_heredoc_redirect_token1;
	v->a[63126] = actions(2300);
	v->a[63127] = 1;
	v->a[63128] = sym_file_descriptor;
	v->a[63129] = state(1199);
	v->a[63130] = 2;
	v->a[63131] = sym_file_redirect;
	v->a[63132] = aux_sym_redirected_statement_repeat2;
	v->a[63133] = actions(2159);
	v->a[63134] = 7;
	v->a[63135] = anon_sym_PIPE;
	v->a[63136] = anon_sym_SEMI_SEMI;
	v->a[63137] = anon_sym_AMP_AMP;
	v->a[63138] = anon_sym_PIPE_PIPE;
	v->a[63139] = anon_sym_LT_LT;
	small_parse_table_3157(v);
}

void	small_parse_table_3157(t_small_parse_table_array *v)
{
	v->a[63140] = anon_sym_LT_LT_DASH;
	v->a[63141] = anon_sym_SEMI;
	v->a[63142] = actions(2297);
	v->a[63143] = 7;
	v->a[63144] = anon_sym_LT;
	v->a[63145] = anon_sym_GT;
	v->a[63146] = anon_sym_GT_GT;
	v->a[63147] = anon_sym_LT_AMP;
	v->a[63148] = anon_sym_GT_AMP;
	v->a[63149] = anon_sym_GT_PIPE;
	v->a[63150] = anon_sym_LT_GT;
	v->a[63151] = 5;
	v->a[63152] = actions(3);
	v->a[63153] = 1;
	v->a[63154] = sym_comment;
	v->a[63155] = actions(2303);
	v->a[63156] = 1;
	v->a[63157] = anon_sym_PIPE;
	v->a[63158] = state(1200);
	v->a[63159] = 1;
	small_parse_table_3158(v);
}

void	small_parse_table_3158(t_small_parse_table_array *v)
{
	v->a[63160] = aux_sym_pipeline_repeat1;
	v->a[63161] = actions(2033);
	v->a[63162] = 3;
	v->a[63163] = sym_file_descriptor;
	v->a[63164] = ts_builtin_sym_end;
	v->a[63165] = aux_sym_heredoc_redirect_token1;
	v->a[63166] = actions(2038);
	v->a[63167] = 13;
	v->a[63168] = anon_sym_SEMI_SEMI;
	v->a[63169] = anon_sym_AMP_AMP;
	v->a[63170] = anon_sym_PIPE_PIPE;
	v->a[63171] = anon_sym_LT;
	v->a[63172] = anon_sym_GT;
	v->a[63173] = anon_sym_GT_GT;
	v->a[63174] = anon_sym_LT_AMP;
	v->a[63175] = anon_sym_GT_AMP;
	v->a[63176] = anon_sym_GT_PIPE;
	v->a[63177] = anon_sym_LT_GT;
	v->a[63178] = anon_sym_LT_LT;
	v->a[63179] = anon_sym_LT_LT_DASH;
	small_parse_table_3159(v);
}

void	small_parse_table_3159(t_small_parse_table_array *v)
{
	v->a[63180] = anon_sym_SEMI;
	v->a[63181] = 6;
	v->a[63182] = actions(3);
	v->a[63183] = 1;
	v->a[63184] = sym_comment;
	v->a[63185] = actions(2061);
	v->a[63186] = 1;
	v->a[63187] = aux_sym_heredoc_redirect_token1;
	v->a[63188] = actions(2295);
	v->a[63189] = 1;
	v->a[63190] = sym_file_descriptor;
	v->a[63191] = state(1199);
	v->a[63192] = 2;
	v->a[63193] = sym_file_redirect;
	v->a[63194] = aux_sym_redirected_statement_repeat2;
	v->a[63195] = actions(1941);
	v->a[63196] = 7;
	v->a[63197] = anon_sym_LT;
	v->a[63198] = anon_sym_GT;
	v->a[63199] = anon_sym_GT_GT;
	small_parse_table_3160(v);
}

/* EOF small_parse_table_631.c */
