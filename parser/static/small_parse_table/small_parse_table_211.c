/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_211.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1055(t_small_parse_table_array *v)
{
	v->a[21100] = actions(381);
	v->a[21101] = 23;
	v->a[21102] = anon_sym_LPAREN;
	v->a[21103] = anon_sym_PIPE;
	v->a[21104] = anon_sym_AMP_AMP;
	v->a[21105] = anon_sym_PIPE_PIPE;
	v->a[21106] = anon_sym_LT;
	v->a[21107] = anon_sym_GT;
	v->a[21108] = anon_sym_GT_GT;
	v->a[21109] = anon_sym_LT_AMP;
	v->a[21110] = anon_sym_GT_AMP;
	v->a[21111] = anon_sym_GT_PIPE;
	v->a[21112] = anon_sym_LT_AMP_DASH;
	v->a[21113] = anon_sym_GT_AMP_DASH;
	v->a[21114] = anon_sym_LT_LT;
	v->a[21115] = anon_sym_LT_LT_DASH;
	v->a[21116] = aux_sym_heredoc_redirect_token1;
	v->a[21117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21118] = anon_sym_DQUOTE;
	v->a[21119] = sym_raw_string;
	small_parse_table_1056(v);
}

void	small_parse_table_1056(t_small_parse_table_array *v)
{
	v->a[21120] = sym_number;
	v->a[21121] = anon_sym_DOLLAR_LBRACE;
	v->a[21122] = anon_sym_DOLLAR_LPAREN;
	v->a[21123] = anon_sym_BQUOTE;
	v->a[21124] = sym_word;
	v->a[21125] = 15;
	v->a[21126] = actions(3);
	v->a[21127] = 1;
	v->a[21128] = sym_comment;
	v->a[21129] = actions(17);
	v->a[21130] = 1;
	v->a[21131] = anon_sym_LPAREN;
	v->a[21132] = actions(459);
	v->a[21133] = 1;
	v->a[21134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21135] = actions(461);
	v->a[21136] = 1;
	v->a[21137] = anon_sym_DOLLAR;
	v->a[21138] = actions(463);
	v->a[21139] = 1;
	small_parse_table_1057(v);
}

void	small_parse_table_1057(t_small_parse_table_array *v)
{
	v->a[21140] = anon_sym_DQUOTE;
	v->a[21141] = actions(465);
	v->a[21142] = 1;
	v->a[21143] = anon_sym_DOLLAR_LBRACE;
	v->a[21144] = actions(467);
	v->a[21145] = 1;
	v->a[21146] = anon_sym_DOLLAR_LPAREN;
	v->a[21147] = actions(473);
	v->a[21148] = 1;
	v->a[21149] = sym__bare_dollar;
	v->a[21150] = actions(493);
	v->a[21151] = 1;
	v->a[21152] = sym_file_descriptor;
	v->a[21153] = state(241);
	v->a[21154] = 1;
	v->a[21155] = aux_sym_command_repeat2;
	v->a[21156] = state(718);
	v->a[21157] = 1;
	v->a[21158] = sym_concatenation;
	v->a[21159] = state(1264);
	small_parse_table_1058(v);
}

void	small_parse_table_1058(t_small_parse_table_array *v)
{
	v->a[21160] = 1;
	v->a[21161] = sym_subshell;
	v->a[21162] = actions(511);
	v->a[21163] = 3;
	v->a[21164] = sym_raw_string;
	v->a[21165] = sym_number;
	v->a[21166] = sym_word;
	v->a[21167] = state(493);
	v->a[21168] = 5;
	v->a[21169] = sym_arithmetic_expansion;
	v->a[21170] = sym_string;
	v->a[21171] = sym_simple_expansion;
	v->a[21172] = sym_expansion;
	v->a[21173] = sym_command_substitution;
	v->a[21174] = actions(491);
	v->a[21175] = 18;
	v->a[21176] = anon_sym_PIPE;
	v->a[21177] = anon_sym_SEMI_SEMI;
	v->a[21178] = anon_sym_AMP_AMP;
	v->a[21179] = anon_sym_PIPE_PIPE;
	small_parse_table_1059(v);
}

void	small_parse_table_1059(t_small_parse_table_array *v)
{
	v->a[21180] = anon_sym_LT;
	v->a[21181] = anon_sym_GT;
	v->a[21182] = anon_sym_GT_GT;
	v->a[21183] = anon_sym_LT_AMP;
	v->a[21184] = anon_sym_GT_AMP;
	v->a[21185] = anon_sym_GT_PIPE;
	v->a[21186] = anon_sym_LT_AMP_DASH;
	v->a[21187] = anon_sym_GT_AMP_DASH;
	v->a[21188] = anon_sym_LT_LT;
	v->a[21189] = anon_sym_LT_LT_DASH;
	v->a[21190] = aux_sym_heredoc_redirect_token1;
	v->a[21191] = anon_sym_AMP;
	v->a[21192] = anon_sym_BQUOTE;
	v->a[21193] = anon_sym_SEMI;
	v->a[21194] = 14;
	v->a[21195] = actions(3);
	v->a[21196] = 1;
	v->a[21197] = sym_comment;
	v->a[21198] = actions(518);
	v->a[21199] = 1;
	small_parse_table_1060(v);
}

/* EOF small_parse_table_211.c */
