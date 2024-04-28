/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_282.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1410(t_small_parse_table_array *v)
{
	v->a[28200] = sym__special_character;
	v->a[28201] = anon_sym_DQUOTE;
	v->a[28202] = sym_raw_string;
	v->a[28203] = sym_ansi_c_string;
	v->a[28204] = aux_sym_number_token1;
	v->a[28205] = aux_sym_number_token2;
	v->a[28206] = anon_sym_DOLLAR_LBRACE;
	v->a[28207] = anon_sym_DOLLAR_LPAREN;
	v->a[28208] = anon_sym_BQUOTE;
	v->a[28209] = anon_sym_DOLLAR_BQUOTE;
	v->a[28210] = anon_sym_LT_LPAREN;
	v->a[28211] = anon_sym_GT_LPAREN;
	v->a[28212] = sym_word;
	v->a[28213] = 6;
	v->a[28214] = actions(3);
	v->a[28215] = 1;
	v->a[28216] = sym_comment;
	v->a[28217] = state(1739);
	v->a[28218] = 1;
	v->a[28219] = aux_sym__literal_repeat1;
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = state(1953);
	v->a[28221] = 1;
	v->a[28222] = sym_concatenation;
	v->a[28223] = actions(2496);
	v->a[28224] = 5;
	v->a[28225] = sym_file_descriptor;
	v->a[28226] = sym_variable_name;
	v->a[28227] = sym_test_operator;
	v->a[28228] = sym__brace_start;
	v->a[28229] = aux_sym_heredoc_redirect_token1;
	v->a[28230] = state(2328);
	v->a[28231] = 9;
	v->a[28232] = sym_arithmetic_expansion;
	v->a[28233] = sym_brace_expression;
	v->a[28234] = sym_string;
	v->a[28235] = sym_translated_string;
	v->a[28236] = sym_number;
	v->a[28237] = sym_simple_expansion;
	v->a[28238] = sym_expansion;
	v->a[28239] = sym_command_substitution;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = sym_process_substitution;
	v->a[28241] = actions(2494);
	v->a[28242] = 34;
	v->a[28243] = anon_sym_LPAREN_LPAREN;
	v->a[28244] = anon_sym_PIPE_PIPE;
	v->a[28245] = anon_sym_AMP_AMP;
	v->a[28246] = anon_sym_PIPE;
	v->a[28247] = anon_sym_LT;
	v->a[28248] = anon_sym_GT;
	v->a[28249] = anon_sym_LT_LT;
	v->a[28250] = anon_sym_GT_GT;
	v->a[28251] = anon_sym_PIPE_AMP;
	v->a[28252] = anon_sym_AMP_GT;
	v->a[28253] = anon_sym_AMP_GT_GT;
	v->a[28254] = anon_sym_LT_AMP;
	v->a[28255] = anon_sym_GT_AMP;
	v->a[28256] = anon_sym_GT_PIPE;
	v->a[28257] = anon_sym_LT_AMP_DASH;
	v->a[28258] = anon_sym_GT_AMP_DASH;
	v->a[28259] = anon_sym_LT_LT_DASH;
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = anon_sym_LT_LT_LT;
	v->a[28261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28262] = anon_sym_DOLLAR_LBRACK;
	v->a[28263] = anon_sym_DOLLAR;
	v->a[28264] = sym__special_character;
	v->a[28265] = anon_sym_DQUOTE;
	v->a[28266] = sym_raw_string;
	v->a[28267] = sym_ansi_c_string;
	v->a[28268] = aux_sym_number_token1;
	v->a[28269] = aux_sym_number_token2;
	v->a[28270] = anon_sym_DOLLAR_LBRACE;
	v->a[28271] = anon_sym_DOLLAR_LPAREN;
	v->a[28272] = anon_sym_BQUOTE;
	v->a[28273] = anon_sym_DOLLAR_BQUOTE;
	v->a[28274] = anon_sym_LT_LPAREN;
	v->a[28275] = anon_sym_GT_LPAREN;
	v->a[28276] = sym_word;
	v->a[28277] = 6;
	v->a[28278] = actions(3);
	v->a[28279] = 1;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = sym_comment;
	v->a[28281] = actions(4389);
	v->a[28282] = 1;
	v->a[28283] = aux_sym_concatenation_token1;
	v->a[28284] = actions(4391);
	v->a[28285] = 1;
	v->a[28286] = sym__concat;
	v->a[28287] = state(841);
	v->a[28288] = 1;
	v->a[28289] = aux_sym_concatenation_repeat1;
	v->a[28290] = actions(1267);
	v->a[28291] = 5;
	v->a[28292] = sym_file_descriptor;
	v->a[28293] = sym_test_operator;
	v->a[28294] = sym__bare_dollar;
	v->a[28295] = sym__brace_start;
	v->a[28296] = aux_sym_heredoc_redirect_token1;
	v->a[28297] = actions(1265);
	v->a[28298] = 42;
	v->a[28299] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
