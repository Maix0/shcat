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
	v->a[28100] = actions(3);
	v->a[28101] = 1;
	v->a[28102] = sym_comment;
	v->a[28103] = actions(748);
	v->a[28104] = 1;
	v->a[28105] = sym_variable_name;
	v->a[28106] = actions(949);
	v->a[28107] = 1;
	v->a[28108] = sym_file_descriptor;
	v->a[28109] = state(1045);
	v->a[28110] = 2;
	v->a[28111] = sym_variable_assignment;
	v->a[28112] = aux_sym__variable_assignments_repeat1;
	v->a[28113] = state(1080);
	v->a[28114] = 3;
	v->a[28115] = sym_file_redirect;
	v->a[28116] = sym_heredoc_redirect;
	v->a[28117] = aux_sym_redirected_statement_repeat1;
	v->a[28118] = actions(734);
	v->a[28119] = 9;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28121] = anon_sym_DOLLAR;
	v->a[28122] = anon_sym_DQUOTE;
	v->a[28123] = sym_raw_string;
	v->a[28124] = sym_number;
	v->a[28125] = anon_sym_DOLLAR_LBRACE;
	v->a[28126] = anon_sym_DOLLAR_LPAREN;
	v->a[28127] = anon_sym_BQUOTE;
	v->a[28128] = sym_word;
	v->a[28129] = actions(736);
	v->a[28130] = 17;
	v->a[28131] = anon_sym_PIPE;
	v->a[28132] = anon_sym_RPAREN;
	v->a[28133] = anon_sym_SEMI_SEMI;
	v->a[28134] = anon_sym_AMP_AMP;
	v->a[28135] = anon_sym_PIPE_PIPE;
	v->a[28136] = anon_sym_LT;
	v->a[28137] = anon_sym_GT;
	v->a[28138] = anon_sym_GT_GT;
	v->a[28139] = anon_sym_LT_AMP;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = anon_sym_GT_AMP;
	v->a[28141] = anon_sym_GT_PIPE;
	v->a[28142] = anon_sym_LT_GT;
	v->a[28143] = anon_sym_LT_LT;
	v->a[28144] = anon_sym_LT_LT_DASH;
	v->a[28145] = aux_sym_heredoc_redirect_token1;
	v->a[28146] = anon_sym_AMP;
	v->a[28147] = anon_sym_SEMI;
	v->a[28148] = 4;
	v->a[28149] = actions(664);
	v->a[28150] = 1;
	v->a[28151] = sym_comment;
	v->a[28152] = actions(942);
	v->a[28153] = 2;
	v->a[28154] = anon_sym_PLUS_PLUS2;
	v->a[28155] = anon_sym_DASH_DASH2;
	v->a[28156] = actions(680);
	v->a[28157] = 13;
	v->a[28158] = anon_sym_PIPE;
	v->a[28159] = anon_sym_EQ;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = anon_sym_LT;
	v->a[28161] = anon_sym_GT;
	v->a[28162] = anon_sym_GT_GT;
	v->a[28163] = anon_sym_LT_LT;
	v->a[28164] = anon_sym_CARET;
	v->a[28165] = anon_sym_AMP;
	v->a[28166] = anon_sym_PLUS;
	v->a[28167] = anon_sym_DASH;
	v->a[28168] = anon_sym_STAR;
	v->a[28169] = anon_sym_SLASH;
	v->a[28170] = anon_sym_PERCENT;
	v->a[28171] = actions(682);
	v->a[28172] = 18;
	v->a[28173] = anon_sym_RPAREN;
	v->a[28174] = anon_sym_AMP_AMP;
	v->a[28175] = anon_sym_PIPE_PIPE;
	v->a[28176] = anon_sym_PLUS_EQ;
	v->a[28177] = anon_sym_DASH_EQ;
	v->a[28178] = anon_sym_STAR_EQ;
	v->a[28179] = anon_sym_SLASH_EQ;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = anon_sym_PERCENT_EQ;
	v->a[28181] = anon_sym_LT_LT_EQ;
	v->a[28182] = anon_sym_GT_GT_EQ;
	v->a[28183] = anon_sym_AMP_EQ;
	v->a[28184] = anon_sym_CARET_EQ;
	v->a[28185] = anon_sym_PIPE_EQ;
	v->a[28186] = anon_sym_EQ_EQ;
	v->a[28187] = anon_sym_BANG_EQ;
	v->a[28188] = anon_sym_LT_EQ;
	v->a[28189] = anon_sym_GT_EQ;
	v->a[28190] = anon_sym_QMARK;
	v->a[28191] = 17;
	v->a[28192] = actions(664);
	v->a[28193] = 1;
	v->a[28194] = sym_comment;
	v->a[28195] = actions(702);
	v->a[28196] = 1;
	v->a[28197] = anon_sym_CARET;
	v->a[28198] = actions(704);
	v->a[28199] = 1;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
