/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2851.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14255(t_small_parse_table_array *v)
{
	v->a[285100] = sym__special_character;
	v->a[285101] = anon_sym_DQUOTE;
	v->a[285102] = sym_raw_string;
	v->a[285103] = sym_ansi_c_string;
	v->a[285104] = anon_sym_DOLLAR_LBRACE;
	v->a[285105] = anon_sym_BQUOTE;
	v->a[285106] = anon_sym_DOLLAR_BQUOTE;
	v->a[285107] = anon_sym_LT_LPAREN;
	v->a[285108] = anon_sym_GT_LPAREN;
	v->a[285109] = 6;
	v->a[285110] = actions(3);
	v->a[285111] = 1;
	v->a[285112] = sym_comment;
	v->a[285113] = actions(11651);
	v->a[285114] = 1;
	v->a[285115] = aux_sym_concatenation_token1;
	v->a[285116] = actions(12824);
	v->a[285117] = 1;
	v->a[285118] = sym__concat;
	v->a[285119] = state(4268);
	small_parse_table_14256(v);
}

void	small_parse_table_14256(t_small_parse_table_array *v)
{
	v->a[285120] = 1;
	v->a[285121] = aux_sym_concatenation_repeat1;
	v->a[285122] = actions(1288);
	v->a[285123] = 2;
	v->a[285124] = sym_file_descriptor;
	v->a[285125] = aux_sym_heredoc_redirect_token1;
	v->a[285126] = actions(1286);
	v->a[285127] = 16;
	v->a[285128] = anon_sym_PIPE_PIPE;
	v->a[285129] = anon_sym_AMP_AMP;
	v->a[285130] = anon_sym_PIPE;
	v->a[285131] = anon_sym_LT;
	v->a[285132] = anon_sym_GT;
	v->a[285133] = anon_sym_LT_LT;
	v->a[285134] = anon_sym_GT_GT;
	v->a[285135] = anon_sym_PIPE_AMP;
	v->a[285136] = anon_sym_AMP_GT;
	v->a[285137] = anon_sym_AMP_GT_GT;
	v->a[285138] = anon_sym_LT_AMP;
	v->a[285139] = anon_sym_GT_AMP;
	small_parse_table_14257(v);
}

void	small_parse_table_14257(t_small_parse_table_array *v)
{
	v->a[285140] = anon_sym_GT_PIPE;
	v->a[285141] = anon_sym_LT_AMP_DASH;
	v->a[285142] = anon_sym_GT_AMP_DASH;
	v->a[285143] = anon_sym_LT_LT_DASH;
	v->a[285144] = 6;
	v->a[285145] = actions(3);
	v->a[285146] = 1;
	v->a[285147] = sym_comment;
	v->a[285148] = actions(11651);
	v->a[285149] = 1;
	v->a[285150] = aux_sym_concatenation_token1;
	v->a[285151] = actions(12826);
	v->a[285152] = 1;
	v->a[285153] = sym__concat;
	v->a[285154] = state(4268);
	v->a[285155] = 1;
	v->a[285156] = aux_sym_concatenation_repeat1;
	v->a[285157] = actions(1267);
	v->a[285158] = 2;
	v->a[285159] = sym_file_descriptor;
	small_parse_table_14258(v);
}

void	small_parse_table_14258(t_small_parse_table_array *v)
{
	v->a[285160] = aux_sym_heredoc_redirect_token1;
	v->a[285161] = actions(1265);
	v->a[285162] = 16;
	v->a[285163] = anon_sym_PIPE_PIPE;
	v->a[285164] = anon_sym_AMP_AMP;
	v->a[285165] = anon_sym_PIPE;
	v->a[285166] = anon_sym_LT;
	v->a[285167] = anon_sym_GT;
	v->a[285168] = anon_sym_LT_LT;
	v->a[285169] = anon_sym_GT_GT;
	v->a[285170] = anon_sym_PIPE_AMP;
	v->a[285171] = anon_sym_AMP_GT;
	v->a[285172] = anon_sym_AMP_GT_GT;
	v->a[285173] = anon_sym_LT_AMP;
	v->a[285174] = anon_sym_GT_AMP;
	v->a[285175] = anon_sym_GT_PIPE;
	v->a[285176] = anon_sym_LT_AMP_DASH;
	v->a[285177] = anon_sym_GT_AMP_DASH;
	v->a[285178] = anon_sym_LT_LT_DASH;
	v->a[285179] = 12;
	small_parse_table_14259(v);
}

void	small_parse_table_14259(t_small_parse_table_array *v)
{
	v->a[285180] = actions(71);
	v->a[285181] = 1;
	v->a[285182] = sym_comment;
	v->a[285183] = actions(4253);
	v->a[285184] = 1;
	v->a[285185] = anon_sym_PIPE;
	v->a[285186] = actions(4348);
	v->a[285187] = 1;
	v->a[285188] = anon_sym_PIPE_AMP;
	v->a[285189] = actions(5994);
	v->a[285190] = 1;
	v->a[285191] = anon_sym_LT_LT;
	v->a[285192] = actions(5996);
	v->a[285193] = 1;
	v->a[285194] = anon_sym_LT_LT_DASH;
	v->a[285195] = actions(7543);
	v->a[285196] = 1;
	v->a[285197] = anon_sym_RBRACK;
	v->a[285198] = actions(12686);
	v->a[285199] = 1;
	small_parse_table_14260(v);
}

/* EOF small_parse_table_2851.c */
