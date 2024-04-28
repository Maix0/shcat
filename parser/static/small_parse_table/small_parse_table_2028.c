/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2028.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10140(t_small_parse_table_array *v)
{
	v->a[202800] = anon_sym_GT_LPAREN;
	v->a[202801] = actions(9272);
	v->a[202802] = 2;
	v->a[202803] = sym_test_operator;
	v->a[202804] = sym__special_character;
	v->a[202805] = actions(9274);
	v->a[202806] = 3;
	v->a[202807] = sym__bare_dollar;
	v->a[202808] = sym_raw_string;
	v->a[202809] = sym_ansi_c_string;
	v->a[202810] = state(1189);
	v->a[202811] = 9;
	v->a[202812] = sym_arithmetic_expansion;
	v->a[202813] = sym_brace_expression;
	v->a[202814] = sym_string;
	v->a[202815] = sym_translated_string;
	v->a[202816] = sym_number;
	v->a[202817] = sym_simple_expansion;
	v->a[202818] = sym_expansion;
	v->a[202819] = sym_command_substitution;
	small_parse_table_10141(v);
}

void	small_parse_table_10141(t_small_parse_table_array *v)
{
	v->a[202820] = sym_process_substitution;
	v->a[202821] = 21;
	v->a[202822] = actions(71);
	v->a[202823] = 1;
	v->a[202824] = sym_comment;
	v->a[202825] = actions(3064);
	v->a[202826] = 1;
	v->a[202827] = sym_variable_name;
	v->a[202828] = actions(9278);
	v->a[202829] = 1;
	v->a[202830] = anon_sym_LPAREN;
	v->a[202831] = actions(9280);
	v->a[202832] = 1;
	v->a[202833] = anon_sym_BANG;
	v->a[202834] = actions(9286);
	v->a[202835] = 1;
	v->a[202836] = anon_sym_TILDE;
	v->a[202837] = actions(9288);
	v->a[202838] = 1;
	v->a[202839] = anon_sym_DOLLAR;
	small_parse_table_10142(v);
}

void	small_parse_table_10142(t_small_parse_table_array *v)
{
	v->a[202840] = actions(9290);
	v->a[202841] = 1;
	v->a[202842] = anon_sym_DQUOTE;
	v->a[202843] = actions(9292);
	v->a[202844] = 1;
	v->a[202845] = aux_sym_number_token1;
	v->a[202846] = actions(9294);
	v->a[202847] = 1;
	v->a[202848] = aux_sym_number_token2;
	v->a[202849] = actions(9296);
	v->a[202850] = 1;
	v->a[202851] = anon_sym_DOLLAR_LBRACE;
	v->a[202852] = actions(9298);
	v->a[202853] = 1;
	v->a[202854] = anon_sym_DOLLAR_LPAREN;
	v->a[202855] = actions(9300);
	v->a[202856] = 1;
	v->a[202857] = anon_sym_BQUOTE;
	v->a[202858] = actions(9302);
	v->a[202859] = 1;
	small_parse_table_10143(v);
}

void	small_parse_table_10143(t_small_parse_table_array *v)
{
	v->a[202860] = anon_sym_DOLLAR_BQUOTE;
	v->a[202861] = actions(9304);
	v->a[202862] = 1;
	v->a[202863] = aux_sym__simple_variable_name_token1;
	v->a[202864] = state(2801);
	v->a[202865] = 1;
	v->a[202866] = sym__arithmetic_binary_expression;
	v->a[202867] = state(2803);
	v->a[202868] = 1;
	v->a[202869] = sym__arithmetic_ternary_expression;
	v->a[202870] = state(2809);
	v->a[202871] = 1;
	v->a[202872] = sym__arithmetic_unary_expression;
	v->a[202873] = state(2825);
	v->a[202874] = 1;
	v->a[202875] = sym__arithmetic_postfix_expression;
	v->a[202876] = actions(9282);
	v->a[202877] = 2;
	v->a[202878] = anon_sym_PLUS_PLUS2;
	v->a[202879] = anon_sym_DASH_DASH2;
	small_parse_table_10144(v);
}

void	small_parse_table_10144(t_small_parse_table_array *v)
{
	v->a[202880] = actions(9284);
	v->a[202881] = 2;
	v->a[202882] = anon_sym_DASH2;
	v->a[202883] = anon_sym_PLUS2;
	v->a[202884] = state(2790);
	v->a[202885] = 9;
	v->a[202886] = sym_subscript;
	v->a[202887] = sym__arithmetic_expression;
	v->a[202888] = sym__arithmetic_literal;
	v->a[202889] = sym__arithmetic_parenthesized_expression;
	v->a[202890] = sym_string;
	v->a[202891] = sym_number;
	v->a[202892] = sym_simple_expansion;
	v->a[202893] = sym_expansion;
	v->a[202894] = sym_command_substitution;
	v->a[202895] = 18;
	v->a[202896] = actions(3);
	v->a[202897] = 1;
	v->a[202898] = sym_comment;
	v->a[202899] = actions(4086);
	small_parse_table_10145(v);
}

/* EOF small_parse_table_2028.c */
