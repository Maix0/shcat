/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1142.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5710(t_small_parse_table_array *v)
{
	v->a[114200] = sym_string;
	v->a[114201] = sym_translated_string;
	v->a[114202] = sym_number;
	v->a[114203] = sym_simple_expansion;
	v->a[114204] = sym_expansion;
	v->a[114205] = sym_command_substitution;
	v->a[114206] = sym_process_substitution;
	v->a[114207] = 3;
	v->a[114208] = actions(3);
	v->a[114209] = 1;
	v->a[114210] = sym_comment;
	v->a[114211] = actions(1253);
	v->a[114212] = 5;
	v->a[114213] = sym_file_descriptor;
	v->a[114214] = sym__concat;
	v->a[114215] = sym_test_operator;
	v->a[114216] = sym__brace_start;
	v->a[114217] = aux_sym_heredoc_redirect_token1;
	v->a[114218] = actions(1251);
	v->a[114219] = 38;
	small_parse_table_5711(v);
}

void	small_parse_table_5711(t_small_parse_table_array *v)
{
	v->a[114220] = anon_sym_LPAREN_LPAREN;
	v->a[114221] = anon_sym_SEMI;
	v->a[114222] = anon_sym_PIPE_PIPE;
	v->a[114223] = anon_sym_AMP_AMP;
	v->a[114224] = anon_sym_PIPE;
	v->a[114225] = anon_sym_AMP;
	v->a[114226] = anon_sym_LT;
	v->a[114227] = anon_sym_GT;
	v->a[114228] = anon_sym_LT_LT;
	v->a[114229] = anon_sym_GT_GT;
	v->a[114230] = anon_sym_RPAREN;
	v->a[114231] = anon_sym_SEMI_SEMI;
	v->a[114232] = anon_sym_PIPE_AMP;
	v->a[114233] = anon_sym_AMP_GT;
	v->a[114234] = anon_sym_AMP_GT_GT;
	v->a[114235] = anon_sym_LT_AMP;
	v->a[114236] = anon_sym_GT_AMP;
	v->a[114237] = anon_sym_GT_PIPE;
	v->a[114238] = anon_sym_LT_AMP_DASH;
	v->a[114239] = anon_sym_GT_AMP_DASH;
	small_parse_table_5712(v);
}

void	small_parse_table_5712(t_small_parse_table_array *v)
{
	v->a[114240] = anon_sym_LT_LT_DASH;
	v->a[114241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114242] = anon_sym_DOLLAR_LBRACK;
	v->a[114243] = aux_sym_concatenation_token1;
	v->a[114244] = anon_sym_DOLLAR;
	v->a[114245] = sym__special_character;
	v->a[114246] = anon_sym_DQUOTE;
	v->a[114247] = sym_raw_string;
	v->a[114248] = sym_ansi_c_string;
	v->a[114249] = aux_sym_number_token1;
	v->a[114250] = aux_sym_number_token2;
	v->a[114251] = anon_sym_DOLLAR_LBRACE;
	v->a[114252] = anon_sym_DOLLAR_LPAREN;
	v->a[114253] = anon_sym_BQUOTE;
	v->a[114254] = anon_sym_DOLLAR_BQUOTE;
	v->a[114255] = anon_sym_LT_LPAREN;
	v->a[114256] = anon_sym_GT_LPAREN;
	v->a[114257] = sym_word;
	v->a[114258] = 5;
	v->a[114259] = actions(71);
	small_parse_table_5713(v);
}

void	small_parse_table_5713(t_small_parse_table_array *v)
{
	v->a[114260] = 1;
	v->a[114261] = sym_comment;
	v->a[114262] = state(2135);
	v->a[114263] = 1;
	v->a[114264] = aux_sym_concatenation_repeat1;
	v->a[114265] = actions(6133);
	v->a[114266] = 2;
	v->a[114267] = sym__concat;
	v->a[114268] = aux_sym_concatenation_token1;
	v->a[114269] = actions(4530);
	v->a[114270] = 15;
	v->a[114271] = anon_sym_PIPE;
	v->a[114272] = anon_sym_EQ_EQ;
	v->a[114273] = anon_sym_LT;
	v->a[114274] = anon_sym_GT;
	v->a[114275] = anon_sym_LT_LT;
	v->a[114276] = anon_sym_EQ_TILDE;
	v->a[114277] = anon_sym_AMP_GT;
	v->a[114278] = anon_sym_LT_AMP;
	v->a[114279] = anon_sym_GT_AMP;
	small_parse_table_5714(v);
}

void	small_parse_table_5714(t_small_parse_table_array *v)
{
	v->a[114280] = anon_sym_DOLLAR;
	v->a[114281] = aux_sym_number_token1;
	v->a[114282] = aux_sym_number_token2;
	v->a[114283] = anon_sym_DOLLAR_LPAREN;
	v->a[114284] = anon_sym_BQUOTE;
	v->a[114285] = sym_word;
	v->a[114286] = actions(4532);
	v->a[114287] = 25;
	v->a[114288] = sym_file_descriptor;
	v->a[114289] = sym_test_operator;
	v->a[114290] = sym__bare_dollar;
	v->a[114291] = sym__brace_start;
	v->a[114292] = anon_sym_LPAREN_LPAREN;
	v->a[114293] = anon_sym_PIPE_PIPE;
	v->a[114294] = anon_sym_AMP_AMP;
	v->a[114295] = anon_sym_GT_GT;
	v->a[114296] = anon_sym_PIPE_AMP;
	v->a[114297] = anon_sym_AMP_GT_GT;
	v->a[114298] = anon_sym_GT_PIPE;
	v->a[114299] = anon_sym_LT_AMP_DASH;
	small_parse_table_5715(v);
}

/* EOF small_parse_table_1142.c */
