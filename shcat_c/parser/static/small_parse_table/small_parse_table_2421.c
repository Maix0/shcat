/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2421.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12105(t_small_parse_table_array *v)
{
	v->a[242100] = actions(11284);
	v->a[242101] = 1;
	v->a[242102] = anon_sym_LT_LT_LT;
	v->a[242103] = actions(11414);
	v->a[242104] = 1;
	v->a[242105] = aux_sym_heredoc_redirect_token1;
	v->a[242106] = actions(11416);
	v->a[242107] = 1;
	v->a[242108] = sym_file_descriptor;
	v->a[242109] = actions(11282);
	v->a[242110] = 2;
	v->a[242111] = anon_sym_LT_AMP_DASH;
	v->a[242112] = anon_sym_GT_AMP_DASH;
	v->a[242113] = state(4985);
	v->a[242114] = 2;
	v->a[242115] = sym_file_redirect;
	v->a[242116] = sym_herestring_redirect;
	v->a[242117] = actions(11280);
	v->a[242118] = 8;
	v->a[242119] = anon_sym_LT;
	small_parse_table_12106(v);
}

void	small_parse_table_12106(t_small_parse_table_array *v)
{
	v->a[242120] = anon_sym_GT;
	v->a[242121] = anon_sym_GT_GT;
	v->a[242122] = anon_sym_AMP_GT;
	v->a[242123] = anon_sym_AMP_GT_GT;
	v->a[242124] = anon_sym_LT_AMP;
	v->a[242125] = anon_sym_GT_AMP;
	v->a[242126] = anon_sym_GT_PIPE;
	v->a[242127] = actions(11412);
	v->a[242128] = 12;
	v->a[242129] = anon_sym_SEMI;
	v->a[242130] = anon_sym_PIPE_PIPE;
	v->a[242131] = anon_sym_AMP_AMP;
	v->a[242132] = anon_sym_PIPE;
	v->a[242133] = anon_sym_AMP;
	v->a[242134] = anon_sym_LT_LT;
	v->a[242135] = anon_sym_esac;
	v->a[242136] = anon_sym_SEMI_SEMI;
	v->a[242137] = anon_sym_SEMI_AMP;
	v->a[242138] = anon_sym_SEMI_SEMI_AMP;
	v->a[242139] = anon_sym_PIPE_AMP;
	small_parse_table_12107(v);
}

void	small_parse_table_12107(t_small_parse_table_array *v)
{
	v->a[242140] = anon_sym_LT_LT_DASH;
	v->a[242141] = 6;
	v->a[242142] = actions(3);
	v->a[242143] = 1;
	v->a[242144] = sym_comment;
	v->a[242145] = actions(11301);
	v->a[242146] = 1;
	v->a[242147] = aux_sym_concatenation_token1;
	v->a[242148] = actions(11303);
	v->a[242149] = 1;
	v->a[242150] = sym__concat;
	v->a[242151] = state(4284);
	v->a[242152] = 1;
	v->a[242153] = aux_sym_concatenation_repeat1;
	v->a[242154] = actions(4372);
	v->a[242155] = 2;
	v->a[242156] = sym_file_descriptor;
	v->a[242157] = aux_sym_heredoc_redirect_token1;
	v->a[242158] = actions(4370);
	v->a[242159] = 22;
	small_parse_table_12108(v);
}

void	small_parse_table_12108(t_small_parse_table_array *v)
{
	v->a[242160] = anon_sym_SEMI;
	v->a[242161] = anon_sym_PIPE_PIPE;
	v->a[242162] = anon_sym_AMP_AMP;
	v->a[242163] = anon_sym_PIPE;
	v->a[242164] = anon_sym_AMP;
	v->a[242165] = anon_sym_LT;
	v->a[242166] = anon_sym_GT;
	v->a[242167] = anon_sym_LT_LT;
	v->a[242168] = anon_sym_GT_GT;
	v->a[242169] = anon_sym_SEMI_SEMI;
	v->a[242170] = anon_sym_SEMI_AMP;
	v->a[242171] = anon_sym_SEMI_SEMI_AMP;
	v->a[242172] = anon_sym_PIPE_AMP;
	v->a[242173] = anon_sym_AMP_GT;
	v->a[242174] = anon_sym_AMP_GT_GT;
	v->a[242175] = anon_sym_LT_AMP;
	v->a[242176] = anon_sym_GT_AMP;
	v->a[242177] = anon_sym_GT_PIPE;
	v->a[242178] = anon_sym_LT_AMP_DASH;
	v->a[242179] = anon_sym_GT_AMP_DASH;
	small_parse_table_12109(v);
}

void	small_parse_table_12109(t_small_parse_table_array *v)
{
	v->a[242180] = anon_sym_LT_LT_DASH;
	v->a[242181] = anon_sym_LT_LT_LT;
	v->a[242182] = 3;
	v->a[242183] = actions(3);
	v->a[242184] = 1;
	v->a[242185] = sym_comment;
	v->a[242186] = actions(1310);
	v->a[242187] = 4;
	v->a[242188] = sym_file_descriptor;
	v->a[242189] = sym__concat;
	v->a[242190] = ts_builtin_sym_end;
	v->a[242191] = aux_sym_heredoc_redirect_token1;
	v->a[242192] = actions(1308);
	v->a[242193] = 23;
	v->a[242194] = anon_sym_SEMI;
	v->a[242195] = anon_sym_PIPE_PIPE;
	v->a[242196] = anon_sym_AMP_AMP;
	v->a[242197] = anon_sym_PIPE;
	v->a[242198] = anon_sym_AMP;
	v->a[242199] = anon_sym_LT;
	small_parse_table_12110(v);
}

/* EOF small_parse_table_2421.c */
