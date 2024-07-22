/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_301.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1505(t_small_parse_table_array *v)
{
	v->a[30100] = anon_sym_DOLLAR_LPAREN;
	v->a[30101] = actions(645);
	v->a[30102] = 1;
	v->a[30103] = anon_sym_BQUOTE;
	v->a[30104] = actions(648);
	v->a[30105] = 2;
	v->a[30106] = sym_file_descriptor;
	v->a[30107] = sym_variable_name;
	v->a[30108] = state(368);
	v->a[30109] = 2;
	v->a[30110] = sym_concatenation;
	v->a[30111] = aux_sym_for_statement_repeat1;
	v->a[30112] = actions(1129);
	v->a[30113] = 3;
	v->a[30114] = sym_raw_string;
	v->a[30115] = sym_number;
	v->a[30116] = sym_word;
	v->a[30117] = state(685);
	v->a[30118] = 5;
	v->a[30119] = sym_arithmetic_expansion;
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = sym_string;
	v->a[30121] = sym_simple_expansion;
	v->a[30122] = sym_expansion;
	v->a[30123] = sym_command_substitution;
	v->a[30124] = actions(628);
	v->a[30125] = 13;
	v->a[30126] = anon_sym_PIPE;
	v->a[30127] = anon_sym_AMP_AMP;
	v->a[30128] = anon_sym_PIPE_PIPE;
	v->a[30129] = anon_sym_LT;
	v->a[30130] = anon_sym_GT;
	v->a[30131] = anon_sym_GT_GT;
	v->a[30132] = anon_sym_LT_AMP;
	v->a[30133] = anon_sym_GT_AMP;
	v->a[30134] = anon_sym_GT_PIPE;
	v->a[30135] = anon_sym_LT_GT;
	v->a[30136] = anon_sym_LT_LT;
	v->a[30137] = anon_sym_LT_LT_DASH;
	v->a[30138] = aux_sym_heredoc_redirect_token1;
	v->a[30139] = 8;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = actions(3);
	v->a[30141] = 1;
	v->a[30142] = sym_comment;
	v->a[30143] = actions(782);
	v->a[30144] = 1;
	v->a[30145] = anon_sym_PIPE;
	v->a[30146] = actions(792);
	v->a[30147] = 1;
	v->a[30148] = sym_file_descriptor;
	v->a[30149] = actions(1061);
	v->a[30150] = 1;
	v->a[30151] = sym_variable_name;
	v->a[30152] = state(1115);
	v->a[30153] = 2;
	v->a[30154] = sym_variable_assignment;
	v->a[30155] = aux_sym__variable_assignments_repeat1;
	v->a[30156] = state(1062);
	v->a[30157] = 3;
	v->a[30158] = sym_file_redirect;
	v->a[30159] = sym_heredoc_redirect;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = aux_sym_redirected_statement_repeat1;
	v->a[30161] = actions(1057);
	v->a[30162] = 7;
	v->a[30163] = anon_sym_SEMI_SEMI;
	v->a[30164] = anon_sym_AMP_AMP;
	v->a[30165] = anon_sym_PIPE_PIPE;
	v->a[30166] = anon_sym_LT_LT;
	v->a[30167] = anon_sym_LT_LT_DASH;
	v->a[30168] = aux_sym_heredoc_redirect_token1;
	v->a[30169] = anon_sym_SEMI;
	v->a[30170] = actions(780);
	v->a[30171] = 16;
	v->a[30172] = anon_sym_LT;
	v->a[30173] = anon_sym_GT;
	v->a[30174] = anon_sym_GT_GT;
	v->a[30175] = anon_sym_LT_AMP;
	v->a[30176] = anon_sym_GT_AMP;
	v->a[30177] = anon_sym_GT_PIPE;
	v->a[30178] = anon_sym_LT_GT;
	v->a[30179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = anon_sym_DOLLAR;
	v->a[30181] = anon_sym_DQUOTE;
	v->a[30182] = sym_raw_string;
	v->a[30183] = sym_number;
	v->a[30184] = anon_sym_DOLLAR_LBRACE;
	v->a[30185] = anon_sym_DOLLAR_LPAREN;
	v->a[30186] = anon_sym_BQUOTE;
	v->a[30187] = sym_word;
	v->a[30188] = 7;
	v->a[30189] = actions(3);
	v->a[30190] = 1;
	v->a[30191] = sym_comment;
	v->a[30192] = actions(1101);
	v->a[30193] = 1;
	v->a[30194] = aux_sym_concatenation_token1;
	v->a[30195] = actions(1136);
	v->a[30196] = 1;
	v->a[30197] = anon_sym_LPAREN;
	v->a[30198] = actions(1139);
	v->a[30199] = 1;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
