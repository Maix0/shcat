/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_641.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3205(t_small_parse_table_array *v)
{
	v->a[64100] = 8;
	v->a[64101] = actions(3);
	v->a[64102] = 1;
	v->a[64103] = sym_comment;
	v->a[64104] = actions(2011);
	v->a[64105] = 1;
	v->a[64106] = sym_file_descriptor;
	v->a[64107] = actions(2116);
	v->a[64108] = 1;
	v->a[64109] = aux_sym_heredoc_redirect_token1;
	v->a[64110] = actions(754);
	v->a[64111] = 2;
	v->a[64112] = anon_sym_LT_LT;
	v->a[64113] = anon_sym_LT_LT_DASH;
	v->a[64114] = actions(2007);
	v->a[64115] = 2;
	v->a[64116] = anon_sym_LT_AMP_DASH;
	v->a[64117] = anon_sym_GT_AMP_DASH;
	v->a[64118] = state(1125);
	v->a[64119] = 3;
	small_parse_table_3206(v);
}

void	small_parse_table_3206(t_small_parse_table_array *v)
{
	v->a[64120] = sym_file_redirect;
	v->a[64121] = sym_heredoc_redirect;
	v->a[64122] = aux_sym_redirected_statement_repeat1;
	v->a[64123] = actions(2005);
	v->a[64124] = 6;
	v->a[64125] = anon_sym_LT;
	v->a[64126] = anon_sym_GT;
	v->a[64127] = anon_sym_GT_GT;
	v->a[64128] = anon_sym_LT_AMP;
	v->a[64129] = anon_sym_GT_AMP;
	v->a[64130] = anon_sym_GT_PIPE;
	v->a[64131] = actions(2114);
	v->a[64132] = 7;
	v->a[64133] = anon_sym_PIPE;
	v->a[64134] = anon_sym_RPAREN;
	v->a[64135] = anon_sym_SEMI_SEMI;
	v->a[64136] = anon_sym_AMP_AMP;
	v->a[64137] = anon_sym_PIPE_PIPE;
	v->a[64138] = anon_sym_AMP;
	v->a[64139] = anon_sym_SEMI;
	small_parse_table_3207(v);
}

void	small_parse_table_3207(t_small_parse_table_array *v)
{
	v->a[64140] = 6;
	v->a[64141] = actions(3);
	v->a[64142] = 1;
	v->a[64143] = sym_comment;
	v->a[64144] = actions(2118);
	v->a[64145] = 1;
	v->a[64146] = aux_sym_concatenation_token1;
	v->a[64147] = actions(2121);
	v->a[64148] = 1;
	v->a[64149] = sym__concat;
	v->a[64150] = state(1129);
	v->a[64151] = 1;
	v->a[64152] = aux_sym_concatenation_repeat1;
	v->a[64153] = actions(1194);
	v->a[64154] = 2;
	v->a[64155] = sym_file_descriptor;
	v->a[64156] = aux_sym_heredoc_redirect_token1;
	v->a[64157] = actions(1189);
	v->a[64158] = 17;
	v->a[64159] = anon_sym_esac;
	small_parse_table_3208(v);
}

void	small_parse_table_3208(t_small_parse_table_array *v)
{
	v->a[64160] = anon_sym_PIPE;
	v->a[64161] = anon_sym_SEMI_SEMI;
	v->a[64162] = anon_sym_AMP_AMP;
	v->a[64163] = anon_sym_PIPE_PIPE;
	v->a[64164] = anon_sym_LT;
	v->a[64165] = anon_sym_GT;
	v->a[64166] = anon_sym_GT_GT;
	v->a[64167] = anon_sym_LT_AMP;
	v->a[64168] = anon_sym_GT_AMP;
	v->a[64169] = anon_sym_GT_PIPE;
	v->a[64170] = anon_sym_LT_AMP_DASH;
	v->a[64171] = anon_sym_GT_AMP_DASH;
	v->a[64172] = anon_sym_LT_LT;
	v->a[64173] = anon_sym_LT_LT_DASH;
	v->a[64174] = anon_sym_AMP;
	v->a[64175] = anon_sym_SEMI;
	v->a[64176] = 6;
	v->a[64177] = actions(3);
	v->a[64178] = 1;
	v->a[64179] = sym_comment;
	small_parse_table_3209(v);
}

void	small_parse_table_3209(t_small_parse_table_array *v)
{
	v->a[64180] = actions(2124);
	v->a[64181] = 1;
	v->a[64182] = aux_sym_concatenation_token1;
	v->a[64183] = actions(2126);
	v->a[64184] = 1;
	v->a[64185] = sym__concat;
	v->a[64186] = state(1129);
	v->a[64187] = 1;
	v->a[64188] = aux_sym_concatenation_repeat1;
	v->a[64189] = actions(1085);
	v->a[64190] = 2;
	v->a[64191] = sym_file_descriptor;
	v->a[64192] = aux_sym_heredoc_redirect_token1;
	v->a[64193] = actions(1081);
	v->a[64194] = 17;
	v->a[64195] = anon_sym_esac;
	v->a[64196] = anon_sym_PIPE;
	v->a[64197] = anon_sym_SEMI_SEMI;
	v->a[64198] = anon_sym_AMP_AMP;
	v->a[64199] = anon_sym_PIPE_PIPE;
	small_parse_table_3210(v);
}

/* EOF small_parse_table_641.c */
