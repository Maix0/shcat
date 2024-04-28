/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_152.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_760(t_small_parse_table_array *v)
{
	v->a[15200] = 2;
	v->a[15201] = anon_sym_LT_LPAREN;
	v->a[15202] = anon_sym_GT_LPAREN;
	v->a[15203] = actions(1627);
	v->a[15204] = 2;
	v->a[15205] = sym_file_descriptor;
	v->a[15206] = aux_sym_heredoc_redirect_token1;
	v->a[15207] = actions(2418);
	v->a[15208] = 2;
	v->a[15209] = anon_sym_EQ_EQ;
	v->a[15210] = anon_sym_EQ_TILDE;
	v->a[15211] = actions(2416);
	v->a[15212] = 3;
	v->a[15213] = sym_raw_string;
	v->a[15214] = sym_ansi_c_string;
	v->a[15215] = sym_word;
	v->a[15216] = state(1794);
	v->a[15217] = 9;
	v->a[15218] = sym_arithmetic_expansion;
	v->a[15219] = sym_brace_expression;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = sym_string;
	v->a[15221] = sym_translated_string;
	v->a[15222] = sym_number;
	v->a[15223] = sym_simple_expansion;
	v->a[15224] = sym_expansion;
	v->a[15225] = sym_command_substitution;
	v->a[15226] = sym_process_substitution;
	v->a[15227] = actions(1625);
	v->a[15228] = 16;
	v->a[15229] = anon_sym_PIPE_PIPE;
	v->a[15230] = anon_sym_AMP_AMP;
	v->a[15231] = anon_sym_PIPE;
	v->a[15232] = anon_sym_LT;
	v->a[15233] = anon_sym_GT;
	v->a[15234] = anon_sym_LT_LT;
	v->a[15235] = anon_sym_GT_GT;
	v->a[15236] = anon_sym_PIPE_AMP;
	v->a[15237] = anon_sym_AMP_GT;
	v->a[15238] = anon_sym_AMP_GT_GT;
	v->a[15239] = anon_sym_LT_AMP;
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = anon_sym_GT_AMP;
	v->a[15241] = anon_sym_GT_PIPE;
	v->a[15242] = anon_sym_LT_AMP_DASH;
	v->a[15243] = anon_sym_GT_AMP_DASH;
	v->a[15244] = anon_sym_LT_LT_DASH;
	v->a[15245] = 6;
	v->a[15246] = actions(3);
	v->a[15247] = 1;
	v->a[15248] = sym_comment;
	v->a[15249] = state(1895);
	v->a[15250] = 1;
	v->a[15251] = aux_sym__literal_repeat1;
	v->a[15252] = state(2117);
	v->a[15253] = 1;
	v->a[15254] = sym_concatenation;
	v->a[15255] = actions(2500);
	v->a[15256] = 6;
	v->a[15257] = sym_file_descriptor;
	v->a[15258] = sym_variable_name;
	v->a[15259] = sym_test_operator;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = sym__brace_start;
	v->a[15261] = ts_builtin_sym_end;
	v->a[15262] = aux_sym_heredoc_redirect_token1;
	v->a[15263] = state(1397);
	v->a[15264] = 9;
	v->a[15265] = sym_arithmetic_expansion;
	v->a[15266] = sym_brace_expression;
	v->a[15267] = sym_string;
	v->a[15268] = sym_translated_string;
	v->a[15269] = sym_number;
	v->a[15270] = sym_simple_expansion;
	v->a[15271] = sym_expansion;
	v->a[15272] = sym_command_substitution;
	v->a[15273] = sym_process_substitution;
	v->a[15274] = actions(2498);
	v->a[15275] = 37;
	v->a[15276] = anon_sym_LPAREN_LPAREN;
	v->a[15277] = anon_sym_SEMI;
	v->a[15278] = anon_sym_PIPE_PIPE;
	v->a[15279] = anon_sym_AMP_AMP;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = anon_sym_PIPE;
	v->a[15281] = anon_sym_AMP;
	v->a[15282] = anon_sym_LT;
	v->a[15283] = anon_sym_GT;
	v->a[15284] = anon_sym_LT_LT;
	v->a[15285] = anon_sym_GT_GT;
	v->a[15286] = anon_sym_SEMI_SEMI;
	v->a[15287] = anon_sym_PIPE_AMP;
	v->a[15288] = anon_sym_AMP_GT;
	v->a[15289] = anon_sym_AMP_GT_GT;
	v->a[15290] = anon_sym_LT_AMP;
	v->a[15291] = anon_sym_GT_AMP;
	v->a[15292] = anon_sym_GT_PIPE;
	v->a[15293] = anon_sym_LT_AMP_DASH;
	v->a[15294] = anon_sym_GT_AMP_DASH;
	v->a[15295] = anon_sym_LT_LT_DASH;
	v->a[15296] = anon_sym_LT_LT_LT;
	v->a[15297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15298] = anon_sym_DOLLAR_LBRACK;
	v->a[15299] = anon_sym_DOLLAR;
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
