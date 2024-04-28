/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1961.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9805(t_small_parse_table_array *v)
{
	v->a[196100] = sym_comment;
	v->a[196101] = actions(3729);
	v->a[196102] = 1;
	v->a[196103] = anon_sym_DOLLAR_LBRACK;
	v->a[196104] = actions(3731);
	v->a[196105] = 1;
	v->a[196106] = anon_sym_DOLLAR;
	v->a[196107] = actions(3733);
	v->a[196108] = 1;
	v->a[196109] = sym__special_character;
	v->a[196110] = actions(3735);
	v->a[196111] = 1;
	v->a[196112] = anon_sym_DQUOTE;
	v->a[196113] = actions(3737);
	v->a[196114] = 1;
	v->a[196115] = aux_sym_number_token1;
	v->a[196116] = actions(3739);
	v->a[196117] = 1;
	v->a[196118] = aux_sym_number_token2;
	v->a[196119] = actions(3741);
	small_parse_table_9806(v);
}

void	small_parse_table_9806(t_small_parse_table_array *v)
{
	v->a[196120] = 1;
	v->a[196121] = anon_sym_DOLLAR_LBRACE;
	v->a[196122] = actions(3743);
	v->a[196123] = 1;
	v->a[196124] = anon_sym_DOLLAR_LPAREN;
	v->a[196125] = actions(3745);
	v->a[196126] = 1;
	v->a[196127] = anon_sym_BQUOTE;
	v->a[196128] = actions(3747);
	v->a[196129] = 1;
	v->a[196130] = anon_sym_DOLLAR_BQUOTE;
	v->a[196131] = actions(3753);
	v->a[196132] = 1;
	v->a[196133] = sym_test_operator;
	v->a[196134] = actions(3755);
	v->a[196135] = 1;
	v->a[196136] = sym__brace_start;
	v->a[196137] = actions(8800);
	v->a[196138] = 1;
	v->a[196139] = aux_sym_heredoc_redirect_token1;
	small_parse_table_9807(v);
}

void	small_parse_table_9807(t_small_parse_table_array *v)
{
	v->a[196140] = state(3571);
	v->a[196141] = 1;
	v->a[196142] = aux_sym__heredoc_command;
	v->a[196143] = state(5351);
	v->a[196144] = 1;
	v->a[196145] = aux_sym__literal_repeat1;
	v->a[196146] = state(5456);
	v->a[196147] = 1;
	v->a[196148] = sym_concatenation;
	v->a[196149] = actions(3715);
	v->a[196150] = 2;
	v->a[196151] = anon_sym_LPAREN_LPAREN;
	v->a[196152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196153] = actions(3749);
	v->a[196154] = 2;
	v->a[196155] = anon_sym_LT_LPAREN;
	v->a[196156] = anon_sym_GT_LPAREN;
	v->a[196157] = actions(3713);
	v->a[196158] = 3;
	v->a[196159] = sym_raw_string;
	small_parse_table_9808(v);
}

void	small_parse_table_9808(t_small_parse_table_array *v)
{
	v->a[196160] = sym_ansi_c_string;
	v->a[196161] = sym_word;
	v->a[196162] = state(5062);
	v->a[196163] = 9;
	v->a[196164] = sym_arithmetic_expansion;
	v->a[196165] = sym_brace_expression;
	v->a[196166] = sym_string;
	v->a[196167] = sym_translated_string;
	v->a[196168] = sym_number;
	v->a[196169] = sym_simple_expansion;
	v->a[196170] = sym_expansion;
	v->a[196171] = sym_command_substitution;
	v->a[196172] = sym_process_substitution;
	v->a[196173] = 21;
	v->a[196174] = actions(71);
	v->a[196175] = 1;
	v->a[196176] = sym_comment;
	v->a[196177] = actions(8565);
	v->a[196178] = 1;
	v->a[196179] = sym_word;
	small_parse_table_9809(v);
}

void	small_parse_table_9809(t_small_parse_table_array *v)
{
	v->a[196180] = actions(8571);
	v->a[196181] = 1;
	v->a[196182] = anon_sym_DOLLAR_LBRACK;
	v->a[196183] = actions(8573);
	v->a[196184] = 1;
	v->a[196185] = anon_sym_DOLLAR;
	v->a[196186] = actions(8575);
	v->a[196187] = 1;
	v->a[196188] = sym__special_character;
	v->a[196189] = actions(8577);
	v->a[196190] = 1;
	v->a[196191] = anon_sym_DQUOTE;
	v->a[196192] = actions(8581);
	v->a[196193] = 1;
	v->a[196194] = aux_sym_number_token1;
	v->a[196195] = actions(8583);
	v->a[196196] = 1;
	v->a[196197] = aux_sym_number_token2;
	v->a[196198] = actions(8585);
	v->a[196199] = 1;
	small_parse_table_9810(v);
}

/* EOF small_parse_table_1961.c */
