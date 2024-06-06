/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_351.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1755(t_small_parse_table_array *v)
{
	v->a[35100] = sym_raw_string;
	v->a[35101] = aux_sym_number_token1;
	v->a[35102] = aux_sym_number_token2;
	v->a[35103] = anon_sym_DOLLAR_LBRACE;
	v->a[35104] = anon_sym_DOLLAR_LPAREN;
	v->a[35105] = anon_sym_BQUOTE;
	v->a[35106] = anon_sym_DOLLAR_BQUOTE;
	v->a[35107] = sym_word;
	v->a[35108] = anon_sym_SEMI;
	v->a[35109] = 6;
	v->a[35110] = actions(3);
	v->a[35111] = 1;
	v->a[35112] = sym_comment;
	v->a[35113] = actions(3465);
	v->a[35114] = 1;
	v->a[35115] = aux_sym_concatenation_token1;
	v->a[35116] = actions(3468);
	v->a[35117] = 1;
	v->a[35118] = sym__concat;
	v->a[35119] = state(801);
	small_parse_table_1756(v);
}

void	small_parse_table_1756(t_small_parse_table_array *v)
{
	v->a[35120] = 1;
	v->a[35121] = aux_sym_concatenation_repeat1;
	v->a[35122] = actions(2654);
	v->a[35123] = 5;
	v->a[35124] = sym_file_descriptor;
	v->a[35125] = sym_test_operator;
	v->a[35126] = sym__bare_dollar;
	v->a[35127] = sym__brace_start;
	v->a[35128] = aux_sym_heredoc_redirect_token1;
	v->a[35129] = actions(2652);
	v->a[35130] = 32;
	v->a[35131] = anon_sym_PIPE;
	v->a[35132] = anon_sym_RPAREN;
	v->a[35133] = anon_sym_SEMI_SEMI;
	v->a[35134] = anon_sym_PIPE_AMP;
	v->a[35135] = anon_sym_AMP_AMP;
	v->a[35136] = anon_sym_PIPE_PIPE;
	v->a[35137] = anon_sym_LT;
	v->a[35138] = anon_sym_GT;
	v->a[35139] = anon_sym_GT_GT;
	small_parse_table_1757(v);
}

void	small_parse_table_1757(t_small_parse_table_array *v)
{
	v->a[35140] = anon_sym_AMP_GT;
	v->a[35141] = anon_sym_AMP_GT_GT;
	v->a[35142] = anon_sym_LT_AMP;
	v->a[35143] = anon_sym_GT_AMP;
	v->a[35144] = anon_sym_GT_PIPE;
	v->a[35145] = anon_sym_LT_AMP_DASH;
	v->a[35146] = anon_sym_GT_AMP_DASH;
	v->a[35147] = anon_sym_LT_LT;
	v->a[35148] = anon_sym_LT_LT_DASH;
	v->a[35149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35150] = anon_sym_AMP;
	v->a[35151] = anon_sym_DOLLAR;
	v->a[35152] = sym__special_character;
	v->a[35153] = anon_sym_DQUOTE;
	v->a[35154] = sym_raw_string;
	v->a[35155] = aux_sym_number_token1;
	v->a[35156] = aux_sym_number_token2;
	v->a[35157] = anon_sym_DOLLAR_LBRACE;
	v->a[35158] = anon_sym_DOLLAR_LPAREN;
	v->a[35159] = anon_sym_BQUOTE;
	small_parse_table_1758(v);
}

void	small_parse_table_1758(t_small_parse_table_array *v)
{
	v->a[35160] = anon_sym_DOLLAR_BQUOTE;
	v->a[35161] = sym_word;
	v->a[35162] = anon_sym_SEMI;
	v->a[35163] = 3;
	v->a[35164] = actions(3);
	v->a[35165] = 1;
	v->a[35166] = sym_comment;
	v->a[35167] = actions(3050);
	v->a[35168] = 5;
	v->a[35169] = sym_file_descriptor;
	v->a[35170] = sym__concat;
	v->a[35171] = sym_test_operator;
	v->a[35172] = sym__brace_start;
	v->a[35173] = aux_sym_heredoc_redirect_token1;
	v->a[35174] = actions(3048);
	v->a[35175] = 35;
	v->a[35176] = anon_sym_PIPE;
	v->a[35177] = anon_sym_SEMI_SEMI;
	v->a[35178] = anon_sym_SEMI_AMP;
	v->a[35179] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1759(v);
}

void	small_parse_table_1759(t_small_parse_table_array *v)
{
	v->a[35180] = anon_sym_PIPE_AMP;
	v->a[35181] = anon_sym_AMP_AMP;
	v->a[35182] = anon_sym_PIPE_PIPE;
	v->a[35183] = anon_sym_LT;
	v->a[35184] = anon_sym_GT;
	v->a[35185] = anon_sym_GT_GT;
	v->a[35186] = anon_sym_AMP_GT;
	v->a[35187] = anon_sym_AMP_GT_GT;
	v->a[35188] = anon_sym_LT_AMP;
	v->a[35189] = anon_sym_GT_AMP;
	v->a[35190] = anon_sym_GT_PIPE;
	v->a[35191] = anon_sym_LT_AMP_DASH;
	v->a[35192] = anon_sym_GT_AMP_DASH;
	v->a[35193] = anon_sym_LT_LT;
	v->a[35194] = anon_sym_LT_LT_DASH;
	v->a[35195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35196] = anon_sym_AMP;
	v->a[35197] = aux_sym_concatenation_token1;
	v->a[35198] = anon_sym_DOLLAR;
	v->a[35199] = sym__special_character;
	small_parse_table_1760(v);
}

/* EOF small_parse_table_351.c */
