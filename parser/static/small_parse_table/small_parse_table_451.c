/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = 1;
	v->a[45101] = sym_file_descriptor;
	v->a[45102] = actions(904);
	v->a[45103] = 1;
	v->a[45104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45105] = actions(906);
	v->a[45106] = 1;
	v->a[45107] = anon_sym_DOLLAR;
	v->a[45108] = actions(908);
	v->a[45109] = 1;
	v->a[45110] = anon_sym_DQUOTE;
	v->a[45111] = actions(910);
	v->a[45112] = 1;
	v->a[45113] = anon_sym_DOLLAR_LBRACE;
	v->a[45114] = actions(912);
	v->a[45115] = 1;
	v->a[45116] = anon_sym_DOLLAR_LPAREN;
	v->a[45117] = actions(914);
	v->a[45118] = 1;
	v->a[45119] = anon_sym_BQUOTE;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = state(1197);
	v->a[45121] = 1;
	v->a[45122] = sym_concatenation;
	v->a[45123] = actions(1516);
	v->a[45124] = 3;
	v->a[45125] = sym_raw_string;
	v->a[45126] = sym_number;
	v->a[45127] = sym_word;
	v->a[45128] = state(1398);
	v->a[45129] = 5;
	v->a[45130] = sym_arithmetic_expansion;
	v->a[45131] = sym_string;
	v->a[45132] = sym_simple_expansion;
	v->a[45133] = sym_expansion;
	v->a[45134] = sym_command_substitution;
	v->a[45135] = actions(758);
	v->a[45136] = 16;
	v->a[45137] = anon_sym_PIPE;
	v->a[45138] = anon_sym_AMP_AMP;
	v->a[45139] = anon_sym_PIPE_PIPE;
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = anon_sym_LT;
	v->a[45141] = anon_sym_GT;
	v->a[45142] = anon_sym_GT_GT;
	v->a[45143] = anon_sym_AMP_GT;
	v->a[45144] = anon_sym_AMP_GT_GT;
	v->a[45145] = anon_sym_LT_AMP;
	v->a[45146] = anon_sym_GT_AMP;
	v->a[45147] = anon_sym_GT_PIPE;
	v->a[45148] = anon_sym_LT_AMP_DASH;
	v->a[45149] = anon_sym_GT_AMP_DASH;
	v->a[45150] = anon_sym_LT_LT;
	v->a[45151] = anon_sym_LT_LT_DASH;
	v->a[45152] = aux_sym_heredoc_redirect_token1;
	v->a[45153] = 3;
	v->a[45154] = actions(3);
	v->a[45155] = 1;
	v->a[45156] = sym_comment;
	v->a[45157] = actions(1195);
	v->a[45158] = 2;
	v->a[45159] = sym_file_descriptor;
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = sym__concat;
	v->a[45161] = actions(1193);
	v->a[45162] = 30;
	v->a[45163] = anon_sym_esac;
	v->a[45164] = anon_sym_PIPE;
	v->a[45165] = anon_sym_SEMI_SEMI;
	v->a[45166] = anon_sym_AMP_AMP;
	v->a[45167] = anon_sym_PIPE_PIPE;
	v->a[45168] = anon_sym_LT;
	v->a[45169] = anon_sym_GT;
	v->a[45170] = anon_sym_GT_GT;
	v->a[45171] = anon_sym_AMP_GT;
	v->a[45172] = anon_sym_AMP_GT_GT;
	v->a[45173] = anon_sym_LT_AMP;
	v->a[45174] = anon_sym_GT_AMP;
	v->a[45175] = anon_sym_GT_PIPE;
	v->a[45176] = anon_sym_LT_AMP_DASH;
	v->a[45177] = anon_sym_GT_AMP_DASH;
	v->a[45178] = anon_sym_LT_LT;
	v->a[45179] = anon_sym_LT_LT_DASH;
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = aux_sym_heredoc_redirect_token1;
	v->a[45181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45182] = anon_sym_AMP;
	v->a[45183] = aux_sym_concatenation_token1;
	v->a[45184] = anon_sym_DOLLAR;
	v->a[45185] = anon_sym_DQUOTE;
	v->a[45186] = sym_raw_string;
	v->a[45187] = sym_number;
	v->a[45188] = anon_sym_DOLLAR_LBRACE;
	v->a[45189] = anon_sym_DOLLAR_LPAREN;
	v->a[45190] = anon_sym_BQUOTE;
	v->a[45191] = sym_word;
	v->a[45192] = anon_sym_SEMI;
	v->a[45193] = 3;
	v->a[45194] = actions(3);
	v->a[45195] = 1;
	v->a[45196] = sym_comment;
	v->a[45197] = actions(1070);
	v->a[45198] = 3;
	v->a[45199] = sym_file_descriptor;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
