/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_175.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_875(t_small_parse_table_array *v)
{
	v->a[17500] = sym_raw_string;
	v->a[17501] = sym_ansi_c_string;
	v->a[17502] = actions(1089);
	v->a[17503] = 2;
	v->a[17504] = anon_sym_LT_LPAREN;
	v->a[17505] = anon_sym_GT_LPAREN;
	v->a[17506] = actions(3592);
	v->a[17507] = 2;
	v->a[17508] = anon_sym_PLUS_PLUS2;
	v->a[17509] = anon_sym_DASH_DASH2;
	v->a[17510] = actions(3594);
	v->a[17511] = 2;
	v->a[17512] = anon_sym_DASH2;
	v->a[17513] = anon_sym_PLUS2;
	v->a[17514] = state(2500);
	v->a[17515] = 4;
	v->a[17516] = sym_arithmetic_expansion;
	v->a[17517] = sym_brace_expression;
	v->a[17518] = sym_translated_string;
	v->a[17519] = sym_process_substitution;
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = state(2506);
	v->a[17521] = 4;
	v->a[17522] = sym_string;
	v->a[17523] = sym_number;
	v->a[17524] = sym_simple_expansion;
	v->a[17525] = sym_expansion;
	v->a[17526] = state(3281);
	v->a[17527] = 4;
	v->a[17528] = sym_subscript;
	v->a[17529] = sym__arithmetic_expression;
	v->a[17530] = sym__arithmetic_literal;
	v->a[17531] = sym__arithmetic_parenthesized_expression;
	v->a[17532] = state(3053);
	v->a[17533] = 6;
	v->a[17534] = sym_binary_expression;
	v->a[17535] = sym_ternary_expression;
	v->a[17536] = sym_unary_expression;
	v->a[17537] = sym_postfix_expression;
	v->a[17538] = sym_parenthesized_expression;
	v->a[17539] = sym_concatenation;
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = 35;
	v->a[17541] = actions(71);
	v->a[17542] = 1;
	v->a[17543] = sym_comment;
	v->a[17544] = actions(237);
	v->a[17545] = 1;
	v->a[17546] = sym_word;
	v->a[17547] = actions(258);
	v->a[17548] = 1;
	v->a[17549] = anon_sym_DOLLAR;
	v->a[17550] = actions(264);
	v->a[17551] = 1;
	v->a[17552] = aux_sym_number_token1;
	v->a[17553] = actions(266);
	v->a[17554] = 1;
	v->a[17555] = aux_sym_number_token2;
	v->a[17556] = actions(270);
	v->a[17557] = 1;
	v->a[17558] = anon_sym_DOLLAR_LPAREN;
	v->a[17559] = actions(282);
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = 1;
	v->a[17561] = sym_test_operator;
	v->a[17562] = actions(284);
	v->a[17563] = 1;
	v->a[17564] = sym__brace_start;
	v->a[17565] = actions(1075);
	v->a[17566] = 1;
	v->a[17567] = anon_sym_DOLLAR_LBRACK;
	v->a[17568] = actions(1079);
	v->a[17569] = 1;
	v->a[17570] = sym__special_character;
	v->a[17571] = actions(1081);
	v->a[17572] = 1;
	v->a[17573] = anon_sym_DQUOTE;
	v->a[17574] = actions(1085);
	v->a[17575] = 1;
	v->a[17576] = anon_sym_DOLLAR_LBRACE;
	v->a[17577] = actions(1087);
	v->a[17578] = 1;
	v->a[17579] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = actions(3588);
	v->a[17581] = 1;
	v->a[17582] = anon_sym_LPAREN;
	v->a[17583] = actions(3590);
	v->a[17584] = 1;
	v->a[17585] = anon_sym_BANG;
	v->a[17586] = actions(3596);
	v->a[17587] = 1;
	v->a[17588] = anon_sym_TILDE;
	v->a[17589] = actions(3598);
	v->a[17590] = 1;
	v->a[17591] = anon_sym_BQUOTE;
	v->a[17592] = actions(3602);
	v->a[17593] = 1;
	v->a[17594] = sym_variable_name;
	v->a[17595] = actions(3604);
	v->a[17596] = 1;
	v->a[17597] = aux_sym__simple_variable_name_token1;
	v->a[17598] = state(2509);
	v->a[17599] = 1;
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
