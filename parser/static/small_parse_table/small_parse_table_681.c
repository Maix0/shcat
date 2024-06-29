/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_681.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3405(t_small_parse_table_array *v)
{
	v->a[68100] = aux_sym_heredoc_redirect_token1;
	v->a[68101] = actions(2203);
	v->a[68102] = 1;
	v->a[68103] = sym_file_descriptor;
	v->a[68104] = actions(2113);
	v->a[68105] = 2;
	v->a[68106] = anon_sym_LT_LT;
	v->a[68107] = anon_sym_LT_LT_DASH;
	v->a[68108] = actions(2200);
	v->a[68109] = 2;
	v->a[68110] = anon_sym_LT_AMP_DASH;
	v->a[68111] = anon_sym_GT_AMP_DASH;
	v->a[68112] = state(1178);
	v->a[68113] = 3;
	v->a[68114] = sym_file_redirect;
	v->a[68115] = sym_heredoc_redirect;
	v->a[68116] = aux_sym_redirected_statement_repeat1;
	v->a[68117] = actions(2068);
	v->a[68118] = 7;
	v->a[68119] = anon_sym_PIPE;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = anon_sym_SEMI_SEMI;
	v->a[68121] = anon_sym_AMP_AMP;
	v->a[68122] = anon_sym_PIPE_PIPE;
	v->a[68123] = anon_sym_AMP;
	v->a[68124] = anon_sym_BQUOTE;
	v->a[68125] = anon_sym_SEMI;
	v->a[68126] = actions(2197);
	v->a[68127] = 8;
	v->a[68128] = anon_sym_LT;
	v->a[68129] = anon_sym_GT;
	v->a[68130] = anon_sym_GT_GT;
	v->a[68131] = anon_sym_AMP_GT;
	v->a[68132] = anon_sym_AMP_GT_GT;
	v->a[68133] = anon_sym_LT_AMP;
	v->a[68134] = anon_sym_GT_AMP;
	v->a[68135] = anon_sym_GT_PIPE;
	v->a[68136] = 4;
	v->a[68137] = actions(3);
	v->a[68138] = 1;
	v->a[68139] = sym_comment;
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = actions(927);
	v->a[68141] = 2;
	v->a[68142] = sym_file_descriptor;
	v->a[68143] = aux_sym_heredoc_redirect_token1;
	v->a[68144] = state(1157);
	v->a[68145] = 3;
	v->a[68146] = sym_file_redirect;
	v->a[68147] = sym_heredoc_redirect;
	v->a[68148] = aux_sym_redirected_statement_repeat1;
	v->a[68149] = actions(900);
	v->a[68150] = 19;
	v->a[68151] = anon_sym_PIPE;
	v->a[68152] = anon_sym_SEMI_SEMI;
	v->a[68153] = anon_sym_AMP_AMP;
	v->a[68154] = anon_sym_PIPE_PIPE;
	v->a[68155] = anon_sym_LT;
	v->a[68156] = anon_sym_GT;
	v->a[68157] = anon_sym_GT_GT;
	v->a[68158] = anon_sym_AMP_GT;
	v->a[68159] = anon_sym_AMP_GT_GT;
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = anon_sym_LT_AMP;
	v->a[68161] = anon_sym_GT_AMP;
	v->a[68162] = anon_sym_GT_PIPE;
	v->a[68163] = anon_sym_LT_AMP_DASH;
	v->a[68164] = anon_sym_GT_AMP_DASH;
	v->a[68165] = anon_sym_LT_LT;
	v->a[68166] = anon_sym_LT_LT_DASH;
	v->a[68167] = anon_sym_AMP;
	v->a[68168] = anon_sym_BQUOTE;
	v->a[68169] = anon_sym_SEMI;
	v->a[68170] = 12;
	v->a[68171] = actions(3);
	v->a[68172] = 1;
	v->a[68173] = sym_comment;
	v->a[68174] = actions(764);
	v->a[68175] = 1;
	v->a[68176] = anon_sym_SEMI_SEMI;
	v->a[68177] = actions(766);
	v->a[68178] = 1;
	v->a[68179] = anon_sym_PIPE;
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = actions(2031);
	v->a[68181] = 1;
	v->a[68182] = aux_sym_heredoc_redirect_token1;
	v->a[68183] = actions(2066);
	v->a[68184] = 1;
	v->a[68185] = sym_file_descriptor;
	v->a[68186] = state(711);
	v->a[68187] = 1;
	v->a[68188] = sym_terminator;
	v->a[68189] = actions(800);
	v->a[68190] = 2;
	v->a[68191] = anon_sym_AMP;
	v->a[68192] = anon_sym_SEMI;
	v->a[68193] = actions(804);
	v->a[68194] = 2;
	v->a[68195] = anon_sym_LT_LT;
	v->a[68196] = anon_sym_LT_LT_DASH;
	v->a[68197] = actions(893);
	v->a[68198] = 2;
	v->a[68199] = anon_sym_AMP_AMP;
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */
