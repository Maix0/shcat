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
	v->a[28100] = anon_sym_LT;
	v->a[28101] = anon_sym_GT;
	v->a[28102] = anon_sym_LT_LT;
	v->a[28103] = anon_sym_GT_GT;
	v->a[28104] = anon_sym_esac;
	v->a[28105] = anon_sym_SEMI_SEMI;
	v->a[28106] = anon_sym_SEMI_AMP;
	v->a[28107] = anon_sym_SEMI_SEMI_AMP;
	v->a[28108] = anon_sym_PIPE_AMP;
	v->a[28109] = anon_sym_EQ_TILDE;
	v->a[28110] = anon_sym_AMP_GT;
	v->a[28111] = anon_sym_AMP_GT_GT;
	v->a[28112] = anon_sym_LT_AMP;
	v->a[28113] = anon_sym_GT_AMP;
	v->a[28114] = anon_sym_GT_PIPE;
	v->a[28115] = anon_sym_LT_AMP_DASH;
	v->a[28116] = anon_sym_GT_AMP_DASH;
	v->a[28117] = anon_sym_LT_LT_DASH;
	v->a[28118] = anon_sym_LT_LT_LT;
	v->a[28119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_DOLLAR_LBRACK;
	v->a[28121] = anon_sym_DOLLAR;
	v->a[28122] = sym__special_character;
	v->a[28123] = anon_sym_DQUOTE;
	v->a[28124] = sym_raw_string;
	v->a[28125] = sym_ansi_c_string;
	v->a[28126] = aux_sym_number_token1;
	v->a[28127] = aux_sym_number_token2;
	v->a[28128] = anon_sym_DOLLAR_LBRACE;
	v->a[28129] = anon_sym_DOLLAR_LPAREN;
	v->a[28130] = anon_sym_BQUOTE;
	v->a[28131] = anon_sym_DOLLAR_BQUOTE;
	v->a[28132] = anon_sym_LT_LPAREN;
	v->a[28133] = anon_sym_GT_LPAREN;
	v->a[28134] = sym_word;
	v->a[28135] = 13;
	v->a[28136] = actions(3);
	v->a[28137] = 1;
	v->a[28138] = sym_comment;
	v->a[28139] = actions(4384);
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = 1;
	v->a[28141] = aux_sym_heredoc_redirect_token1;
	v->a[28142] = actions(4386);
	v->a[28143] = 1;
	v->a[28144] = sym_variable_name;
	v->a[28145] = state(6772);
	v->a[28146] = 1;
	v->a[28147] = sym_subscript;
	v->a[28148] = actions(4253);
	v->a[28149] = 2;
	v->a[28150] = anon_sym_PIPE;
	v->a[28151] = anon_sym_PIPE_AMP;
	v->a[28152] = actions(4378);
	v->a[28153] = 2;
	v->a[28154] = anon_sym_SEMI;
	v->a[28155] = anon_sym_AMP;
	v->a[28156] = actions(4380);
	v->a[28157] = 2;
	v->a[28158] = anon_sym_PIPE_PIPE;
	v->a[28159] = anon_sym_AMP_AMP;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = actions(4382);
	v->a[28161] = 2;
	v->a[28162] = anon_sym_LT_LT;
	v->a[28163] = anon_sym_LT_LT_DASH;
	v->a[28164] = state(4358);
	v->a[28165] = 2;
	v->a[28166] = sym_variable_assignment;
	v->a[28167] = aux_sym_variable_assignments_repeat1;
	v->a[28168] = actions(2719);
	v->a[28169] = 3;
	v->a[28170] = anon_sym_SEMI_SEMI;
	v->a[28171] = anon_sym_SEMI_AMP;
	v->a[28172] = anon_sym_SEMI_SEMI_AMP;
	v->a[28173] = actions(4261);
	v->a[28174] = 3;
	v->a[28175] = sym_file_descriptor;
	v->a[28176] = sym_test_operator;
	v->a[28177] = sym__brace_start;
	v->a[28178] = state(4455);
	v->a[28179] = 3;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = sym_file_redirect;
	v->a[28181] = sym_heredoc_redirect;
	v->a[28182] = aux_sym_redirected_statement_repeat1;
	v->a[28183] = actions(4247);
	v->a[28184] = 28;
	v->a[28185] = anon_sym_LPAREN_LPAREN;
	v->a[28186] = anon_sym_LT;
	v->a[28187] = anon_sym_GT;
	v->a[28188] = anon_sym_GT_GT;
	v->a[28189] = anon_sym_AMP_GT;
	v->a[28190] = anon_sym_AMP_GT_GT;
	v->a[28191] = anon_sym_LT_AMP;
	v->a[28192] = anon_sym_GT_AMP;
	v->a[28193] = anon_sym_GT_PIPE;
	v->a[28194] = anon_sym_LT_AMP_DASH;
	v->a[28195] = anon_sym_GT_AMP_DASH;
	v->a[28196] = anon_sym_LT_LT_LT;
	v->a[28197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28198] = anon_sym_DOLLAR_LBRACK;
	v->a[28199] = anon_sym_DOLLAR;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
