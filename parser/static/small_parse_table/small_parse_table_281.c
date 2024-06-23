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
	v->a[28100] = anon_sym_LPAREN;
	v->a[28101] = anon_sym_PIPE;
	v->a[28102] = anon_sym_RPAREN;
	v->a[28103] = anon_sym_SEMI_SEMI;
	v->a[28104] = anon_sym_AMP_AMP;
	v->a[28105] = anon_sym_PIPE_PIPE;
	v->a[28106] = anon_sym_LT;
	v->a[28107] = anon_sym_GT;
	v->a[28108] = anon_sym_GT_GT;
	v->a[28109] = anon_sym_AMP_GT;
	v->a[28110] = anon_sym_AMP_GT_GT;
	v->a[28111] = anon_sym_LT_AMP;
	v->a[28112] = anon_sym_GT_AMP;
	v->a[28113] = anon_sym_GT_PIPE;
	v->a[28114] = anon_sym_LT_AMP_DASH;
	v->a[28115] = anon_sym_GT_AMP_DASH;
	v->a[28116] = anon_sym_LT_LT;
	v->a[28117] = anon_sym_LT_LT_DASH;
	v->a[28118] = aux_sym_heredoc_redirect_token1;
	v->a[28119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_AMP;
	v->a[28121] = anon_sym_DOLLAR;
	v->a[28122] = anon_sym_DQUOTE;
	v->a[28123] = sym_raw_string;
	v->a[28124] = sym_number;
	v->a[28125] = anon_sym_DOLLAR_LBRACE;
	v->a[28126] = anon_sym_DOLLAR_LPAREN;
	v->a[28127] = anon_sym_BQUOTE;
	v->a[28128] = sym_word;
	v->a[28129] = anon_sym_SEMI;
	v->a[28130] = 7;
	v->a[28131] = actions(3);
	v->a[28132] = 1;
	v->a[28133] = sym_comment;
	v->a[28134] = actions(900);
	v->a[28135] = 1;
	v->a[28136] = sym_file_descriptor;
	v->a[28137] = actions(967);
	v->a[28138] = 1;
	v->a[28139] = sym_variable_name;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = state(1415);
	v->a[28141] = 2;
	v->a[28142] = sym_variable_assignment;
	v->a[28143] = aux_sym__variable_assignments_repeat1;
	v->a[28144] = state(1322);
	v->a[28145] = 3;
	v->a[28146] = sym_file_redirect;
	v->a[28147] = sym_heredoc_redirect;
	v->a[28148] = aux_sym_redirected_statement_repeat1;
	v->a[28149] = actions(805);
	v->a[28150] = 9;
	v->a[28151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28152] = anon_sym_DOLLAR;
	v->a[28153] = anon_sym_DQUOTE;
	v->a[28154] = sym_raw_string;
	v->a[28155] = sym_number;
	v->a[28156] = anon_sym_DOLLAR_LBRACE;
	v->a[28157] = anon_sym_DOLLAR_LPAREN;
	v->a[28158] = anon_sym_BQUOTE;
	v->a[28159] = sym_word;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = actions(807);
	v->a[28161] = 19;
	v->a[28162] = anon_sym_PIPE;
	v->a[28163] = anon_sym_SEMI_SEMI;
	v->a[28164] = anon_sym_AMP_AMP;
	v->a[28165] = anon_sym_PIPE_PIPE;
	v->a[28166] = anon_sym_LT;
	v->a[28167] = anon_sym_GT;
	v->a[28168] = anon_sym_GT_GT;
	v->a[28169] = anon_sym_AMP_GT;
	v->a[28170] = anon_sym_AMP_GT_GT;
	v->a[28171] = anon_sym_LT_AMP;
	v->a[28172] = anon_sym_GT_AMP;
	v->a[28173] = anon_sym_GT_PIPE;
	v->a[28174] = anon_sym_LT_AMP_DASH;
	v->a[28175] = anon_sym_GT_AMP_DASH;
	v->a[28176] = anon_sym_LT_LT;
	v->a[28177] = anon_sym_LT_LT_DASH;
	v->a[28178] = aux_sym_heredoc_redirect_token1;
	v->a[28179] = anon_sym_AMP;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = anon_sym_SEMI;
	v->a[28181] = 8;
	v->a[28182] = actions(3);
	v->a[28183] = 1;
	v->a[28184] = sym_comment;
	v->a[28185] = actions(807);
	v->a[28186] = 1;
	v->a[28187] = anon_sym_PIPE;
	v->a[28188] = actions(811);
	v->a[28189] = 1;
	v->a[28190] = sym_file_descriptor;
	v->a[28191] = actions(967);
	v->a[28192] = 1;
	v->a[28193] = sym_variable_name;
	v->a[28194] = state(1415);
	v->a[28195] = 2;
	v->a[28196] = sym_variable_assignment;
	v->a[28197] = aux_sym__variable_assignments_repeat1;
	v->a[28198] = state(1322);
	v->a[28199] = 3;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
