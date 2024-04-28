/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1311.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6555(t_small_parse_table_array *v)
{
	v->a[131100] = aux_sym_concatenation_token1;
	v->a[131101] = actions(6704);
	v->a[131102] = 1;
	v->a[131103] = sym__concat;
	v->a[131104] = state(2486);
	v->a[131105] = 1;
	v->a[131106] = aux_sym_concatenation_repeat1;
	v->a[131107] = actions(1265);
	v->a[131108] = 14;
	v->a[131109] = anon_sym_PIPE;
	v->a[131110] = anon_sym_LT;
	v->a[131111] = anon_sym_GT;
	v->a[131112] = anon_sym_LT_LT;
	v->a[131113] = anon_sym_AMP_GT;
	v->a[131114] = anon_sym_LT_AMP;
	v->a[131115] = anon_sym_GT_AMP;
	v->a[131116] = anon_sym_DOLLAR;
	v->a[131117] = sym__special_character;
	v->a[131118] = aux_sym_number_token1;
	v->a[131119] = aux_sym_number_token2;
	small_parse_table_6556(v);
}

void	small_parse_table_6556(t_small_parse_table_array *v)
{
	v->a[131120] = anon_sym_DOLLAR_LPAREN;
	v->a[131121] = anon_sym_BQUOTE;
	v->a[131122] = sym_word;
	v->a[131123] = actions(1267);
	v->a[131124] = 23;
	v->a[131125] = sym_file_descriptor;
	v->a[131126] = sym_test_operator;
	v->a[131127] = sym__brace_start;
	v->a[131128] = anon_sym_LPAREN_LPAREN;
	v->a[131129] = anon_sym_PIPE_PIPE;
	v->a[131130] = anon_sym_AMP_AMP;
	v->a[131131] = anon_sym_GT_GT;
	v->a[131132] = anon_sym_PIPE_AMP;
	v->a[131133] = anon_sym_RBRACK;
	v->a[131134] = anon_sym_AMP_GT_GT;
	v->a[131135] = anon_sym_GT_PIPE;
	v->a[131136] = anon_sym_LT_AMP_DASH;
	v->a[131137] = anon_sym_GT_AMP_DASH;
	v->a[131138] = anon_sym_LT_LT_DASH;
	v->a[131139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6557(v);
}

void	small_parse_table_6557(t_small_parse_table_array *v)
{
	v->a[131140] = anon_sym_DOLLAR_LBRACK;
	v->a[131141] = anon_sym_DQUOTE;
	v->a[131142] = sym_raw_string;
	v->a[131143] = sym_ansi_c_string;
	v->a[131144] = anon_sym_DOLLAR_LBRACE;
	v->a[131145] = anon_sym_DOLLAR_BQUOTE;
	v->a[131146] = anon_sym_LT_LPAREN;
	v->a[131147] = anon_sym_GT_LPAREN;
	v->a[131148] = 6;
	v->a[131149] = actions(71);
	v->a[131150] = 1;
	v->a[131151] = sym_comment;
	v->a[131152] = actions(1143);
	v->a[131153] = 1;
	v->a[131154] = aux_sym_concatenation_token1;
	v->a[131155] = actions(6706);
	v->a[131156] = 1;
	v->a[131157] = sym__concat;
	v->a[131158] = state(2312);
	v->a[131159] = 1;
	small_parse_table_6558(v);
}

void	small_parse_table_6558(t_small_parse_table_array *v)
{
	v->a[131160] = aux_sym_concatenation_repeat1;
	v->a[131161] = actions(1265);
	v->a[131162] = 14;
	v->a[131163] = anon_sym_EQ;
	v->a[131164] = anon_sym_PIPE;
	v->a[131165] = anon_sym_CARET;
	v->a[131166] = anon_sym_AMP;
	v->a[131167] = anon_sym_LT;
	v->a[131168] = anon_sym_GT;
	v->a[131169] = anon_sym_LT_LT;
	v->a[131170] = anon_sym_GT_GT;
	v->a[131171] = anon_sym_PLUS;
	v->a[131172] = anon_sym_DASH;
	v->a[131173] = anon_sym_STAR;
	v->a[131174] = anon_sym_SLASH;
	v->a[131175] = anon_sym_PERCENT;
	v->a[131176] = anon_sym_STAR_STAR;
	v->a[131177] = actions(1267);
	v->a[131178] = 23;
	v->a[131179] = sym_test_operator;
	small_parse_table_6559(v);
}

void	small_parse_table_6559(t_small_parse_table_array *v)
{
	v->a[131180] = anon_sym_RPAREN_RPAREN;
	v->a[131181] = anon_sym_PLUS_PLUS;
	v->a[131182] = anon_sym_DASH_DASH;
	v->a[131183] = anon_sym_PLUS_EQ;
	v->a[131184] = anon_sym_DASH_EQ;
	v->a[131185] = anon_sym_STAR_EQ;
	v->a[131186] = anon_sym_SLASH_EQ;
	v->a[131187] = anon_sym_PERCENT_EQ;
	v->a[131188] = anon_sym_STAR_STAR_EQ;
	v->a[131189] = anon_sym_LT_LT_EQ;
	v->a[131190] = anon_sym_GT_GT_EQ;
	v->a[131191] = anon_sym_AMP_EQ;
	v->a[131192] = anon_sym_CARET_EQ;
	v->a[131193] = anon_sym_PIPE_EQ;
	v->a[131194] = anon_sym_PIPE_PIPE;
	v->a[131195] = anon_sym_AMP_AMP;
	v->a[131196] = anon_sym_EQ_EQ;
	v->a[131197] = anon_sym_BANG_EQ;
	v->a[131198] = anon_sym_LT_EQ;
	v->a[131199] = anon_sym_GT_EQ;
	small_parse_table_6560(v);
}

/* EOF small_parse_table_1311.c */
