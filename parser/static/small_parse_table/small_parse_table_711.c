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
	v->a[71100] = 2;
	v->a[71101] = ts_builtin_sym_end;
	v->a[71102] = aux_sym_heredoc_redirect_token1;
	v->a[71103] = state(1189);
	v->a[71104] = 2;
	v->a[71105] = sym_file_redirect;
	v->a[71106] = aux_sym_redirected_statement_repeat2;
	v->a[71107] = actions(2013);
	v->a[71108] = 8;
	v->a[71109] = anon_sym_LT;
	v->a[71110] = anon_sym_GT;
	v->a[71111] = anon_sym_GT_GT;
	v->a[71112] = anon_sym_AMP_GT;
	v->a[71113] = anon_sym_AMP_GT_GT;
	v->a[71114] = anon_sym_LT_AMP;
	v->a[71115] = anon_sym_GT_AMP;
	v->a[71116] = anon_sym_GT_PIPE;
	v->a[71117] = actions(2350);
	v->a[71118] = 8;
	v->a[71119] = anon_sym_PIPE;
	small_parse_table_3556(v);
}

void	small_parse_table_3556(t_small_parse_table_array *v)
{
	v->a[71120] = anon_sym_SEMI_SEMI;
	v->a[71121] = anon_sym_AMP_AMP;
	v->a[71122] = anon_sym_PIPE_PIPE;
	v->a[71123] = anon_sym_LT_LT;
	v->a[71124] = anon_sym_LT_LT_DASH;
	v->a[71125] = anon_sym_AMP;
	v->a[71126] = anon_sym_SEMI;
	v->a[71127] = 5;
	v->a[71128] = actions(3);
	v->a[71129] = 1;
	v->a[71130] = sym_comment;
	v->a[71131] = actions(774);
	v->a[71132] = 1;
	v->a[71133] = sym_file_descriptor;
	v->a[71134] = actions(837);
	v->a[71135] = 1;
	v->a[71136] = sym_variable_name;
	v->a[71137] = state(1131);
	v->a[71138] = 2;
	v->a[71139] = sym_variable_assignment;
	small_parse_table_3557(v);
}

void	small_parse_table_3557(t_small_parse_table_array *v)
{
	v->a[71140] = aux_sym__variable_assignments_repeat1;
	v->a[71141] = actions(762);
	v->a[71142] = 19;
	v->a[71143] = anon_sym_LT;
	v->a[71144] = anon_sym_GT;
	v->a[71145] = anon_sym_GT_GT;
	v->a[71146] = anon_sym_AMP_GT;
	v->a[71147] = anon_sym_AMP_GT_GT;
	v->a[71148] = anon_sym_LT_AMP;
	v->a[71149] = anon_sym_GT_AMP;
	v->a[71150] = anon_sym_GT_PIPE;
	v->a[71151] = anon_sym_LT_AMP_DASH;
	v->a[71152] = anon_sym_GT_AMP_DASH;
	v->a[71153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71154] = anon_sym_DOLLAR;
	v->a[71155] = anon_sym_DQUOTE;
	v->a[71156] = sym_raw_string;
	v->a[71157] = sym_number;
	v->a[71158] = anon_sym_DOLLAR_LBRACE;
	v->a[71159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3558(v);
}

void	small_parse_table_3558(t_small_parse_table_array *v)
{
	v->a[71160] = anon_sym_BQUOTE;
	v->a[71161] = sym_word;
	v->a[71162] = 3;
	v->a[71163] = actions(3);
	v->a[71164] = 1;
	v->a[71165] = sym_comment;
	v->a[71166] = actions(2352);
	v->a[71167] = 3;
	v->a[71168] = sym_file_descriptor;
	v->a[71169] = ts_builtin_sym_end;
	v->a[71170] = aux_sym_heredoc_redirect_token1;
	v->a[71171] = actions(2350);
	v->a[71172] = 20;
	v->a[71173] = anon_sym_PIPE;
	v->a[71174] = anon_sym_RPAREN;
	v->a[71175] = anon_sym_SEMI_SEMI;
	v->a[71176] = anon_sym_AMP_AMP;
	v->a[71177] = anon_sym_PIPE_PIPE;
	v->a[71178] = anon_sym_LT;
	v->a[71179] = anon_sym_GT;
	small_parse_table_3559(v);
}

void	small_parse_table_3559(t_small_parse_table_array *v)
{
	v->a[71180] = anon_sym_GT_GT;
	v->a[71181] = anon_sym_AMP_GT;
	v->a[71182] = anon_sym_AMP_GT_GT;
	v->a[71183] = anon_sym_LT_AMP;
	v->a[71184] = anon_sym_GT_AMP;
	v->a[71185] = anon_sym_GT_PIPE;
	v->a[71186] = anon_sym_LT_AMP_DASH;
	v->a[71187] = anon_sym_GT_AMP_DASH;
	v->a[71188] = anon_sym_LT_LT;
	v->a[71189] = anon_sym_LT_LT_DASH;
	v->a[71190] = anon_sym_AMP;
	v->a[71191] = anon_sym_BQUOTE;
	v->a[71192] = anon_sym_SEMI;
	v->a[71193] = 8;
	v->a[71194] = actions(3);
	v->a[71195] = 1;
	v->a[71196] = sym_comment;
	v->a[71197] = actions(2079);
	v->a[71198] = 1;
	v->a[71199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3560(v);
}

/* EOF small_parse_table_711.c */
