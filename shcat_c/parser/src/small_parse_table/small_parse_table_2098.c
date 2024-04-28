/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2098.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10490(t_small_parse_table_array *v)
{
	v->a[209800] = anon_sym_DOLLAR_LPAREN;
	v->a[209801] = actions(9300);
	v->a[209802] = 1;
	v->a[209803] = anon_sym_BQUOTE;
	v->a[209804] = actions(9302);
	v->a[209805] = 1;
	v->a[209806] = anon_sym_DOLLAR_BQUOTE;
	v->a[209807] = actions(9890);
	v->a[209808] = 1;
	v->a[209809] = aux_sym__simple_variable_name_token1;
	v->a[209810] = state(2801);
	v->a[209811] = 1;
	v->a[209812] = sym__arithmetic_binary_expression;
	v->a[209813] = state(2803);
	v->a[209814] = 1;
	v->a[209815] = sym__arithmetic_ternary_expression;
	v->a[209816] = state(2809);
	v->a[209817] = 1;
	v->a[209818] = sym__arithmetic_unary_expression;
	v->a[209819] = state(2825);
	small_parse_table_10491(v);
}

void	small_parse_table_10491(t_small_parse_table_array *v)
{
	v->a[209820] = 1;
	v->a[209821] = sym__arithmetic_postfix_expression;
	v->a[209822] = actions(9282);
	v->a[209823] = 2;
	v->a[209824] = anon_sym_PLUS_PLUS2;
	v->a[209825] = anon_sym_DASH_DASH2;
	v->a[209826] = actions(9284);
	v->a[209827] = 2;
	v->a[209828] = anon_sym_DASH2;
	v->a[209829] = anon_sym_PLUS2;
	v->a[209830] = state(2753);
	v->a[209831] = 9;
	v->a[209832] = sym_subscript;
	v->a[209833] = sym__arithmetic_expression;
	v->a[209834] = sym__arithmetic_literal;
	v->a[209835] = sym__arithmetic_parenthesized_expression;
	v->a[209836] = sym_string;
	v->a[209837] = sym_number;
	v->a[209838] = sym_simple_expansion;
	v->a[209839] = sym_expansion;
	small_parse_table_10492(v);
}

void	small_parse_table_10492(t_small_parse_table_array *v)
{
	v->a[209840] = sym_command_substitution;
	v->a[209841] = 18;
	v->a[209842] = actions(3);
	v->a[209843] = 1;
	v->a[209844] = sym_comment;
	v->a[209845] = actions(2263);
	v->a[209846] = 1;
	v->a[209847] = anon_sym_DOLLAR;
	v->a[209848] = actions(2269);
	v->a[209849] = 1;
	v->a[209850] = aux_sym_number_token1;
	v->a[209851] = actions(2271);
	v->a[209852] = 1;
	v->a[209853] = aux_sym_number_token2;
	v->a[209854] = actions(2275);
	v->a[209855] = 1;
	v->a[209856] = anon_sym_DOLLAR_LPAREN;
	v->a[209857] = actions(2289);
	v->a[209858] = 1;
	v->a[209859] = sym__brace_start;
	small_parse_table_10493(v);
}

void	small_parse_table_10493(t_small_parse_table_array *v)
{
	v->a[209860] = actions(8066);
	v->a[209861] = 1;
	v->a[209862] = anon_sym_DOLLAR_LBRACK;
	v->a[209863] = actions(8070);
	v->a[209864] = 1;
	v->a[209865] = anon_sym_DQUOTE;
	v->a[209866] = actions(8074);
	v->a[209867] = 1;
	v->a[209868] = anon_sym_DOLLAR_LBRACE;
	v->a[209869] = actions(8076);
	v->a[209870] = 1;
	v->a[209871] = anon_sym_BQUOTE;
	v->a[209872] = actions(8078);
	v->a[209873] = 1;
	v->a[209874] = anon_sym_DOLLAR_BQUOTE;
	v->a[209875] = actions(9580);
	v->a[209876] = 1;
	v->a[209877] = sym_word;
	v->a[209878] = actions(9588);
	v->a[209879] = 1;
	small_parse_table_10494(v);
}

void	small_parse_table_10494(t_small_parse_table_array *v)
{
	v->a[209880] = sym__comment_word;
	v->a[209881] = actions(8062);
	v->a[209882] = 2;
	v->a[209883] = anon_sym_LPAREN_LPAREN;
	v->a[209884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209885] = actions(8080);
	v->a[209886] = 2;
	v->a[209887] = anon_sym_LT_LPAREN;
	v->a[209888] = anon_sym_GT_LPAREN;
	v->a[209889] = actions(9584);
	v->a[209890] = 2;
	v->a[209891] = sym_test_operator;
	v->a[209892] = sym__special_character;
	v->a[209893] = actions(9586);
	v->a[209894] = 3;
	v->a[209895] = sym__bare_dollar;
	v->a[209896] = sym_raw_string;
	v->a[209897] = sym_ansi_c_string;
	v->a[209898] = state(1623);
	v->a[209899] = 9;
	small_parse_table_10495(v);
}

/* EOF small_parse_table_2098.c */
