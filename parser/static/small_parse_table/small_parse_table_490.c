/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_490.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2450(t_small_parse_table_array *v)
{
	v->a[49000] = anon_sym_AMP_AMP;
	v->a[49001] = anon_sym_PIPE_PIPE;
	v->a[49002] = anon_sym_LT;
	v->a[49003] = anon_sym_GT;
	v->a[49004] = anon_sym_GT_GT;
	v->a[49005] = anon_sym_LT_AMP;
	v->a[49006] = anon_sym_GT_AMP;
	v->a[49007] = anon_sym_GT_PIPE;
	v->a[49008] = anon_sym_LT_GT;
	v->a[49009] = anon_sym_LT_LT;
	v->a[49010] = anon_sym_LT_LT_DASH;
	v->a[49011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49012] = aux_sym_concatenation_token1;
	v->a[49013] = anon_sym_DOLLAR;
	v->a[49014] = anon_sym_DQUOTE;
	v->a[49015] = sym_raw_string;
	v->a[49016] = sym_number;
	v->a[49017] = anon_sym_DOLLAR_LBRACE;
	v->a[49018] = anon_sym_DOLLAR_LPAREN;
	v->a[49019] = anon_sym_BQUOTE;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = sym_word;
	v->a[49021] = 15;
	v->a[49022] = actions(680);
	v->a[49023] = 1;
	v->a[49024] = sym_comment;
	v->a[49025] = actions(1574);
	v->a[49026] = 1;
	v->a[49027] = anon_sym_LPAREN;
	v->a[49028] = actions(1576);
	v->a[49029] = 1;
	v->a[49030] = anon_sym_BANG;
	v->a[49031] = actions(1584);
	v->a[49032] = 1;
	v->a[49033] = anon_sym_TILDE;
	v->a[49034] = actions(1586);
	v->a[49035] = 1;
	v->a[49036] = anon_sym_DOLLAR;
	v->a[49037] = actions(1588);
	v->a[49038] = 1;
	v->a[49039] = anon_sym_DQUOTE;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = actions(1592);
	v->a[49041] = 1;
	v->a[49042] = anon_sym_DOLLAR_LBRACE;
	v->a[49043] = actions(1594);
	v->a[49044] = 1;
	v->a[49045] = anon_sym_DOLLAR_LPAREN;
	v->a[49046] = actions(1596);
	v->a[49047] = 1;
	v->a[49048] = anon_sym_BQUOTE;
	v->a[49049] = actions(1598);
	v->a[49050] = 1;
	v->a[49051] = sym_variable_name;
	v->a[49052] = actions(1580);
	v->a[49053] = 2;
	v->a[49054] = anon_sym_PLUS_PLUS;
	v->a[49055] = anon_sym_DASH_DASH;
	v->a[49056] = actions(1582);
	v->a[49057] = 2;
	v->a[49058] = anon_sym_DASH2;
	v->a[49059] = anon_sym_PLUS2;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = actions(1590);
	v->a[49061] = 2;
	v->a[49062] = sym_number;
	v->a[49063] = aux_sym__simple_variable_name_token1;
	v->a[49064] = state(238);
	v->a[49065] = 3;
	v->a[49066] = sym_string;
	v->a[49067] = sym_simple_expansion;
	v->a[49068] = sym_expansion;
	v->a[49069] = state(227);
	v->a[49070] = 8;
	v->a[49071] = sym__arithmetic_expression;
	v->a[49072] = sym_arithmetic_literal;
	v->a[49073] = sym_arithmetic_binary_expression;
	v->a[49074] = sym_arithmetic_ternary_expression;
	v->a[49075] = sym_arithmetic_unary_expression;
	v->a[49076] = sym_arithmetic_postfix_expression;
	v->a[49077] = sym_arithmetic_parenthesized_expression;
	v->a[49078] = sym_command_substitution;
	v->a[49079] = 4;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = actions(3);
	v->a[49081] = 1;
	v->a[49082] = sym_comment;
	v->a[49083] = actions(1424);
	v->a[49084] = 1;
	v->a[49085] = anon_sym_BQUOTE;
	v->a[49086] = actions(1426);
	v->a[49087] = 2;
	v->a[49088] = sym_file_descriptor;
	v->a[49089] = sym_variable_name;
	v->a[49090] = actions(1422);
	v->a[49091] = 23;
	v->a[49092] = anon_sym_for;
	v->a[49093] = anon_sym_while;
	v->a[49094] = anon_sym_until;
	v->a[49095] = anon_sym_if;
	v->a[49096] = anon_sym_case;
	v->a[49097] = anon_sym_LPAREN;
	v->a[49098] = anon_sym_LBRACE;
	v->a[49099] = anon_sym_BANG;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
