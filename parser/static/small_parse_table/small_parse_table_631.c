/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_631.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3155(t_small_parse_table_array *v)
{
	v->a[63100] = anon_sym_GT_AMP;
	v->a[63101] = anon_sym_GT_PIPE;
	v->a[63102] = anon_sym_LT_GT;
	v->a[63103] = anon_sym_LT_LT;
	v->a[63104] = anon_sym_LT_LT_DASH;
	v->a[63105] = anon_sym_AMP;
	v->a[63106] = anon_sym_BQUOTE;
	v->a[63107] = anon_sym_SEMI;
	v->a[63108] = 3;
	v->a[63109] = actions(3);
	v->a[63110] = 1;
	v->a[63111] = sym_comment;
	v->a[63112] = actions(1178);
	v->a[63113] = 3;
	v->a[63114] = sym_file_descriptor;
	v->a[63115] = sym__concat;
	v->a[63116] = sym_variable_name;
	v->a[63117] = actions(1176);
	v->a[63118] = 17;
	v->a[63119] = anon_sym_LT;
	small_parse_table_3156(v);
}

void	small_parse_table_3156(t_small_parse_table_array *v)
{
	v->a[63120] = anon_sym_GT;
	v->a[63121] = anon_sym_GT_GT;
	v->a[63122] = anon_sym_LT_AMP;
	v->a[63123] = anon_sym_GT_AMP;
	v->a[63124] = anon_sym_GT_PIPE;
	v->a[63125] = anon_sym_LT_GT;
	v->a[63126] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63127] = aux_sym_concatenation_token1;
	v->a[63128] = anon_sym_DOLLAR;
	v->a[63129] = anon_sym_DQUOTE;
	v->a[63130] = sym_raw_string;
	v->a[63131] = sym_number;
	v->a[63132] = anon_sym_DOLLAR_LBRACE;
	v->a[63133] = anon_sym_DOLLAR_LPAREN;
	v->a[63134] = anon_sym_BQUOTE;
	v->a[63135] = sym_word;
	v->a[63136] = 6;
	v->a[63137] = actions(3);
	v->a[63138] = 1;
	v->a[63139] = sym_comment;
	small_parse_table_3157(v);
}

void	small_parse_table_3157(t_small_parse_table_array *v)
{
	v->a[63140] = actions(2051);
	v->a[63141] = 1;
	v->a[63142] = aux_sym_heredoc_redirect_token1;
	v->a[63143] = actions(2113);
	v->a[63144] = 1;
	v->a[63145] = sym_file_descriptor;
	v->a[63146] = state(1172);
	v->a[63147] = 2;
	v->a[63148] = sym_file_redirect;
	v->a[63149] = aux_sym_redirected_statement_repeat2;
	v->a[63150] = actions(1879);
	v->a[63151] = 7;
	v->a[63152] = anon_sym_LT;
	v->a[63153] = anon_sym_GT;
	v->a[63154] = anon_sym_GT_GT;
	v->a[63155] = anon_sym_LT_AMP;
	v->a[63156] = anon_sym_GT_AMP;
	v->a[63157] = anon_sym_GT_PIPE;
	v->a[63158] = anon_sym_LT_GT;
	v->a[63159] = actions(2053);
	small_parse_table_3158(v);
}

void	small_parse_table_3158(t_small_parse_table_array *v)
{
	v->a[63160] = 9;
	v->a[63161] = anon_sym_PIPE;
	v->a[63162] = anon_sym_RPAREN;
	v->a[63163] = anon_sym_SEMI_SEMI;
	v->a[63164] = anon_sym_AMP_AMP;
	v->a[63165] = anon_sym_PIPE_PIPE;
	v->a[63166] = anon_sym_LT_LT;
	v->a[63167] = anon_sym_LT_LT_DASH;
	v->a[63168] = anon_sym_AMP;
	v->a[63169] = anon_sym_SEMI;
	v->a[63170] = 5;
	v->a[63171] = actions(3);
	v->a[63172] = 1;
	v->a[63173] = sym_comment;
	v->a[63174] = actions(736);
	v->a[63175] = 1;
	v->a[63176] = anon_sym_PIPE;
	v->a[63177] = actions(997);
	v->a[63178] = 2;
	v->a[63179] = sym_file_descriptor;
	small_parse_table_3159(v);
}

void	small_parse_table_3159(t_small_parse_table_array *v)
{
	v->a[63180] = aux_sym_heredoc_redirect_token1;
	v->a[63181] = state(1194);
	v->a[63182] = 3;
	v->a[63183] = sym_file_redirect;
	v->a[63184] = sym_heredoc_redirect;
	v->a[63185] = aux_sym_redirected_statement_repeat1;
	v->a[63186] = actions(960);
	v->a[63187] = 14;
	v->a[63188] = anon_sym_SEMI_SEMI;
	v->a[63189] = anon_sym_AMP_AMP;
	v->a[63190] = anon_sym_PIPE_PIPE;
	v->a[63191] = anon_sym_LT;
	v->a[63192] = anon_sym_GT;
	v->a[63193] = anon_sym_GT_GT;
	v->a[63194] = anon_sym_LT_AMP;
	v->a[63195] = anon_sym_GT_AMP;
	v->a[63196] = anon_sym_GT_PIPE;
	v->a[63197] = anon_sym_LT_GT;
	v->a[63198] = anon_sym_LT_LT;
	v->a[63199] = anon_sym_LT_LT_DASH;
	small_parse_table_3160(v);
}

/* EOF small_parse_table_631.c */
