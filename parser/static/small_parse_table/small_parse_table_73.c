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
	v->a[7300] = actions(1766);
	v->a[7301] = 1;
	v->a[7302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7303] = actions(1769);
	v->a[7304] = 1;
	v->a[7305] = anon_sym_DOLLAR;
	v->a[7306] = actions(1772);
	v->a[7307] = 1;
	v->a[7308] = sym__special_character;
	v->a[7309] = actions(1775);
	v->a[7310] = 1;
	v->a[7311] = anon_sym_DQUOTE;
	v->a[7312] = actions(1778);
	v->a[7313] = 1;
	v->a[7314] = aux_sym_number_token1;
	v->a[7315] = actions(1781);
	v->a[7316] = 1;
	v->a[7317] = aux_sym_number_token2;
	v->a[7318] = actions(1784);
	v->a[7319] = 1;
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = anon_sym_DOLLAR_LBRACE;
	v->a[7321] = actions(1787);
	v->a[7322] = 1;
	v->a[7323] = anon_sym_DOLLAR_LPAREN;
	v->a[7324] = actions(1790);
	v->a[7325] = 1;
	v->a[7326] = anon_sym_BQUOTE;
	v->a[7327] = actions(1793);
	v->a[7328] = 1;
	v->a[7329] = anon_sym_DOLLAR_BQUOTE;
	v->a[7330] = actions(1796);
	v->a[7331] = 1;
	v->a[7332] = sym_test_operator;
	v->a[7333] = actions(1799);
	v->a[7334] = 1;
	v->a[7335] = sym__brace_start;
	v->a[7336] = state(1240);
	v->a[7337] = 1;
	v->a[7338] = aux_sym__literal_repeat1;
	v->a[7339] = actions(1763);
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = 2;
	v->a[7341] = sym_raw_string;
	v->a[7342] = sym_word;
	v->a[7343] = state(350);
	v->a[7344] = 2;
	v->a[7345] = sym_concatenation;
	v->a[7346] = aux_sym_for_statement_repeat1;
	v->a[7347] = actions(1287);
	v->a[7348] = 4;
	v->a[7349] = sym_file_descriptor;
	v->a[7350] = sym_variable_name;
	v->a[7351] = ts_builtin_sym_end;
	v->a[7352] = aux_sym_heredoc_redirect_token1;
	v->a[7353] = state(776);
	v->a[7354] = 7;
	v->a[7355] = sym_arithmetic_expansion;
	v->a[7356] = sym_brace_expression;
	v->a[7357] = sym_string;
	v->a[7358] = sym_number;
	v->a[7359] = sym_simple_expansion;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = sym_expansion;
	v->a[7361] = sym_command_substitution;
	v->a[7362] = actions(1285);
	v->a[7363] = 19;
	v->a[7364] = anon_sym_PIPE;
	v->a[7365] = anon_sym_SEMI_SEMI;
	v->a[7366] = anon_sym_PIPE_AMP;
	v->a[7367] = anon_sym_AMP_AMP;
	v->a[7368] = anon_sym_PIPE_PIPE;
	v->a[7369] = anon_sym_LT;
	v->a[7370] = anon_sym_GT;
	v->a[7371] = anon_sym_GT_GT;
	v->a[7372] = anon_sym_AMP_GT;
	v->a[7373] = anon_sym_AMP_GT_GT;
	v->a[7374] = anon_sym_LT_AMP;
	v->a[7375] = anon_sym_GT_AMP;
	v->a[7376] = anon_sym_GT_PIPE;
	v->a[7377] = anon_sym_LT_AMP_DASH;
	v->a[7378] = anon_sym_GT_AMP_DASH;
	v->a[7379] = anon_sym_LT_LT;
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = anon_sym_LT_LT_DASH;
	v->a[7381] = anon_sym_AMP;
	v->a[7382] = anon_sym_SEMI;
	v->a[7383] = 6;
	v->a[7384] = actions(3);
	v->a[7385] = 1;
	v->a[7386] = sym_comment;
	v->a[7387] = actions(1727);
	v->a[7388] = 1;
	v->a[7389] = sym_variable_name;
	v->a[7390] = actions(1725);
	v->a[7391] = 2;
	v->a[7392] = aux_sym__simple_variable_name_token1;
	v->a[7393] = aux_sym__multiline_variable_name_token1;
	v->a[7394] = actions(816);
	v->a[7395] = 3;
	v->a[7396] = sym_file_descriptor;
	v->a[7397] = sym_test_operator;
	v->a[7398] = sym__brace_start;
	v->a[7399] = actions(1723);
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
