/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2025.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10125(t_small_parse_table_array *v)
{
	v->a[202500] = state(2161);
	v->a[202501] = 1;
	v->a[202502] = aux_sym__literal_repeat1;
	v->a[202503] = actions(8924);
	v->a[202504] = 2;
	v->a[202505] = anon_sym_LPAREN_LPAREN;
	v->a[202506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202507] = actions(8940);
	v->a[202508] = 2;
	v->a[202509] = anon_sym_LT_LPAREN;
	v->a[202510] = anon_sym_GT_LPAREN;
	v->a[202511] = actions(9036);
	v->a[202512] = 2;
	v->a[202513] = sym_raw_string;
	v->a[202514] = sym_ansi_c_string;
	v->a[202515] = state(719);
	v->a[202516] = 2;
	v->a[202517] = sym_concatenation;
	v->a[202518] = aux_sym_for_statement_repeat1;
	v->a[202519] = state(1918);
	small_parse_table_10126(v);
}

void	small_parse_table_10126(t_small_parse_table_array *v)
{
	v->a[202520] = 9;
	v->a[202521] = sym_arithmetic_expansion;
	v->a[202522] = sym_brace_expression;
	v->a[202523] = sym_string;
	v->a[202524] = sym_translated_string;
	v->a[202525] = sym_number;
	v->a[202526] = sym_simple_expansion;
	v->a[202527] = sym_expansion;
	v->a[202528] = sym_command_substitution;
	v->a[202529] = sym_process_substitution;
	v->a[202530] = 21;
	v->a[202531] = actions(71);
	v->a[202532] = 1;
	v->a[202533] = sym_comment;
	v->a[202534] = actions(1587);
	v->a[202535] = 1;
	v->a[202536] = anon_sym_DOLLAR;
	v->a[202537] = actions(1593);
	v->a[202538] = 1;
	v->a[202539] = aux_sym_number_token1;
	small_parse_table_10127(v);
}

void	small_parse_table_10127(t_small_parse_table_array *v)
{
	v->a[202540] = actions(1595);
	v->a[202541] = 1;
	v->a[202542] = aux_sym_number_token2;
	v->a[202543] = actions(1599);
	v->a[202544] = 1;
	v->a[202545] = anon_sym_DOLLAR_LPAREN;
	v->a[202546] = actions(1611);
	v->a[202547] = 1;
	v->a[202548] = sym__brace_start;
	v->a[202549] = actions(9236);
	v->a[202550] = 1;
	v->a[202551] = sym_word;
	v->a[202552] = actions(9240);
	v->a[202553] = 1;
	v->a[202554] = anon_sym_DOLLAR_LBRACK;
	v->a[202555] = actions(9242);
	v->a[202556] = 1;
	v->a[202557] = sym__special_character;
	v->a[202558] = actions(9244);
	v->a[202559] = 1;
	small_parse_table_10128(v);
}

void	small_parse_table_10128(t_small_parse_table_array *v)
{
	v->a[202560] = anon_sym_DQUOTE;
	v->a[202561] = actions(9248);
	v->a[202562] = 1;
	v->a[202563] = anon_sym_DOLLAR_LBRACE;
	v->a[202564] = actions(9250);
	v->a[202565] = 1;
	v->a[202566] = anon_sym_BQUOTE;
	v->a[202567] = actions(9252);
	v->a[202568] = 1;
	v->a[202569] = anon_sym_DOLLAR_BQUOTE;
	v->a[202570] = actions(9256);
	v->a[202571] = 1;
	v->a[202572] = sym_test_operator;
	v->a[202573] = actions(9258);
	v->a[202574] = 1;
	v->a[202575] = sym_regex;
	v->a[202576] = state(1335);
	v->a[202577] = 1;
	v->a[202578] = aux_sym__literal_repeat1;
	v->a[202579] = state(1673);
	small_parse_table_10129(v);
}

void	small_parse_table_10129(t_small_parse_table_array *v)
{
	v->a[202580] = 1;
	v->a[202581] = sym_concatenation;
	v->a[202582] = actions(9238);
	v->a[202583] = 2;
	v->a[202584] = anon_sym_LPAREN_LPAREN;
	v->a[202585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202586] = actions(9246);
	v->a[202587] = 2;
	v->a[202588] = sym_raw_string;
	v->a[202589] = sym_ansi_c_string;
	v->a[202590] = actions(9254);
	v->a[202591] = 2;
	v->a[202592] = anon_sym_LT_LPAREN;
	v->a[202593] = anon_sym_GT_LPAREN;
	v->a[202594] = state(1039);
	v->a[202595] = 9;
	v->a[202596] = sym_arithmetic_expansion;
	v->a[202597] = sym_brace_expression;
	v->a[202598] = sym_string;
	v->a[202599] = sym_translated_string;
	small_parse_table_10130(v);
}

/* EOF small_parse_table_2025.c */
