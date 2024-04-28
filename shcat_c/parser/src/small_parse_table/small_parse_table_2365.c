/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2365.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11825(t_small_parse_table_array *v)
{
	v->a[236500] = 1;
	v->a[236501] = anon_sym_BQUOTE;
	v->a[236502] = actions(9302);
	v->a[236503] = 1;
	v->a[236504] = anon_sym_DOLLAR_BQUOTE;
	v->a[236505] = actions(11140);
	v->a[236506] = 1;
	v->a[236507] = aux_sym__simple_variable_name_token1;
	v->a[236508] = state(2801);
	v->a[236509] = 1;
	v->a[236510] = sym__arithmetic_binary_expression;
	v->a[236511] = state(2803);
	v->a[236512] = 1;
	v->a[236513] = sym__arithmetic_ternary_expression;
	v->a[236514] = state(2809);
	v->a[236515] = 1;
	v->a[236516] = sym__arithmetic_unary_expression;
	v->a[236517] = state(2825);
	v->a[236518] = 1;
	v->a[236519] = sym__arithmetic_postfix_expression;
	small_parse_table_11826(v);
}

void	small_parse_table_11826(t_small_parse_table_array *v)
{
	v->a[236520] = actions(9282);
	v->a[236521] = 2;
	v->a[236522] = anon_sym_PLUS_PLUS2;
	v->a[236523] = anon_sym_DASH_DASH2;
	v->a[236524] = actions(9284);
	v->a[236525] = 2;
	v->a[236526] = anon_sym_DASH2;
	v->a[236527] = anon_sym_PLUS2;
	v->a[236528] = state(2820);
	v->a[236529] = 9;
	v->a[236530] = sym_subscript;
	v->a[236531] = sym__arithmetic_expression;
	v->a[236532] = sym__arithmetic_literal;
	v->a[236533] = sym__arithmetic_parenthesized_expression;
	v->a[236534] = sym_string;
	v->a[236535] = sym_number;
	v->a[236536] = sym_simple_expansion;
	v->a[236537] = sym_expansion;
	v->a[236538] = sym_command_substitution;
	v->a[236539] = 21;
	small_parse_table_11827(v);
}

void	small_parse_table_11827(t_small_parse_table_array *v)
{
	v->a[236540] = actions(71);
	v->a[236541] = 1;
	v->a[236542] = sym_comment;
	v->a[236543] = actions(9364);
	v->a[236544] = 1;
	v->a[236545] = anon_sym_LPAREN;
	v->a[236546] = actions(9366);
	v->a[236547] = 1;
	v->a[236548] = anon_sym_BANG;
	v->a[236549] = actions(9372);
	v->a[236550] = 1;
	v->a[236551] = anon_sym_TILDE;
	v->a[236552] = actions(9374);
	v->a[236553] = 1;
	v->a[236554] = anon_sym_DOLLAR;
	v->a[236555] = actions(9376);
	v->a[236556] = 1;
	v->a[236557] = anon_sym_DQUOTE;
	v->a[236558] = actions(9378);
	v->a[236559] = 1;
	small_parse_table_11828(v);
}

void	small_parse_table_11828(t_small_parse_table_array *v)
{
	v->a[236560] = aux_sym_number_token1;
	v->a[236561] = actions(9380);
	v->a[236562] = 1;
	v->a[236563] = aux_sym_number_token2;
	v->a[236564] = actions(9382);
	v->a[236565] = 1;
	v->a[236566] = anon_sym_DOLLAR_LBRACE;
	v->a[236567] = actions(9384);
	v->a[236568] = 1;
	v->a[236569] = anon_sym_DOLLAR_LPAREN;
	v->a[236570] = actions(9386);
	v->a[236571] = 1;
	v->a[236572] = anon_sym_BQUOTE;
	v->a[236573] = actions(9388);
	v->a[236574] = 1;
	v->a[236575] = anon_sym_DOLLAR_BQUOTE;
	v->a[236576] = actions(9392);
	v->a[236577] = 1;
	v->a[236578] = sym_variable_name;
	v->a[236579] = actions(11142);
	small_parse_table_11829(v);
}

void	small_parse_table_11829(t_small_parse_table_array *v)
{
	v->a[236580] = 1;
	v->a[236581] = aux_sym__simple_variable_name_token1;
	v->a[236582] = state(3391);
	v->a[236583] = 1;
	v->a[236584] = sym__arithmetic_binary_expression;
	v->a[236585] = state(3396);
	v->a[236586] = 1;
	v->a[236587] = sym__arithmetic_ternary_expression;
	v->a[236588] = state(3398);
	v->a[236589] = 1;
	v->a[236590] = sym__arithmetic_unary_expression;
	v->a[236591] = state(3400);
	v->a[236592] = 1;
	v->a[236593] = sym__arithmetic_postfix_expression;
	v->a[236594] = actions(9368);
	v->a[236595] = 2;
	v->a[236596] = anon_sym_PLUS_PLUS2;
	v->a[236597] = anon_sym_DASH_DASH2;
	v->a[236598] = actions(9370);
	v->a[236599] = 2;
	small_parse_table_11830(v);
}

/* EOF small_parse_table_2365.c */
