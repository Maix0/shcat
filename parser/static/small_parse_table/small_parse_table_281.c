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
	v->a[28100] = 2;
	v->a[28101] = sym_variable_assignment;
	v->a[28102] = aux_sym_variable_assignments_repeat1;
	v->a[28103] = state(1050);
	v->a[28104] = 3;
	v->a[28105] = sym_file_redirect;
	v->a[28106] = sym_heredoc_redirect;
	v->a[28107] = aux_sym_redirected_statement_repeat1;
	v->a[28108] = actions(1089);
	v->a[28109] = 4;
	v->a[28110] = anon_sym_SEMI_SEMI;
	v->a[28111] = aux_sym_heredoc_redirect_token1;
	v->a[28112] = anon_sym_AMP;
	v->a[28113] = anon_sym_SEMI;
	v->a[28114] = actions(1000);
	v->a[28115] = 20;
	v->a[28116] = anon_sym_LT;
	v->a[28117] = anon_sym_GT;
	v->a[28118] = anon_sym_GT_GT;
	v->a[28119] = anon_sym_AMP_GT;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_AMP_GT_GT;
	v->a[28121] = anon_sym_LT_AMP;
	v->a[28122] = anon_sym_GT_AMP;
	v->a[28123] = anon_sym_GT_PIPE;
	v->a[28124] = anon_sym_LT_AMP_DASH;
	v->a[28125] = anon_sym_GT_AMP_DASH;
	v->a[28126] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28127] = anon_sym_DOLLAR;
	v->a[28128] = anon_sym_DQUOTE;
	v->a[28129] = sym_raw_string;
	v->a[28130] = aux_sym_number_token1;
	v->a[28131] = aux_sym_number_token2;
	v->a[28132] = anon_sym_DOLLAR_LBRACE;
	v->a[28133] = anon_sym_DOLLAR_LPAREN;
	v->a[28134] = anon_sym_BQUOTE;
	v->a[28135] = sym_word;
	v->a[28136] = 5;
	v->a[28137] = actions(3);
	v->a[28138] = 1;
	v->a[28139] = sym_comment;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = actions(555);
	v->a[28141] = 2;
	v->a[28142] = sym_file_descriptor;
	v->a[28143] = sym_variable_name;
	v->a[28144] = state(317);
	v->a[28145] = 2;
	v->a[28146] = sym_concatenation;
	v->a[28147] = aux_sym_for_statement_repeat1;
	v->a[28148] = state(771);
	v->a[28149] = 6;
	v->a[28150] = sym_arithmetic_expansion;
	v->a[28151] = sym_string;
	v->a[28152] = sym_number;
	v->a[28153] = sym_simple_expansion;
	v->a[28154] = sym_expansion;
	v->a[28155] = sym_command_substitution;
	v->a[28156] = actions(553);
	v->a[28157] = 26;
	v->a[28158] = anon_sym_PIPE;
	v->a[28159] = anon_sym_AMP_AMP;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = anon_sym_PIPE_PIPE;
	v->a[28161] = anon_sym_LT;
	v->a[28162] = anon_sym_GT;
	v->a[28163] = anon_sym_GT_GT;
	v->a[28164] = anon_sym_AMP_GT;
	v->a[28165] = anon_sym_AMP_GT_GT;
	v->a[28166] = anon_sym_LT_AMP;
	v->a[28167] = anon_sym_GT_AMP;
	v->a[28168] = anon_sym_GT_PIPE;
	v->a[28169] = anon_sym_LT_AMP_DASH;
	v->a[28170] = anon_sym_GT_AMP_DASH;
	v->a[28171] = anon_sym_LT_LT;
	v->a[28172] = anon_sym_LT_LT_DASH;
	v->a[28173] = aux_sym_heredoc_redirect_token1;
	v->a[28174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28175] = anon_sym_DOLLAR;
	v->a[28176] = anon_sym_DQUOTE;
	v->a[28177] = sym_raw_string;
	v->a[28178] = aux_sym_number_token1;
	v->a[28179] = aux_sym_number_token2;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = anon_sym_DOLLAR_LBRACE;
	v->a[28181] = anon_sym_DOLLAR_LPAREN;
	v->a[28182] = anon_sym_BQUOTE;
	v->a[28183] = sym_word;
	v->a[28184] = 10;
	v->a[28185] = actions(3);
	v->a[28186] = 1;
	v->a[28187] = sym_comment;
	v->a[28188] = actions(1002);
	v->a[28189] = 1;
	v->a[28190] = anon_sym_PIPE;
	v->a[28191] = actions(1006);
	v->a[28192] = 1;
	v->a[28193] = sym_file_descriptor;
	v->a[28194] = actions(1095);
	v->a[28195] = 1;
	v->a[28196] = sym_variable_name;
	v->a[28197] = actions(1062);
	v->a[28198] = 2;
	v->a[28199] = anon_sym_LT_LT;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
