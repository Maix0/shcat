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
	v->a[71100] = anon_sym_AMP_GT;
	v->a[71101] = anon_sym_AMP_GT_GT;
	v->a[71102] = anon_sym_LT_AMP;
	v->a[71103] = anon_sym_GT_AMP;
	v->a[71104] = anon_sym_GT_PIPE;
	v->a[71105] = anon_sym_LT_AMP_DASH;
	v->a[71106] = anon_sym_GT_AMP_DASH;
	v->a[71107] = anon_sym_LT_LT;
	v->a[71108] = anon_sym_LT_LT_DASH;
	v->a[71109] = anon_sym_AMP;
	v->a[71110] = anon_sym_BQUOTE;
	v->a[71111] = anon_sym_SEMI;
	v->a[71112] = 6;
	v->a[71113] = actions(3);
	v->a[71114] = 1;
	v->a[71115] = sym_comment;
	v->a[71116] = actions(2458);
	v->a[71117] = 1;
	v->a[71118] = aux_sym_concatenation_token1;
	v->a[71119] = actions(2461);
	small_parse_table_3556(v);
}

void	small_parse_table_3556(t_small_parse_table_array *v)
{
	v->a[71120] = 1;
	v->a[71121] = sym__concat;
	v->a[71122] = state(1260);
	v->a[71123] = 1;
	v->a[71124] = aux_sym_concatenation_repeat1;
	v->a[71125] = actions(1004);
	v->a[71126] = 2;
	v->a[71127] = sym_file_descriptor;
	v->a[71128] = sym_variable_name;
	v->a[71129] = actions(999);
	v->a[71130] = 19;
	v->a[71131] = anon_sym_LT;
	v->a[71132] = anon_sym_GT;
	v->a[71133] = anon_sym_GT_GT;
	v->a[71134] = anon_sym_AMP_GT;
	v->a[71135] = anon_sym_AMP_GT_GT;
	v->a[71136] = anon_sym_LT_AMP;
	v->a[71137] = anon_sym_GT_AMP;
	v->a[71138] = anon_sym_GT_PIPE;
	v->a[71139] = anon_sym_LT_AMP_DASH;
	small_parse_table_3557(v);
}

void	small_parse_table_3557(t_small_parse_table_array *v)
{
	v->a[71140] = anon_sym_GT_AMP_DASH;
	v->a[71141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71142] = anon_sym_DOLLAR;
	v->a[71143] = anon_sym_DQUOTE;
	v->a[71144] = sym_raw_string;
	v->a[71145] = sym_number;
	v->a[71146] = anon_sym_DOLLAR_LBRACE;
	v->a[71147] = anon_sym_DOLLAR_LPAREN;
	v->a[71148] = anon_sym_BQUOTE;
	v->a[71149] = sym_word;
	v->a[71150] = 13;
	v->a[71151] = actions(3);
	v->a[71152] = 1;
	v->a[71153] = sym_comment;
	v->a[71154] = actions(807);
	v->a[71155] = 1;
	v->a[71156] = anon_sym_PIPE;
	v->a[71157] = actions(951);
	v->a[71158] = 1;
	v->a[71159] = ts_builtin_sym_end;
	small_parse_table_3558(v);
}

void	small_parse_table_3558(t_small_parse_table_array *v)
{
	v->a[71160] = actions(2075);
	v->a[71161] = 1;
	v->a[71162] = sym_file_descriptor;
	v->a[71163] = actions(2464);
	v->a[71164] = 1;
	v->a[71165] = anon_sym_SEMI_SEMI;
	v->a[71166] = actions(2466);
	v->a[71167] = 1;
	v->a[71168] = aux_sym_heredoc_redirect_token1;
	v->a[71169] = actions(2468);
	v->a[71170] = 1;
	v->a[71171] = anon_sym_AMP;
	v->a[71172] = actions(2470);
	v->a[71173] = 1;
	v->a[71174] = anon_sym_SEMI;
	v->a[71175] = actions(861);
	v->a[71176] = 2;
	v->a[71177] = anon_sym_LT_LT;
	v->a[71178] = anon_sym_LT_LT_DASH;
	v->a[71179] = actions(934);
	small_parse_table_3559(v);
}

void	small_parse_table_3559(t_small_parse_table_array *v)
{
	v->a[71180] = 2;
	v->a[71181] = anon_sym_AMP_AMP;
	v->a[71182] = anon_sym_PIPE_PIPE;
	v->a[71183] = actions(2067);
	v->a[71184] = 2;
	v->a[71185] = anon_sym_LT_AMP_DASH;
	v->a[71186] = anon_sym_GT_AMP_DASH;
	v->a[71187] = state(1289);
	v->a[71188] = 3;
	v->a[71189] = sym_file_redirect;
	v->a[71190] = sym_heredoc_redirect;
	v->a[71191] = aux_sym_redirected_statement_repeat1;
	v->a[71192] = actions(2065);
	v->a[71193] = 8;
	v->a[71194] = anon_sym_LT;
	v->a[71195] = anon_sym_GT;
	v->a[71196] = anon_sym_GT_GT;
	v->a[71197] = anon_sym_AMP_GT;
	v->a[71198] = anon_sym_AMP_GT_GT;
	v->a[71199] = anon_sym_LT_AMP;
	small_parse_table_3560(v);
}

/* EOF small_parse_table_711.c */
