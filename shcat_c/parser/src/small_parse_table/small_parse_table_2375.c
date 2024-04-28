/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2375.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11875(t_small_parse_table_array *v)
{
	v->a[237500] = 1;
	v->a[237501] = sym_test_operator;
	v->a[237502] = state(4347);
	v->a[237503] = 1;
	v->a[237504] = aux_sym__literal_repeat1;
	v->a[237505] = state(4617);
	v->a[237506] = 1;
	v->a[237507] = sym_concatenation;
	v->a[237508] = actions(9634);
	v->a[237509] = 2;
	v->a[237510] = anon_sym_LPAREN_LPAREN;
	v->a[237511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[237512] = actions(9650);
	v->a[237513] = 2;
	v->a[237514] = anon_sym_LT_LPAREN;
	v->a[237515] = anon_sym_GT_LPAREN;
	v->a[237516] = actions(11186);
	v->a[237517] = 2;
	v->a[237518] = sym_raw_string;
	v->a[237519] = sym_ansi_c_string;
	small_parse_table_11876(v);
}

void	small_parse_table_11876(t_small_parse_table_array *v)
{
	v->a[237520] = state(5128);
	v->a[237521] = 9;
	v->a[237522] = sym_arithmetic_expansion;
	v->a[237523] = sym_brace_expression;
	v->a[237524] = sym_string;
	v->a[237525] = sym_translated_string;
	v->a[237526] = sym_number;
	v->a[237527] = sym_simple_expansion;
	v->a[237528] = sym_expansion;
	v->a[237529] = sym_command_substitution;
	v->a[237530] = sym_process_substitution;
	v->a[237531] = 21;
	v->a[237532] = actions(71);
	v->a[237533] = 1;
	v->a[237534] = sym_comment;
	v->a[237535] = actions(3064);
	v->a[237536] = 1;
	v->a[237537] = sym_variable_name;
	v->a[237538] = actions(3419);
	v->a[237539] = 1;
	small_parse_table_11877(v);
}

void	small_parse_table_11877(t_small_parse_table_array *v)
{
	v->a[237540] = aux_sym__simple_variable_name_token1;
	v->a[237541] = actions(9278);
	v->a[237542] = 1;
	v->a[237543] = anon_sym_LPAREN;
	v->a[237544] = actions(9280);
	v->a[237545] = 1;
	v->a[237546] = anon_sym_BANG;
	v->a[237547] = actions(9286);
	v->a[237548] = 1;
	v->a[237549] = anon_sym_TILDE;
	v->a[237550] = actions(9288);
	v->a[237551] = 1;
	v->a[237552] = anon_sym_DOLLAR;
	v->a[237553] = actions(9290);
	v->a[237554] = 1;
	v->a[237555] = anon_sym_DQUOTE;
	v->a[237556] = actions(9292);
	v->a[237557] = 1;
	v->a[237558] = aux_sym_number_token1;
	v->a[237559] = actions(9294);
	small_parse_table_11878(v);
}

void	small_parse_table_11878(t_small_parse_table_array *v)
{
	v->a[237560] = 1;
	v->a[237561] = aux_sym_number_token2;
	v->a[237562] = actions(9296);
	v->a[237563] = 1;
	v->a[237564] = anon_sym_DOLLAR_LBRACE;
	v->a[237565] = actions(9298);
	v->a[237566] = 1;
	v->a[237567] = anon_sym_DOLLAR_LPAREN;
	v->a[237568] = actions(9300);
	v->a[237569] = 1;
	v->a[237570] = anon_sym_BQUOTE;
	v->a[237571] = actions(9302);
	v->a[237572] = 1;
	v->a[237573] = anon_sym_DOLLAR_BQUOTE;
	v->a[237574] = state(2801);
	v->a[237575] = 1;
	v->a[237576] = sym__arithmetic_binary_expression;
	v->a[237577] = state(2803);
	v->a[237578] = 1;
	v->a[237579] = sym__arithmetic_ternary_expression;
	small_parse_table_11879(v);
}

void	small_parse_table_11879(t_small_parse_table_array *v)
{
	v->a[237580] = state(2809);
	v->a[237581] = 1;
	v->a[237582] = sym__arithmetic_unary_expression;
	v->a[237583] = state(2825);
	v->a[237584] = 1;
	v->a[237585] = sym__arithmetic_postfix_expression;
	v->a[237586] = actions(9282);
	v->a[237587] = 2;
	v->a[237588] = anon_sym_PLUS_PLUS2;
	v->a[237589] = anon_sym_DASH_DASH2;
	v->a[237590] = actions(9284);
	v->a[237591] = 2;
	v->a[237592] = anon_sym_DASH2;
	v->a[237593] = anon_sym_PLUS2;
	v->a[237594] = state(2811);
	v->a[237595] = 9;
	v->a[237596] = sym_subscript;
	v->a[237597] = sym__arithmetic_expression;
	v->a[237598] = sym__arithmetic_literal;
	v->a[237599] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11880(v);
}

/* EOF small_parse_table_2375.c */
