/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_93.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_465(t_small_parse_table_array *v)
{
	v->a[9300] = anon_sym_BQUOTE;
	v->a[9301] = anon_sym_DOLLAR_BQUOTE;
	v->a[9302] = sym_word;
	v->a[9303] = anon_sym_SEMI;
	v->a[9304] = 20;
	v->a[9305] = actions(3);
	v->a[9306] = 1;
	v->a[9307] = sym_comment;
	v->a[9308] = actions(1737);
	v->a[9309] = 1;
	v->a[9310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9311] = actions(1739);
	v->a[9312] = 1;
	v->a[9313] = anon_sym_DOLLAR;
	v->a[9314] = actions(1741);
	v->a[9315] = 1;
	v->a[9316] = sym__special_character;
	v->a[9317] = actions(1743);
	v->a[9318] = 1;
	v->a[9319] = anon_sym_DQUOTE;
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = actions(1745);
	v->a[9321] = 1;
	v->a[9322] = aux_sym_number_token1;
	v->a[9323] = actions(1747);
	v->a[9324] = 1;
	v->a[9325] = aux_sym_number_token2;
	v->a[9326] = actions(1749);
	v->a[9327] = 1;
	v->a[9328] = anon_sym_DOLLAR_LBRACE;
	v->a[9329] = actions(1751);
	v->a[9330] = 1;
	v->a[9331] = anon_sym_DOLLAR_LPAREN;
	v->a[9332] = actions(1753);
	v->a[9333] = 1;
	v->a[9334] = anon_sym_BQUOTE;
	v->a[9335] = actions(1755);
	v->a[9336] = 1;
	v->a[9337] = anon_sym_DOLLAR_BQUOTE;
	v->a[9338] = actions(1759);
	v->a[9339] = 1;
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = sym_test_operator;
	v->a[9341] = actions(1761);
	v->a[9342] = 1;
	v->a[9343] = sym__brace_start;
	v->a[9344] = actions(2050);
	v->a[9345] = 1;
	v->a[9346] = aux_sym__simple_variable_name_token1;
	v->a[9347] = state(1219);
	v->a[9348] = 1;
	v->a[9349] = aux_sym__literal_repeat1;
	v->a[9350] = actions(1041);
	v->a[9351] = 2;
	v->a[9352] = sym_file_descriptor;
	v->a[9353] = aux_sym_heredoc_redirect_token1;
	v->a[9354] = actions(1735);
	v->a[9355] = 2;
	v->a[9356] = sym_raw_string;
	v->a[9357] = sym_word;
	v->a[9358] = state(379);
	v->a[9359] = 2;
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = sym_concatenation;
	v->a[9361] = aux_sym_unset_command_repeat1;
	v->a[9362] = state(920);
	v->a[9363] = 7;
	v->a[9364] = sym_arithmetic_expansion;
	v->a[9365] = sym_brace_expression;
	v->a[9366] = sym_string;
	v->a[9367] = sym_number;
	v->a[9368] = sym_simple_expansion;
	v->a[9369] = sym_expansion;
	v->a[9370] = sym_command_substitution;
	v->a[9371] = actions(1039);
	v->a[9372] = 20;
	v->a[9373] = anon_sym_PIPE;
	v->a[9374] = anon_sym_RPAREN;
	v->a[9375] = anon_sym_SEMI_SEMI;
	v->a[9376] = anon_sym_PIPE_AMP;
	v->a[9377] = anon_sym_AMP_AMP;
	v->a[9378] = anon_sym_PIPE_PIPE;
	v->a[9379] = anon_sym_LT;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = anon_sym_GT;
	v->a[9381] = anon_sym_GT_GT;
	v->a[9382] = anon_sym_AMP_GT;
	v->a[9383] = anon_sym_AMP_GT_GT;
	v->a[9384] = anon_sym_LT_AMP;
	v->a[9385] = anon_sym_GT_AMP;
	v->a[9386] = anon_sym_GT_PIPE;
	v->a[9387] = anon_sym_LT_AMP_DASH;
	v->a[9388] = anon_sym_GT_AMP_DASH;
	v->a[9389] = anon_sym_LT_LT;
	v->a[9390] = anon_sym_LT_LT_DASH;
	v->a[9391] = anon_sym_AMP;
	v->a[9392] = anon_sym_SEMI;
	v->a[9393] = 20;
	v->a[9394] = actions(3);
	v->a[9395] = 1;
	v->a[9396] = sym_comment;
	v->a[9397] = actions(2055);
	v->a[9398] = 1;
	v->a[9399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
