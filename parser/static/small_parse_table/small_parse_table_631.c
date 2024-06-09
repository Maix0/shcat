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
	v->a[63100] = anon_sym_AMP_GT;
	v->a[63101] = anon_sym_AMP_GT_GT;
	v->a[63102] = anon_sym_LT_AMP;
	v->a[63103] = anon_sym_GT_AMP;
	v->a[63104] = anon_sym_GT_PIPE;
	v->a[63105] = anon_sym_LT_AMP_DASH;
	v->a[63106] = anon_sym_GT_AMP_DASH;
	v->a[63107] = anon_sym_LT_LT;
	v->a[63108] = anon_sym_LT_LT_DASH;
	v->a[63109] = anon_sym_AMP;
	v->a[63110] = anon_sym_BQUOTE;
	v->a[63111] = anon_sym_SEMI;
	v->a[63112] = 6;
	v->a[63113] = actions(3);
	v->a[63114] = 1;
	v->a[63115] = sym_comment;
	v->a[63116] = actions(2261);
	v->a[63117] = 1;
	v->a[63118] = aux_sym_concatenation_token1;
	v->a[63119] = actions(2263);
	small_parse_table_3156(v);
}

void	small_parse_table_3156(t_small_parse_table_array *v)
{
	v->a[63120] = 1;
	v->a[63121] = sym__concat;
	v->a[63122] = state(1079);
	v->a[63123] = 1;
	v->a[63124] = aux_sym_concatenation_repeat1;
	v->a[63125] = actions(565);
	v->a[63126] = 3;
	v->a[63127] = sym_file_descriptor;
	v->a[63128] = ts_builtin_sym_end;
	v->a[63129] = aux_sym_heredoc_redirect_token1;
	v->a[63130] = actions(567);
	v->a[63131] = 18;
	v->a[63132] = anon_sym_PIPE;
	v->a[63133] = anon_sym_SEMI_SEMI;
	v->a[63134] = anon_sym_AMP_AMP;
	v->a[63135] = anon_sym_PIPE_PIPE;
	v->a[63136] = anon_sym_LT;
	v->a[63137] = anon_sym_GT;
	v->a[63138] = anon_sym_GT_GT;
	v->a[63139] = anon_sym_AMP_GT;
	small_parse_table_3157(v);
}

void	small_parse_table_3157(t_small_parse_table_array *v)
{
	v->a[63140] = anon_sym_AMP_GT_GT;
	v->a[63141] = anon_sym_LT_AMP;
	v->a[63142] = anon_sym_GT_AMP;
	v->a[63143] = anon_sym_GT_PIPE;
	v->a[63144] = anon_sym_LT_AMP_DASH;
	v->a[63145] = anon_sym_GT_AMP_DASH;
	v->a[63146] = anon_sym_LT_LT;
	v->a[63147] = anon_sym_LT_LT_DASH;
	v->a[63148] = anon_sym_AMP;
	v->a[63149] = anon_sym_SEMI;
	v->a[63150] = 5;
	v->a[63151] = actions(3);
	v->a[63152] = 1;
	v->a[63153] = sym_comment;
	v->a[63154] = actions(2269);
	v->a[63155] = 1;
	v->a[63156] = sym_variable_name;
	v->a[63157] = actions(2267);
	v->a[63158] = 2;
	v->a[63159] = sym_file_descriptor;
	small_parse_table_3158(v);
}

void	small_parse_table_3158(t_small_parse_table_array *v)
{
	v->a[63160] = aux_sym_heredoc_redirect_token1;
	v->a[63161] = state(1009);
	v->a[63162] = 2;
	v->a[63163] = sym_variable_assignment;
	v->a[63164] = aux_sym_variable_assignments_repeat1;
	v->a[63165] = actions(2265);
	v->a[63166] = 19;
	v->a[63167] = anon_sym_PIPE;
	v->a[63168] = anon_sym_SEMI_SEMI;
	v->a[63169] = anon_sym_AMP_AMP;
	v->a[63170] = anon_sym_PIPE_PIPE;
	v->a[63171] = anon_sym_LT;
	v->a[63172] = anon_sym_GT;
	v->a[63173] = anon_sym_GT_GT;
	v->a[63174] = anon_sym_AMP_GT;
	v->a[63175] = anon_sym_AMP_GT_GT;
	v->a[63176] = anon_sym_LT_AMP;
	v->a[63177] = anon_sym_GT_AMP;
	v->a[63178] = anon_sym_GT_PIPE;
	v->a[63179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3159(v);
}

void	small_parse_table_3159(t_small_parse_table_array *v)
{
	v->a[63180] = anon_sym_GT_AMP_DASH;
	v->a[63181] = anon_sym_LT_LT;
	v->a[63182] = anon_sym_LT_LT_DASH;
	v->a[63183] = anon_sym_AMP;
	v->a[63184] = anon_sym_BQUOTE;
	v->a[63185] = anon_sym_SEMI;
	v->a[63186] = 3;
	v->a[63187] = actions(3);
	v->a[63188] = 1;
	v->a[63189] = sym_comment;
	v->a[63190] = actions(1301);
	v->a[63191] = 4;
	v->a[63192] = sym_file_descriptor;
	v->a[63193] = sym__concat;
	v->a[63194] = sym_variable_name;
	v->a[63195] = aux_sym_heredoc_redirect_token1;
	v->a[63196] = actions(1299);
	v->a[63197] = 20;
	v->a[63198] = anon_sym_esac;
	v->a[63199] = anon_sym_PIPE;
	small_parse_table_3160(v);
}

/* EOF small_parse_table_631.c */
