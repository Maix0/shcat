/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_650.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3250(t_small_parse_table_array *v)
{
	v->a[65000] = sym_comment;
	v->a[65001] = actions(1869);
	v->a[65002] = 1;
	v->a[65003] = anon_sym_LPAREN;
	v->a[65004] = actions(1871);
	v->a[65005] = 1;
	v->a[65006] = anon_sym_BANG;
	v->a[65007] = actions(1879);
	v->a[65008] = 1;
	v->a[65009] = anon_sym_TILDE;
	v->a[65010] = actions(1881);
	v->a[65011] = 1;
	v->a[65012] = anon_sym_DOLLAR;
	v->a[65013] = actions(1883);
	v->a[65014] = 1;
	v->a[65015] = anon_sym_DQUOTE;
	v->a[65016] = actions(1887);
	v->a[65017] = 1;
	v->a[65018] = anon_sym_DOLLAR_LBRACE;
	v->a[65019] = actions(1889);
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = 1;
	v->a[65021] = anon_sym_DOLLAR_LPAREN;
	v->a[65022] = actions(1891);
	v->a[65023] = 1;
	v->a[65024] = anon_sym_BQUOTE;
	v->a[65025] = actions(1893);
	v->a[65026] = 1;
	v->a[65027] = sym_variable_name;
	v->a[65028] = actions(1875);
	v->a[65029] = 2;
	v->a[65030] = anon_sym_PLUS_PLUS;
	v->a[65031] = anon_sym_DASH_DASH;
	v->a[65032] = actions(1877);
	v->a[65033] = 2;
	v->a[65034] = anon_sym_DASH2;
	v->a[65035] = anon_sym_PLUS2;
	v->a[65036] = actions(1885);
	v->a[65037] = 2;
	v->a[65038] = sym_number;
	v->a[65039] = aux_sym__simple_variable_name_token1;
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = state(365);
	v->a[65041] = 3;
	v->a[65042] = sym_string;
	v->a[65043] = sym_simple_expansion;
	v->a[65044] = sym_expansion;
	v->a[65045] = state(359);
	v->a[65046] = 8;
	v->a[65047] = sym__arithmetic_expression;
	v->a[65048] = sym_arithmetic_literal;
	v->a[65049] = sym_arithmetic_binary_expression;
	v->a[65050] = sym_arithmetic_ternary_expression;
	v->a[65051] = sym_arithmetic_unary_expression;
	v->a[65052] = sym_arithmetic_postfix_expression;
	v->a[65053] = sym_arithmetic_parenthesized_expression;
	v->a[65054] = sym_command_substitution;
	v->a[65055] = 15;
	v->a[65056] = actions(1094);
	v->a[65057] = 1;
	v->a[65058] = sym_comment;
	v->a[65059] = actions(1869);
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = 1;
	v->a[65061] = anon_sym_LPAREN;
	v->a[65062] = actions(1871);
	v->a[65063] = 1;
	v->a[65064] = anon_sym_BANG;
	v->a[65065] = actions(1879);
	v->a[65066] = 1;
	v->a[65067] = anon_sym_TILDE;
	v->a[65068] = actions(1881);
	v->a[65069] = 1;
	v->a[65070] = anon_sym_DOLLAR;
	v->a[65071] = actions(1883);
	v->a[65072] = 1;
	v->a[65073] = anon_sym_DQUOTE;
	v->a[65074] = actions(1887);
	v->a[65075] = 1;
	v->a[65076] = anon_sym_DOLLAR_LBRACE;
	v->a[65077] = actions(1889);
	v->a[65078] = 1;
	v->a[65079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = actions(1891);
	v->a[65081] = 1;
	v->a[65082] = anon_sym_BQUOTE;
	v->a[65083] = actions(1893);
	v->a[65084] = 1;
	v->a[65085] = sym_variable_name;
	v->a[65086] = actions(1875);
	v->a[65087] = 2;
	v->a[65088] = anon_sym_PLUS_PLUS;
	v->a[65089] = anon_sym_DASH_DASH;
	v->a[65090] = actions(1877);
	v->a[65091] = 2;
	v->a[65092] = anon_sym_DASH2;
	v->a[65093] = anon_sym_PLUS2;
	v->a[65094] = actions(1885);
	v->a[65095] = 2;
	v->a[65096] = sym_number;
	v->a[65097] = aux_sym__simple_variable_name_token1;
	v->a[65098] = state(365);
	v->a[65099] = 3;
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
