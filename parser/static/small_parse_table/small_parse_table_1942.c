/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1942.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9710(t_small_parse_table_array *v)
{
	v->a[194200] = actions(8571);
	v->a[194201] = 1;
	v->a[194202] = anon_sym_DOLLAR_LBRACK;
	v->a[194203] = actions(8573);
	v->a[194204] = 1;
	v->a[194205] = anon_sym_DOLLAR;
	v->a[194206] = actions(8575);
	v->a[194207] = 1;
	v->a[194208] = sym__special_character;
	v->a[194209] = actions(8577);
	v->a[194210] = 1;
	v->a[194211] = anon_sym_DQUOTE;
	v->a[194212] = actions(8581);
	v->a[194213] = 1;
	v->a[194214] = aux_sym_number_token1;
	v->a[194215] = actions(8583);
	v->a[194216] = 1;
	v->a[194217] = aux_sym_number_token2;
	v->a[194218] = actions(8585);
	v->a[194219] = 1;
	small_parse_table_9711(v);
}

void	small_parse_table_9711(t_small_parse_table_array *v)
{
	v->a[194220] = anon_sym_DOLLAR_LBRACE;
	v->a[194221] = actions(8587);
	v->a[194222] = 1;
	v->a[194223] = anon_sym_DOLLAR_LPAREN;
	v->a[194224] = actions(8589);
	v->a[194225] = 1;
	v->a[194226] = anon_sym_BQUOTE;
	v->a[194227] = actions(8591);
	v->a[194228] = 1;
	v->a[194229] = anon_sym_DOLLAR_BQUOTE;
	v->a[194230] = actions(8595);
	v->a[194231] = 1;
	v->a[194232] = sym_test_operator;
	v->a[194233] = actions(8597);
	v->a[194234] = 1;
	v->a[194235] = sym__brace_start;
	v->a[194236] = actions(8708);
	v->a[194237] = 1;
	v->a[194238] = anon_sym_RPAREN;
	v->a[194239] = state(5365);
	small_parse_table_9712(v);
}

void	small_parse_table_9712(t_small_parse_table_array *v)
{
	v->a[194240] = 1;
	v->a[194241] = aux_sym__literal_repeat1;
	v->a[194242] = actions(8567);
	v->a[194243] = 2;
	v->a[194244] = anon_sym_LPAREN_LPAREN;
	v->a[194245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194246] = actions(8579);
	v->a[194247] = 2;
	v->a[194248] = sym_raw_string;
	v->a[194249] = sym_ansi_c_string;
	v->a[194250] = actions(8593);
	v->a[194251] = 2;
	v->a[194252] = anon_sym_LT_LPAREN;
	v->a[194253] = anon_sym_GT_LPAREN;
	v->a[194254] = state(3604);
	v->a[194255] = 2;
	v->a[194256] = sym_concatenation;
	v->a[194257] = aux_sym_for_statement_repeat1;
	v->a[194258] = state(5045);
	v->a[194259] = 9;
	small_parse_table_9713(v);
}

void	small_parse_table_9713(t_small_parse_table_array *v)
{
	v->a[194260] = sym_arithmetic_expansion;
	v->a[194261] = sym_brace_expression;
	v->a[194262] = sym_string;
	v->a[194263] = sym_translated_string;
	v->a[194264] = sym_number;
	v->a[194265] = sym_simple_expansion;
	v->a[194266] = sym_expansion;
	v->a[194267] = sym_command_substitution;
	v->a[194268] = sym_process_substitution;
	v->a[194269] = 21;
	v->a[194270] = actions(71);
	v->a[194271] = 1;
	v->a[194272] = sym_comment;
	v->a[194273] = actions(8565);
	v->a[194274] = 1;
	v->a[194275] = sym_word;
	v->a[194276] = actions(8571);
	v->a[194277] = 1;
	v->a[194278] = anon_sym_DOLLAR_LBRACK;
	v->a[194279] = actions(8573);
	small_parse_table_9714(v);
}

void	small_parse_table_9714(t_small_parse_table_array *v)
{
	v->a[194280] = 1;
	v->a[194281] = anon_sym_DOLLAR;
	v->a[194282] = actions(8575);
	v->a[194283] = 1;
	v->a[194284] = sym__special_character;
	v->a[194285] = actions(8577);
	v->a[194286] = 1;
	v->a[194287] = anon_sym_DQUOTE;
	v->a[194288] = actions(8581);
	v->a[194289] = 1;
	v->a[194290] = aux_sym_number_token1;
	v->a[194291] = actions(8583);
	v->a[194292] = 1;
	v->a[194293] = aux_sym_number_token2;
	v->a[194294] = actions(8585);
	v->a[194295] = 1;
	v->a[194296] = anon_sym_DOLLAR_LBRACE;
	v->a[194297] = actions(8587);
	v->a[194298] = 1;
	v->a[194299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9715(v);
}

/* EOF small_parse_table_1942.c */
