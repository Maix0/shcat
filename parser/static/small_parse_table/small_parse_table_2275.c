/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2275.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11375(t_small_parse_table_array *v)
{
	v->a[227500] = anon_sym_PLUS_PLUS2;
	v->a[227501] = anon_sym_DASH_DASH2;
	v->a[227502] = actions(9284);
	v->a[227503] = 2;
	v->a[227504] = anon_sym_DASH2;
	v->a[227505] = anon_sym_PLUS2;
	v->a[227506] = state(2774);
	v->a[227507] = 9;
	v->a[227508] = sym_subscript;
	v->a[227509] = sym__arithmetic_expression;
	v->a[227510] = sym__arithmetic_literal;
	v->a[227511] = sym__arithmetic_parenthesized_expression;
	v->a[227512] = sym_string;
	v->a[227513] = sym_number;
	v->a[227514] = sym_simple_expansion;
	v->a[227515] = sym_expansion;
	v->a[227516] = sym_command_substitution;
	v->a[227517] = 20;
	v->a[227518] = actions(71);
	v->a[227519] = 1;
	small_parse_table_11376(v);
}

void	small_parse_table_11376(t_small_parse_table_array *v)
{
	v->a[227520] = sym_comment;
	v->a[227521] = actions(3787);
	v->a[227522] = 1;
	v->a[227523] = anon_sym_DOLLAR;
	v->a[227524] = actions(3793);
	v->a[227525] = 1;
	v->a[227526] = aux_sym_number_token1;
	v->a[227527] = actions(3795);
	v->a[227528] = 1;
	v->a[227529] = aux_sym_number_token2;
	v->a[227530] = actions(3799);
	v->a[227531] = 1;
	v->a[227532] = anon_sym_DOLLAR_LPAREN;
	v->a[227533] = actions(3809);
	v->a[227534] = 1;
	v->a[227535] = sym__brace_start;
	v->a[227536] = actions(9636);
	v->a[227537] = 1;
	v->a[227538] = anon_sym_DOLLAR_LBRACK;
	v->a[227539] = actions(9640);
	small_parse_table_11377(v);
}

void	small_parse_table_11377(t_small_parse_table_array *v)
{
	v->a[227540] = 1;
	v->a[227541] = anon_sym_DQUOTE;
	v->a[227542] = actions(9644);
	v->a[227543] = 1;
	v->a[227544] = anon_sym_DOLLAR_LBRACE;
	v->a[227545] = actions(9646);
	v->a[227546] = 1;
	v->a[227547] = anon_sym_BQUOTE;
	v->a[227548] = actions(9648);
	v->a[227549] = 1;
	v->a[227550] = anon_sym_DOLLAR_BQUOTE;
	v->a[227551] = actions(10790);
	v->a[227552] = 1;
	v->a[227553] = sym__special_character;
	v->a[227554] = actions(10804);
	v->a[227555] = 1;
	v->a[227556] = sym_word;
	v->a[227557] = actions(10808);
	v->a[227558] = 1;
	v->a[227559] = sym_test_operator;
	small_parse_table_11378(v);
}

void	small_parse_table_11378(t_small_parse_table_array *v)
{
	v->a[227560] = state(4347);
	v->a[227561] = 1;
	v->a[227562] = aux_sym__literal_repeat1;
	v->a[227563] = state(4617);
	v->a[227564] = 1;
	v->a[227565] = sym_concatenation;
	v->a[227566] = actions(9634);
	v->a[227567] = 2;
	v->a[227568] = anon_sym_LPAREN_LPAREN;
	v->a[227569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227570] = actions(9650);
	v->a[227571] = 2;
	v->a[227572] = anon_sym_LT_LPAREN;
	v->a[227573] = anon_sym_GT_LPAREN;
	v->a[227574] = actions(10806);
	v->a[227575] = 2;
	v->a[227576] = sym_raw_string;
	v->a[227577] = sym_ansi_c_string;
	v->a[227578] = state(4452);
	v->a[227579] = 9;
	small_parse_table_11379(v);
}

void	small_parse_table_11379(t_small_parse_table_array *v)
{
	v->a[227580] = sym_arithmetic_expansion;
	v->a[227581] = sym_brace_expression;
	v->a[227582] = sym_string;
	v->a[227583] = sym_translated_string;
	v->a[227584] = sym_number;
	v->a[227585] = sym_simple_expansion;
	v->a[227586] = sym_expansion;
	v->a[227587] = sym_command_substitution;
	v->a[227588] = sym_process_substitution;
	v->a[227589] = 21;
	v->a[227590] = actions(71);
	v->a[227591] = 1;
	v->a[227592] = sym_comment;
	v->a[227593] = actions(3602);
	v->a[227594] = 1;
	v->a[227595] = sym_variable_name;
	v->a[227596] = actions(9898);
	v->a[227597] = 1;
	v->a[227598] = anon_sym_LPAREN;
	v->a[227599] = actions(9900);
	small_parse_table_11380(v);
}

/* EOF small_parse_table_2275.c */
