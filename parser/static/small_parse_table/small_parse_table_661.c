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
	v->a[66102] = actions(764);
	v->a[66103] = 1;
	v->a[66104] = anon_sym_SEMI_SEMI;
	v->a[66105] = actions(766);
	v->a[66106] = 1;
	v->a[66107] = anon_sym_PIPE;
	v->a[66108] = actions(2031);
	v->a[66109] = 1;
	v->a[66110] = aux_sym_heredoc_redirect_token1;
	v->a[66111] = actions(2066);
	v->a[66112] = 1;
	v->a[66113] = sym_file_descriptor;
	v->a[66114] = state(673);
	v->a[66115] = 1;
	v->a[66116] = sym_terminator;
	v->a[66117] = actions(800);
	v->a[66118] = 2;
	v->a[66119] = anon_sym_AMP;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = anon_sym_SEMI;
	v->a[66121] = actions(804);
	v->a[66122] = 2;
	v->a[66123] = anon_sym_LT_LT;
	v->a[66124] = anon_sym_LT_LT_DASH;
	v->a[66125] = actions(893);
	v->a[66126] = 2;
	v->a[66127] = anon_sym_AMP_AMP;
	v->a[66128] = anon_sym_PIPE_PIPE;
	v->a[66129] = actions(2064);
	v->a[66130] = 2;
	v->a[66131] = anon_sym_LT_AMP_DASH;
	v->a[66132] = anon_sym_GT_AMP_DASH;
	v->a[66133] = state(1256);
	v->a[66134] = 3;
	v->a[66135] = sym_file_redirect;
	v->a[66136] = sym_heredoc_redirect;
	v->a[66137] = aux_sym_redirected_statement_repeat1;
	v->a[66138] = actions(2062);
	v->a[66139] = 8;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = anon_sym_LT;
	v->a[66141] = anon_sym_GT;
	v->a[66142] = anon_sym_GT_GT;
	v->a[66143] = anon_sym_AMP_GT;
	v->a[66144] = anon_sym_AMP_GT_GT;
	v->a[66145] = anon_sym_LT_AMP;
	v->a[66146] = anon_sym_GT_AMP;
	v->a[66147] = anon_sym_GT_PIPE;
	v->a[66148] = 5;
	v->a[66149] = actions(3);
	v->a[66150] = 1;
	v->a[66151] = sym_comment;
	v->a[66152] = actions(2135);
	v->a[66153] = 1;
	v->a[66154] = sym_variable_name;
	v->a[66155] = state(1163);
	v->a[66156] = 2;
	v->a[66157] = sym_variable_assignment;
	v->a[66158] = aux_sym__variable_assignments_repeat1;
	v->a[66159] = actions(2131);
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = 3;
	v->a[66161] = sym_file_descriptor;
	v->a[66162] = ts_builtin_sym_end;
	v->a[66163] = aux_sym_heredoc_redirect_token1;
	v->a[66164] = actions(2133);
	v->a[66165] = 18;
	v->a[66166] = anon_sym_PIPE;
	v->a[66167] = anon_sym_SEMI_SEMI;
	v->a[66168] = anon_sym_AMP_AMP;
	v->a[66169] = anon_sym_PIPE_PIPE;
	v->a[66170] = anon_sym_LT;
	v->a[66171] = anon_sym_GT;
	v->a[66172] = anon_sym_GT_GT;
	v->a[66173] = anon_sym_AMP_GT;
	v->a[66174] = anon_sym_AMP_GT_GT;
	v->a[66175] = anon_sym_LT_AMP;
	v->a[66176] = anon_sym_GT_AMP;
	v->a[66177] = anon_sym_GT_PIPE;
	v->a[66178] = anon_sym_LT_AMP_DASH;
	v->a[66179] = anon_sym_GT_AMP_DASH;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = anon_sym_LT_LT;
	v->a[66181] = anon_sym_LT_LT_DASH;
	v->a[66182] = anon_sym_AMP;
	v->a[66183] = anon_sym_SEMI;
	v->a[66184] = 3;
	v->a[66185] = actions(3);
	v->a[66186] = 1;
	v->a[66187] = sym_comment;
	v->a[66188] = actions(1044);
	v->a[66189] = 4;
	v->a[66190] = sym_file_descriptor;
	v->a[66191] = sym__concat;
	v->a[66192] = sym_variable_name;
	v->a[66193] = aux_sym_heredoc_redirect_token1;
	v->a[66194] = actions(1042);
	v->a[66195] = 20;
	v->a[66196] = anon_sym_esac;
	v->a[66197] = anon_sym_PIPE;
	v->a[66198] = anon_sym_SEMI_SEMI;
	v->a[66199] = anon_sym_AMP_AMP;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
