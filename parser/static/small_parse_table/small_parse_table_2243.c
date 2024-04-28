/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2243.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11215(t_small_parse_table_array *v)
{
	v->a[224300] = 2;
	v->a[224301] = anon_sym_LPAREN_LPAREN;
	v->a[224302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224303] = actions(9680);
	v->a[224304] = 2;
	v->a[224305] = sym_test_operator;
	v->a[224306] = sym__special_character;
	v->a[224307] = actions(9692);
	v->a[224308] = 2;
	v->a[224309] = anon_sym_LT_LPAREN;
	v->a[224310] = anon_sym_GT_LPAREN;
	v->a[224311] = actions(9684);
	v->a[224312] = 3;
	v->a[224313] = sym__bare_dollar;
	v->a[224314] = sym_raw_string;
	v->a[224315] = sym_ansi_c_string;
	v->a[224316] = state(1733);
	v->a[224317] = 9;
	v->a[224318] = sym_arithmetic_expansion;
	v->a[224319] = sym_brace_expression;
	small_parse_table_11216(v);
}

void	small_parse_table_11216(t_small_parse_table_array *v)
{
	v->a[224320] = sym_string;
	v->a[224321] = sym_translated_string;
	v->a[224322] = sym_number;
	v->a[224323] = sym_simple_expansion;
	v->a[224324] = sym_expansion;
	v->a[224325] = sym_command_substitution;
	v->a[224326] = sym_process_substitution;
	v->a[224327] = 21;
	v->a[224328] = actions(71);
	v->a[224329] = 1;
	v->a[224330] = sym_comment;
	v->a[224331] = actions(9364);
	v->a[224332] = 1;
	v->a[224333] = anon_sym_LPAREN;
	v->a[224334] = actions(9366);
	v->a[224335] = 1;
	v->a[224336] = anon_sym_BANG;
	v->a[224337] = actions(9372);
	v->a[224338] = 1;
	v->a[224339] = anon_sym_TILDE;
	small_parse_table_11217(v);
}

void	small_parse_table_11217(t_small_parse_table_array *v)
{
	v->a[224340] = actions(9374);
	v->a[224341] = 1;
	v->a[224342] = anon_sym_DOLLAR;
	v->a[224343] = actions(9376);
	v->a[224344] = 1;
	v->a[224345] = anon_sym_DQUOTE;
	v->a[224346] = actions(9378);
	v->a[224347] = 1;
	v->a[224348] = aux_sym_number_token1;
	v->a[224349] = actions(9380);
	v->a[224350] = 1;
	v->a[224351] = aux_sym_number_token2;
	v->a[224352] = actions(9382);
	v->a[224353] = 1;
	v->a[224354] = anon_sym_DOLLAR_LBRACE;
	v->a[224355] = actions(9384);
	v->a[224356] = 1;
	v->a[224357] = anon_sym_DOLLAR_LPAREN;
	v->a[224358] = actions(9386);
	v->a[224359] = 1;
	small_parse_table_11218(v);
}

void	small_parse_table_11218(t_small_parse_table_array *v)
{
	v->a[224360] = anon_sym_BQUOTE;
	v->a[224361] = actions(9388);
	v->a[224362] = 1;
	v->a[224363] = anon_sym_DOLLAR_BQUOTE;
	v->a[224364] = actions(9392);
	v->a[224365] = 1;
	v->a[224366] = sym_variable_name;
	v->a[224367] = actions(10682);
	v->a[224368] = 1;
	v->a[224369] = aux_sym__simple_variable_name_token1;
	v->a[224370] = state(3391);
	v->a[224371] = 1;
	v->a[224372] = sym__arithmetic_binary_expression;
	v->a[224373] = state(3396);
	v->a[224374] = 1;
	v->a[224375] = sym__arithmetic_ternary_expression;
	v->a[224376] = state(3398);
	v->a[224377] = 1;
	v->a[224378] = sym__arithmetic_unary_expression;
	v->a[224379] = state(3400);
	small_parse_table_11219(v);
}

void	small_parse_table_11219(t_small_parse_table_array *v)
{
	v->a[224380] = 1;
	v->a[224381] = sym__arithmetic_postfix_expression;
	v->a[224382] = actions(9368);
	v->a[224383] = 2;
	v->a[224384] = anon_sym_PLUS_PLUS2;
	v->a[224385] = anon_sym_DASH_DASH2;
	v->a[224386] = actions(9370);
	v->a[224387] = 2;
	v->a[224388] = anon_sym_DASH2;
	v->a[224389] = anon_sym_PLUS2;
	v->a[224390] = state(3303);
	v->a[224391] = 9;
	v->a[224392] = sym_subscript;
	v->a[224393] = sym__arithmetic_expression;
	v->a[224394] = sym__arithmetic_literal;
	v->a[224395] = sym__arithmetic_parenthesized_expression;
	v->a[224396] = sym_string;
	v->a[224397] = sym_number;
	v->a[224398] = sym_simple_expansion;
	v->a[224399] = sym_expansion;
	small_parse_table_11220(v);
}

/* EOF small_parse_table_2243.c */
