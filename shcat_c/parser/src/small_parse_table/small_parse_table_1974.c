/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1974.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9870(t_small_parse_table_array *v)
{
	v->a[197400] = actions(4659);
	v->a[197401] = 1;
	v->a[197402] = sym__brace_start;
	v->a[197403] = state(2914);
	v->a[197404] = 1;
	v->a[197405] = aux_sym__literal_repeat1;
	v->a[197406] = actions(4631);
	v->a[197407] = 2;
	v->a[197408] = anon_sym_LPAREN_LPAREN;
	v->a[197409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197410] = actions(4641);
	v->a[197411] = 2;
	v->a[197412] = sym_raw_string;
	v->a[197413] = sym_ansi_c_string;
	v->a[197414] = actions(4655);
	v->a[197415] = 2;
	v->a[197416] = anon_sym_LT_LPAREN;
	v->a[197417] = anon_sym_GT_LPAREN;
	v->a[197418] = state(897);
	v->a[197419] = 2;
	small_parse_table_9871(v);
}

void	small_parse_table_9871(t_small_parse_table_array *v)
{
	v->a[197420] = sym_concatenation;
	v->a[197421] = aux_sym_for_statement_repeat1;
	v->a[197422] = state(2487);
	v->a[197423] = 9;
	v->a[197424] = sym_arithmetic_expansion;
	v->a[197425] = sym_brace_expression;
	v->a[197426] = sym_string;
	v->a[197427] = sym_translated_string;
	v->a[197428] = sym_number;
	v->a[197429] = sym_simple_expansion;
	v->a[197430] = sym_expansion;
	v->a[197431] = sym_command_substitution;
	v->a[197432] = sym_process_substitution;
	v->a[197433] = 20;
	v->a[197434] = actions(71);
	v->a[197435] = 1;
	v->a[197436] = sym_comment;
	v->a[197437] = actions(4629);
	v->a[197438] = 1;
	v->a[197439] = sym_word;
	small_parse_table_9872(v);
}

void	small_parse_table_9872(t_small_parse_table_array *v)
{
	v->a[197440] = actions(4633);
	v->a[197441] = 1;
	v->a[197442] = anon_sym_DOLLAR_LBRACK;
	v->a[197443] = actions(4635);
	v->a[197444] = 1;
	v->a[197445] = anon_sym_DOLLAR;
	v->a[197446] = actions(4637);
	v->a[197447] = 1;
	v->a[197448] = sym__special_character;
	v->a[197449] = actions(4639);
	v->a[197450] = 1;
	v->a[197451] = anon_sym_DQUOTE;
	v->a[197452] = actions(4643);
	v->a[197453] = 1;
	v->a[197454] = aux_sym_number_token1;
	v->a[197455] = actions(4645);
	v->a[197456] = 1;
	v->a[197457] = aux_sym_number_token2;
	v->a[197458] = actions(4647);
	v->a[197459] = 1;
	small_parse_table_9873(v);
}

void	small_parse_table_9873(t_small_parse_table_array *v)
{
	v->a[197460] = anon_sym_DOLLAR_LBRACE;
	v->a[197461] = actions(4649);
	v->a[197462] = 1;
	v->a[197463] = anon_sym_DOLLAR_LPAREN;
	v->a[197464] = actions(4651);
	v->a[197465] = 1;
	v->a[197466] = anon_sym_BQUOTE;
	v->a[197467] = actions(4653);
	v->a[197468] = 1;
	v->a[197469] = anon_sym_DOLLAR_BQUOTE;
	v->a[197470] = actions(4657);
	v->a[197471] = 1;
	v->a[197472] = sym_test_operator;
	v->a[197473] = actions(4659);
	v->a[197474] = 1;
	v->a[197475] = sym__brace_start;
	v->a[197476] = state(2914);
	v->a[197477] = 1;
	v->a[197478] = aux_sym__literal_repeat1;
	v->a[197479] = actions(4631);
	small_parse_table_9874(v);
}

void	small_parse_table_9874(t_small_parse_table_array *v)
{
	v->a[197480] = 2;
	v->a[197481] = anon_sym_LPAREN_LPAREN;
	v->a[197482] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197483] = actions(4641);
	v->a[197484] = 2;
	v->a[197485] = sym_raw_string;
	v->a[197486] = sym_ansi_c_string;
	v->a[197487] = actions(4655);
	v->a[197488] = 2;
	v->a[197489] = anon_sym_LT_LPAREN;
	v->a[197490] = anon_sym_GT_LPAREN;
	v->a[197491] = state(903);
	v->a[197492] = 2;
	v->a[197493] = sym_concatenation;
	v->a[197494] = aux_sym_for_statement_repeat1;
	v->a[197495] = state(2487);
	v->a[197496] = 9;
	v->a[197497] = sym_arithmetic_expansion;
	v->a[197498] = sym_brace_expression;
	v->a[197499] = sym_string;
	small_parse_table_9875(v);
}

/* EOF small_parse_table_1974.c */
