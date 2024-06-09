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
	v->a[30100] = 16;
	v->a[30101] = actions(3);
	v->a[30102] = 1;
	v->a[30103] = sym_comment;
	v->a[30104] = actions(485);
	v->a[30105] = 1;
	v->a[30106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30107] = actions(487);
	v->a[30108] = 1;
	v->a[30109] = anon_sym_DOLLAR;
	v->a[30110] = actions(489);
	v->a[30111] = 1;
	v->a[30112] = anon_sym_DQUOTE;
	v->a[30113] = actions(491);
	v->a[30114] = 1;
	v->a[30115] = aux_sym_number_token1;
	v->a[30116] = actions(493);
	v->a[30117] = 1;
	v->a[30118] = aux_sym_number_token2;
	v->a[30119] = actions(495);
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = 1;
	v->a[30121] = anon_sym_DOLLAR_LBRACE;
	v->a[30122] = actions(497);
	v->a[30123] = 1;
	v->a[30124] = anon_sym_DOLLAR_LPAREN;
	v->a[30125] = actions(499);
	v->a[30126] = 1;
	v->a[30127] = anon_sym_BQUOTE;
	v->a[30128] = actions(501);
	v->a[30129] = 1;
	v->a[30130] = sym__bare_dollar;
	v->a[30131] = actions(563);
	v->a[30132] = 1;
	v->a[30133] = sym_file_descriptor;
	v->a[30134] = state(306);
	v->a[30135] = 1;
	v->a[30136] = aux_sym_command_repeat2;
	v->a[30137] = state(753);
	v->a[30138] = 1;
	v->a[30139] = sym_concatenation;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = actions(966);
	v->a[30141] = 2;
	v->a[30142] = sym_raw_string;
	v->a[30143] = sym_word;
	v->a[30144] = state(759);
	v->a[30145] = 6;
	v->a[30146] = sym_arithmetic_expansion;
	v->a[30147] = sym_string;
	v->a[30148] = sym_number;
	v->a[30149] = sym_simple_expansion;
	v->a[30150] = sym_expansion;
	v->a[30151] = sym_command_substitution;
	v->a[30152] = actions(561);
	v->a[30153] = 16;
	v->a[30154] = anon_sym_PIPE;
	v->a[30155] = anon_sym_AMP_AMP;
	v->a[30156] = anon_sym_PIPE_PIPE;
	v->a[30157] = anon_sym_LT;
	v->a[30158] = anon_sym_GT;
	v->a[30159] = anon_sym_GT_GT;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = anon_sym_AMP_GT;
	v->a[30161] = anon_sym_AMP_GT_GT;
	v->a[30162] = anon_sym_LT_AMP;
	v->a[30163] = anon_sym_GT_AMP;
	v->a[30164] = anon_sym_GT_PIPE;
	v->a[30165] = anon_sym_LT_AMP_DASH;
	v->a[30166] = anon_sym_GT_AMP_DASH;
	v->a[30167] = anon_sym_LT_LT;
	v->a[30168] = anon_sym_LT_LT_DASH;
	v->a[30169] = aux_sym_heredoc_redirect_token1;
	v->a[30170] = 16;
	v->a[30171] = actions(3);
	v->a[30172] = 1;
	v->a[30173] = sym_comment;
	v->a[30174] = actions(485);
	v->a[30175] = 1;
	v->a[30176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30177] = actions(487);
	v->a[30178] = 1;
	v->a[30179] = anon_sym_DOLLAR;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = actions(489);
	v->a[30181] = 1;
	v->a[30182] = anon_sym_DQUOTE;
	v->a[30183] = actions(491);
	v->a[30184] = 1;
	v->a[30185] = aux_sym_number_token1;
	v->a[30186] = actions(493);
	v->a[30187] = 1;
	v->a[30188] = aux_sym_number_token2;
	v->a[30189] = actions(495);
	v->a[30190] = 1;
	v->a[30191] = anon_sym_DOLLAR_LBRACE;
	v->a[30192] = actions(497);
	v->a[30193] = 1;
	v->a[30194] = anon_sym_DOLLAR_LPAREN;
	v->a[30195] = actions(499);
	v->a[30196] = 1;
	v->a[30197] = anon_sym_BQUOTE;
	v->a[30198] = actions(501);
	v->a[30199] = 1;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
