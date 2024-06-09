/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_661.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3305(t_small_parse_table_array *v)
{
	v->a[66100] = 1;
	v->a[66101] = sym_comment;
	v->a[66102] = actions(1071);
	v->a[66103] = 2;
	v->a[66104] = sym_file_descriptor;
	v->a[66105] = aux_sym_heredoc_redirect_token1;
	v->a[66106] = state(1035);
	v->a[66107] = 3;
	v->a[66108] = sym_file_redirect;
	v->a[66109] = sym_heredoc_redirect;
	v->a[66110] = aux_sym_redirected_statement_repeat1;
	v->a[66111] = actions(1004);
	v->a[66112] = 19;
	v->a[66113] = anon_sym_esac;
	v->a[66114] = anon_sym_PIPE;
	v->a[66115] = anon_sym_SEMI_SEMI;
	v->a[66116] = anon_sym_AMP_AMP;
	v->a[66117] = anon_sym_PIPE_PIPE;
	v->a[66118] = anon_sym_LT;
	v->a[66119] = anon_sym_GT;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = anon_sym_GT_GT;
	v->a[66121] = anon_sym_AMP_GT;
	v->a[66122] = anon_sym_AMP_GT_GT;
	v->a[66123] = anon_sym_LT_AMP;
	v->a[66124] = anon_sym_GT_AMP;
	v->a[66125] = anon_sym_GT_PIPE;
	v->a[66126] = anon_sym_LT_AMP_DASH;
	v->a[66127] = anon_sym_GT_AMP_DASH;
	v->a[66128] = anon_sym_LT_LT;
	v->a[66129] = anon_sym_LT_LT_DASH;
	v->a[66130] = anon_sym_AMP;
	v->a[66131] = anon_sym_SEMI;
	v->a[66132] = 5;
	v->a[66133] = actions(3);
	v->a[66134] = 1;
	v->a[66135] = sym_comment;
	v->a[66136] = actions(1002);
	v->a[66137] = 1;
	v->a[66138] = anon_sym_PIPE;
	v->a[66139] = actions(1071);
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = 2;
	v->a[66141] = sym_file_descriptor;
	v->a[66142] = aux_sym_heredoc_redirect_token1;
	v->a[66143] = state(1095);
	v->a[66144] = 3;
	v->a[66145] = sym_file_redirect;
	v->a[66146] = sym_heredoc_redirect;
	v->a[66147] = aux_sym_redirected_statement_repeat1;
	v->a[66148] = actions(1004);
	v->a[66149] = 18;
	v->a[66150] = anon_sym_SEMI_SEMI;
	v->a[66151] = anon_sym_AMP_AMP;
	v->a[66152] = anon_sym_PIPE_PIPE;
	v->a[66153] = anon_sym_LT;
	v->a[66154] = anon_sym_GT;
	v->a[66155] = anon_sym_GT_GT;
	v->a[66156] = anon_sym_AMP_GT;
	v->a[66157] = anon_sym_AMP_GT_GT;
	v->a[66158] = anon_sym_LT_AMP;
	v->a[66159] = anon_sym_GT_AMP;
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = anon_sym_GT_PIPE;
	v->a[66161] = anon_sym_LT_AMP_DASH;
	v->a[66162] = anon_sym_GT_AMP_DASH;
	v->a[66163] = anon_sym_LT_LT;
	v->a[66164] = anon_sym_LT_LT_DASH;
	v->a[66165] = anon_sym_AMP;
	v->a[66166] = anon_sym_BQUOTE;
	v->a[66167] = anon_sym_SEMI;
	v->a[66168] = 6;
	v->a[66169] = actions(3);
	v->a[66170] = 1;
	v->a[66171] = sym_comment;
	v->a[66172] = actions(2261);
	v->a[66173] = 1;
	v->a[66174] = aux_sym_concatenation_token1;
	v->a[66175] = actions(2263);
	v->a[66176] = 1;
	v->a[66177] = sym__concat;
	v->a[66178] = state(1067);
	v->a[66179] = 1;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = aux_sym_concatenation_repeat1;
	v->a[66181] = actions(555);
	v->a[66182] = 2;
	v->a[66183] = sym_file_descriptor;
	v->a[66184] = aux_sym_heredoc_redirect_token1;
	v->a[66185] = actions(553);
	v->a[66186] = 19;
	v->a[66187] = anon_sym_PIPE;
	v->a[66188] = anon_sym_RPAREN;
	v->a[66189] = anon_sym_SEMI_SEMI;
	v->a[66190] = anon_sym_AMP_AMP;
	v->a[66191] = anon_sym_PIPE_PIPE;
	v->a[66192] = anon_sym_LT;
	v->a[66193] = anon_sym_GT;
	v->a[66194] = anon_sym_GT_GT;
	v->a[66195] = anon_sym_AMP_GT;
	v->a[66196] = anon_sym_AMP_GT_GT;
	v->a[66197] = anon_sym_LT_AMP;
	v->a[66198] = anon_sym_GT_AMP;
	v->a[66199] = anon_sym_GT_PIPE;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
