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
	v->a[28100] = anon_sym_LT_LT;
	v->a[28101] = anon_sym_LT_LT_DASH;
	v->a[28102] = aux_sym_heredoc_redirect_token1;
	v->a[28103] = anon_sym_SEMI;
	v->a[28104] = 19;
	v->a[28105] = actions(3);
	v->a[28106] = 1;
	v->a[28107] = sym_comment;
	v->a[28108] = actions(1004);
	v->a[28109] = 1;
	v->a[28110] = anon_sym_PIPE;
	v->a[28111] = actions(1012);
	v->a[28112] = 1;
	v->a[28113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28114] = actions(1014);
	v->a[28115] = 1;
	v->a[28116] = anon_sym_DOLLAR;
	v->a[28117] = actions(1016);
	v->a[28118] = 1;
	v->a[28119] = anon_sym_DQUOTE;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = actions(1018);
	v->a[28121] = 1;
	v->a[28122] = anon_sym_DOLLAR_LBRACE;
	v->a[28123] = actions(1020);
	v->a[28124] = 1;
	v->a[28125] = anon_sym_DOLLAR_LPAREN;
	v->a[28126] = actions(1022);
	v->a[28127] = 1;
	v->a[28128] = anon_sym_BQUOTE;
	v->a[28129] = actions(1024);
	v->a[28130] = 1;
	v->a[28131] = sym_file_descriptor;
	v->a[28132] = actions(1067);
	v->a[28133] = 1;
	v->a[28134] = aux_sym_heredoc_redirect_token1;
	v->a[28135] = state(1338);
	v->a[28136] = 1;
	v->a[28137] = aux_sym__heredoc_command;
	v->a[28138] = state(1722);
	v->a[28139] = 1;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = sym_concatenation;
	v->a[28141] = state(1934);
	v->a[28142] = 1;
	v->a[28143] = sym__heredoc_pipeline;
	v->a[28144] = state(1935);
	v->a[28145] = 1;
	v->a[28146] = sym__heredoc_expression;
	v->a[28147] = actions(1006);
	v->a[28148] = 2;
	v->a[28149] = anon_sym_AMP_AMP;
	v->a[28150] = anon_sym_PIPE_PIPE;
	v->a[28151] = state(1464);
	v->a[28152] = 2;
	v->a[28153] = sym_file_redirect;
	v->a[28154] = aux_sym_redirected_statement_repeat2;
	v->a[28155] = actions(1002);
	v->a[28156] = 3;
	v->a[28157] = sym_raw_string;
	v->a[28158] = sym_number;
	v->a[28159] = sym_word;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = state(1516);
	v->a[28161] = 5;
	v->a[28162] = sym_arithmetic_expansion;
	v->a[28163] = sym_string;
	v->a[28164] = sym_simple_expansion;
	v->a[28165] = sym_expansion;
	v->a[28166] = sym_command_substitution;
	v->a[28167] = actions(1008);
	v->a[28168] = 7;
	v->a[28169] = anon_sym_LT;
	v->a[28170] = anon_sym_GT;
	v->a[28171] = anon_sym_GT_GT;
	v->a[28172] = anon_sym_LT_AMP;
	v->a[28173] = anon_sym_GT_AMP;
	v->a[28174] = anon_sym_GT_PIPE;
	v->a[28175] = anon_sym_LT_GT;
	v->a[28176] = 6;
	v->a[28177] = actions(3);
	v->a[28178] = 1;
	v->a[28179] = sym_comment;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = actions(367);
	v->a[28181] = 1;
	v->a[28182] = sym_file_descriptor;
	v->a[28183] = actions(1073);
	v->a[28184] = 1;
	v->a[28185] = sym_variable_name;
	v->a[28186] = actions(1071);
	v->a[28187] = 2;
	v->a[28188] = aux_sym__simple_variable_name_token1;
	v->a[28189] = aux_sym__multiline_variable_name_token1;
	v->a[28190] = actions(1069);
	v->a[28191] = 8;
	v->a[28192] = anon_sym_BANG;
	v->a[28193] = anon_sym_DASH;
	v->a[28194] = anon_sym_STAR;
	v->a[28195] = anon_sym_QMARK;
	v->a[28196] = anon_sym_DOLLAR;
	v->a[28197] = anon_sym_POUND;
	v->a[28198] = anon_sym_AT;
	v->a[28199] = anon_sym_0;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
