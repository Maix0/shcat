/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_73.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_365(t_small_parse_table_array *v)
{
	v->a[7300] = anon_sym_GT;
	v->a[7301] = anon_sym_LT_LT;
	v->a[7302] = anon_sym_GT_GT;
	v->a[7303] = anon_sym_PIPE_AMP;
	v->a[7304] = anon_sym_AMP_GT;
	v->a[7305] = anon_sym_AMP_GT_GT;
	v->a[7306] = anon_sym_LT_AMP;
	v->a[7307] = anon_sym_GT_AMP;
	v->a[7308] = anon_sym_GT_PIPE;
	v->a[7309] = anon_sym_LT_AMP_DASH;
	v->a[7310] = anon_sym_GT_AMP_DASH;
	v->a[7311] = anon_sym_LT_LT_DASH;
	v->a[7312] = 6;
	v->a[7313] = actions(3);
	v->a[7314] = 1;
	v->a[7315] = sym_comment;
	v->a[7316] = state(1567);
	v->a[7317] = 1;
	v->a[7318] = aux_sym__literal_repeat1;
	v->a[7319] = state(609);
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = 2;
	v->a[7321] = sym_concatenation;
	v->a[7322] = aux_sym_for_statement_repeat1;
	v->a[7323] = actions(2096);
	v->a[7324] = 5;
	v->a[7325] = sym_file_descriptor;
	v->a[7326] = sym_variable_name;
	v->a[7327] = sym_test_operator;
	v->a[7328] = sym__brace_start;
	v->a[7329] = aux_sym_heredoc_redirect_token1;
	v->a[7330] = state(1269);
	v->a[7331] = 9;
	v->a[7332] = sym_arithmetic_expansion;
	v->a[7333] = sym_brace_expression;
	v->a[7334] = sym_string;
	v->a[7335] = sym_translated_string;
	v->a[7336] = sym_number;
	v->a[7337] = sym_simple_expansion;
	v->a[7338] = sym_expansion;
	v->a[7339] = sym_command_substitution;
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = sym_process_substitution;
	v->a[7341] = actions(2094);
	v->a[7342] = 39;
	v->a[7343] = anon_sym_LPAREN_LPAREN;
	v->a[7344] = anon_sym_SEMI;
	v->a[7345] = anon_sym_PIPE_PIPE;
	v->a[7346] = anon_sym_AMP_AMP;
	v->a[7347] = anon_sym_PIPE;
	v->a[7348] = anon_sym_AMP;
	v->a[7349] = anon_sym_LT;
	v->a[7350] = anon_sym_GT;
	v->a[7351] = anon_sym_LT_LT;
	v->a[7352] = anon_sym_GT_GT;
	v->a[7353] = anon_sym_SEMI_SEMI;
	v->a[7354] = anon_sym_SEMI_AMP;
	v->a[7355] = anon_sym_SEMI_SEMI_AMP;
	v->a[7356] = anon_sym_PIPE_AMP;
	v->a[7357] = anon_sym_AMP_GT;
	v->a[7358] = anon_sym_AMP_GT_GT;
	v->a[7359] = anon_sym_LT_AMP;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = anon_sym_GT_AMP;
	v->a[7361] = anon_sym_GT_PIPE;
	v->a[7362] = anon_sym_LT_AMP_DASH;
	v->a[7363] = anon_sym_GT_AMP_DASH;
	v->a[7364] = anon_sym_LT_LT_DASH;
	v->a[7365] = anon_sym_LT_LT_LT;
	v->a[7366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7367] = anon_sym_DOLLAR_LBRACK;
	v->a[7368] = anon_sym_DOLLAR;
	v->a[7369] = sym__special_character;
	v->a[7370] = anon_sym_DQUOTE;
	v->a[7371] = sym_raw_string;
	v->a[7372] = sym_ansi_c_string;
	v->a[7373] = aux_sym_number_token1;
	v->a[7374] = aux_sym_number_token2;
	v->a[7375] = anon_sym_DOLLAR_LBRACE;
	v->a[7376] = anon_sym_DOLLAR_LPAREN;
	v->a[7377] = anon_sym_BQUOTE;
	v->a[7378] = anon_sym_DOLLAR_BQUOTE;
	v->a[7379] = anon_sym_LT_LPAREN;
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = anon_sym_GT_LPAREN;
	v->a[7381] = sym_word;
	v->a[7382] = 24;
	v->a[7383] = actions(3);
	v->a[7384] = 1;
	v->a[7385] = sym_comment;
	v->a[7386] = actions(2261);
	v->a[7387] = 1;
	v->a[7388] = anon_sym_DOLLAR_LBRACK;
	v->a[7389] = actions(2263);
	v->a[7390] = 1;
	v->a[7391] = anon_sym_DOLLAR;
	v->a[7392] = actions(2267);
	v->a[7393] = 1;
	v->a[7394] = anon_sym_DQUOTE;
	v->a[7395] = actions(2269);
	v->a[7396] = 1;
	v->a[7397] = aux_sym_number_token1;
	v->a[7398] = actions(2271);
	v->a[7399] = 1;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
