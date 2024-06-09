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
	v->a[71100] = state(1506);
	v->a[71101] = 1;
	v->a[71102] = aux_sym_pipeline_repeat1;
	v->a[71103] = actions(2247);
	v->a[71104] = 2;
	v->a[71105] = sym_file_descriptor;
	v->a[71106] = aux_sym_heredoc_redirect_token1;
	v->a[71107] = actions(2252);
	v->a[71108] = 18;
	v->a[71109] = anon_sym_esac;
	v->a[71110] = anon_sym_SEMI_SEMI;
	v->a[71111] = anon_sym_AMP_AMP;
	v->a[71112] = anon_sym_PIPE_PIPE;
	v->a[71113] = anon_sym_LT;
	v->a[71114] = anon_sym_GT;
	v->a[71115] = anon_sym_GT_GT;
	v->a[71116] = anon_sym_AMP_GT;
	v->a[71117] = anon_sym_AMP_GT_GT;
	v->a[71118] = anon_sym_LT_AMP;
	v->a[71119] = anon_sym_GT_AMP;
	small_parse_table_3556(v);
}

void	small_parse_table_3556(t_small_parse_table_array *v)
{
	v->a[71120] = anon_sym_GT_PIPE;
	v->a[71121] = anon_sym_LT_AMP_DASH;
	v->a[71122] = anon_sym_GT_AMP_DASH;
	v->a[71123] = anon_sym_LT_LT;
	v->a[71124] = anon_sym_LT_LT_DASH;
	v->a[71125] = anon_sym_AMP;
	v->a[71126] = anon_sym_SEMI;
	v->a[71127] = 5;
	v->a[71128] = actions(3);
	v->a[71129] = 1;
	v->a[71130] = sym_comment;
	v->a[71131] = actions(2207);
	v->a[71132] = 1;
	v->a[71133] = sym_variable_name;
	v->a[71134] = actions(2205);
	v->a[71135] = 2;
	v->a[71136] = aux_sym__simple_variable_name_token1;
	v->a[71137] = aux_sym__multiline_variable_name_token1;
	v->a[71138] = actions(2203);
	v->a[71139] = 9;
	small_parse_table_3557(v);
}

void	small_parse_table_3557(t_small_parse_table_array *v)
{
	v->a[71140] = anon_sym_BANG;
	v->a[71141] = anon_sym_DASH;
	v->a[71142] = anon_sym_STAR;
	v->a[71143] = anon_sym_QMARK;
	v->a[71144] = anon_sym_DOLLAR;
	v->a[71145] = anon_sym_POUND;
	v->a[71146] = anon_sym_AT;
	v->a[71147] = anon_sym_0;
	v->a[71148] = anon_sym__;
	v->a[71149] = actions(407);
	v->a[71150] = 10;
	v->a[71151] = aux_sym_heredoc_redirect_token1;
	v->a[71152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71153] = anon_sym_DQUOTE;
	v->a[71154] = sym_raw_string;
	v->a[71155] = aux_sym_number_token1;
	v->a[71156] = aux_sym_number_token2;
	v->a[71157] = anon_sym_DOLLAR_LBRACE;
	v->a[71158] = anon_sym_DOLLAR_LPAREN;
	v->a[71159] = anon_sym_BQUOTE;
	small_parse_table_3558(v);
}

void	small_parse_table_3558(t_small_parse_table_array *v)
{
	v->a[71160] = sym_word;
	v->a[71161] = 7;
	v->a[71162] = actions(3);
	v->a[71163] = 1;
	v->a[71164] = sym_comment;
	v->a[71165] = actions(2480);
	v->a[71166] = 1;
	v->a[71167] = aux_sym_heredoc_redirect_token1;
	v->a[71168] = actions(2636);
	v->a[71169] = 1;
	v->a[71170] = sym_file_descriptor;
	v->a[71171] = actions(2456);
	v->a[71172] = 2;
	v->a[71173] = anon_sym_LT_AMP_DASH;
	v->a[71174] = anon_sym_GT_AMP_DASH;
	v->a[71175] = state(1236);
	v->a[71176] = 2;
	v->a[71177] = sym_file_redirect;
	v->a[71178] = aux_sym_redirected_statement_repeat2;
	v->a[71179] = actions(2454);
	small_parse_table_3559(v);
}

void	small_parse_table_3559(t_small_parse_table_array *v)
{
	v->a[71180] = 8;
	v->a[71181] = anon_sym_LT;
	v->a[71182] = anon_sym_GT;
	v->a[71183] = anon_sym_GT_GT;
	v->a[71184] = anon_sym_AMP_GT;
	v->a[71185] = anon_sym_AMP_GT_GT;
	v->a[71186] = anon_sym_LT_AMP;
	v->a[71187] = anon_sym_GT_AMP;
	v->a[71188] = anon_sym_GT_PIPE;
	v->a[71189] = actions(2482);
	v->a[71190] = 8;
	v->a[71191] = anon_sym_PIPE;
	v->a[71192] = anon_sym_SEMI_SEMI;
	v->a[71193] = anon_sym_AMP_AMP;
	v->a[71194] = anon_sym_PIPE_PIPE;
	v->a[71195] = anon_sym_LT_LT;
	v->a[71196] = anon_sym_LT_LT_DASH;
	v->a[71197] = anon_sym_AMP;
	v->a[71198] = anon_sym_SEMI;
	v->a[71199] = 13;
	small_parse_table_3560(v);
}

/* EOF small_parse_table_711.c */
