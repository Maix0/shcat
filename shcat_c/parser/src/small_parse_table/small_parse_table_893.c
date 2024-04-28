/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_893.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4465(t_small_parse_table_array *v)
{
	v->a[89300] = sym_raw_string;
	v->a[89301] = sym_ansi_c_string;
	v->a[89302] = actions(1089);
	v->a[89303] = 2;
	v->a[89304] = anon_sym_LT_LPAREN;
	v->a[89305] = anon_sym_GT_LPAREN;
	v->a[89306] = state(3053);
	v->a[89307] = 6;
	v->a[89308] = sym_binary_expression;
	v->a[89309] = sym_ternary_expression;
	v->a[89310] = sym_unary_expression;
	v->a[89311] = sym_postfix_expression;
	v->a[89312] = sym_parenthesized_expression;
	v->a[89313] = sym_concatenation;
	v->a[89314] = state(2500);
	v->a[89315] = 9;
	v->a[89316] = sym_arithmetic_expansion;
	v->a[89317] = sym_brace_expression;
	v->a[89318] = sym_string;
	v->a[89319] = sym_translated_string;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = sym_number;
	v->a[89321] = sym_simple_expansion;
	v->a[89322] = sym_expansion;
	v->a[89323] = sym_command_substitution;
	v->a[89324] = sym_process_substitution;
	v->a[89325] = 3;
	v->a[89326] = actions(3);
	v->a[89327] = 1;
	v->a[89328] = sym_comment;
	v->a[89329] = actions(1253);
	v->a[89330] = 5;
	v->a[89331] = sym_file_descriptor;
	v->a[89332] = sym__concat;
	v->a[89333] = sym_test_operator;
	v->a[89334] = sym__brace_start;
	v->a[89335] = aux_sym_heredoc_redirect_token1;
	v->a[89336] = actions(1251);
	v->a[89337] = 39;
	v->a[89338] = anon_sym_LPAREN_LPAREN;
	v->a[89339] = anon_sym_SEMI;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = anon_sym_PIPE_PIPE;
	v->a[89341] = anon_sym_AMP_AMP;
	v->a[89342] = anon_sym_PIPE;
	v->a[89343] = anon_sym_AMP;
	v->a[89344] = anon_sym_LT;
	v->a[89345] = anon_sym_GT;
	v->a[89346] = anon_sym_LT_LT;
	v->a[89347] = anon_sym_GT_GT;
	v->a[89348] = anon_sym_RPAREN;
	v->a[89349] = anon_sym_SEMI_SEMI;
	v->a[89350] = anon_sym_PIPE_AMP;
	v->a[89351] = anon_sym_AMP_GT;
	v->a[89352] = anon_sym_AMP_GT_GT;
	v->a[89353] = anon_sym_LT_AMP;
	v->a[89354] = anon_sym_GT_AMP;
	v->a[89355] = anon_sym_GT_PIPE;
	v->a[89356] = anon_sym_LT_AMP_DASH;
	v->a[89357] = anon_sym_GT_AMP_DASH;
	v->a[89358] = anon_sym_LT_LT_DASH;
	v->a[89359] = anon_sym_LT_LT_LT;
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89361] = anon_sym_DOLLAR_LBRACK;
	v->a[89362] = aux_sym_concatenation_token1;
	v->a[89363] = anon_sym_DOLLAR;
	v->a[89364] = sym__special_character;
	v->a[89365] = anon_sym_DQUOTE;
	v->a[89366] = sym_raw_string;
	v->a[89367] = sym_ansi_c_string;
	v->a[89368] = aux_sym_number_token1;
	v->a[89369] = aux_sym_number_token2;
	v->a[89370] = anon_sym_DOLLAR_LBRACE;
	v->a[89371] = anon_sym_DOLLAR_LPAREN;
	v->a[89372] = anon_sym_BQUOTE;
	v->a[89373] = anon_sym_DOLLAR_BQUOTE;
	v->a[89374] = anon_sym_LT_LPAREN;
	v->a[89375] = anon_sym_GT_LPAREN;
	v->a[89376] = sym_word;
	v->a[89377] = 3;
	v->a[89378] = actions(3);
	v->a[89379] = 1;
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = sym_comment;
	v->a[89381] = actions(1298);
	v->a[89382] = 6;
	v->a[89383] = sym_file_descriptor;
	v->a[89384] = sym__concat;
	v->a[89385] = sym_test_operator;
	v->a[89386] = sym__brace_start;
	v->a[89387] = ts_builtin_sym_end;
	v->a[89388] = aux_sym_heredoc_redirect_token1;
	v->a[89389] = actions(1296);
	v->a[89390] = 38;
	v->a[89391] = anon_sym_LPAREN_LPAREN;
	v->a[89392] = anon_sym_SEMI;
	v->a[89393] = anon_sym_PIPE_PIPE;
	v->a[89394] = anon_sym_AMP_AMP;
	v->a[89395] = anon_sym_PIPE;
	v->a[89396] = anon_sym_AMP;
	v->a[89397] = anon_sym_LT;
	v->a[89398] = anon_sym_GT;
	v->a[89399] = anon_sym_LT_LT;
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
