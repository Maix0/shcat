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
	v->a[56100] = aux_sym_redirected_statement_repeat1;
	v->a[56101] = actions(1880);
	v->a[56102] = 7;
	v->a[56103] = anon_sym_LT;
	v->a[56104] = anon_sym_GT;
	v->a[56105] = anon_sym_GT_GT;
	v->a[56106] = anon_sym_LT_AMP;
	v->a[56107] = anon_sym_GT_AMP;
	v->a[56108] = anon_sym_GT_PIPE;
	v->a[56109] = anon_sym_LT_GT;
	v->a[56110] = 11;
	v->a[56111] = actions(3);
	v->a[56112] = 1;
	v->a[56113] = sym_comment;
	v->a[56114] = actions(782);
	v->a[56115] = 1;
	v->a[56116] = anon_sym_PIPE;
	v->a[56117] = actions(784);
	v->a[56118] = 1;
	v->a[56119] = anon_sym_RPAREN;
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = actions(1888);
	v->a[56121] = 1;
	v->a[56122] = aux_sym_heredoc_redirect_token1;
	v->a[56123] = actions(1933);
	v->a[56124] = 1;
	v->a[56125] = sym_file_descriptor;
	v->a[56126] = state(580);
	v->a[56127] = 1;
	v->a[56128] = sym_terminator;
	v->a[56129] = actions(786);
	v->a[56130] = 2;
	v->a[56131] = anon_sym_SEMI_SEMI;
	v->a[56132] = anon_sym_SEMI;
	v->a[56133] = actions(788);
	v->a[56134] = 2;
	v->a[56135] = anon_sym_AMP_AMP;
	v->a[56136] = anon_sym_PIPE_PIPE;
	v->a[56137] = actions(790);
	v->a[56138] = 2;
	v->a[56139] = anon_sym_LT_LT;
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = anon_sym_LT_LT_DASH;
	v->a[56141] = state(1034);
	v->a[56142] = 3;
	v->a[56143] = sym_file_redirect;
	v->a[56144] = sym_heredoc_redirect;
	v->a[56145] = aux_sym_redirected_statement_repeat1;
	v->a[56146] = actions(1931);
	v->a[56147] = 7;
	v->a[56148] = anon_sym_LT;
	v->a[56149] = anon_sym_GT;
	v->a[56150] = anon_sym_GT_GT;
	v->a[56151] = anon_sym_LT_AMP;
	v->a[56152] = anon_sym_GT_AMP;
	v->a[56153] = anon_sym_GT_PIPE;
	v->a[56154] = anon_sym_LT_GT;
	v->a[56155] = 11;
	v->a[56156] = actions(3);
	v->a[56157] = 1;
	v->a[56158] = sym_comment;
	v->a[56159] = actions(782);
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = 1;
	v->a[56161] = anon_sym_PIPE;
	v->a[56162] = actions(784);
	v->a[56163] = 1;
	v->a[56164] = anon_sym_RPAREN;
	v->a[56165] = actions(1888);
	v->a[56166] = 1;
	v->a[56167] = aux_sym_heredoc_redirect_token1;
	v->a[56168] = actions(1933);
	v->a[56169] = 1;
	v->a[56170] = sym_file_descriptor;
	v->a[56171] = state(578);
	v->a[56172] = 1;
	v->a[56173] = sym_terminator;
	v->a[56174] = actions(786);
	v->a[56175] = 2;
	v->a[56176] = anon_sym_SEMI_SEMI;
	v->a[56177] = anon_sym_SEMI;
	v->a[56178] = actions(788);
	v->a[56179] = 2;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = anon_sym_AMP_AMP;
	v->a[56181] = anon_sym_PIPE_PIPE;
	v->a[56182] = actions(790);
	v->a[56183] = 2;
	v->a[56184] = anon_sym_LT_LT;
	v->a[56185] = anon_sym_LT_LT_DASH;
	v->a[56186] = state(1034);
	v->a[56187] = 3;
	v->a[56188] = sym_file_redirect;
	v->a[56189] = sym_heredoc_redirect;
	v->a[56190] = aux_sym_redirected_statement_repeat1;
	v->a[56191] = actions(1931);
	v->a[56192] = 7;
	v->a[56193] = anon_sym_LT;
	v->a[56194] = anon_sym_GT;
	v->a[56195] = anon_sym_GT_GT;
	v->a[56196] = anon_sym_LT_AMP;
	v->a[56197] = anon_sym_GT_AMP;
	v->a[56198] = anon_sym_GT_PIPE;
	v->a[56199] = anon_sym_LT_GT;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
