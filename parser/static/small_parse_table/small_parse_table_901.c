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
	v->a[90100] = sym_comment;
	v->a[90101] = actions(3931);
	v->a[90102] = 1;
	v->a[90103] = anon_sym_RPAREN;
	v->a[90104] = actions(3934);
	v->a[90105] = 1;
	v->a[90106] = anon_sym_RBRACE;
	v->a[90107] = actions(3936);
	v->a[90108] = 1;
	v->a[90109] = anon_sym_DQUOTE;
	v->a[90110] = actions(3939);
	v->a[90111] = 1;
	v->a[90112] = sym_raw_string;
	v->a[90113] = actions(3942);
	v->a[90114] = 1;
	v->a[90115] = aux_sym_expansion_regex_token1;
	v->a[90116] = actions(3945);
	v->a[90117] = 1;
	v->a[90118] = sym_regex;
	v->a[90119] = state(1966);
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = 2;
	v->a[90121] = sym_string;
	v->a[90122] = aux_sym_expansion_regex_repeat1;
	v->a[90123] = 6;
	v->a[90124] = actions(3);
	v->a[90125] = 1;
	v->a[90126] = sym_comment;
	v->a[90127] = actions(1085);
	v->a[90128] = 1;
	v->a[90129] = aux_sym_heredoc_redirect_token1;
	v->a[90130] = actions(3861);
	v->a[90131] = 1;
	v->a[90132] = aux_sym_concatenation_token1;
	v->a[90133] = actions(3948);
	v->a[90134] = 1;
	v->a[90135] = sym__concat;
	v->a[90136] = state(1973);
	v->a[90137] = 1;
	v->a[90138] = aux_sym_concatenation_repeat1;
	v->a[90139] = actions(1081);
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = 4;
	v->a[90141] = anon_sym_in;
	v->a[90142] = anon_sym_SEMI_SEMI;
	v->a[90143] = anon_sym_AMP;
	v->a[90144] = anon_sym_SEMI;
	v->a[90145] = 4;
	v->a[90146] = actions(870);
	v->a[90147] = 1;
	v->a[90148] = sym_comment;
	v->a[90149] = actions(3952);
	v->a[90150] = 2;
	v->a[90151] = anon_sym_GT_GT;
	v->a[90152] = anon_sym_GT_PIPE;
	v->a[90153] = actions(3954);
	v->a[90154] = 2;
	v->a[90155] = anon_sym_LT_AMP_DASH;
	v->a[90156] = anon_sym_GT_AMP_DASH;
	v->a[90157] = actions(3950);
	v->a[90158] = 4;
	v->a[90159] = anon_sym_LT;
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = anon_sym_GT;
	v->a[90161] = anon_sym_LT_AMP;
	v->a[90162] = anon_sym_GT_AMP;
	v->a[90163] = 4;
	v->a[90164] = actions(870);
	v->a[90165] = 1;
	v->a[90166] = sym_comment;
	v->a[90167] = actions(3799);
	v->a[90168] = 2;
	v->a[90169] = anon_sym_GT_GT;
	v->a[90170] = anon_sym_GT_PIPE;
	v->a[90171] = actions(3801);
	v->a[90172] = 2;
	v->a[90173] = anon_sym_LT_AMP_DASH;
	v->a[90174] = anon_sym_GT_AMP_DASH;
	v->a[90175] = actions(3797);
	v->a[90176] = 4;
	v->a[90177] = anon_sym_LT;
	v->a[90178] = anon_sym_GT;
	v->a[90179] = anon_sym_LT_AMP;
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = anon_sym_GT_AMP;
	v->a[90181] = 4;
	v->a[90182] = actions(870);
	v->a[90183] = 1;
	v->a[90184] = sym_comment;
	v->a[90185] = actions(3958);
	v->a[90186] = 2;
	v->a[90187] = anon_sym_GT_GT;
	v->a[90188] = anon_sym_GT_PIPE;
	v->a[90189] = actions(3960);
	v->a[90190] = 2;
	v->a[90191] = anon_sym_LT_AMP_DASH;
	v->a[90192] = anon_sym_GT_AMP_DASH;
	v->a[90193] = actions(3956);
	v->a[90194] = 4;
	v->a[90195] = anon_sym_LT;
	v->a[90196] = anon_sym_GT;
	v->a[90197] = anon_sym_LT_AMP;
	v->a[90198] = anon_sym_GT_AMP;
	v->a[90199] = 3;
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
