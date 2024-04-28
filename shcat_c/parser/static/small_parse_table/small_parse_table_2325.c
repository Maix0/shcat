/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2325.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11625(t_small_parse_table_array *v)
{
	v->a[232500] = sym_word;
	v->a[232501] = actions(11002);
	v->a[232502] = 1;
	v->a[232503] = sym_test_operator;
	v->a[232504] = state(4421);
	v->a[232505] = 1;
	v->a[232506] = aux_sym__literal_repeat1;
	v->a[232507] = state(4869);
	v->a[232508] = 1;
	v->a[232509] = sym_concatenation;
	v->a[232510] = actions(9308);
	v->a[232511] = 2;
	v->a[232512] = anon_sym_LPAREN_LPAREN;
	v->a[232513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232514] = actions(9326);
	v->a[232515] = 2;
	v->a[232516] = anon_sym_LT_LPAREN;
	v->a[232517] = anon_sym_GT_LPAREN;
	v->a[232518] = actions(11000);
	v->a[232519] = 2;
	small_parse_table_11626(v);
}

void	small_parse_table_11626(t_small_parse_table_array *v)
{
	v->a[232520] = sym_raw_string;
	v->a[232521] = sym_ansi_c_string;
	v->a[232522] = state(4896);
	v->a[232523] = 9;
	v->a[232524] = sym_arithmetic_expansion;
	v->a[232525] = sym_brace_expression;
	v->a[232526] = sym_string;
	v->a[232527] = sym_translated_string;
	v->a[232528] = sym_number;
	v->a[232529] = sym_simple_expansion;
	v->a[232530] = sym_expansion;
	v->a[232531] = sym_command_substitution;
	v->a[232532] = sym_process_substitution;
	v->a[232533] = 21;
	v->a[232534] = actions(71);
	v->a[232535] = 1;
	v->a[232536] = sym_comment;
	v->a[232537] = actions(3602);
	v->a[232538] = 1;
	v->a[232539] = sym_variable_name;
	small_parse_table_11627(v);
}

void	small_parse_table_11627(t_small_parse_table_array *v)
{
	v->a[232540] = actions(3759);
	v->a[232541] = 1;
	v->a[232542] = aux_sym__simple_variable_name_token1;
	v->a[232543] = actions(9898);
	v->a[232544] = 1;
	v->a[232545] = anon_sym_LPAREN;
	v->a[232546] = actions(9900);
	v->a[232547] = 1;
	v->a[232548] = anon_sym_BANG;
	v->a[232549] = actions(9906);
	v->a[232550] = 1;
	v->a[232551] = anon_sym_TILDE;
	v->a[232552] = actions(9908);
	v->a[232553] = 1;
	v->a[232554] = anon_sym_DOLLAR;
	v->a[232555] = actions(9910);
	v->a[232556] = 1;
	v->a[232557] = anon_sym_DQUOTE;
	v->a[232558] = actions(9912);
	v->a[232559] = 1;
	small_parse_table_11628(v);
}

void	small_parse_table_11628(t_small_parse_table_array *v)
{
	v->a[232560] = aux_sym_number_token1;
	v->a[232561] = actions(9914);
	v->a[232562] = 1;
	v->a[232563] = aux_sym_number_token2;
	v->a[232564] = actions(9916);
	v->a[232565] = 1;
	v->a[232566] = anon_sym_DOLLAR_LBRACE;
	v->a[232567] = actions(9918);
	v->a[232568] = 1;
	v->a[232569] = anon_sym_DOLLAR_LPAREN;
	v->a[232570] = actions(9920);
	v->a[232571] = 1;
	v->a[232572] = anon_sym_BQUOTE;
	v->a[232573] = actions(9922);
	v->a[232574] = 1;
	v->a[232575] = anon_sym_DOLLAR_BQUOTE;
	v->a[232576] = state(3359);
	v->a[232577] = 1;
	v->a[232578] = sym__arithmetic_postfix_expression;
	v->a[232579] = state(3361);
	small_parse_table_11629(v);
}

void	small_parse_table_11629(t_small_parse_table_array *v)
{
	v->a[232580] = 1;
	v->a[232581] = sym__arithmetic_unary_expression;
	v->a[232582] = state(3367);
	v->a[232583] = 1;
	v->a[232584] = sym__arithmetic_ternary_expression;
	v->a[232585] = state(3375);
	v->a[232586] = 1;
	v->a[232587] = sym__arithmetic_binary_expression;
	v->a[232588] = actions(9902);
	v->a[232589] = 2;
	v->a[232590] = anon_sym_PLUS_PLUS2;
	v->a[232591] = anon_sym_DASH_DASH2;
	v->a[232592] = actions(9904);
	v->a[232593] = 2;
	v->a[232594] = anon_sym_DASH2;
	v->a[232595] = anon_sym_PLUS2;
	v->a[232596] = state(3278);
	v->a[232597] = 9;
	v->a[232598] = sym_subscript;
	v->a[232599] = sym__arithmetic_expression;
	small_parse_table_11630(v);
}

/* EOF small_parse_table_2325.c */
