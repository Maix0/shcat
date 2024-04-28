/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1941.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9705(t_small_parse_table_array *v)
{
	v->a[194100] = sym_raw_string;
	v->a[194101] = sym_ansi_c_string;
	v->a[194102] = state(6775);
	v->a[194103] = 2;
	v->a[194104] = sym_concatenation;
	v->a[194105] = sym__extglob_blob;
	v->a[194106] = state(6420);
	v->a[194107] = 9;
	v->a[194108] = sym_arithmetic_expansion;
	v->a[194109] = sym_brace_expression;
	v->a[194110] = sym_string;
	v->a[194111] = sym_translated_string;
	v->a[194112] = sym_number;
	v->a[194113] = sym_simple_expansion;
	v->a[194114] = sym_expansion;
	v->a[194115] = sym_command_substitution;
	v->a[194116] = sym_process_substitution;
	v->a[194117] = 21;
	v->a[194118] = actions(71);
	v->a[194119] = 1;
	small_parse_table_9706(v);
}

void	small_parse_table_9706(t_small_parse_table_array *v)
{
	v->a[194120] = sym_comment;
	v->a[194121] = actions(8565);
	v->a[194122] = 1;
	v->a[194123] = sym_word;
	v->a[194124] = actions(8571);
	v->a[194125] = 1;
	v->a[194126] = anon_sym_DOLLAR_LBRACK;
	v->a[194127] = actions(8573);
	v->a[194128] = 1;
	v->a[194129] = anon_sym_DOLLAR;
	v->a[194130] = actions(8575);
	v->a[194131] = 1;
	v->a[194132] = sym__special_character;
	v->a[194133] = actions(8577);
	v->a[194134] = 1;
	v->a[194135] = anon_sym_DQUOTE;
	v->a[194136] = actions(8581);
	v->a[194137] = 1;
	v->a[194138] = aux_sym_number_token1;
	v->a[194139] = actions(8583);
	small_parse_table_9707(v);
}

void	small_parse_table_9707(t_small_parse_table_array *v)
{
	v->a[194140] = 1;
	v->a[194141] = aux_sym_number_token2;
	v->a[194142] = actions(8585);
	v->a[194143] = 1;
	v->a[194144] = anon_sym_DOLLAR_LBRACE;
	v->a[194145] = actions(8587);
	v->a[194146] = 1;
	v->a[194147] = anon_sym_DOLLAR_LPAREN;
	v->a[194148] = actions(8589);
	v->a[194149] = 1;
	v->a[194150] = anon_sym_BQUOTE;
	v->a[194151] = actions(8591);
	v->a[194152] = 1;
	v->a[194153] = anon_sym_DOLLAR_BQUOTE;
	v->a[194154] = actions(8595);
	v->a[194155] = 1;
	v->a[194156] = sym_test_operator;
	v->a[194157] = actions(8597);
	v->a[194158] = 1;
	v->a[194159] = sym__brace_start;
	small_parse_table_9708(v);
}

void	small_parse_table_9708(t_small_parse_table_array *v)
{
	v->a[194160] = actions(8706);
	v->a[194161] = 1;
	v->a[194162] = anon_sym_RPAREN;
	v->a[194163] = state(5365);
	v->a[194164] = 1;
	v->a[194165] = aux_sym__literal_repeat1;
	v->a[194166] = actions(8567);
	v->a[194167] = 2;
	v->a[194168] = anon_sym_LPAREN_LPAREN;
	v->a[194169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194170] = actions(8579);
	v->a[194171] = 2;
	v->a[194172] = sym_raw_string;
	v->a[194173] = sym_ansi_c_string;
	v->a[194174] = actions(8593);
	v->a[194175] = 2;
	v->a[194176] = anon_sym_LT_LPAREN;
	v->a[194177] = anon_sym_GT_LPAREN;
	v->a[194178] = state(3561);
	v->a[194179] = 2;
	small_parse_table_9709(v);
}

void	small_parse_table_9709(t_small_parse_table_array *v)
{
	v->a[194180] = sym_concatenation;
	v->a[194181] = aux_sym_for_statement_repeat1;
	v->a[194182] = state(5045);
	v->a[194183] = 9;
	v->a[194184] = sym_arithmetic_expansion;
	v->a[194185] = sym_brace_expression;
	v->a[194186] = sym_string;
	v->a[194187] = sym_translated_string;
	v->a[194188] = sym_number;
	v->a[194189] = sym_simple_expansion;
	v->a[194190] = sym_expansion;
	v->a[194191] = sym_command_substitution;
	v->a[194192] = sym_process_substitution;
	v->a[194193] = 21;
	v->a[194194] = actions(71);
	v->a[194195] = 1;
	v->a[194196] = sym_comment;
	v->a[194197] = actions(8565);
	v->a[194198] = 1;
	v->a[194199] = sym_word;
	small_parse_table_9710(v);
}

/* EOF small_parse_table_1941.c */
