/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1161.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5805(t_small_parse_table_array *v)
{
	v->a[116100] = anon_sym_GT_GT;
	v->a[116101] = anon_sym_AMP_GT;
	v->a[116102] = anon_sym_AMP_GT_GT;
	v->a[116103] = anon_sym_LT_AMP;
	v->a[116104] = anon_sym_GT_AMP;
	v->a[116105] = anon_sym_GT_PIPE;
	v->a[116106] = anon_sym_LT_AMP_DASH;
	v->a[116107] = anon_sym_GT_AMP_DASH;
	v->a[116108] = anon_sym_LT_LT_LT;
	v->a[116109] = actions(5819);
	v->a[116110] = 17;
	v->a[116111] = anon_sym_LPAREN_LPAREN;
	v->a[116112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116113] = anon_sym_DOLLAR_LBRACK;
	v->a[116114] = anon_sym_DOLLAR;
	v->a[116115] = sym__special_character;
	v->a[116116] = anon_sym_DQUOTE;
	v->a[116117] = sym_raw_string;
	v->a[116118] = sym_ansi_c_string;
	v->a[116119] = aux_sym_number_token1;
	small_parse_table_5806(v);
}

void	small_parse_table_5806(t_small_parse_table_array *v)
{
	v->a[116120] = aux_sym_number_token2;
	v->a[116121] = anon_sym_DOLLAR_LBRACE;
	v->a[116122] = anon_sym_DOLLAR_LPAREN;
	v->a[116123] = anon_sym_BQUOTE;
	v->a[116124] = anon_sym_DOLLAR_BQUOTE;
	v->a[116125] = anon_sym_LT_LPAREN;
	v->a[116126] = anon_sym_GT_LPAREN;
	v->a[116127] = sym_word;
	v->a[116128] = 3;
	v->a[116129] = actions(3);
	v->a[116130] = 1;
	v->a[116131] = sym_comment;
	v->a[116132] = actions(1263);
	v->a[116133] = 6;
	v->a[116134] = sym_file_descriptor;
	v->a[116135] = sym_variable_name;
	v->a[116136] = sym_test_operator;
	v->a[116137] = sym__brace_start;
	v->a[116138] = ts_builtin_sym_end;
	v->a[116139] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5807(v);
}

void	small_parse_table_5807(t_small_parse_table_array *v)
{
	v->a[116140] = actions(1261);
	v->a[116141] = 37;
	v->a[116142] = anon_sym_LPAREN_LPAREN;
	v->a[116143] = anon_sym_SEMI;
	v->a[116144] = anon_sym_PIPE_PIPE;
	v->a[116145] = anon_sym_AMP_AMP;
	v->a[116146] = anon_sym_PIPE;
	v->a[116147] = anon_sym_AMP;
	v->a[116148] = anon_sym_LT;
	v->a[116149] = anon_sym_GT;
	v->a[116150] = anon_sym_LT_LT;
	v->a[116151] = anon_sym_GT_GT;
	v->a[116152] = anon_sym_SEMI_SEMI;
	v->a[116153] = anon_sym_PIPE_AMP;
	v->a[116154] = anon_sym_AMP_GT;
	v->a[116155] = anon_sym_AMP_GT_GT;
	v->a[116156] = anon_sym_LT_AMP;
	v->a[116157] = anon_sym_GT_AMP;
	v->a[116158] = anon_sym_GT_PIPE;
	v->a[116159] = anon_sym_LT_AMP_DASH;
	small_parse_table_5808(v);
}

void	small_parse_table_5808(t_small_parse_table_array *v)
{
	v->a[116160] = anon_sym_GT_AMP_DASH;
	v->a[116161] = anon_sym_LT_LT_DASH;
	v->a[116162] = anon_sym_LT_LT_LT;
	v->a[116163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116164] = anon_sym_DOLLAR_LBRACK;
	v->a[116165] = anon_sym_DOLLAR;
	v->a[116166] = sym__special_character;
	v->a[116167] = anon_sym_DQUOTE;
	v->a[116168] = sym_raw_string;
	v->a[116169] = sym_ansi_c_string;
	v->a[116170] = aux_sym_number_token1;
	v->a[116171] = aux_sym_number_token2;
	v->a[116172] = anon_sym_DOLLAR_LBRACE;
	v->a[116173] = anon_sym_DOLLAR_LPAREN;
	v->a[116174] = anon_sym_BQUOTE;
	v->a[116175] = anon_sym_DOLLAR_BQUOTE;
	v->a[116176] = anon_sym_LT_LPAREN;
	v->a[116177] = anon_sym_GT_LPAREN;
	v->a[116178] = sym_word;
	v->a[116179] = 26;
	small_parse_table_5809(v);
}

void	small_parse_table_5809(t_small_parse_table_array *v)
{
	v->a[116180] = actions(71);
	v->a[116181] = 1;
	v->a[116182] = sym_comment;
	v->a[116183] = actions(1131);
	v->a[116184] = 1;
	v->a[116185] = anon_sym_LPAREN;
	v->a[116186] = actions(1141);
	v->a[116187] = 1;
	v->a[116188] = anon_sym_DOLLAR_LBRACK;
	v->a[116189] = actions(1145);
	v->a[116190] = 1;
	v->a[116191] = anon_sym_DOLLAR;
	v->a[116192] = actions(1149);
	v->a[116193] = 1;
	v->a[116194] = anon_sym_DQUOTE;
	v->a[116195] = actions(1153);
	v->a[116196] = 1;
	v->a[116197] = aux_sym_number_token1;
	v->a[116198] = actions(1155);
	v->a[116199] = 1;
	small_parse_table_5810(v);
}

/* EOF small_parse_table_1161.c */
