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
	v->a[68100] = 1;
	v->a[68101] = sym_file_descriptor;
	v->a[68102] = actions(1062);
	v->a[68103] = 2;
	v->a[68104] = anon_sym_LT_LT;
	v->a[68105] = anon_sym_LT_LT_DASH;
	v->a[68106] = actions(1089);
	v->a[68107] = 2;
	v->a[68108] = anon_sym_AMP;
	v->a[68109] = anon_sym_SEMI;
	v->a[68110] = actions(1093);
	v->a[68111] = 2;
	v->a[68112] = anon_sym_AMP_AMP;
	v->a[68113] = anon_sym_PIPE_PIPE;
	v->a[68114] = actions(2456);
	v->a[68115] = 2;
	v->a[68116] = anon_sym_LT_AMP_DASH;
	v->a[68117] = anon_sym_GT_AMP_DASH;
	v->a[68118] = state(1160);
	v->a[68119] = 3;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = sym_file_redirect;
	v->a[68121] = sym_heredoc_redirect;
	v->a[68122] = aux_sym_redirected_statement_repeat1;
	v->a[68123] = actions(2454);
	v->a[68124] = 8;
	v->a[68125] = anon_sym_LT;
	v->a[68126] = anon_sym_GT;
	v->a[68127] = anon_sym_GT_GT;
	v->a[68128] = anon_sym_AMP_GT;
	v->a[68129] = anon_sym_AMP_GT_GT;
	v->a[68130] = anon_sym_LT_AMP;
	v->a[68131] = anon_sym_GT_AMP;
	v->a[68132] = anon_sym_GT_PIPE;
	v->a[68133] = 3;
	v->a[68134] = actions(3);
	v->a[68135] = 1;
	v->a[68136] = sym_comment;
	v->a[68137] = actions(2480);
	v->a[68138] = 3;
	v->a[68139] = sym_file_descriptor;
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = ts_builtin_sym_end;
	v->a[68141] = aux_sym_heredoc_redirect_token1;
	v->a[68142] = actions(2482);
	v->a[68143] = 20;
	v->a[68144] = anon_sym_PIPE;
	v->a[68145] = anon_sym_RPAREN;
	v->a[68146] = anon_sym_SEMI_SEMI;
	v->a[68147] = anon_sym_AMP_AMP;
	v->a[68148] = anon_sym_PIPE_PIPE;
	v->a[68149] = anon_sym_LT;
	v->a[68150] = anon_sym_GT;
	v->a[68151] = anon_sym_GT_GT;
	v->a[68152] = anon_sym_AMP_GT;
	v->a[68153] = anon_sym_AMP_GT_GT;
	v->a[68154] = anon_sym_LT_AMP;
	v->a[68155] = anon_sym_GT_AMP;
	v->a[68156] = anon_sym_GT_PIPE;
	v->a[68157] = anon_sym_LT_AMP_DASH;
	v->a[68158] = anon_sym_GT_AMP_DASH;
	v->a[68159] = anon_sym_LT_LT;
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = anon_sym_LT_LT_DASH;
	v->a[68161] = anon_sym_AMP;
	v->a[68162] = anon_sym_BQUOTE;
	v->a[68163] = anon_sym_SEMI;
	v->a[68164] = 10;
	v->a[68165] = actions(3);
	v->a[68166] = 1;
	v->a[68167] = sym_comment;
	v->a[68168] = actions(1073);
	v->a[68169] = 1;
	v->a[68170] = anon_sym_BQUOTE;
	v->a[68171] = actions(2352);
	v->a[68172] = 1;
	v->a[68173] = sym_file_descriptor;
	v->a[68174] = actions(2360);
	v->a[68175] = 1;
	v->a[68176] = aux_sym_heredoc_redirect_token1;
	v->a[68177] = actions(1062);
	v->a[68178] = 2;
	v->a[68179] = anon_sym_LT_LT;
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = anon_sym_LT_LT_DASH;
	v->a[68181] = actions(1143);
	v->a[68182] = 2;
	v->a[68183] = anon_sym_AMP_AMP;
	v->a[68184] = anon_sym_PIPE_PIPE;
	v->a[68185] = actions(2348);
	v->a[68186] = 2;
	v->a[68187] = anon_sym_LT_AMP_DASH;
	v->a[68188] = anon_sym_GT_AMP_DASH;
	v->a[68189] = actions(1163);
	v->a[68190] = 3;
	v->a[68191] = anon_sym_SEMI_SEMI;
	v->a[68192] = anon_sym_AMP;
	v->a[68193] = anon_sym_SEMI;
	v->a[68194] = state(1095);
	v->a[68195] = 3;
	v->a[68196] = sym_file_redirect;
	v->a[68197] = sym_heredoc_redirect;
	v->a[68198] = aux_sym_redirected_statement_repeat1;
	v->a[68199] = actions(2346);
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */
