/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1165.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5825(t_small_parse_table_array *v)
{
	v->a[116500] = sym__brace_start;
	v->a[116501] = actions(1093);
	v->a[116502] = 1;
	v->a[116503] = anon_sym_LPAREN;
	v->a[116504] = actions(1095);
	v->a[116505] = 1;
	v->a[116506] = anon_sym_BANG;
	v->a[116507] = actions(1103);
	v->a[116508] = 1;
	v->a[116509] = anon_sym_TILDE;
	v->a[116510] = actions(5809);
	v->a[116511] = 1;
	v->a[116512] = anon_sym_BQUOTE;
	v->a[116513] = actions(5916);
	v->a[116514] = 1;
	v->a[116515] = sym__special_character;
	v->a[116516] = actions(6403);
	v->a[116517] = 1;
	v->a[116518] = sym_word;
	v->a[116519] = actions(6407);
	small_parse_table_5826(v);
}

void	small_parse_table_5826(t_small_parse_table_array *v)
{
	v->a[116520] = 1;
	v->a[116521] = sym_test_operator;
	v->a[116522] = state(2547);
	v->a[116523] = 1;
	v->a[116524] = aux_sym__literal_repeat1;
	v->a[116525] = state(3397);
	v->a[116526] = 1;
	v->a[116527] = sym__expression;
	v->a[116528] = actions(352);
	v->a[116529] = 2;
	v->a[116530] = anon_sym_LPAREN_LPAREN;
	v->a[116531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116532] = actions(387);
	v->a[116533] = 2;
	v->a[116534] = anon_sym_LT_LPAREN;
	v->a[116535] = anon_sym_GT_LPAREN;
	v->a[116536] = actions(1099);
	v->a[116537] = 2;
	v->a[116538] = anon_sym_PLUS_PLUS2;
	v->a[116539] = anon_sym_DASH_DASH2;
	small_parse_table_5827(v);
}

void	small_parse_table_5827(t_small_parse_table_array *v)
{
	v->a[116540] = actions(1101);
	v->a[116541] = 2;
	v->a[116542] = anon_sym_DASH2;
	v->a[116543] = anon_sym_PLUS2;
	v->a[116544] = actions(6405);
	v->a[116545] = 2;
	v->a[116546] = sym_raw_string;
	v->a[116547] = sym_ansi_c_string;
	v->a[116548] = state(2594);
	v->a[116549] = 2;
	v->a[116550] = sym_ternary_expression;
	v->a[116551] = sym_postfix_expression;
	v->a[116552] = state(2815);
	v->a[116553] = 4;
	v->a[116554] = sym_binary_expression;
	v->a[116555] = sym_unary_expression;
	v->a[116556] = sym_parenthesized_expression;
	v->a[116557] = sym_concatenation;
	v->a[116558] = state(2546);
	v->a[116559] = 9;
	small_parse_table_5828(v);
}

void	small_parse_table_5828(t_small_parse_table_array *v)
{
	v->a[116560] = sym_arithmetic_expansion;
	v->a[116561] = sym_brace_expression;
	v->a[116562] = sym_string;
	v->a[116563] = sym_translated_string;
	v->a[116564] = sym_number;
	v->a[116565] = sym_simple_expansion;
	v->a[116566] = sym_expansion;
	v->a[116567] = sym_command_substitution;
	v->a[116568] = sym_process_substitution;
	v->a[116569] = 26;
	v->a[116570] = actions(71);
	v->a[116571] = 1;
	v->a[116572] = sym_comment;
	v->a[116573] = actions(107);
	v->a[116574] = 1;
	v->a[116575] = anon_sym_TILDE;
	v->a[116576] = actions(237);
	v->a[116577] = 1;
	v->a[116578] = sym_word;
	v->a[116579] = actions(248);
	small_parse_table_5829(v);
}

void	small_parse_table_5829(t_small_parse_table_array *v)
{
	v->a[116580] = 1;
	v->a[116581] = anon_sym_LPAREN;
	v->a[116582] = actions(250);
	v->a[116583] = 1;
	v->a[116584] = anon_sym_BANG;
	v->a[116585] = actions(258);
	v->a[116586] = 1;
	v->a[116587] = anon_sym_DOLLAR;
	v->a[116588] = actions(264);
	v->a[116589] = 1;
	v->a[116590] = aux_sym_number_token1;
	v->a[116591] = actions(266);
	v->a[116592] = 1;
	v->a[116593] = aux_sym_number_token2;
	v->a[116594] = actions(270);
	v->a[116595] = 1;
	v->a[116596] = anon_sym_DOLLAR_LPAREN;
	v->a[116597] = actions(282);
	v->a[116598] = 1;
	v->a[116599] = sym_test_operator;
	small_parse_table_5830(v);
}

/* EOF small_parse_table_1165.c */
