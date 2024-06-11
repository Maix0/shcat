/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_901.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4505(t_small_parse_table_array *v)
{
	v->a[90100] = actions(1161);
	v->a[90101] = 13;
	v->a[90102] = anon_sym_AMP_AMP;
	v->a[90103] = anon_sym_PIPE_PIPE;
	v->a[90104] = anon_sym_LT;
	v->a[90105] = anon_sym_GT;
	v->a[90106] = anon_sym_GT_GT;
	v->a[90107] = anon_sym_AMP_GT;
	v->a[90108] = anon_sym_AMP_GT_GT;
	v->a[90109] = anon_sym_LT_AMP;
	v->a[90110] = anon_sym_GT_AMP;
	v->a[90111] = anon_sym_GT_PIPE;
	v->a[90112] = anon_sym_LT_AMP_DASH;
	v->a[90113] = anon_sym_GT_AMP_DASH;
	v->a[90114] = aux_sym_concatenation_token1;
	v->a[90115] = 3;
	v->a[90116] = actions(3);
	v->a[90117] = 1;
	v->a[90118] = sym_comment;
	v->a[90119] = actions(1153);
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = 3;
	v->a[90121] = sym_file_descriptor;
	v->a[90122] = sym__concat;
	v->a[90123] = aux_sym_heredoc_redirect_token1;
	v->a[90124] = actions(1151);
	v->a[90125] = 13;
	v->a[90126] = anon_sym_AMP_AMP;
	v->a[90127] = anon_sym_PIPE_PIPE;
	v->a[90128] = anon_sym_LT;
	v->a[90129] = anon_sym_GT;
	v->a[90130] = anon_sym_GT_GT;
	v->a[90131] = anon_sym_AMP_GT;
	v->a[90132] = anon_sym_AMP_GT_GT;
	v->a[90133] = anon_sym_LT_AMP;
	v->a[90134] = anon_sym_GT_AMP;
	v->a[90135] = anon_sym_GT_PIPE;
	v->a[90136] = anon_sym_LT_AMP_DASH;
	v->a[90137] = anon_sym_GT_AMP_DASH;
	v->a[90138] = aux_sym_concatenation_token1;
	v->a[90139] = 3;
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = actions(1094);
	v->a[90141] = 1;
	v->a[90142] = sym_comment;
	v->a[90143] = actions(2606);
	v->a[90144] = 7;
	v->a[90145] = anon_sym_PIPE;
	v->a[90146] = anon_sym_LT;
	v->a[90147] = anon_sym_GT;
	v->a[90148] = anon_sym_AMP_GT;
	v->a[90149] = anon_sym_LT_AMP;
	v->a[90150] = anon_sym_GT_AMP;
	v->a[90151] = anon_sym_LT_LT;
	v->a[90152] = actions(2604);
	v->a[90153] = 9;
	v->a[90154] = sym_file_descriptor;
	v->a[90155] = anon_sym_AMP_AMP;
	v->a[90156] = anon_sym_PIPE_PIPE;
	v->a[90157] = anon_sym_GT_GT;
	v->a[90158] = anon_sym_AMP_GT_GT;
	v->a[90159] = anon_sym_GT_PIPE;
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = anon_sym_LT_AMP_DASH;
	v->a[90161] = anon_sym_GT_AMP_DASH;
	v->a[90162] = anon_sym_LT_LT_DASH;
	v->a[90163] = 10;
	v->a[90164] = actions(3);
	v->a[90165] = 1;
	v->a[90166] = sym_comment;
	v->a[90167] = actions(884);
	v->a[90168] = 1;
	v->a[90169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90170] = actions(886);
	v->a[90171] = 1;
	v->a[90172] = anon_sym_DOLLAR;
	v->a[90173] = actions(888);
	v->a[90174] = 1;
	v->a[90175] = anon_sym_DQUOTE;
	v->a[90176] = actions(890);
	v->a[90177] = 1;
	v->a[90178] = anon_sym_DOLLAR_LBRACE;
	v->a[90179] = actions(892);
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = 1;
	v->a[90181] = anon_sym_DOLLAR_LPAREN;
	v->a[90182] = actions(894);
	v->a[90183] = 1;
	v->a[90184] = anon_sym_BQUOTE;
	v->a[90185] = state(1539);
	v->a[90186] = 2;
	v->a[90187] = sym_concatenation;
	v->a[90188] = aux_sym_for_statement_repeat1;
	v->a[90189] = actions(2924);
	v->a[90190] = 3;
	v->a[90191] = sym_raw_string;
	v->a[90192] = sym_number;
	v->a[90193] = sym_word;
	v->a[90194] = state(1745);
	v->a[90195] = 5;
	v->a[90196] = sym_arithmetic_expansion;
	v->a[90197] = sym_string;
	v->a[90198] = sym_simple_expansion;
	v->a[90199] = sym_expansion;
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
