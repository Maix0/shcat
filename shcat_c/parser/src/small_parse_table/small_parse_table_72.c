/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_72.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_360(t_small_parse_table_array *v)
{
	v->a[7200] = 1;
	v->a[7201] = sym_comment;
	v->a[7202] = actions(19);
	v->a[7203] = 1;
	v->a[7204] = anon_sym_LPAREN;
	v->a[7205] = actions(1549);
	v->a[7206] = 1;
	v->a[7207] = anon_sym_DOLLAR_LBRACK;
	v->a[7208] = actions(1551);
	v->a[7209] = 1;
	v->a[7210] = anon_sym_DOLLAR;
	v->a[7211] = actions(1555);
	v->a[7212] = 1;
	v->a[7213] = anon_sym_DQUOTE;
	v->a[7214] = actions(1557);
	v->a[7215] = 1;
	v->a[7216] = aux_sym_number_token1;
	v->a[7217] = actions(1559);
	v->a[7218] = 1;
	v->a[7219] = aux_sym_number_token2;
	small_parse_table_361(v);
}

void	small_parse_table_361(t_small_parse_table_array *v)
{
	v->a[7220] = actions(1561);
	v->a[7221] = 1;
	v->a[7222] = anon_sym_DOLLAR_LBRACE;
	v->a[7223] = actions(1563);
	v->a[7224] = 1;
	v->a[7225] = anon_sym_DOLLAR_LPAREN;
	v->a[7226] = actions(1565);
	v->a[7227] = 1;
	v->a[7228] = anon_sym_BQUOTE;
	v->a[7229] = actions(1567);
	v->a[7230] = 1;
	v->a[7231] = anon_sym_DOLLAR_BQUOTE;
	v->a[7232] = actions(1573);
	v->a[7233] = 1;
	v->a[7234] = sym__bare_dollar;
	v->a[7235] = actions(1575);
	v->a[7236] = 1;
	v->a[7237] = sym__brace_start;
	v->a[7238] = actions(2420);
	v->a[7239] = 1;
	small_parse_table_362(v);
}

void	small_parse_table_362(t_small_parse_table_array *v)
{
	v->a[7240] = anon_sym_LT_LT_LT;
	v->a[7241] = actions(2422);
	v->a[7242] = 1;
	v->a[7243] = sym__special_character;
	v->a[7244] = actions(2424);
	v->a[7245] = 1;
	v->a[7246] = sym_test_operator;
	v->a[7247] = state(675);
	v->a[7248] = 1;
	v->a[7249] = aux_sym_command_repeat2;
	v->a[7250] = state(1321);
	v->a[7251] = 1;
	v->a[7252] = aux_sym__literal_repeat1;
	v->a[7253] = state(1712);
	v->a[7254] = 1;
	v->a[7255] = sym_herestring_redirect;
	v->a[7256] = state(1716);
	v->a[7257] = 1;
	v->a[7258] = sym_concatenation;
	v->a[7259] = state(4952);
	small_parse_table_363(v);
}

void	small_parse_table_363(t_small_parse_table_array *v)
{
	v->a[7260] = 1;
	v->a[7261] = sym_subshell;
	v->a[7262] = actions(1442);
	v->a[7263] = 2;
	v->a[7264] = sym_file_descriptor;
	v->a[7265] = aux_sym_heredoc_redirect_token1;
	v->a[7266] = actions(1543);
	v->a[7267] = 2;
	v->a[7268] = anon_sym_LPAREN_LPAREN;
	v->a[7269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7270] = actions(1569);
	v->a[7271] = 2;
	v->a[7272] = anon_sym_LT_LPAREN;
	v->a[7273] = anon_sym_GT_LPAREN;
	v->a[7274] = actions(2418);
	v->a[7275] = 2;
	v->a[7276] = anon_sym_EQ_EQ;
	v->a[7277] = anon_sym_EQ_TILDE;
	v->a[7278] = actions(2416);
	v->a[7279] = 3;
	small_parse_table_364(v);
}

void	small_parse_table_364(t_small_parse_table_array *v)
{
	v->a[7280] = sym_raw_string;
	v->a[7281] = sym_ansi_c_string;
	v->a[7282] = sym_word;
	v->a[7283] = state(1794);
	v->a[7284] = 9;
	v->a[7285] = sym_arithmetic_expansion;
	v->a[7286] = sym_brace_expression;
	v->a[7287] = sym_string;
	v->a[7288] = sym_translated_string;
	v->a[7289] = sym_number;
	v->a[7290] = sym_simple_expansion;
	v->a[7291] = sym_expansion;
	v->a[7292] = sym_command_substitution;
	v->a[7293] = sym_process_substitution;
	v->a[7294] = actions(1440);
	v->a[7295] = 16;
	v->a[7296] = anon_sym_PIPE_PIPE;
	v->a[7297] = anon_sym_AMP_AMP;
	v->a[7298] = anon_sym_PIPE;
	v->a[7299] = anon_sym_LT;
	small_parse_table_365(v);
}

/* EOF small_parse_table_72.c */
