/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2091.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10455(t_small_parse_table_array *v)
{
	v->a[209100] = 1;
	v->a[209101] = anon_sym_DOLLAR_LBRACE;
	v->a[209102] = actions(9250);
	v->a[209103] = 1;
	v->a[209104] = anon_sym_BQUOTE;
	v->a[209105] = actions(9252);
	v->a[209106] = 1;
	v->a[209107] = anon_sym_DOLLAR_BQUOTE;
	v->a[209108] = actions(9844);
	v->a[209109] = 1;
	v->a[209110] = sym_word;
	v->a[209111] = actions(9848);
	v->a[209112] = 1;
	v->a[209113] = sym_test_operator;
	v->a[209114] = state(1374);
	v->a[209115] = 1;
	v->a[209116] = aux_sym__literal_repeat1;
	v->a[209117] = state(1622);
	v->a[209118] = 1;
	v->a[209119] = sym_concatenation;
	small_parse_table_10456(v);
}

void	small_parse_table_10456(t_small_parse_table_array *v)
{
	v->a[209120] = actions(9238);
	v->a[209121] = 2;
	v->a[209122] = anon_sym_LPAREN_LPAREN;
	v->a[209123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209124] = actions(9254);
	v->a[209125] = 2;
	v->a[209126] = anon_sym_LT_LPAREN;
	v->a[209127] = anon_sym_GT_LPAREN;
	v->a[209128] = actions(9846);
	v->a[209129] = 2;
	v->a[209130] = sym_raw_string;
	v->a[209131] = sym_ansi_c_string;
	v->a[209132] = state(1069);
	v->a[209133] = 9;
	v->a[209134] = sym_arithmetic_expansion;
	v->a[209135] = sym_brace_expression;
	v->a[209136] = sym_string;
	v->a[209137] = sym_translated_string;
	v->a[209138] = sym_number;
	v->a[209139] = sym_simple_expansion;
	small_parse_table_10457(v);
}

void	small_parse_table_10457(t_small_parse_table_array *v)
{
	v->a[209140] = sym_expansion;
	v->a[209141] = sym_command_substitution;
	v->a[209142] = sym_process_substitution;
	v->a[209143] = 18;
	v->a[209144] = actions(3);
	v->a[209145] = 1;
	v->a[209146] = sym_comment;
	v->a[209147] = actions(3477);
	v->a[209148] = 1;
	v->a[209149] = anon_sym_DOLLAR;
	v->a[209150] = actions(3481);
	v->a[209151] = 1;
	v->a[209152] = aux_sym_number_token1;
	v->a[209153] = actions(3483);
	v->a[209154] = 1;
	v->a[209155] = aux_sym_number_token2;
	v->a[209156] = actions(3487);
	v->a[209157] = 1;
	v->a[209158] = anon_sym_DOLLAR_LPAREN;
	v->a[209159] = actions(3497);
	small_parse_table_10458(v);
}

void	small_parse_table_10458(t_small_parse_table_array *v)
{
	v->a[209160] = 1;
	v->a[209161] = sym__brace_start;
	v->a[209162] = actions(8906);
	v->a[209163] = 1;
	v->a[209164] = anon_sym_DOLLAR_LBRACK;
	v->a[209165] = actions(8910);
	v->a[209166] = 1;
	v->a[209167] = anon_sym_DQUOTE;
	v->a[209168] = actions(8914);
	v->a[209169] = 1;
	v->a[209170] = anon_sym_DOLLAR_LBRACE;
	v->a[209171] = actions(8916);
	v->a[209172] = 1;
	v->a[209173] = anon_sym_BQUOTE;
	v->a[209174] = actions(8918);
	v->a[209175] = 1;
	v->a[209176] = anon_sym_DOLLAR_BQUOTE;
	v->a[209177] = actions(9850);
	v->a[209178] = 1;
	v->a[209179] = sym_word;
	small_parse_table_10459(v);
}

void	small_parse_table_10459(t_small_parse_table_array *v)
{
	v->a[209180] = actions(9856);
	v->a[209181] = 1;
	v->a[209182] = sym__comment_word;
	v->a[209183] = actions(8904);
	v->a[209184] = 2;
	v->a[209185] = anon_sym_LPAREN_LPAREN;
	v->a[209186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209187] = actions(8920);
	v->a[209188] = 2;
	v->a[209189] = anon_sym_LT_LPAREN;
	v->a[209190] = anon_sym_GT_LPAREN;
	v->a[209191] = actions(9852);
	v->a[209192] = 2;
	v->a[209193] = sym_test_operator;
	v->a[209194] = sym__special_character;
	v->a[209195] = actions(9854);
	v->a[209196] = 3;
	v->a[209197] = sym__bare_dollar;
	v->a[209198] = sym_raw_string;
	v->a[209199] = sym_ansi_c_string;
	small_parse_table_10460(v);
}

/* EOF small_parse_table_2091.c */
