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
	v->a[7200] = aux_sym_number_token2;
	v->a[7201] = anon_sym_DOLLAR_LBRACE;
	v->a[7202] = anon_sym_DOLLAR_LPAREN;
	v->a[7203] = anon_sym_BQUOTE;
	v->a[7204] = anon_sym_DOLLAR_BQUOTE;
	v->a[7205] = sym_word;
	v->a[7206] = anon_sym_SEMI;
	v->a[7207] = 20;
	v->a[7208] = actions(3);
	v->a[7209] = 1;
	v->a[7210] = sym_comment;
	v->a[7211] = actions(1737);
	v->a[7212] = 1;
	v->a[7213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7214] = actions(1739);
	v->a[7215] = 1;
	v->a[7216] = anon_sym_DOLLAR;
	v->a[7217] = actions(1741);
	v->a[7218] = 1;
	v->a[7219] = sym__special_character;
	small_parse_table_361(v);
}

void	small_parse_table_361(t_small_parse_table_array *v)
{
	v->a[7220] = actions(1743);
	v->a[7221] = 1;
	v->a[7222] = anon_sym_DQUOTE;
	v->a[7223] = actions(1745);
	v->a[7224] = 1;
	v->a[7225] = aux_sym_number_token1;
	v->a[7226] = actions(1747);
	v->a[7227] = 1;
	v->a[7228] = aux_sym_number_token2;
	v->a[7229] = actions(1749);
	v->a[7230] = 1;
	v->a[7231] = anon_sym_DOLLAR_LBRACE;
	v->a[7232] = actions(1751);
	v->a[7233] = 1;
	v->a[7234] = anon_sym_DOLLAR_LPAREN;
	v->a[7235] = actions(1753);
	v->a[7236] = 1;
	v->a[7237] = anon_sym_BQUOTE;
	v->a[7238] = actions(1755);
	v->a[7239] = 1;
	small_parse_table_362(v);
}

void	small_parse_table_362(t_small_parse_table_array *v)
{
	v->a[7240] = anon_sym_DOLLAR_BQUOTE;
	v->a[7241] = actions(1757);
	v->a[7242] = 1;
	v->a[7243] = aux_sym__simple_variable_name_token1;
	v->a[7244] = actions(1759);
	v->a[7245] = 1;
	v->a[7246] = sym_test_operator;
	v->a[7247] = actions(1761);
	v->a[7248] = 1;
	v->a[7249] = sym__brace_start;
	v->a[7250] = state(1219);
	v->a[7251] = 1;
	v->a[7252] = aux_sym__literal_repeat1;
	v->a[7253] = actions(1246);
	v->a[7254] = 2;
	v->a[7255] = sym_file_descriptor;
	v->a[7256] = aux_sym_heredoc_redirect_token1;
	v->a[7257] = actions(1735);
	v->a[7258] = 2;
	v->a[7259] = sym_raw_string;
	small_parse_table_363(v);
}

void	small_parse_table_363(t_small_parse_table_array *v)
{
	v->a[7260] = sym_word;
	v->a[7261] = state(378);
	v->a[7262] = 2;
	v->a[7263] = sym_concatenation;
	v->a[7264] = aux_sym_unset_command_repeat1;
	v->a[7265] = state(920);
	v->a[7266] = 7;
	v->a[7267] = sym_arithmetic_expansion;
	v->a[7268] = sym_brace_expression;
	v->a[7269] = sym_string;
	v->a[7270] = sym_number;
	v->a[7271] = sym_simple_expansion;
	v->a[7272] = sym_expansion;
	v->a[7273] = sym_command_substitution;
	v->a[7274] = actions(1244);
	v->a[7275] = 20;
	v->a[7276] = anon_sym_PIPE;
	v->a[7277] = anon_sym_RPAREN;
	v->a[7278] = anon_sym_SEMI_SEMI;
	v->a[7279] = anon_sym_PIPE_AMP;
	small_parse_table_364(v);
}

void	small_parse_table_364(t_small_parse_table_array *v)
{
	v->a[7280] = anon_sym_AMP_AMP;
	v->a[7281] = anon_sym_PIPE_PIPE;
	v->a[7282] = anon_sym_LT;
	v->a[7283] = anon_sym_GT;
	v->a[7284] = anon_sym_GT_GT;
	v->a[7285] = anon_sym_AMP_GT;
	v->a[7286] = anon_sym_AMP_GT_GT;
	v->a[7287] = anon_sym_LT_AMP;
	v->a[7288] = anon_sym_GT_AMP;
	v->a[7289] = anon_sym_GT_PIPE;
	v->a[7290] = anon_sym_LT_AMP_DASH;
	v->a[7291] = anon_sym_GT_AMP_DASH;
	v->a[7292] = anon_sym_LT_LT;
	v->a[7293] = anon_sym_LT_LT_DASH;
	v->a[7294] = anon_sym_AMP;
	v->a[7295] = anon_sym_SEMI;
	v->a[7296] = 19;
	v->a[7297] = actions(3);
	v->a[7298] = 1;
	v->a[7299] = sym_comment;
	small_parse_table_365(v);
}

/* EOF small_parse_table_72.c */
