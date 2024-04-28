/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2293.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11465(t_small_parse_table_array *v)
{
	v->a[229300] = actions(9392);
	v->a[229301] = 1;
	v->a[229302] = sym_variable_name;
	v->a[229303] = actions(10868);
	v->a[229304] = 1;
	v->a[229305] = aux_sym__simple_variable_name_token1;
	v->a[229306] = state(3391);
	v->a[229307] = 1;
	v->a[229308] = sym__arithmetic_binary_expression;
	v->a[229309] = state(3396);
	v->a[229310] = 1;
	v->a[229311] = sym__arithmetic_ternary_expression;
	v->a[229312] = state(3398);
	v->a[229313] = 1;
	v->a[229314] = sym__arithmetic_unary_expression;
	v->a[229315] = state(3400);
	v->a[229316] = 1;
	v->a[229317] = sym__arithmetic_postfix_expression;
	v->a[229318] = actions(9368);
	v->a[229319] = 2;
	small_parse_table_11466(v);
}

void	small_parse_table_11466(t_small_parse_table_array *v)
{
	v->a[229320] = anon_sym_PLUS_PLUS2;
	v->a[229321] = anon_sym_DASH_DASH2;
	v->a[229322] = actions(9370);
	v->a[229323] = 2;
	v->a[229324] = anon_sym_DASH2;
	v->a[229325] = anon_sym_PLUS2;
	v->a[229326] = state(3289);
	v->a[229327] = 9;
	v->a[229328] = sym_subscript;
	v->a[229329] = sym__arithmetic_expression;
	v->a[229330] = sym__arithmetic_literal;
	v->a[229331] = sym__arithmetic_parenthesized_expression;
	v->a[229332] = sym_string;
	v->a[229333] = sym_number;
	v->a[229334] = sym_simple_expansion;
	v->a[229335] = sym_expansion;
	v->a[229336] = sym_command_substitution;
	v->a[229337] = 18;
	v->a[229338] = actions(3);
	v->a[229339] = 1;
	small_parse_table_11467(v);
}

void	small_parse_table_11467(t_small_parse_table_array *v)
{
	v->a[229340] = sym_comment;
	v->a[229341] = actions(1837);
	v->a[229342] = 1;
	v->a[229343] = aux_sym_number_token1;
	v->a[229344] = actions(1839);
	v->a[229345] = 1;
	v->a[229346] = aux_sym_number_token2;
	v->a[229347] = actions(1843);
	v->a[229348] = 1;
	v->a[229349] = anon_sym_DOLLAR_LPAREN;
	v->a[229350] = actions(1857);
	v->a[229351] = 1;
	v->a[229352] = sym__brace_start;
	v->a[229353] = actions(8232);
	v->a[229354] = 1;
	v->a[229355] = anon_sym_DOLLAR_LBRACK;
	v->a[229356] = actions(8236);
	v->a[229357] = 1;
	v->a[229358] = anon_sym_DQUOTE;
	v->a[229359] = actions(8240);
	small_parse_table_11468(v);
}

void	small_parse_table_11468(t_small_parse_table_array *v)
{
	v->a[229360] = 1;
	v->a[229361] = anon_sym_DOLLAR_LBRACE;
	v->a[229362] = actions(8242);
	v->a[229363] = 1;
	v->a[229364] = anon_sym_BQUOTE;
	v->a[229365] = actions(8244);
	v->a[229366] = 1;
	v->a[229367] = anon_sym_DOLLAR_BQUOTE;
	v->a[229368] = actions(10488);
	v->a[229369] = 1;
	v->a[229370] = sym_word;
	v->a[229371] = actions(10494);
	v->a[229372] = 1;
	v->a[229373] = sym__comment_word;
	v->a[229374] = actions(10870);
	v->a[229375] = 1;
	v->a[229376] = anon_sym_DOLLAR;
	v->a[229377] = actions(8228);
	v->a[229378] = 2;
	v->a[229379] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11469(v);
}

void	small_parse_table_11469(t_small_parse_table_array *v)
{
	v->a[229380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[229381] = actions(8246);
	v->a[229382] = 2;
	v->a[229383] = anon_sym_LT_LPAREN;
	v->a[229384] = anon_sym_GT_LPAREN;
	v->a[229385] = actions(10490);
	v->a[229386] = 2;
	v->a[229387] = sym_test_operator;
	v->a[229388] = sym__special_character;
	v->a[229389] = actions(10492);
	v->a[229390] = 3;
	v->a[229391] = sym__bare_dollar;
	v->a[229392] = sym_raw_string;
	v->a[229393] = sym_ansi_c_string;
	v->a[229394] = state(1440);
	v->a[229395] = 9;
	v->a[229396] = sym_arithmetic_expansion;
	v->a[229397] = sym_brace_expression;
	v->a[229398] = sym_string;
	v->a[229399] = sym_translated_string;
	small_parse_table_11470(v);
}

/* EOF small_parse_table_2293.c */
