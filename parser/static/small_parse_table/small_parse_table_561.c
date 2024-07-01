/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_561.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2805(t_small_parse_table_array *v)
{
	v->a[56100] = anon_sym_GT;
	v->a[56101] = anon_sym_GT_GT;
	v->a[56102] = anon_sym_LT_AMP;
	v->a[56103] = anon_sym_GT_AMP;
	v->a[56104] = anon_sym_GT_PIPE;
	v->a[56105] = anon_sym_LT_GT;
	v->a[56106] = 11;
	v->a[56107] = actions(3);
	v->a[56108] = 1;
	v->a[56109] = sym_comment;
	v->a[56110] = actions(736);
	v->a[56111] = 1;
	v->a[56112] = anon_sym_PIPE;
	v->a[56113] = actions(842);
	v->a[56114] = 1;
	v->a[56115] = anon_sym_BQUOTE;
	v->a[56116] = actions(1865);
	v->a[56117] = 1;
	v->a[56118] = aux_sym_heredoc_redirect_token1;
	v->a[56119] = actions(1867);
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = 1;
	v->a[56121] = sym_file_descriptor;
	v->a[56122] = state(818);
	v->a[56123] = 1;
	v->a[56124] = sym_terminator;
	v->a[56125] = actions(744);
	v->a[56126] = 2;
	v->a[56127] = anon_sym_LT_LT;
	v->a[56128] = anon_sym_LT_LT_DASH;
	v->a[56129] = actions(990);
	v->a[56130] = 2;
	v->a[56131] = anon_sym_AMP_AMP;
	v->a[56132] = anon_sym_PIPE_PIPE;
	v->a[56133] = actions(740);
	v->a[56134] = 3;
	v->a[56135] = anon_sym_SEMI_SEMI;
	v->a[56136] = anon_sym_AMP;
	v->a[56137] = anon_sym_SEMI;
	v->a[56138] = state(1059);
	v->a[56139] = 3;
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = sym_file_redirect;
	v->a[56141] = sym_heredoc_redirect;
	v->a[56142] = aux_sym_redirected_statement_repeat1;
	v->a[56143] = actions(1863);
	v->a[56144] = 7;
	v->a[56145] = anon_sym_LT;
	v->a[56146] = anon_sym_GT;
	v->a[56147] = anon_sym_GT_GT;
	v->a[56148] = anon_sym_LT_AMP;
	v->a[56149] = anon_sym_GT_AMP;
	v->a[56150] = anon_sym_GT_PIPE;
	v->a[56151] = anon_sym_LT_GT;
	v->a[56152] = 11;
	v->a[56153] = actions(3);
	v->a[56154] = 1;
	v->a[56155] = sym_comment;
	v->a[56156] = actions(736);
	v->a[56157] = 1;
	v->a[56158] = anon_sym_PIPE;
	v->a[56159] = actions(842);
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = 1;
	v->a[56161] = anon_sym_BQUOTE;
	v->a[56162] = actions(1865);
	v->a[56163] = 1;
	v->a[56164] = aux_sym_heredoc_redirect_token1;
	v->a[56165] = actions(1867);
	v->a[56166] = 1;
	v->a[56167] = sym_file_descriptor;
	v->a[56168] = state(820);
	v->a[56169] = 1;
	v->a[56170] = sym_terminator;
	v->a[56171] = actions(744);
	v->a[56172] = 2;
	v->a[56173] = anon_sym_LT_LT;
	v->a[56174] = anon_sym_LT_LT_DASH;
	v->a[56175] = actions(990);
	v->a[56176] = 2;
	v->a[56177] = anon_sym_AMP_AMP;
	v->a[56178] = anon_sym_PIPE_PIPE;
	v->a[56179] = actions(740);
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = 3;
	v->a[56181] = anon_sym_SEMI_SEMI;
	v->a[56182] = anon_sym_AMP;
	v->a[56183] = anon_sym_SEMI;
	v->a[56184] = state(1059);
	v->a[56185] = 3;
	v->a[56186] = sym_file_redirect;
	v->a[56187] = sym_heredoc_redirect;
	v->a[56188] = aux_sym_redirected_statement_repeat1;
	v->a[56189] = actions(1863);
	v->a[56190] = 7;
	v->a[56191] = anon_sym_LT;
	v->a[56192] = anon_sym_GT;
	v->a[56193] = anon_sym_GT_GT;
	v->a[56194] = anon_sym_LT_AMP;
	v->a[56195] = anon_sym_GT_AMP;
	v->a[56196] = anon_sym_GT_PIPE;
	v->a[56197] = anon_sym_LT_GT;
	v->a[56198] = 11;
	v->a[56199] = actions(3);
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
