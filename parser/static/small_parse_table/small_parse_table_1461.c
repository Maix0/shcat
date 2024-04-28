/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1461.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7305(t_small_parse_table_array *v)
{
	v->a[146100] = anon_sym_LT_LT;
	v->a[146101] = anon_sym_GT_GT;
	v->a[146102] = actions(6907);
	v->a[146103] = 2;
	v->a[146104] = anon_sym_PLUS;
	v->a[146105] = anon_sym_DASH;
	v->a[146106] = actions(6909);
	v->a[146107] = 3;
	v->a[146108] = anon_sym_STAR;
	v->a[146109] = anon_sym_SLASH;
	v->a[146110] = anon_sym_PERCENT;
	v->a[146111] = actions(6887);
	v->a[146112] = 11;
	v->a[146113] = anon_sym_PLUS_EQ;
	v->a[146114] = anon_sym_DASH_EQ;
	v->a[146115] = anon_sym_STAR_EQ;
	v->a[146116] = anon_sym_SLASH_EQ;
	v->a[146117] = anon_sym_PERCENT_EQ;
	v->a[146118] = anon_sym_STAR_STAR_EQ;
	v->a[146119] = anon_sym_LT_LT_EQ;
	small_parse_table_7306(v);
}

void	small_parse_table_7306(t_small_parse_table_array *v)
{
	v->a[146120] = anon_sym_GT_GT_EQ;
	v->a[146121] = anon_sym_AMP_EQ;
	v->a[146122] = anon_sym_CARET_EQ;
	v->a[146123] = anon_sym_PIPE_EQ;
	v->a[146124] = 5;
	v->a[146125] = actions(71);
	v->a[146126] = 1;
	v->a[146127] = sym_comment;
	v->a[146128] = actions(6989);
	v->a[146129] = 1;
	v->a[146130] = sym__special_character;
	v->a[146131] = state(2806);
	v->a[146132] = 1;
	v->a[146133] = aux_sym__literal_repeat1;
	v->a[146134] = actions(5393);
	v->a[146135] = 12;
	v->a[146136] = anon_sym_PIPE;
	v->a[146137] = anon_sym_LT;
	v->a[146138] = anon_sym_GT;
	v->a[146139] = anon_sym_LT_LT;
	small_parse_table_7307(v);
}

void	small_parse_table_7307(t_small_parse_table_array *v)
{
	v->a[146140] = anon_sym_AMP_GT;
	v->a[146141] = anon_sym_LT_AMP;
	v->a[146142] = anon_sym_GT_AMP;
	v->a[146143] = anon_sym_DOLLAR;
	v->a[146144] = aux_sym_number_token1;
	v->a[146145] = aux_sym_number_token2;
	v->a[146146] = anon_sym_DOLLAR_LPAREN;
	v->a[146147] = sym_word;
	v->a[146148] = actions(5395);
	v->a[146149] = 24;
	v->a[146150] = sym_file_descriptor;
	v->a[146151] = sym_test_operator;
	v->a[146152] = sym__brace_start;
	v->a[146153] = anon_sym_LPAREN_LPAREN;
	v->a[146154] = anon_sym_PIPE_PIPE;
	v->a[146155] = anon_sym_AMP_AMP;
	v->a[146156] = anon_sym_GT_GT;
	v->a[146157] = anon_sym_PIPE_AMP;
	v->a[146158] = anon_sym_RBRACK;
	v->a[146159] = anon_sym_AMP_GT_GT;
	small_parse_table_7308(v);
}

void	small_parse_table_7308(t_small_parse_table_array *v)
{
	v->a[146160] = anon_sym_GT_PIPE;
	v->a[146161] = anon_sym_LT_AMP_DASH;
	v->a[146162] = anon_sym_GT_AMP_DASH;
	v->a[146163] = anon_sym_LT_LT_DASH;
	v->a[146164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[146165] = anon_sym_DOLLAR_LBRACK;
	v->a[146166] = anon_sym_DQUOTE;
	v->a[146167] = sym_raw_string;
	v->a[146168] = sym_ansi_c_string;
	v->a[146169] = anon_sym_DOLLAR_LBRACE;
	v->a[146170] = anon_sym_BQUOTE;
	v->a[146171] = anon_sym_DOLLAR_BQUOTE;
	v->a[146172] = anon_sym_LT_LPAREN;
	v->a[146173] = anon_sym_GT_LPAREN;
	v->a[146174] = 21;
	v->a[146175] = actions(71);
	v->a[146176] = 1;
	v->a[146177] = sym_comment;
	v->a[146178] = actions(6881);
	v->a[146179] = 1;
	small_parse_table_7309(v);
}

void	small_parse_table_7309(t_small_parse_table_array *v)
{
	v->a[146180] = anon_sym_COMMA;
	v->a[146181] = actions(6883);
	v->a[146182] = 1;
	v->a[146183] = anon_sym_EQ;
	v->a[146184] = actions(6889);
	v->a[146185] = 1;
	v->a[146186] = anon_sym_PIPE_PIPE;
	v->a[146187] = actions(6891);
	v->a[146188] = 1;
	v->a[146189] = anon_sym_AMP_AMP;
	v->a[146190] = actions(6893);
	v->a[146191] = 1;
	v->a[146192] = anon_sym_PIPE;
	v->a[146193] = actions(6895);
	v->a[146194] = 1;
	v->a[146195] = anon_sym_CARET;
	v->a[146196] = actions(6897);
	v->a[146197] = 1;
	v->a[146198] = anon_sym_AMP;
	v->a[146199] = actions(6911);
	small_parse_table_7310(v);
}

/* EOF small_parse_table_1461.c */
