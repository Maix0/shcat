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
	v->a[21100] = actions(692);
	v->a[21101] = 1;
	v->a[21102] = anon_sym_PIPE;
	v->a[21103] = actions(694);
	v->a[21104] = 1;
	v->a[21105] = anon_sym_RPAREN;
	v->a[21106] = actions(702);
	v->a[21107] = 1;
	v->a[21108] = sym_file_descriptor;
	v->a[21109] = actions(704);
	v->a[21110] = 1;
	v->a[21111] = sym_variable_name;
	v->a[21112] = state(660);
	v->a[21113] = 1;
	v->a[21114] = sym_terminator;
	v->a[21115] = actions(698);
	v->a[21116] = 2;
	v->a[21117] = anon_sym_AMP_AMP;
	v->a[21118] = anon_sym_PIPE_PIPE;
	v->a[21119] = actions(700);
	small_parse_table_1056(v);
}

void	small_parse_table_1056(t_small_parse_table_array *v)
{
	v->a[21120] = 2;
	v->a[21121] = anon_sym_LT_LT;
	v->a[21122] = anon_sym_LT_LT_DASH;
	v->a[21123] = state(1078);
	v->a[21124] = 2;
	v->a[21125] = sym_variable_assignment;
	v->a[21126] = aux_sym__variable_assignments_repeat1;
	v->a[21127] = state(1031);
	v->a[21128] = 3;
	v->a[21129] = sym_file_redirect;
	v->a[21130] = sym_heredoc_redirect;
	v->a[21131] = aux_sym_redirected_statement_repeat1;
	v->a[21132] = actions(696);
	v->a[21133] = 4;
	v->a[21134] = anon_sym_SEMI_SEMI;
	v->a[21135] = aux_sym_heredoc_redirect_token1;
	v->a[21136] = anon_sym_AMP;
	v->a[21137] = anon_sym_SEMI;
	v->a[21138] = actions(690);
	v->a[21139] = 16;
	small_parse_table_1057(v);
}

void	small_parse_table_1057(t_small_parse_table_array *v)
{
	v->a[21140] = anon_sym_LT;
	v->a[21141] = anon_sym_GT;
	v->a[21142] = anon_sym_GT_GT;
	v->a[21143] = anon_sym_LT_AMP;
	v->a[21144] = anon_sym_GT_AMP;
	v->a[21145] = anon_sym_GT_PIPE;
	v->a[21146] = anon_sym_LT_GT;
	v->a[21147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21148] = anon_sym_DOLLAR;
	v->a[21149] = anon_sym_DQUOTE;
	v->a[21150] = sym_raw_string;
	v->a[21151] = sym_number;
	v->a[21152] = anon_sym_DOLLAR_LBRACE;
	v->a[21153] = anon_sym_DOLLAR_LPAREN;
	v->a[21154] = anon_sym_BQUOTE;
	v->a[21155] = sym_word;
	v->a[21156] = 14;
	v->a[21157] = actions(3);
	v->a[21158] = 1;
	v->a[21159] = sym_comment;
	small_parse_table_1058(v);
}

void	small_parse_table_1058(t_small_parse_table_array *v)
{
	v->a[21160] = actions(463);
	v->a[21161] = 1;
	v->a[21162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21163] = actions(465);
	v->a[21164] = 1;
	v->a[21165] = anon_sym_DOLLAR;
	v->a[21166] = actions(467);
	v->a[21167] = 1;
	v->a[21168] = anon_sym_DQUOTE;
	v->a[21169] = actions(469);
	v->a[21170] = 1;
	v->a[21171] = anon_sym_DOLLAR_LBRACE;
	v->a[21172] = actions(471);
	v->a[21173] = 1;
	v->a[21174] = anon_sym_DOLLAR_LPAREN;
	v->a[21175] = actions(473);
	v->a[21176] = 1;
	v->a[21177] = anon_sym_BQUOTE;
	v->a[21178] = actions(475);
	v->a[21179] = 1;
	small_parse_table_1059(v);
}

void	small_parse_table_1059(t_small_parse_table_array *v)
{
	v->a[21180] = sym__bare_dollar;
	v->a[21181] = actions(507);
	v->a[21182] = 1;
	v->a[21183] = sym_file_descriptor;
	v->a[21184] = state(246);
	v->a[21185] = 1;
	v->a[21186] = aux_sym_command_repeat2;
	v->a[21187] = state(662);
	v->a[21188] = 1;
	v->a[21189] = sym_concatenation;
	v->a[21190] = actions(493);
	v->a[21191] = 3;
	v->a[21192] = sym_raw_string;
	v->a[21193] = sym_number;
	v->a[21194] = sym_word;
	v->a[21195] = state(490);
	v->a[21196] = 5;
	v->a[21197] = sym_arithmetic_expansion;
	v->a[21198] = sym_string;
	v->a[21199] = sym_simple_expansion;
	small_parse_table_1060(v);
}

/* EOF small_parse_table_211.c */
