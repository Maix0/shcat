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
	v->a[49000] = actions(1471);
	v->a[49001] = 1;
	v->a[49002] = anon_sym_BANG;
	v->a[49003] = actions(1479);
	v->a[49004] = 1;
	v->a[49005] = anon_sym_TILDE;
	v->a[49006] = actions(1481);
	v->a[49007] = 1;
	v->a[49008] = anon_sym_DOLLAR;
	v->a[49009] = actions(1483);
	v->a[49010] = 1;
	v->a[49011] = anon_sym_DQUOTE;
	v->a[49012] = actions(1487);
	v->a[49013] = 1;
	v->a[49014] = anon_sym_DOLLAR_LBRACE;
	v->a[49015] = actions(1489);
	v->a[49016] = 1;
	v->a[49017] = anon_sym_DOLLAR_LPAREN;
	v->a[49018] = actions(1491);
	v->a[49019] = 1;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_BQUOTE;
	v->a[49021] = actions(1493);
	v->a[49022] = 1;
	v->a[49023] = sym_variable_name;
	v->a[49024] = actions(1475);
	v->a[49025] = 2;
	v->a[49026] = anon_sym_PLUS_PLUS;
	v->a[49027] = anon_sym_DASH_DASH;
	v->a[49028] = actions(1477);
	v->a[49029] = 2;
	v->a[49030] = anon_sym_DASH2;
	v->a[49031] = anon_sym_PLUS2;
	v->a[49032] = actions(1485);
	v->a[49033] = 2;
	v->a[49034] = sym_number;
	v->a[49035] = aux_sym__simple_variable_name_token1;
	v->a[49036] = state(194);
	v->a[49037] = 3;
	v->a[49038] = sym_string;
	v->a[49039] = sym_simple_expansion;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = sym_expansion;
	v->a[49041] = state(204);
	v->a[49042] = 8;
	v->a[49043] = sym__arithmetic_expression;
	v->a[49044] = sym_arithmetic_literal;
	v->a[49045] = sym_arithmetic_binary_expression;
	v->a[49046] = sym_arithmetic_ternary_expression;
	v->a[49047] = sym_arithmetic_unary_expression;
	v->a[49048] = sym_arithmetic_postfix_expression;
	v->a[49049] = sym_arithmetic_parenthesized_expression;
	v->a[49050] = sym_command_substitution;
	v->a[49051] = 15;
	v->a[49052] = actions(501);
	v->a[49053] = 1;
	v->a[49054] = sym_comment;
	v->a[49055] = actions(1469);
	v->a[49056] = 1;
	v->a[49057] = anon_sym_LPAREN;
	v->a[49058] = actions(1471);
	v->a[49059] = 1;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = anon_sym_BANG;
	v->a[49061] = actions(1479);
	v->a[49062] = 1;
	v->a[49063] = anon_sym_TILDE;
	v->a[49064] = actions(1481);
	v->a[49065] = 1;
	v->a[49066] = anon_sym_DOLLAR;
	v->a[49067] = actions(1483);
	v->a[49068] = 1;
	v->a[49069] = anon_sym_DQUOTE;
	v->a[49070] = actions(1487);
	v->a[49071] = 1;
	v->a[49072] = anon_sym_DOLLAR_LBRACE;
	v->a[49073] = actions(1489);
	v->a[49074] = 1;
	v->a[49075] = anon_sym_DOLLAR_LPAREN;
	v->a[49076] = actions(1491);
	v->a[49077] = 1;
	v->a[49078] = anon_sym_BQUOTE;
	v->a[49079] = actions(1493);
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = 1;
	v->a[49081] = sym_variable_name;
	v->a[49082] = actions(1475);
	v->a[49083] = 2;
	v->a[49084] = anon_sym_PLUS_PLUS;
	v->a[49085] = anon_sym_DASH_DASH;
	v->a[49086] = actions(1477);
	v->a[49087] = 2;
	v->a[49088] = anon_sym_DASH2;
	v->a[49089] = anon_sym_PLUS2;
	v->a[49090] = actions(1485);
	v->a[49091] = 2;
	v->a[49092] = sym_number;
	v->a[49093] = aux_sym__simple_variable_name_token1;
	v->a[49094] = state(194);
	v->a[49095] = 3;
	v->a[49096] = sym_string;
	v->a[49097] = sym_simple_expansion;
	v->a[49098] = sym_expansion;
	v->a[49099] = state(184);
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
