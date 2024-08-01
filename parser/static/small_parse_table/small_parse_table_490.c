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
	v->a[49000] = 1;
	v->a[49001] = aux_sym__simple_variable_name_token1;
	v->a[49002] = actions(2281);
	v->a[49003] = 1;
	v->a[49004] = anon_sym_0;
	v->a[49005] = actions(2283);
	v->a[49006] = 1;
	v->a[49007] = sym_variable_name;
	v->a[49008] = actions(2335);
	v->a[49009] = 1;
	v->a[49010] = anon_sym_RBRACE;
	v->a[49011] = state(1686);
	v->a[49012] = 1;
	v->a[49013] = sym__expansion_body;
	v->a[49014] = actions(2275);
	v->a[49015] = 6;
	v->a[49016] = anon_sym_BANG;
	v->a[49017] = anon_sym_DASH;
	v->a[49018] = anon_sym_STAR;
	v->a[49019] = anon_sym_QMARK;
	small_parse_table_2451(v);
}

void	small_parse_table_2451(t_small_parse_table_array *v)
{
	v->a[49020] = anon_sym_DOLLAR;
	v->a[49021] = anon_sym_AT;
	v->a[49022] = 10;
	v->a[49023] = actions(3);
	v->a[49024] = 1;
	v->a[49025] = sym_comment;
	v->a[49026] = actions(2293);
	v->a[49027] = 1;
	v->a[49028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49029] = actions(2299);
	v->a[49030] = 1;
	v->a[49031] = sym_string_content;
	v->a[49032] = actions(2301);
	v->a[49033] = 1;
	v->a[49034] = anon_sym_DOLLAR_LBRACE;
	v->a[49035] = actions(2303);
	v->a[49036] = 1;
	v->a[49037] = anon_sym_DOLLAR_LPAREN;
	v->a[49038] = actions(2305);
	v->a[49039] = 1;
	small_parse_table_2452(v);
}

void	small_parse_table_2452(t_small_parse_table_array *v)
{
	v->a[49040] = anon_sym_BQUOTE;
	v->a[49041] = actions(2337);
	v->a[49042] = 1;
	v->a[49043] = anon_sym_DOLLAR;
	v->a[49044] = actions(2339);
	v->a[49045] = 1;
	v->a[49046] = anon_sym_DQUOTE;
	v->a[49047] = state(1176);
	v->a[49048] = 1;
	v->a[49049] = aux_sym_string_repeat1;
	v->a[49050] = state(1394);
	v->a[49051] = 4;
	v->a[49052] = sym_arithmetic_expansion;
	v->a[49053] = sym_simple_expansion;
	v->a[49054] = sym_expansion;
	v->a[49055] = sym_command_substitution;
	v->a[49056] = 10;
	v->a[49057] = actions(3);
	v->a[49058] = 1;
	v->a[49059] = sym_comment;
	small_parse_table_2453(v);
}

void	small_parse_table_2453(t_small_parse_table_array *v)
{
	v->a[49060] = actions(2293);
	v->a[49061] = 1;
	v->a[49062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49063] = actions(2299);
	v->a[49064] = 1;
	v->a[49065] = sym_string_content;
	v->a[49066] = actions(2301);
	v->a[49067] = 1;
	v->a[49068] = anon_sym_DOLLAR_LBRACE;
	v->a[49069] = actions(2303);
	v->a[49070] = 1;
	v->a[49071] = anon_sym_DOLLAR_LPAREN;
	v->a[49072] = actions(2305);
	v->a[49073] = 1;
	v->a[49074] = anon_sym_BQUOTE;
	v->a[49075] = actions(2341);
	v->a[49076] = 1;
	v->a[49077] = anon_sym_DOLLAR;
	v->a[49078] = actions(2343);
	v->a[49079] = 1;
	small_parse_table_2454(v);
}

void	small_parse_table_2454(t_small_parse_table_array *v)
{
	v->a[49080] = anon_sym_DQUOTE;
	v->a[49081] = state(1118);
	v->a[49082] = 1;
	v->a[49083] = aux_sym_string_repeat1;
	v->a[49084] = state(1394);
	v->a[49085] = 4;
	v->a[49086] = sym_arithmetic_expansion;
	v->a[49087] = sym_simple_expansion;
	v->a[49088] = sym_expansion;
	v->a[49089] = sym_command_substitution;
	v->a[49090] = 8;
	v->a[49091] = actions(3);
	v->a[49092] = 1;
	v->a[49093] = sym_comment;
	v->a[49094] = actions(2277);
	v->a[49095] = 1;
	v->a[49096] = anon_sym_POUND;
	v->a[49097] = actions(2279);
	v->a[49098] = 1;
	v->a[49099] = aux_sym__simple_variable_name_token1;
	small_parse_table_2455(v);
}

/* EOF small_parse_table_490.c */
