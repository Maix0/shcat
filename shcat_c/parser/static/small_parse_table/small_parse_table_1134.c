/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1134.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5670(t_small_parse_table_array *v)
{
	v->a[113400] = sym_ansi_c_string;
	v->a[113401] = state(2594);
	v->a[113402] = 6;
	v->a[113403] = sym_binary_expression;
	v->a[113404] = sym_ternary_expression;
	v->a[113405] = sym_unary_expression;
	v->a[113406] = sym_postfix_expression;
	v->a[113407] = sym_parenthesized_expression;
	v->a[113408] = sym_concatenation;
	v->a[113409] = state(2503);
	v->a[113410] = 9;
	v->a[113411] = sym_arithmetic_expansion;
	v->a[113412] = sym_brace_expression;
	v->a[113413] = sym_string;
	v->a[113414] = sym_translated_string;
	v->a[113415] = sym_number;
	v->a[113416] = sym_simple_expansion;
	v->a[113417] = sym_expansion;
	v->a[113418] = sym_command_substitution;
	v->a[113419] = sym_process_substitution;
	small_parse_table_5671(v);
}

void	small_parse_table_5671(t_small_parse_table_array *v)
{
	v->a[113420] = 5;
	v->a[113421] = actions(71);
	v->a[113422] = 1;
	v->a[113423] = sym_comment;
	v->a[113424] = state(2135);
	v->a[113425] = 1;
	v->a[113426] = aux_sym_concatenation_repeat1;
	v->a[113427] = actions(6133);
	v->a[113428] = 2;
	v->a[113429] = sym__concat;
	v->a[113430] = aux_sym_concatenation_token1;
	v->a[113431] = actions(4463);
	v->a[113432] = 15;
	v->a[113433] = anon_sym_PIPE;
	v->a[113434] = anon_sym_EQ_EQ;
	v->a[113435] = anon_sym_LT;
	v->a[113436] = anon_sym_GT;
	v->a[113437] = anon_sym_LT_LT;
	v->a[113438] = anon_sym_EQ_TILDE;
	v->a[113439] = anon_sym_AMP_GT;
	small_parse_table_5672(v);
}

void	small_parse_table_5672(t_small_parse_table_array *v)
{
	v->a[113440] = anon_sym_LT_AMP;
	v->a[113441] = anon_sym_GT_AMP;
	v->a[113442] = anon_sym_DOLLAR;
	v->a[113443] = aux_sym_number_token1;
	v->a[113444] = aux_sym_number_token2;
	v->a[113445] = anon_sym_DOLLAR_LPAREN;
	v->a[113446] = anon_sym_BQUOTE;
	v->a[113447] = sym_word;
	v->a[113448] = actions(4465);
	v->a[113449] = 25;
	v->a[113450] = sym_file_descriptor;
	v->a[113451] = sym_test_operator;
	v->a[113452] = sym__bare_dollar;
	v->a[113453] = sym__brace_start;
	v->a[113454] = anon_sym_LPAREN_LPAREN;
	v->a[113455] = anon_sym_PIPE_PIPE;
	v->a[113456] = anon_sym_AMP_AMP;
	v->a[113457] = anon_sym_GT_GT;
	v->a[113458] = anon_sym_PIPE_AMP;
	v->a[113459] = anon_sym_AMP_GT_GT;
	small_parse_table_5673(v);
}

void	small_parse_table_5673(t_small_parse_table_array *v)
{
	v->a[113460] = anon_sym_GT_PIPE;
	v->a[113461] = anon_sym_LT_AMP_DASH;
	v->a[113462] = anon_sym_GT_AMP_DASH;
	v->a[113463] = anon_sym_LT_LT_DASH;
	v->a[113464] = anon_sym_LT_LT_LT;
	v->a[113465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113466] = anon_sym_DOLLAR_LBRACK;
	v->a[113467] = sym__special_character;
	v->a[113468] = anon_sym_DQUOTE;
	v->a[113469] = sym_raw_string;
	v->a[113470] = sym_ansi_c_string;
	v->a[113471] = anon_sym_DOLLAR_LBRACE;
	v->a[113472] = anon_sym_DOLLAR_BQUOTE;
	v->a[113473] = anon_sym_LT_LPAREN;
	v->a[113474] = anon_sym_GT_LPAREN;
	v->a[113475] = 8;
	v->a[113476] = actions(3);
	v->a[113477] = 1;
	v->a[113478] = sym_comment;
	v->a[113479] = actions(5826);
	small_parse_table_5674(v);
}

void	small_parse_table_5674(t_small_parse_table_array *v)
{
	v->a[113480] = 1;
	v->a[113481] = aux_sym_heredoc_redirect_token1;
	v->a[113482] = actions(5828);
	v->a[113483] = 1;
	v->a[113484] = sym_file_descriptor;
	v->a[113485] = actions(6370);
	v->a[113486] = 1;
	v->a[113487] = anon_sym_RPAREN;
	v->a[113488] = actions(5831);
	v->a[113489] = 3;
	v->a[113490] = sym_variable_name;
	v->a[113491] = sym_test_operator;
	v->a[113492] = sym__brace_start;
	v->a[113493] = actions(5821);
	v->a[113494] = 9;
	v->a[113495] = anon_sym_SEMI;
	v->a[113496] = anon_sym_PIPE_PIPE;
	v->a[113497] = anon_sym_AMP_AMP;
	v->a[113498] = anon_sym_PIPE;
	v->a[113499] = anon_sym_AMP;
	small_parse_table_5675(v);
}

/* EOF small_parse_table_1134.c */
