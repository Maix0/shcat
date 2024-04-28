/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2255.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11275(t_small_parse_table_array *v)
{
	v->a[225500] = anon_sym_PLUS_PLUS2;
	v->a[225501] = anon_sym_DASH_DASH2;
	v->a[225502] = actions(9370);
	v->a[225503] = 2;
	v->a[225504] = anon_sym_DASH2;
	v->a[225505] = anon_sym_PLUS2;
	v->a[225506] = state(3301);
	v->a[225507] = 9;
	v->a[225508] = sym_subscript;
	v->a[225509] = sym__arithmetic_expression;
	v->a[225510] = sym__arithmetic_literal;
	v->a[225511] = sym__arithmetic_parenthesized_expression;
	v->a[225512] = sym_string;
	v->a[225513] = sym_number;
	v->a[225514] = sym_simple_expansion;
	v->a[225515] = sym_expansion;
	v->a[225516] = sym_command_substitution;
	v->a[225517] = 18;
	v->a[225518] = actions(3);
	v->a[225519] = 1;
	small_parse_table_11276(v);
}

void	small_parse_table_11276(t_small_parse_table_array *v)
{
	v->a[225520] = sym_comment;
	v->a[225521] = actions(1141);
	v->a[225522] = 1;
	v->a[225523] = anon_sym_DOLLAR_LBRACK;
	v->a[225524] = actions(1149);
	v->a[225525] = 1;
	v->a[225526] = anon_sym_DQUOTE;
	v->a[225527] = actions(1153);
	v->a[225528] = 1;
	v->a[225529] = aux_sym_number_token1;
	v->a[225530] = actions(1155);
	v->a[225531] = 1;
	v->a[225532] = aux_sym_number_token2;
	v->a[225533] = actions(1157);
	v->a[225534] = 1;
	v->a[225535] = anon_sym_DOLLAR_LBRACE;
	v->a[225536] = actions(1159);
	v->a[225537] = 1;
	v->a[225538] = anon_sym_DOLLAR_LPAREN;
	v->a[225539] = actions(1163);
	small_parse_table_11277(v);
}

void	small_parse_table_11277(t_small_parse_table_array *v)
{
	v->a[225540] = 1;
	v->a[225541] = anon_sym_DOLLAR_BQUOTE;
	v->a[225542] = actions(1169);
	v->a[225543] = 1;
	v->a[225544] = sym__brace_start;
	v->a[225545] = actions(3060);
	v->a[225546] = 1;
	v->a[225547] = anon_sym_BQUOTE;
	v->a[225548] = actions(10188);
	v->a[225549] = 1;
	v->a[225550] = sym_word;
	v->a[225551] = actions(10196);
	v->a[225552] = 1;
	v->a[225553] = sym__comment_word;
	v->a[225554] = actions(10718);
	v->a[225555] = 1;
	v->a[225556] = anon_sym_DOLLAR;
	v->a[225557] = actions(1129);
	v->a[225558] = 2;
	v->a[225559] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11278(v);
}

void	small_parse_table_11278(t_small_parse_table_array *v)
{
	v->a[225560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225561] = actions(1165);
	v->a[225562] = 2;
	v->a[225563] = anon_sym_LT_LPAREN;
	v->a[225564] = anon_sym_GT_LPAREN;
	v->a[225565] = actions(10192);
	v->a[225566] = 2;
	v->a[225567] = sym_test_operator;
	v->a[225568] = sym__special_character;
	v->a[225569] = actions(10194);
	v->a[225570] = 3;
	v->a[225571] = sym__bare_dollar;
	v->a[225572] = sym_raw_string;
	v->a[225573] = sym_ansi_c_string;
	v->a[225574] = state(2392);
	v->a[225575] = 9;
	v->a[225576] = sym_arithmetic_expansion;
	v->a[225577] = sym_brace_expression;
	v->a[225578] = sym_string;
	v->a[225579] = sym_translated_string;
	small_parse_table_11279(v);
}

void	small_parse_table_11279(t_small_parse_table_array *v)
{
	v->a[225580] = sym_number;
	v->a[225581] = sym_simple_expansion;
	v->a[225582] = sym_expansion;
	v->a[225583] = sym_command_substitution;
	v->a[225584] = sym_process_substitution;
	v->a[225585] = 18;
	v->a[225586] = actions(3);
	v->a[225587] = 1;
	v->a[225588] = sym_comment;
	v->a[225589] = actions(8474);
	v->a[225590] = 1;
	v->a[225591] = anon_sym_DOLLAR_LBRACK;
	v->a[225592] = actions(8480);
	v->a[225593] = 1;
	v->a[225594] = anon_sym_DQUOTE;
	v->a[225595] = actions(8484);
	v->a[225596] = 1;
	v->a[225597] = aux_sym_number_token1;
	v->a[225598] = actions(8486);
	v->a[225599] = 1;
	small_parse_table_11280(v);
}

/* EOF small_parse_table_2255.c */
