/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_711.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3555(t_small_parse_table_array *v)
{
	v->a[71100] = sym_variable_name;
	v->a[71101] = actions(2856);
	v->a[71102] = 2;
	v->a[71103] = aux_sym__simple_variable_name_token1;
	v->a[71104] = aux_sym__multiline_variable_name_token1;
	v->a[71105] = actions(361);
	v->a[71106] = 4;
	v->a[71107] = anon_sym_in;
	v->a[71108] = anon_sym_SEMI_SEMI;
	v->a[71109] = aux_sym_heredoc_redirect_token1;
	v->a[71110] = anon_sym_SEMI;
	v->a[71111] = actions(2854);
	v->a[71112] = 8;
	v->a[71113] = anon_sym_BANG;
	v->a[71114] = anon_sym_DASH;
	v->a[71115] = anon_sym_STAR;
	v->a[71116] = anon_sym_QMARK;
	v->a[71117] = anon_sym_DOLLAR;
	v->a[71118] = anon_sym_POUND;
	v->a[71119] = anon_sym_AT;
	small_parse_table_3556(v);
}

void	small_parse_table_3556(t_small_parse_table_array *v)
{
	v->a[71120] = anon_sym_0;
	v->a[71121] = 7;
	v->a[71122] = actions(501);
	v->a[71123] = 1;
	v->a[71124] = sym_comment;
	v->a[71125] = actions(2825);
	v->a[71126] = 1;
	v->a[71127] = sym_file_descriptor;
	v->a[71128] = actions(2069);
	v->a[71129] = 2;
	v->a[71130] = anon_sym_PIPE;
	v->a[71131] = anon_sym_LT_LT;
	v->a[71132] = actions(2741);
	v->a[71133] = 2;
	v->a[71134] = anon_sym_LT;
	v->a[71135] = anon_sym_GT;
	v->a[71136] = state(1436);
	v->a[71137] = 2;
	v->a[71138] = sym_file_redirect;
	v->a[71139] = aux_sym_redirected_statement_repeat2;
	small_parse_table_3557(v);
}

void	small_parse_table_3557(t_small_parse_table_array *v)
{
	v->a[71140] = actions(2071);
	v->a[71141] = 3;
	v->a[71142] = anon_sym_AMP_AMP;
	v->a[71143] = anon_sym_PIPE_PIPE;
	v->a[71144] = anon_sym_LT_LT_DASH;
	v->a[71145] = actions(2743);
	v->a[71146] = 5;
	v->a[71147] = anon_sym_GT_GT;
	v->a[71148] = anon_sym_LT_AMP;
	v->a[71149] = anon_sym_GT_AMP;
	v->a[71150] = anon_sym_GT_PIPE;
	v->a[71151] = anon_sym_LT_GT;
	v->a[71152] = 5;
	v->a[71153] = actions(3);
	v->a[71154] = 1;
	v->a[71155] = sym_comment;
	v->a[71156] = actions(2860);
	v->a[71157] = 1;
	v->a[71158] = anon_sym_PIPE;
	v->a[71159] = state(1439);
	small_parse_table_3558(v);
}

void	small_parse_table_3558(t_small_parse_table_array *v)
{
	v->a[71160] = 1;
	v->a[71161] = aux_sym_pipeline_repeat1;
	v->a[71162] = actions(2033);
	v->a[71163] = 2;
	v->a[71164] = sym_file_descriptor;
	v->a[71165] = aux_sym_heredoc_redirect_token1;
	v->a[71166] = actions(2038);
	v->a[71167] = 11;
	v->a[71168] = anon_sym_AMP_AMP;
	v->a[71169] = anon_sym_PIPE_PIPE;
	v->a[71170] = anon_sym_LT;
	v->a[71171] = anon_sym_GT;
	v->a[71172] = anon_sym_GT_GT;
	v->a[71173] = anon_sym_LT_AMP;
	v->a[71174] = anon_sym_GT_AMP;
	v->a[71175] = anon_sym_GT_PIPE;
	v->a[71176] = anon_sym_LT_GT;
	v->a[71177] = anon_sym_LT_LT;
	v->a[71178] = anon_sym_LT_LT_DASH;
	v->a[71179] = 8;
	small_parse_table_3559(v);
}

void	small_parse_table_3559(t_small_parse_table_array *v)
{
	v->a[71180] = actions(501);
	v->a[71181] = 1;
	v->a[71182] = sym_comment;
	v->a[71183] = actions(790);
	v->a[71184] = 1;
	v->a[71185] = anon_sym_LT_LT;
	v->a[71186] = actions(2429);
	v->a[71187] = 1;
	v->a[71188] = sym_file_descriptor;
	v->a[71189] = actions(2831);
	v->a[71190] = 1;
	v->a[71191] = anon_sym_LT_LT_DASH;
	v->a[71192] = actions(2425);
	v->a[71193] = 2;
	v->a[71194] = anon_sym_LT;
	v->a[71195] = anon_sym_GT;
	v->a[71196] = actions(2863);
	v->a[71197] = 2;
	v->a[71198] = anon_sym_AMP_AMP;
	v->a[71199] = anon_sym_PIPE_PIPE;
	small_parse_table_3560(v);
}

/* EOF small_parse_table_711.c */
