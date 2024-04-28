/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1043.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5215(t_small_parse_table_array *v)
{
	v->a[104300] = sym__brace_start;
	v->a[104301] = actions(3060);
	v->a[104302] = 1;
	v->a[104303] = anon_sym_BQUOTE;
	v->a[104304] = state(2484);
	v->a[104305] = 1;
	v->a[104306] = aux_sym__literal_repeat1;
	v->a[104307] = state(3037);
	v->a[104308] = 1;
	v->a[104309] = sym__expression;
	v->a[104310] = actions(1129);
	v->a[104311] = 2;
	v->a[104312] = anon_sym_LPAREN_LPAREN;
	v->a[104313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104314] = actions(1135);
	v->a[104315] = 2;
	v->a[104316] = anon_sym_PLUS_PLUS2;
	v->a[104317] = anon_sym_DASH_DASH2;
	v->a[104318] = actions(1137);
	v->a[104319] = 2;
	small_parse_table_5216(v);
}

void	small_parse_table_5216(t_small_parse_table_array *v)
{
	v->a[104320] = anon_sym_DASH2;
	v->a[104321] = anon_sym_PLUS2;
	v->a[104322] = actions(1151);
	v->a[104323] = 2;
	v->a[104324] = sym_raw_string;
	v->a[104325] = sym_ansi_c_string;
	v->a[104326] = actions(1165);
	v->a[104327] = 2;
	v->a[104328] = anon_sym_LT_LPAREN;
	v->a[104329] = anon_sym_GT_LPAREN;
	v->a[104330] = state(2594);
	v->a[104331] = 6;
	v->a[104332] = sym_binary_expression;
	v->a[104333] = sym_ternary_expression;
	v->a[104334] = sym_unary_expression;
	v->a[104335] = sym_postfix_expression;
	v->a[104336] = sym_parenthesized_expression;
	v->a[104337] = sym_concatenation;
	v->a[104338] = state(2573);
	v->a[104339] = 9;
	small_parse_table_5217(v);
}

void	small_parse_table_5217(t_small_parse_table_array *v)
{
	v->a[104340] = sym_arithmetic_expansion;
	v->a[104341] = sym_brace_expression;
	v->a[104342] = sym_string;
	v->a[104343] = sym_translated_string;
	v->a[104344] = sym_number;
	v->a[104345] = sym_simple_expansion;
	v->a[104346] = sym_expansion;
	v->a[104347] = sym_command_substitution;
	v->a[104348] = sym_process_substitution;
	v->a[104349] = 8;
	v->a[104350] = actions(3);
	v->a[104351] = 1;
	v->a[104352] = sym_comment;
	v->a[104353] = actions(5826);
	v->a[104354] = 1;
	v->a[104355] = aux_sym_heredoc_redirect_token1;
	v->a[104356] = actions(5828);
	v->a[104357] = 1;
	v->a[104358] = sym_file_descriptor;
	v->a[104359] = actions(6135);
	small_parse_table_5218(v);
}

void	small_parse_table_5218(t_small_parse_table_array *v)
{
	v->a[104360] = 1;
	v->a[104361] = anon_sym_RPAREN;
	v->a[104362] = actions(5831);
	v->a[104363] = 3;
	v->a[104364] = sym_variable_name;
	v->a[104365] = sym_test_operator;
	v->a[104366] = sym__brace_start;
	v->a[104367] = actions(5821);
	v->a[104368] = 9;
	v->a[104369] = anon_sym_SEMI;
	v->a[104370] = anon_sym_PIPE_PIPE;
	v->a[104371] = anon_sym_AMP_AMP;
	v->a[104372] = anon_sym_PIPE;
	v->a[104373] = anon_sym_AMP;
	v->a[104374] = anon_sym_LT_LT;
	v->a[104375] = anon_sym_SEMI_SEMI;
	v->a[104376] = anon_sym_PIPE_AMP;
	v->a[104377] = anon_sym_LT_LT_DASH;
	v->a[104378] = actions(5823);
	v->a[104379] = 11;
	small_parse_table_5219(v);
}

void	small_parse_table_5219(t_small_parse_table_array *v)
{
	v->a[104380] = anon_sym_LT;
	v->a[104381] = anon_sym_GT;
	v->a[104382] = anon_sym_GT_GT;
	v->a[104383] = anon_sym_AMP_GT;
	v->a[104384] = anon_sym_AMP_GT_GT;
	v->a[104385] = anon_sym_LT_AMP;
	v->a[104386] = anon_sym_GT_AMP;
	v->a[104387] = anon_sym_GT_PIPE;
	v->a[104388] = anon_sym_LT_AMP_DASH;
	v->a[104389] = anon_sym_GT_AMP_DASH;
	v->a[104390] = anon_sym_LT_LT_LT;
	v->a[104391] = actions(5819);
	v->a[104392] = 17;
	v->a[104393] = anon_sym_LPAREN_LPAREN;
	v->a[104394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104395] = anon_sym_DOLLAR_LBRACK;
	v->a[104396] = anon_sym_DOLLAR;
	v->a[104397] = sym__special_character;
	v->a[104398] = anon_sym_DQUOTE;
	v->a[104399] = sym_raw_string;
	small_parse_table_5220(v);
}

/* EOF small_parse_table_1043.c */
