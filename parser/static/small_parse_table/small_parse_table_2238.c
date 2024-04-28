/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2238.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11190(t_small_parse_table_array *v)
{
	v->a[223800] = 1;
	v->a[223801] = anon_sym_DOLLAR_BQUOTE;
	v->a[223802] = actions(9392);
	v->a[223803] = 1;
	v->a[223804] = sym_variable_name;
	v->a[223805] = actions(10666);
	v->a[223806] = 1;
	v->a[223807] = aux_sym__simple_variable_name_token1;
	v->a[223808] = state(3391);
	v->a[223809] = 1;
	v->a[223810] = sym__arithmetic_binary_expression;
	v->a[223811] = state(3396);
	v->a[223812] = 1;
	v->a[223813] = sym__arithmetic_ternary_expression;
	v->a[223814] = state(3398);
	v->a[223815] = 1;
	v->a[223816] = sym__arithmetic_unary_expression;
	v->a[223817] = state(3400);
	v->a[223818] = 1;
	v->a[223819] = sym__arithmetic_postfix_expression;
	small_parse_table_11191(v);
}

void	small_parse_table_11191(t_small_parse_table_array *v)
{
	v->a[223820] = actions(9368);
	v->a[223821] = 2;
	v->a[223822] = anon_sym_PLUS_PLUS2;
	v->a[223823] = anon_sym_DASH_DASH2;
	v->a[223824] = actions(9370);
	v->a[223825] = 2;
	v->a[223826] = anon_sym_DASH2;
	v->a[223827] = anon_sym_PLUS2;
	v->a[223828] = state(3304);
	v->a[223829] = 9;
	v->a[223830] = sym_subscript;
	v->a[223831] = sym__arithmetic_expression;
	v->a[223832] = sym__arithmetic_literal;
	v->a[223833] = sym__arithmetic_parenthesized_expression;
	v->a[223834] = sym_string;
	v->a[223835] = sym_number;
	v->a[223836] = sym_simple_expansion;
	v->a[223837] = sym_expansion;
	v->a[223838] = sym_command_substitution;
	v->a[223839] = 18;
	small_parse_table_11192(v);
}

void	small_parse_table_11192(t_small_parse_table_array *v)
{
	v->a[223840] = actions(3);
	v->a[223841] = 1;
	v->a[223842] = sym_comment;
	v->a[223843] = actions(4086);
	v->a[223844] = 1;
	v->a[223845] = aux_sym_number_token1;
	v->a[223846] = actions(4088);
	v->a[223847] = 1;
	v->a[223848] = aux_sym_number_token2;
	v->a[223849] = actions(4092);
	v->a[223850] = 1;
	v->a[223851] = anon_sym_DOLLAR_LPAREN;
	v->a[223852] = actions(4102);
	v->a[223853] = 1;
	v->a[223854] = sym__brace_start;
	v->a[223855] = actions(9306);
	v->a[223856] = 1;
	v->a[223857] = sym_word;
	v->a[223858] = actions(9310);
	v->a[223859] = 1;
	small_parse_table_11193(v);
}

void	small_parse_table_11193(t_small_parse_table_array *v)
{
	v->a[223860] = anon_sym_DOLLAR_LBRACK;
	v->a[223861] = actions(9316);
	v->a[223862] = 1;
	v->a[223863] = anon_sym_DQUOTE;
	v->a[223864] = actions(9320);
	v->a[223865] = 1;
	v->a[223866] = anon_sym_DOLLAR_LBRACE;
	v->a[223867] = actions(9322);
	v->a[223868] = 1;
	v->a[223869] = anon_sym_BQUOTE;
	v->a[223870] = actions(9324);
	v->a[223871] = 1;
	v->a[223872] = anon_sym_DOLLAR_BQUOTE;
	v->a[223873] = actions(9328);
	v->a[223874] = 1;
	v->a[223875] = sym__comment_word;
	v->a[223876] = actions(10668);
	v->a[223877] = 1;
	v->a[223878] = anon_sym_DOLLAR;
	v->a[223879] = actions(9308);
	small_parse_table_11194(v);
}

void	small_parse_table_11194(t_small_parse_table_array *v)
{
	v->a[223880] = 2;
	v->a[223881] = anon_sym_LPAREN_LPAREN;
	v->a[223882] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223883] = actions(9314);
	v->a[223884] = 2;
	v->a[223885] = sym_test_operator;
	v->a[223886] = sym__special_character;
	v->a[223887] = actions(9326);
	v->a[223888] = 2;
	v->a[223889] = anon_sym_LT_LPAREN;
	v->a[223890] = anon_sym_GT_LPAREN;
	v->a[223891] = actions(9318);
	v->a[223892] = 3;
	v->a[223893] = sym__bare_dollar;
	v->a[223894] = sym_raw_string;
	v->a[223895] = sym_ansi_c_string;
	v->a[223896] = state(4566);
	v->a[223897] = 9;
	v->a[223898] = sym_arithmetic_expansion;
	v->a[223899] = sym_brace_expression;
	small_parse_table_11195(v);
}

/* EOF small_parse_table_2238.c */
