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
	v->a[90100] = aux_sym_number_token1;
	v->a[90101] = aux_sym_number_token2;
	v->a[90102] = anon_sym_DOLLAR_LBRACE;
	v->a[90103] = anon_sym_DOLLAR_LPAREN;
	v->a[90104] = anon_sym_BQUOTE;
	v->a[90105] = anon_sym_DOLLAR_BQUOTE;
	v->a[90106] = anon_sym_LT_LPAREN;
	v->a[90107] = anon_sym_GT_LPAREN;
	v->a[90108] = sym_word;
	v->a[90109] = 3;
	v->a[90110] = actions(3);
	v->a[90111] = 1;
	v->a[90112] = sym_comment;
	v->a[90113] = actions(1358);
	v->a[90114] = 6;
	v->a[90115] = sym_file_descriptor;
	v->a[90116] = sym__concat;
	v->a[90117] = sym_test_operator;
	v->a[90118] = sym__brace_start;
	v->a[90119] = ts_builtin_sym_end;
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = aux_sym_heredoc_redirect_token1;
	v->a[90121] = actions(1356);
	v->a[90122] = 38;
	v->a[90123] = anon_sym_LPAREN_LPAREN;
	v->a[90124] = anon_sym_SEMI;
	v->a[90125] = anon_sym_PIPE_PIPE;
	v->a[90126] = anon_sym_AMP_AMP;
	v->a[90127] = anon_sym_PIPE;
	v->a[90128] = anon_sym_AMP;
	v->a[90129] = anon_sym_LT;
	v->a[90130] = anon_sym_GT;
	v->a[90131] = anon_sym_LT_LT;
	v->a[90132] = anon_sym_GT_GT;
	v->a[90133] = anon_sym_SEMI_SEMI;
	v->a[90134] = anon_sym_PIPE_AMP;
	v->a[90135] = anon_sym_AMP_GT;
	v->a[90136] = anon_sym_AMP_GT_GT;
	v->a[90137] = anon_sym_LT_AMP;
	v->a[90138] = anon_sym_GT_AMP;
	v->a[90139] = anon_sym_GT_PIPE;
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = anon_sym_LT_AMP_DASH;
	v->a[90141] = anon_sym_GT_AMP_DASH;
	v->a[90142] = anon_sym_LT_LT_DASH;
	v->a[90143] = anon_sym_LT_LT_LT;
	v->a[90144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90145] = anon_sym_DOLLAR_LBRACK;
	v->a[90146] = aux_sym_concatenation_token1;
	v->a[90147] = anon_sym_DOLLAR;
	v->a[90148] = sym__special_character;
	v->a[90149] = anon_sym_DQUOTE;
	v->a[90150] = sym_raw_string;
	v->a[90151] = sym_ansi_c_string;
	v->a[90152] = aux_sym_number_token1;
	v->a[90153] = aux_sym_number_token2;
	v->a[90154] = anon_sym_DOLLAR_LBRACE;
	v->a[90155] = anon_sym_DOLLAR_LPAREN;
	v->a[90156] = anon_sym_BQUOTE;
	v->a[90157] = anon_sym_DOLLAR_BQUOTE;
	v->a[90158] = anon_sym_LT_LPAREN;
	v->a[90159] = anon_sym_GT_LPAREN;
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = sym_word;
	v->a[90161] = 27;
	v->a[90162] = actions(71);
	v->a[90163] = 1;
	v->a[90164] = sym_comment;
	v->a[90165] = actions(1131);
	v->a[90166] = 1;
	v->a[90167] = anon_sym_LPAREN;
	v->a[90168] = actions(1141);
	v->a[90169] = 1;
	v->a[90170] = anon_sym_DOLLAR_LBRACK;
	v->a[90171] = actions(1145);
	v->a[90172] = 1;
	v->a[90173] = anon_sym_DOLLAR;
	v->a[90174] = actions(1149);
	v->a[90175] = 1;
	v->a[90176] = anon_sym_DQUOTE;
	v->a[90177] = actions(1153);
	v->a[90178] = 1;
	v->a[90179] = aux_sym_number_token1;
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = actions(1155);
	v->a[90181] = 1;
	v->a[90182] = aux_sym_number_token2;
	v->a[90183] = actions(1157);
	v->a[90184] = 1;
	v->a[90185] = anon_sym_DOLLAR_LBRACE;
	v->a[90186] = actions(1159);
	v->a[90187] = 1;
	v->a[90188] = anon_sym_DOLLAR_LPAREN;
	v->a[90189] = actions(1163);
	v->a[90190] = 1;
	v->a[90191] = anon_sym_DOLLAR_BQUOTE;
	v->a[90192] = actions(1169);
	v->a[90193] = 1;
	v->a[90194] = sym__brace_start;
	v->a[90195] = actions(1187);
	v->a[90196] = 1;
	v->a[90197] = sym_word;
	v->a[90198] = actions(1189);
	v->a[90199] = 1;
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
