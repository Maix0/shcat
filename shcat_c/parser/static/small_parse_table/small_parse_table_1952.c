/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1952.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9760(t_small_parse_table_array *v)
{
	v->a[195200] = state(3571);
	v->a[195201] = 1;
	v->a[195202] = aux_sym__heredoc_command;
	v->a[195203] = state(5351);
	v->a[195204] = 1;
	v->a[195205] = aux_sym__literal_repeat1;
	v->a[195206] = state(5456);
	v->a[195207] = 1;
	v->a[195208] = sym_concatenation;
	v->a[195209] = actions(3715);
	v->a[195210] = 2;
	v->a[195211] = anon_sym_LPAREN_LPAREN;
	v->a[195212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195213] = actions(3749);
	v->a[195214] = 2;
	v->a[195215] = anon_sym_LT_LPAREN;
	v->a[195216] = anon_sym_GT_LPAREN;
	v->a[195217] = actions(3713);
	v->a[195218] = 3;
	v->a[195219] = sym_raw_string;
	small_parse_table_9761(v);
}

void	small_parse_table_9761(t_small_parse_table_array *v)
{
	v->a[195220] = sym_ansi_c_string;
	v->a[195221] = sym_word;
	v->a[195222] = state(5062);
	v->a[195223] = 9;
	v->a[195224] = sym_arithmetic_expansion;
	v->a[195225] = sym_brace_expression;
	v->a[195226] = sym_string;
	v->a[195227] = sym_translated_string;
	v->a[195228] = sym_number;
	v->a[195229] = sym_simple_expansion;
	v->a[195230] = sym_expansion;
	v->a[195231] = sym_command_substitution;
	v->a[195232] = sym_process_substitution;
	v->a[195233] = 21;
	v->a[195234] = actions(71);
	v->a[195235] = 1;
	v->a[195236] = sym_comment;
	v->a[195237] = actions(8565);
	v->a[195238] = 1;
	v->a[195239] = sym_word;
	small_parse_table_9762(v);
}

void	small_parse_table_9762(t_small_parse_table_array *v)
{
	v->a[195240] = actions(8571);
	v->a[195241] = 1;
	v->a[195242] = anon_sym_DOLLAR_LBRACK;
	v->a[195243] = actions(8573);
	v->a[195244] = 1;
	v->a[195245] = anon_sym_DOLLAR;
	v->a[195246] = actions(8575);
	v->a[195247] = 1;
	v->a[195248] = sym__special_character;
	v->a[195249] = actions(8577);
	v->a[195250] = 1;
	v->a[195251] = anon_sym_DQUOTE;
	v->a[195252] = actions(8581);
	v->a[195253] = 1;
	v->a[195254] = aux_sym_number_token1;
	v->a[195255] = actions(8583);
	v->a[195256] = 1;
	v->a[195257] = aux_sym_number_token2;
	v->a[195258] = actions(8585);
	v->a[195259] = 1;
	small_parse_table_9763(v);
}

void	small_parse_table_9763(t_small_parse_table_array *v)
{
	v->a[195260] = anon_sym_DOLLAR_LBRACE;
	v->a[195261] = actions(8587);
	v->a[195262] = 1;
	v->a[195263] = anon_sym_DOLLAR_LPAREN;
	v->a[195264] = actions(8589);
	v->a[195265] = 1;
	v->a[195266] = anon_sym_BQUOTE;
	v->a[195267] = actions(8591);
	v->a[195268] = 1;
	v->a[195269] = anon_sym_DOLLAR_BQUOTE;
	v->a[195270] = actions(8595);
	v->a[195271] = 1;
	v->a[195272] = sym_test_operator;
	v->a[195273] = actions(8597);
	v->a[195274] = 1;
	v->a[195275] = sym__brace_start;
	v->a[195276] = actions(8736);
	v->a[195277] = 1;
	v->a[195278] = anon_sym_RPAREN;
	v->a[195279] = state(5365);
	small_parse_table_9764(v);
}

void	small_parse_table_9764(t_small_parse_table_array *v)
{
	v->a[195280] = 1;
	v->a[195281] = aux_sym__literal_repeat1;
	v->a[195282] = actions(8567);
	v->a[195283] = 2;
	v->a[195284] = anon_sym_LPAREN_LPAREN;
	v->a[195285] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195286] = actions(8579);
	v->a[195287] = 2;
	v->a[195288] = sym_raw_string;
	v->a[195289] = sym_ansi_c_string;
	v->a[195290] = actions(8593);
	v->a[195291] = 2;
	v->a[195292] = anon_sym_LT_LPAREN;
	v->a[195293] = anon_sym_GT_LPAREN;
	v->a[195294] = state(3595);
	v->a[195295] = 2;
	v->a[195296] = sym_concatenation;
	v->a[195297] = aux_sym_for_statement_repeat1;
	v->a[195298] = state(5045);
	v->a[195299] = 9;
	small_parse_table_9765(v);
}

/* EOF small_parse_table_1952.c */
