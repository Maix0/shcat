/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_281.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1405(t_small_parse_table_array *v)
{
	v->a[28100] = aux_sym_concatenation_repeat1;
	v->a[28101] = actions(1000);
	v->a[28102] = 2;
	v->a[28103] = sym_file_descriptor;
	v->a[28104] = sym__bare_dollar;
	v->a[28105] = actions(993);
	v->a[28106] = 29;
	v->a[28107] = anon_sym_PIPE;
	v->a[28108] = anon_sym_RPAREN;
	v->a[28109] = anon_sym_SEMI_SEMI;
	v->a[28110] = anon_sym_AMP_AMP;
	v->a[28111] = anon_sym_PIPE_PIPE;
	v->a[28112] = anon_sym_LT;
	v->a[28113] = anon_sym_GT;
	v->a[28114] = anon_sym_GT_GT;
	v->a[28115] = anon_sym_AMP_GT;
	v->a[28116] = anon_sym_AMP_GT_GT;
	v->a[28117] = anon_sym_LT_AMP;
	v->a[28118] = anon_sym_GT_AMP;
	v->a[28119] = anon_sym_GT_PIPE;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_LT_AMP_DASH;
	v->a[28121] = anon_sym_GT_AMP_DASH;
	v->a[28122] = anon_sym_LT_LT;
	v->a[28123] = anon_sym_LT_LT_DASH;
	v->a[28124] = aux_sym_heredoc_redirect_token1;
	v->a[28125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28126] = anon_sym_AMP;
	v->a[28127] = anon_sym_DOLLAR;
	v->a[28128] = anon_sym_DQUOTE;
	v->a[28129] = sym_raw_string;
	v->a[28130] = sym_number;
	v->a[28131] = anon_sym_DOLLAR_LBRACE;
	v->a[28132] = anon_sym_DOLLAR_LPAREN;
	v->a[28133] = anon_sym_BQUOTE;
	v->a[28134] = sym_word;
	v->a[28135] = anon_sym_SEMI;
	v->a[28136] = 12;
	v->a[28137] = actions(3);
	v->a[28138] = 1;
	v->a[28139] = sym_comment;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = actions(760);
	v->a[28141] = 1;
	v->a[28142] = sym_file_descriptor;
	v->a[28143] = actions(904);
	v->a[28144] = 1;
	v->a[28145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28146] = actions(906);
	v->a[28147] = 1;
	v->a[28148] = anon_sym_DOLLAR;
	v->a[28149] = actions(908);
	v->a[28150] = 1;
	v->a[28151] = anon_sym_DQUOTE;
	v->a[28152] = actions(910);
	v->a[28153] = 1;
	v->a[28154] = anon_sym_DOLLAR_LBRACE;
	v->a[28155] = actions(912);
	v->a[28156] = 1;
	v->a[28157] = anon_sym_DOLLAR_LPAREN;
	v->a[28158] = actions(914);
	v->a[28159] = 1;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = anon_sym_BQUOTE;
	v->a[28161] = state(1197);
	v->a[28162] = 1;
	v->a[28163] = sym_concatenation;
	v->a[28164] = actions(1034);
	v->a[28165] = 3;
	v->a[28166] = sym_raw_string;
	v->a[28167] = sym_number;
	v->a[28168] = sym_word;
	v->a[28169] = state(1186);
	v->a[28170] = 5;
	v->a[28171] = sym_arithmetic_expansion;
	v->a[28172] = sym_string;
	v->a[28173] = sym_simple_expansion;
	v->a[28174] = sym_expansion;
	v->a[28175] = sym_command_substitution;
	v->a[28176] = actions(758);
	v->a[28177] = 19;
	v->a[28178] = anon_sym_PIPE;
	v->a[28179] = anon_sym_SEMI_SEMI;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = anon_sym_AMP_AMP;
	v->a[28181] = anon_sym_PIPE_PIPE;
	v->a[28182] = anon_sym_LT;
	v->a[28183] = anon_sym_GT;
	v->a[28184] = anon_sym_GT_GT;
	v->a[28185] = anon_sym_AMP_GT;
	v->a[28186] = anon_sym_AMP_GT_GT;
	v->a[28187] = anon_sym_LT_AMP;
	v->a[28188] = anon_sym_GT_AMP;
	v->a[28189] = anon_sym_GT_PIPE;
	v->a[28190] = anon_sym_LT_AMP_DASH;
	v->a[28191] = anon_sym_GT_AMP_DASH;
	v->a[28192] = anon_sym_LT_LT;
	v->a[28193] = anon_sym_LT_LT_DASH;
	v->a[28194] = aux_sym_heredoc_redirect_token1;
	v->a[28195] = anon_sym_AMP;
	v->a[28196] = anon_sym_SEMI;
	v->a[28197] = 11;
	v->a[28198] = actions(3);
	v->a[28199] = 1;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
