/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_983.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4915(t_small_parse_table_array *v)
{
	v->a[98300] = actions(352);
	v->a[98301] = 2;
	v->a[98302] = anon_sym_LPAREN_LPAREN;
	v->a[98303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98304] = actions(373);
	v->a[98305] = 2;
	v->a[98306] = sym_raw_string;
	v->a[98307] = sym_ansi_c_string;
	v->a[98308] = actions(387);
	v->a[98309] = 2;
	v->a[98310] = anon_sym_LT_LPAREN;
	v->a[98311] = anon_sym_GT_LPAREN;
	v->a[98312] = state(3071);
	v->a[98313] = 6;
	v->a[98314] = sym_binary_expression;
	v->a[98315] = sym_ternary_expression;
	v->a[98316] = sym_unary_expression;
	v->a[98317] = sym_postfix_expression;
	v->a[98318] = sym_parenthesized_expression;
	v->a[98319] = sym_concatenation;
	small_parse_table_4916(v);
}

void	small_parse_table_4916(t_small_parse_table_array *v)
{
	v->a[98320] = state(2521);
	v->a[98321] = 9;
	v->a[98322] = sym_arithmetic_expansion;
	v->a[98323] = sym_brace_expression;
	v->a[98324] = sym_string;
	v->a[98325] = sym_translated_string;
	v->a[98326] = sym_number;
	v->a[98327] = sym_simple_expansion;
	v->a[98328] = sym_expansion;
	v->a[98329] = sym_command_substitution;
	v->a[98330] = sym_process_substitution;
	v->a[98331] = 3;
	v->a[98332] = actions(3);
	v->a[98333] = 1;
	v->a[98334] = sym_comment;
	v->a[98335] = actions(1334);
	v->a[98336] = 6;
	v->a[98337] = sym_file_descriptor;
	v->a[98338] = sym__concat;
	v->a[98339] = sym_test_operator;
	small_parse_table_4917(v);
}

void	small_parse_table_4917(t_small_parse_table_array *v)
{
	v->a[98340] = sym__brace_start;
	v->a[98341] = ts_builtin_sym_end;
	v->a[98342] = aux_sym_heredoc_redirect_token1;
	v->a[98343] = actions(1332);
	v->a[98344] = 37;
	v->a[98345] = anon_sym_LPAREN_LPAREN;
	v->a[98346] = anon_sym_SEMI;
	v->a[98347] = anon_sym_PIPE_PIPE;
	v->a[98348] = anon_sym_AMP_AMP;
	v->a[98349] = anon_sym_PIPE;
	v->a[98350] = anon_sym_AMP;
	v->a[98351] = anon_sym_LT;
	v->a[98352] = anon_sym_GT;
	v->a[98353] = anon_sym_LT_LT;
	v->a[98354] = anon_sym_GT_GT;
	v->a[98355] = anon_sym_SEMI_SEMI;
	v->a[98356] = anon_sym_PIPE_AMP;
	v->a[98357] = anon_sym_AMP_GT;
	v->a[98358] = anon_sym_AMP_GT_GT;
	v->a[98359] = anon_sym_LT_AMP;
	small_parse_table_4918(v);
}

void	small_parse_table_4918(t_small_parse_table_array *v)
{
	v->a[98360] = anon_sym_GT_AMP;
	v->a[98361] = anon_sym_GT_PIPE;
	v->a[98362] = anon_sym_LT_AMP_DASH;
	v->a[98363] = anon_sym_GT_AMP_DASH;
	v->a[98364] = anon_sym_LT_LT_DASH;
	v->a[98365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98366] = anon_sym_DOLLAR_LBRACK;
	v->a[98367] = aux_sym_concatenation_token1;
	v->a[98368] = anon_sym_DOLLAR;
	v->a[98369] = sym__special_character;
	v->a[98370] = anon_sym_DQUOTE;
	v->a[98371] = sym_raw_string;
	v->a[98372] = sym_ansi_c_string;
	v->a[98373] = aux_sym_number_token1;
	v->a[98374] = aux_sym_number_token2;
	v->a[98375] = anon_sym_DOLLAR_LBRACE;
	v->a[98376] = anon_sym_DOLLAR_LPAREN;
	v->a[98377] = anon_sym_BQUOTE;
	v->a[98378] = anon_sym_DOLLAR_BQUOTE;
	v->a[98379] = anon_sym_LT_LPAREN;
	small_parse_table_4919(v);
}

void	small_parse_table_4919(t_small_parse_table_array *v)
{
	v->a[98380] = anon_sym_GT_LPAREN;
	v->a[98381] = sym_word;
	v->a[98382] = 26;
	v->a[98383] = actions(71);
	v->a[98384] = 1;
	v->a[98385] = sym_comment;
	v->a[98386] = actions(187);
	v->a[98387] = 1;
	v->a[98388] = anon_sym_TILDE;
	v->a[98389] = actions(350);
	v->a[98390] = 1;
	v->a[98391] = sym_word;
	v->a[98392] = actions(359);
	v->a[98393] = 1;
	v->a[98394] = anon_sym_LPAREN;
	v->a[98395] = actions(361);
	v->a[98396] = 1;
	v->a[98397] = anon_sym_BANG;
	v->a[98398] = actions(363);
	v->a[98399] = 1;
	small_parse_table_4920(v);
}

/* EOF small_parse_table_983.c */
