/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_174.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_870(t_small_parse_table_array *v)
{
	v->a[17400] = sym_process_substitution;
	v->a[17401] = state(2840);
	v->a[17402] = 4;
	v->a[17403] = sym_subscript;
	v->a[17404] = sym__arithmetic_expression;
	v->a[17405] = sym__arithmetic_literal;
	v->a[17406] = sym__arithmetic_parenthesized_expression;
	v->a[17407] = state(2594);
	v->a[17408] = 6;
	v->a[17409] = sym_binary_expression;
	v->a[17410] = sym_ternary_expression;
	v->a[17411] = sym_unary_expression;
	v->a[17412] = sym_postfix_expression;
	v->a[17413] = sym_parenthesized_expression;
	v->a[17414] = sym_concatenation;
	v->a[17415] = 35;
	v->a[17416] = actions(71);
	v->a[17417] = 1;
	v->a[17418] = sym_comment;
	v->a[17419] = actions(237);
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = 1;
	v->a[17421] = sym_word;
	v->a[17422] = actions(258);
	v->a[17423] = 1;
	v->a[17424] = anon_sym_DOLLAR;
	v->a[17425] = actions(264);
	v->a[17426] = 1;
	v->a[17427] = aux_sym_number_token1;
	v->a[17428] = actions(266);
	v->a[17429] = 1;
	v->a[17430] = aux_sym_number_token2;
	v->a[17431] = actions(270);
	v->a[17432] = 1;
	v->a[17433] = anon_sym_DOLLAR_LPAREN;
	v->a[17434] = actions(282);
	v->a[17435] = 1;
	v->a[17436] = sym_test_operator;
	v->a[17437] = actions(284);
	v->a[17438] = 1;
	v->a[17439] = sym__brace_start;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = actions(1075);
	v->a[17441] = 1;
	v->a[17442] = anon_sym_DOLLAR_LBRACK;
	v->a[17443] = actions(1079);
	v->a[17444] = 1;
	v->a[17445] = sym__special_character;
	v->a[17446] = actions(1081);
	v->a[17447] = 1;
	v->a[17448] = anon_sym_DQUOTE;
	v->a[17449] = actions(1085);
	v->a[17450] = 1;
	v->a[17451] = anon_sym_DOLLAR_LBRACE;
	v->a[17452] = actions(1087);
	v->a[17453] = 1;
	v->a[17454] = anon_sym_DOLLAR_BQUOTE;
	v->a[17455] = actions(3588);
	v->a[17456] = 1;
	v->a[17457] = anon_sym_LPAREN;
	v->a[17458] = actions(3590);
	v->a[17459] = 1;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = anon_sym_BANG;
	v->a[17461] = actions(3596);
	v->a[17462] = 1;
	v->a[17463] = anon_sym_TILDE;
	v->a[17464] = actions(3598);
	v->a[17465] = 1;
	v->a[17466] = anon_sym_BQUOTE;
	v->a[17467] = actions(3600);
	v->a[17468] = 1;
	v->a[17469] = aux_sym__simple_variable_name_token1;
	v->a[17470] = actions(3602);
	v->a[17471] = 1;
	v->a[17472] = sym_variable_name;
	v->a[17473] = state(2509);
	v->a[17474] = 1;
	v->a[17475] = sym_command_substitution;
	v->a[17476] = state(2690);
	v->a[17477] = 1;
	v->a[17478] = aux_sym__literal_repeat1;
	v->a[17479] = state(3130);
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = 1;
	v->a[17481] = sym__expression;
	v->a[17482] = state(3359);
	v->a[17483] = 1;
	v->a[17484] = sym__arithmetic_postfix_expression;
	v->a[17485] = state(3361);
	v->a[17486] = 1;
	v->a[17487] = sym__arithmetic_unary_expression;
	v->a[17488] = state(3367);
	v->a[17489] = 1;
	v->a[17490] = sym__arithmetic_ternary_expression;
	v->a[17491] = state(3375);
	v->a[17492] = 1;
	v->a[17493] = sym__arithmetic_binary_expression;
	v->a[17494] = actions(1073);
	v->a[17495] = 2;
	v->a[17496] = anon_sym_LPAREN_LPAREN;
	v->a[17497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17498] = actions(1083);
	v->a[17499] = 2;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
