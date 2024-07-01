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
	v->a[49000] = state(255);
	v->a[49001] = 3;
	v->a[49002] = sym_string;
	v->a[49003] = sym_simple_expansion;
	v->a[49004] = sym_expansion;
	v->a[49005] = state(214);
	v->a[49006] = 8;
	v->a[49007] = sym__arithmetic_expression;
	v->a[49008] = sym_arithmetic_literal;
	v->a[49009] = sym_arithmetic_binary_expression;
	v->a[49010] = sym_arithmetic_ternary_expression;
	v->a[49011] = sym_arithmetic_unary_expression;
	v->a[49012] = sym_arithmetic_postfix_expression;
	v->a[49013] = sym_arithmetic_parenthesized_expression;
	v->a[49014] = sym_command_substitution;
	v->a[49015] = 15;
	v->a[49016] = actions(664);
	v->a[49017] = 1;
	v->a[49018] = sym_comment;
	v->a[49019] = actions(1560);
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = 1;
	v->a[49021] = anon_sym_LPAREN;
	v->a[49022] = actions(1562);
	v->a[49023] = 1;
	v->a[49024] = anon_sym_BANG;
	v->a[49025] = actions(1570);
	v->a[49026] = 1;
	v->a[49027] = anon_sym_TILDE;
	v->a[49028] = actions(1572);
	v->a[49029] = 1;
	v->a[49030] = anon_sym_DOLLAR;
	v->a[49031] = actions(1574);
	v->a[49032] = 1;
	v->a[49033] = anon_sym_DQUOTE;
	v->a[49034] = actions(1578);
	v->a[49035] = 1;
	v->a[49036] = anon_sym_DOLLAR_LBRACE;
	v->a[49037] = actions(1580);
	v->a[49038] = 1;
	v->a[49039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = actions(1582);
	v->a[49041] = 1;
	v->a[49042] = anon_sym_BQUOTE;
	v->a[49043] = actions(1584);
	v->a[49044] = 1;
	v->a[49045] = sym_variable_name;
	v->a[49046] = actions(1566);
	v->a[49047] = 2;
	v->a[49048] = anon_sym_PLUS_PLUS;
	v->a[49049] = anon_sym_DASH_DASH;
	v->a[49050] = actions(1568);
	v->a[49051] = 2;
	v->a[49052] = anon_sym_DASH2;
	v->a[49053] = anon_sym_PLUS2;
	v->a[49054] = actions(1576);
	v->a[49055] = 2;
	v->a[49056] = sym_number;
	v->a[49057] = aux_sym__simple_variable_name_token1;
	v->a[49058] = state(255);
	v->a[49059] = 3;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = sym_string;
	v->a[49061] = sym_simple_expansion;
	v->a[49062] = sym_expansion;
	v->a[49063] = state(215);
	v->a[49064] = 8;
	v->a[49065] = sym__arithmetic_expression;
	v->a[49066] = sym_arithmetic_literal;
	v->a[49067] = sym_arithmetic_binary_expression;
	v->a[49068] = sym_arithmetic_ternary_expression;
	v->a[49069] = sym_arithmetic_unary_expression;
	v->a[49070] = sym_arithmetic_postfix_expression;
	v->a[49071] = sym_arithmetic_parenthesized_expression;
	v->a[49072] = sym_command_substitution;
	v->a[49073] = 4;
	v->a[49074] = actions(3);
	v->a[49075] = 1;
	v->a[49076] = sym_comment;
	v->a[49077] = actions(1439);
	v->a[49078] = 1;
	v->a[49079] = anon_sym_BQUOTE;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = actions(1441);
	v->a[49081] = 2;
	v->a[49082] = sym_file_descriptor;
	v->a[49083] = sym_variable_name;
	v->a[49084] = actions(1437);
	v->a[49085] = 23;
	v->a[49086] = anon_sym_for;
	v->a[49087] = anon_sym_while;
	v->a[49088] = anon_sym_until;
	v->a[49089] = anon_sym_if;
	v->a[49090] = anon_sym_case;
	v->a[49091] = anon_sym_LPAREN;
	v->a[49092] = anon_sym_LBRACE;
	v->a[49093] = anon_sym_BANG;
	v->a[49094] = anon_sym_LT;
	v->a[49095] = anon_sym_GT;
	v->a[49096] = anon_sym_GT_GT;
	v->a[49097] = anon_sym_LT_AMP;
	v->a[49098] = anon_sym_GT_AMP;
	v->a[49099] = anon_sym_GT_PIPE;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
