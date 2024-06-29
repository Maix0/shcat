/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_271.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1355(t_small_parse_table_array *v)
{
	v->a[27100] = anon_sym_PIPE_PIPE;
	v->a[27101] = anon_sym_LT;
	v->a[27102] = anon_sym_GT;
	v->a[27103] = anon_sym_GT_GT;
	v->a[27104] = anon_sym_AMP_GT;
	v->a[27105] = anon_sym_AMP_GT_GT;
	v->a[27106] = anon_sym_LT_AMP;
	v->a[27107] = anon_sym_GT_AMP;
	v->a[27108] = anon_sym_GT_PIPE;
	v->a[27109] = anon_sym_LT_AMP_DASH;
	v->a[27110] = anon_sym_GT_AMP_DASH;
	v->a[27111] = anon_sym_LT_LT;
	v->a[27112] = anon_sym_LT_LT_DASH;
	v->a[27113] = aux_sym_heredoc_redirect_token1;
	v->a[27114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27115] = anon_sym_AMP;
	v->a[27116] = anon_sym_DOLLAR;
	v->a[27117] = anon_sym_DQUOTE;
	v->a[27118] = sym_raw_string;
	v->a[27119] = sym_number;
	small_parse_table_1356(v);
}

void	small_parse_table_1356(t_small_parse_table_array *v)
{
	v->a[27120] = anon_sym_DOLLAR_LBRACE;
	v->a[27121] = anon_sym_DOLLAR_LPAREN;
	v->a[27122] = anon_sym_BQUOTE;
	v->a[27123] = sym_word;
	v->a[27124] = anon_sym_SEMI;
	v->a[27125] = 11;
	v->a[27126] = actions(3);
	v->a[27127] = 1;
	v->a[27128] = sym_comment;
	v->a[27129] = actions(760);
	v->a[27130] = 1;
	v->a[27131] = sym_file_descriptor;
	v->a[27132] = actions(904);
	v->a[27133] = 1;
	v->a[27134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27135] = actions(906);
	v->a[27136] = 1;
	v->a[27137] = anon_sym_DOLLAR;
	v->a[27138] = actions(908);
	v->a[27139] = 1;
	small_parse_table_1357(v);
}

void	small_parse_table_1357(t_small_parse_table_array *v)
{
	v->a[27140] = anon_sym_DQUOTE;
	v->a[27141] = actions(910);
	v->a[27142] = 1;
	v->a[27143] = anon_sym_DOLLAR_LBRACE;
	v->a[27144] = actions(912);
	v->a[27145] = 1;
	v->a[27146] = anon_sym_DOLLAR_LPAREN;
	v->a[27147] = state(1197);
	v->a[27148] = 1;
	v->a[27149] = sym_concatenation;
	v->a[27150] = actions(965);
	v->a[27151] = 3;
	v->a[27152] = sym_raw_string;
	v->a[27153] = sym_number;
	v->a[27154] = sym_word;
	v->a[27155] = state(1156);
	v->a[27156] = 5;
	v->a[27157] = sym_arithmetic_expansion;
	v->a[27158] = sym_string;
	v->a[27159] = sym_simple_expansion;
	small_parse_table_1358(v);
}

void	small_parse_table_1358(t_small_parse_table_array *v)
{
	v->a[27160] = sym_expansion;
	v->a[27161] = sym_command_substitution;
	v->a[27162] = actions(758);
	v->a[27163] = 20;
	v->a[27164] = anon_sym_PIPE;
	v->a[27165] = anon_sym_SEMI_SEMI;
	v->a[27166] = anon_sym_AMP_AMP;
	v->a[27167] = anon_sym_PIPE_PIPE;
	v->a[27168] = anon_sym_LT;
	v->a[27169] = anon_sym_GT;
	v->a[27170] = anon_sym_GT_GT;
	v->a[27171] = anon_sym_AMP_GT;
	v->a[27172] = anon_sym_AMP_GT_GT;
	v->a[27173] = anon_sym_LT_AMP;
	v->a[27174] = anon_sym_GT_AMP;
	v->a[27175] = anon_sym_GT_PIPE;
	v->a[27176] = anon_sym_LT_AMP_DASH;
	v->a[27177] = anon_sym_GT_AMP_DASH;
	v->a[27178] = anon_sym_LT_LT;
	v->a[27179] = anon_sym_LT_LT_DASH;
	small_parse_table_1359(v);
}

void	small_parse_table_1359(t_small_parse_table_array *v)
{
	v->a[27180] = aux_sym_heredoc_redirect_token1;
	v->a[27181] = anon_sym_AMP;
	v->a[27182] = anon_sym_BQUOTE;
	v->a[27183] = anon_sym_SEMI;
	v->a[27184] = 16;
	v->a[27185] = actions(3);
	v->a[27186] = 1;
	v->a[27187] = sym_comment;
	v->a[27188] = actions(335);
	v->a[27189] = 1;
	v->a[27190] = anon_sym_LPAREN;
	v->a[27191] = actions(455);
	v->a[27192] = 1;
	v->a[27193] = sym_file_descriptor;
	v->a[27194] = actions(969);
	v->a[27195] = 1;
	v->a[27196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27197] = actions(971);
	v->a[27198] = 1;
	v->a[27199] = anon_sym_DOLLAR;
	small_parse_table_1360(v);
}

/* EOF small_parse_table_271.c */
