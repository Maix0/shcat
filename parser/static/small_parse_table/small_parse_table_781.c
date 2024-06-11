/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_781.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3905(t_small_parse_table_array *v)
{
	v->a[78100] = actions(2880);
	v->a[78101] = 2;
	v->a[78102] = sym_file_descriptor;
	v->a[78103] = aux_sym_heredoc_redirect_token1;
	v->a[78104] = actions(2878);
	v->a[78105] = 18;
	v->a[78106] = anon_sym_RPAREN;
	v->a[78107] = anon_sym_SEMI_SEMI;
	v->a[78108] = anon_sym_AMP_AMP;
	v->a[78109] = anon_sym_PIPE_PIPE;
	v->a[78110] = anon_sym_LT;
	v->a[78111] = anon_sym_GT;
	v->a[78112] = anon_sym_GT_GT;
	v->a[78113] = anon_sym_AMP_GT;
	v->a[78114] = anon_sym_AMP_GT_GT;
	v->a[78115] = anon_sym_LT_AMP;
	v->a[78116] = anon_sym_GT_AMP;
	v->a[78117] = anon_sym_GT_PIPE;
	v->a[78118] = anon_sym_LT_AMP_DASH;
	v->a[78119] = anon_sym_GT_AMP_DASH;
	small_parse_table_3906(v);
}

void	small_parse_table_3906(t_small_parse_table_array *v)
{
	v->a[78120] = anon_sym_LT_LT;
	v->a[78121] = anon_sym_LT_LT_DASH;
	v->a[78122] = anon_sym_AMP;
	v->a[78123] = anon_sym_SEMI;
	v->a[78124] = 5;
	v->a[78125] = actions(3);
	v->a[78126] = 1;
	v->a[78127] = sym_comment;
	v->a[78128] = actions(2318);
	v->a[78129] = 1;
	v->a[78130] = anon_sym_PIPE;
	v->a[78131] = state(1663);
	v->a[78132] = 1;
	v->a[78133] = aux_sym_pipeline_repeat1;
	v->a[78134] = actions(2316);
	v->a[78135] = 2;
	v->a[78136] = sym_file_descriptor;
	v->a[78137] = aux_sym_heredoc_redirect_token1;
	v->a[78138] = actions(2321);
	v->a[78139] = 18;
	small_parse_table_3907(v);
}

void	small_parse_table_3907(t_small_parse_table_array *v)
{
	v->a[78140] = anon_sym_esac;
	v->a[78141] = anon_sym_SEMI_SEMI;
	v->a[78142] = anon_sym_AMP_AMP;
	v->a[78143] = anon_sym_PIPE_PIPE;
	v->a[78144] = anon_sym_LT;
	v->a[78145] = anon_sym_GT;
	v->a[78146] = anon_sym_GT_GT;
	v->a[78147] = anon_sym_AMP_GT;
	v->a[78148] = anon_sym_AMP_GT_GT;
	v->a[78149] = anon_sym_LT_AMP;
	v->a[78150] = anon_sym_GT_AMP;
	v->a[78151] = anon_sym_GT_PIPE;
	v->a[78152] = anon_sym_LT_AMP_DASH;
	v->a[78153] = anon_sym_GT_AMP_DASH;
	v->a[78154] = anon_sym_LT_LT;
	v->a[78155] = anon_sym_LT_LT_DASH;
	v->a[78156] = anon_sym_AMP;
	v->a[78157] = anon_sym_SEMI;
	v->a[78158] = 10;
	v->a[78159] = actions(3);
	small_parse_table_3908(v);
}

void	small_parse_table_3908(t_small_parse_table_array *v)
{
	v->a[78160] = 1;
	v->a[78161] = sym_comment;
	v->a[78162] = actions(943);
	v->a[78163] = 1;
	v->a[78164] = anon_sym_SEMI_SEMI;
	v->a[78165] = actions(2081);
	v->a[78166] = 1;
	v->a[78167] = aux_sym_heredoc_redirect_token1;
	v->a[78168] = actions(2602);
	v->a[78169] = 1;
	v->a[78170] = sym_file_descriptor;
	v->a[78171] = actions(861);
	v->a[78172] = 2;
	v->a[78173] = anon_sym_LT_LT;
	v->a[78174] = anon_sym_LT_LT_DASH;
	v->a[78175] = actions(945);
	v->a[78176] = 2;
	v->a[78177] = anon_sym_AMP;
	v->a[78178] = anon_sym_SEMI;
	v->a[78179] = actions(965);
	small_parse_table_3909(v);
}

void	small_parse_table_3909(t_small_parse_table_array *v)
{
	v->a[78180] = 2;
	v->a[78181] = anon_sym_AMP_AMP;
	v->a[78182] = anon_sym_PIPE_PIPE;
	v->a[78183] = actions(2598);
	v->a[78184] = 2;
	v->a[78185] = anon_sym_LT_AMP_DASH;
	v->a[78186] = anon_sym_GT_AMP_DASH;
	v->a[78187] = state(1322);
	v->a[78188] = 3;
	v->a[78189] = sym_file_redirect;
	v->a[78190] = sym_heredoc_redirect;
	v->a[78191] = aux_sym_redirected_statement_repeat1;
	v->a[78192] = actions(2596);
	v->a[78193] = 8;
	v->a[78194] = anon_sym_LT;
	v->a[78195] = anon_sym_GT;
	v->a[78196] = anon_sym_GT_GT;
	v->a[78197] = anon_sym_AMP_GT;
	v->a[78198] = anon_sym_AMP_GT_GT;
	v->a[78199] = anon_sym_LT_AMP;
	small_parse_table_3910(v);
}

/* EOF small_parse_table_781.c */
