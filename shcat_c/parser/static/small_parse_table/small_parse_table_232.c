/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_232.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1160(t_small_parse_table_array *v)
{
	v->a[23200] = anon_sym_GT_GT;
	v->a[23201] = anon_sym_AMP_GT;
	v->a[23202] = anon_sym_AMP_GT_GT;
	v->a[23203] = anon_sym_LT_AMP;
	v->a[23204] = anon_sym_GT_AMP;
	v->a[23205] = anon_sym_GT_PIPE;
	v->a[23206] = state(5062);
	v->a[23207] = 9;
	v->a[23208] = sym_arithmetic_expansion;
	v->a[23209] = sym_brace_expression;
	v->a[23210] = sym_string;
	v->a[23211] = sym_translated_string;
	v->a[23212] = sym_number;
	v->a[23213] = sym_simple_expansion;
	v->a[23214] = sym_expansion;
	v->a[23215] = sym_command_substitution;
	v->a[23216] = sym_process_substitution;
	v->a[23217] = 6;
	v->a[23218] = actions(3);
	v->a[23219] = 1;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = sym_comment;
	v->a[23221] = state(1740);
	v->a[23222] = 1;
	v->a[23223] = aux_sym__literal_repeat1;
	v->a[23224] = state(1957);
	v->a[23225] = 1;
	v->a[23226] = sym_concatenation;
	v->a[23227] = actions(2500);
	v->a[23228] = 5;
	v->a[23229] = sym_file_descriptor;
	v->a[23230] = sym_variable_name;
	v->a[23231] = sym_test_operator;
	v->a[23232] = sym__brace_start;
	v->a[23233] = aux_sym_heredoc_redirect_token1;
	v->a[23234] = state(1560);
	v->a[23235] = 9;
	v->a[23236] = sym_arithmetic_expansion;
	v->a[23237] = sym_brace_expression;
	v->a[23238] = sym_string;
	v->a[23239] = sym_translated_string;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = sym_number;
	v->a[23241] = sym_simple_expansion;
	v->a[23242] = sym_expansion;
	v->a[23243] = sym_command_substitution;
	v->a[23244] = sym_process_substitution;
	v->a[23245] = actions(2498);
	v->a[23246] = 37;
	v->a[23247] = anon_sym_LPAREN_LPAREN;
	v->a[23248] = anon_sym_SEMI;
	v->a[23249] = anon_sym_PIPE_PIPE;
	v->a[23250] = anon_sym_AMP_AMP;
	v->a[23251] = anon_sym_PIPE;
	v->a[23252] = anon_sym_AMP;
	v->a[23253] = anon_sym_LT;
	v->a[23254] = anon_sym_GT;
	v->a[23255] = anon_sym_LT_LT;
	v->a[23256] = anon_sym_GT_GT;
	v->a[23257] = anon_sym_SEMI_SEMI;
	v->a[23258] = anon_sym_PIPE_AMP;
	v->a[23259] = anon_sym_AMP_GT;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = anon_sym_AMP_GT_GT;
	v->a[23261] = anon_sym_LT_AMP;
	v->a[23262] = anon_sym_GT_AMP;
	v->a[23263] = anon_sym_GT_PIPE;
	v->a[23264] = anon_sym_LT_AMP_DASH;
	v->a[23265] = anon_sym_GT_AMP_DASH;
	v->a[23266] = anon_sym_LT_LT_DASH;
	v->a[23267] = anon_sym_LT_LT_LT;
	v->a[23268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23269] = anon_sym_DOLLAR_LBRACK;
	v->a[23270] = anon_sym_DOLLAR;
	v->a[23271] = sym__special_character;
	v->a[23272] = anon_sym_DQUOTE;
	v->a[23273] = sym_raw_string;
	v->a[23274] = sym_ansi_c_string;
	v->a[23275] = aux_sym_number_token1;
	v->a[23276] = aux_sym_number_token2;
	v->a[23277] = anon_sym_DOLLAR_LBRACE;
	v->a[23278] = anon_sym_DOLLAR_LPAREN;
	v->a[23279] = anon_sym_BQUOTE;
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = anon_sym_DOLLAR_BQUOTE;
	v->a[23281] = anon_sym_LT_LPAREN;
	v->a[23282] = anon_sym_GT_LPAREN;
	v->a[23283] = sym_word;
	v->a[23284] = 21;
	v->a[23285] = actions(3);
	v->a[23286] = 1;
	v->a[23287] = sym_comment;
	v->a[23288] = actions(3580);
	v->a[23289] = 1;
	v->a[23290] = anon_sym_DQUOTE;
	v->a[23291] = actions(3610);
	v->a[23292] = 1;
	v->a[23293] = anon_sym_DOLLAR_LBRACK;
	v->a[23294] = actions(3612);
	v->a[23295] = 1;
	v->a[23296] = anon_sym_DOLLAR;
	v->a[23297] = actions(3614);
	v->a[23298] = 1;
	v->a[23299] = sym__special_character;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
