/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2370.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11850(t_small_parse_table_array *v)
{
	v->a[237000] = 1;
	v->a[237001] = sym_concatenation;
	v->a[237002] = actions(9308);
	v->a[237003] = 2;
	v->a[237004] = anon_sym_LPAREN_LPAREN;
	v->a[237005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[237006] = actions(9326);
	v->a[237007] = 2;
	v->a[237008] = anon_sym_LT_LPAREN;
	v->a[237009] = anon_sym_GT_LPAREN;
	v->a[237010] = actions(11158);
	v->a[237011] = 2;
	v->a[237012] = sym_raw_string;
	v->a[237013] = sym_ansi_c_string;
	v->a[237014] = state(5306);
	v->a[237015] = 9;
	v->a[237016] = sym_arithmetic_expansion;
	v->a[237017] = sym_brace_expression;
	v->a[237018] = sym_string;
	v->a[237019] = sym_translated_string;
	small_parse_table_11851(v);
}

void	small_parse_table_11851(t_small_parse_table_array *v)
{
	v->a[237020] = sym_number;
	v->a[237021] = sym_simple_expansion;
	v->a[237022] = sym_expansion;
	v->a[237023] = sym_command_substitution;
	v->a[237024] = sym_process_substitution;
	v->a[237025] = 21;
	v->a[237026] = actions(71);
	v->a[237027] = 1;
	v->a[237028] = sym_comment;
	v->a[237029] = actions(9364);
	v->a[237030] = 1;
	v->a[237031] = anon_sym_LPAREN;
	v->a[237032] = actions(9366);
	v->a[237033] = 1;
	v->a[237034] = anon_sym_BANG;
	v->a[237035] = actions(9372);
	v->a[237036] = 1;
	v->a[237037] = anon_sym_TILDE;
	v->a[237038] = actions(9374);
	v->a[237039] = 1;
	small_parse_table_11852(v);
}

void	small_parse_table_11852(t_small_parse_table_array *v)
{
	v->a[237040] = anon_sym_DOLLAR;
	v->a[237041] = actions(9376);
	v->a[237042] = 1;
	v->a[237043] = anon_sym_DQUOTE;
	v->a[237044] = actions(9378);
	v->a[237045] = 1;
	v->a[237046] = aux_sym_number_token1;
	v->a[237047] = actions(9380);
	v->a[237048] = 1;
	v->a[237049] = aux_sym_number_token2;
	v->a[237050] = actions(9382);
	v->a[237051] = 1;
	v->a[237052] = anon_sym_DOLLAR_LBRACE;
	v->a[237053] = actions(9384);
	v->a[237054] = 1;
	v->a[237055] = anon_sym_DOLLAR_LPAREN;
	v->a[237056] = actions(9386);
	v->a[237057] = 1;
	v->a[237058] = anon_sym_BQUOTE;
	v->a[237059] = actions(9388);
	small_parse_table_11853(v);
}

void	small_parse_table_11853(t_small_parse_table_array *v)
{
	v->a[237060] = 1;
	v->a[237061] = anon_sym_DOLLAR_BQUOTE;
	v->a[237062] = actions(9392);
	v->a[237063] = 1;
	v->a[237064] = sym_variable_name;
	v->a[237065] = actions(11162);
	v->a[237066] = 1;
	v->a[237067] = aux_sym__simple_variable_name_token1;
	v->a[237068] = state(3391);
	v->a[237069] = 1;
	v->a[237070] = sym__arithmetic_binary_expression;
	v->a[237071] = state(3396);
	v->a[237072] = 1;
	v->a[237073] = sym__arithmetic_ternary_expression;
	v->a[237074] = state(3398);
	v->a[237075] = 1;
	v->a[237076] = sym__arithmetic_unary_expression;
	v->a[237077] = state(3400);
	v->a[237078] = 1;
	v->a[237079] = sym__arithmetic_postfix_expression;
	small_parse_table_11854(v);
}

void	small_parse_table_11854(t_small_parse_table_array *v)
{
	v->a[237080] = actions(9368);
	v->a[237081] = 2;
	v->a[237082] = anon_sym_PLUS_PLUS2;
	v->a[237083] = anon_sym_DASH_DASH2;
	v->a[237084] = actions(9370);
	v->a[237085] = 2;
	v->a[237086] = anon_sym_DASH2;
	v->a[237087] = anon_sym_PLUS2;
	v->a[237088] = state(3244);
	v->a[237089] = 9;
	v->a[237090] = sym_subscript;
	v->a[237091] = sym__arithmetic_expression;
	v->a[237092] = sym__arithmetic_literal;
	v->a[237093] = sym__arithmetic_parenthesized_expression;
	v->a[237094] = sym_string;
	v->a[237095] = sym_number;
	v->a[237096] = sym_simple_expansion;
	v->a[237097] = sym_expansion;
	v->a[237098] = sym_command_substitution;
	v->a[237099] = 21;
	small_parse_table_11855(v);
}

/* EOF small_parse_table_2370.c */
