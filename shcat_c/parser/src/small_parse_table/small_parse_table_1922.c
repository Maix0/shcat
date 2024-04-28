/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1922.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9610(t_small_parse_table_array *v)
{
	v->a[192200] = sym_comment;
	v->a[192201] = actions(8565);
	v->a[192202] = 1;
	v->a[192203] = sym_word;
	v->a[192204] = actions(8569);
	v->a[192205] = 1;
	v->a[192206] = anon_sym_RPAREN;
	v->a[192207] = actions(8571);
	v->a[192208] = 1;
	v->a[192209] = anon_sym_DOLLAR_LBRACK;
	v->a[192210] = actions(8573);
	v->a[192211] = 1;
	v->a[192212] = anon_sym_DOLLAR;
	v->a[192213] = actions(8575);
	v->a[192214] = 1;
	v->a[192215] = sym__special_character;
	v->a[192216] = actions(8577);
	v->a[192217] = 1;
	v->a[192218] = anon_sym_DQUOTE;
	v->a[192219] = actions(8581);
	small_parse_table_9611(v);
}

void	small_parse_table_9611(t_small_parse_table_array *v)
{
	v->a[192220] = 1;
	v->a[192221] = aux_sym_number_token1;
	v->a[192222] = actions(8583);
	v->a[192223] = 1;
	v->a[192224] = aux_sym_number_token2;
	v->a[192225] = actions(8585);
	v->a[192226] = 1;
	v->a[192227] = anon_sym_DOLLAR_LBRACE;
	v->a[192228] = actions(8587);
	v->a[192229] = 1;
	v->a[192230] = anon_sym_DOLLAR_LPAREN;
	v->a[192231] = actions(8589);
	v->a[192232] = 1;
	v->a[192233] = anon_sym_BQUOTE;
	v->a[192234] = actions(8591);
	v->a[192235] = 1;
	v->a[192236] = anon_sym_DOLLAR_BQUOTE;
	v->a[192237] = actions(8595);
	v->a[192238] = 1;
	v->a[192239] = sym_test_operator;
	small_parse_table_9612(v);
}

void	small_parse_table_9612(t_small_parse_table_array *v)
{
	v->a[192240] = actions(8597);
	v->a[192241] = 1;
	v->a[192242] = sym__brace_start;
	v->a[192243] = state(5365);
	v->a[192244] = 1;
	v->a[192245] = aux_sym__literal_repeat1;
	v->a[192246] = actions(8567);
	v->a[192247] = 2;
	v->a[192248] = anon_sym_LPAREN_LPAREN;
	v->a[192249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192250] = actions(8579);
	v->a[192251] = 2;
	v->a[192252] = sym_raw_string;
	v->a[192253] = sym_ansi_c_string;
	v->a[192254] = actions(8593);
	v->a[192255] = 2;
	v->a[192256] = anon_sym_LT_LPAREN;
	v->a[192257] = anon_sym_GT_LPAREN;
	v->a[192258] = state(3604);
	v->a[192259] = 2;
	small_parse_table_9613(v);
}

void	small_parse_table_9613(t_small_parse_table_array *v)
{
	v->a[192260] = sym_concatenation;
	v->a[192261] = aux_sym_for_statement_repeat1;
	v->a[192262] = state(5045);
	v->a[192263] = 9;
	v->a[192264] = sym_arithmetic_expansion;
	v->a[192265] = sym_brace_expression;
	v->a[192266] = sym_string;
	v->a[192267] = sym_translated_string;
	v->a[192268] = sym_number;
	v->a[192269] = sym_simple_expansion;
	v->a[192270] = sym_expansion;
	v->a[192271] = sym_command_substitution;
	v->a[192272] = sym_process_substitution;
	v->a[192273] = 3;
	v->a[192274] = actions(71);
	v->a[192275] = 1;
	v->a[192276] = sym_comment;
	v->a[192277] = actions(4552);
	v->a[192278] = 10;
	v->a[192279] = anon_sym_LT;
	small_parse_table_9614(v);
}

void	small_parse_table_9614(t_small_parse_table_array *v)
{
	v->a[192280] = anon_sym_GT;
	v->a[192281] = anon_sym_AMP_GT;
	v->a[192282] = anon_sym_LT_AMP;
	v->a[192283] = anon_sym_GT_AMP;
	v->a[192284] = anon_sym_DOLLAR;
	v->a[192285] = aux_sym_number_token1;
	v->a[192286] = aux_sym_number_token2;
	v->a[192287] = anon_sym_DOLLAR_LPAREN;
	v->a[192288] = sym_word;
	v->a[192289] = actions(4554);
	v->a[192290] = 22;
	v->a[192291] = sym_file_descriptor;
	v->a[192292] = sym_variable_name;
	v->a[192293] = sym_test_operator;
	v->a[192294] = sym__brace_start;
	v->a[192295] = anon_sym_LPAREN_LPAREN;
	v->a[192296] = anon_sym_GT_GT;
	v->a[192297] = anon_sym_AMP_GT_GT;
	v->a[192298] = anon_sym_GT_PIPE;
	v->a[192299] = anon_sym_LT_AMP_DASH;
	small_parse_table_9615(v);
}

/* EOF small_parse_table_1922.c */
