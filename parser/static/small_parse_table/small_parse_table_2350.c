/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2350.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11750(t_small_parse_table_array *v)
{
	v->a[235000] = sym_variable_name;
	v->a[235001] = actions(9278);
	v->a[235002] = 1;
	v->a[235003] = anon_sym_LPAREN;
	v->a[235004] = actions(9280);
	v->a[235005] = 1;
	v->a[235006] = anon_sym_BANG;
	v->a[235007] = actions(9286);
	v->a[235008] = 1;
	v->a[235009] = anon_sym_TILDE;
	v->a[235010] = actions(9288);
	v->a[235011] = 1;
	v->a[235012] = anon_sym_DOLLAR;
	v->a[235013] = actions(9290);
	v->a[235014] = 1;
	v->a[235015] = anon_sym_DQUOTE;
	v->a[235016] = actions(9292);
	v->a[235017] = 1;
	v->a[235018] = aux_sym_number_token1;
	v->a[235019] = actions(9294);
	small_parse_table_11751(v);
}

void	small_parse_table_11751(t_small_parse_table_array *v)
{
	v->a[235020] = 1;
	v->a[235021] = aux_sym_number_token2;
	v->a[235022] = actions(9296);
	v->a[235023] = 1;
	v->a[235024] = anon_sym_DOLLAR_LBRACE;
	v->a[235025] = actions(9298);
	v->a[235026] = 1;
	v->a[235027] = anon_sym_DOLLAR_LPAREN;
	v->a[235028] = actions(9300);
	v->a[235029] = 1;
	v->a[235030] = anon_sym_BQUOTE;
	v->a[235031] = actions(9302);
	v->a[235032] = 1;
	v->a[235033] = anon_sym_DOLLAR_BQUOTE;
	v->a[235034] = state(2801);
	v->a[235035] = 1;
	v->a[235036] = sym__arithmetic_binary_expression;
	v->a[235037] = state(2803);
	v->a[235038] = 1;
	v->a[235039] = sym__arithmetic_ternary_expression;
	small_parse_table_11752(v);
}

void	small_parse_table_11752(t_small_parse_table_array *v)
{
	v->a[235040] = state(2809);
	v->a[235041] = 1;
	v->a[235042] = sym__arithmetic_unary_expression;
	v->a[235043] = state(2825);
	v->a[235044] = 1;
	v->a[235045] = sym__arithmetic_postfix_expression;
	v->a[235046] = actions(9282);
	v->a[235047] = 2;
	v->a[235048] = anon_sym_PLUS_PLUS2;
	v->a[235049] = anon_sym_DASH_DASH2;
	v->a[235050] = actions(9284);
	v->a[235051] = 2;
	v->a[235052] = anon_sym_DASH2;
	v->a[235053] = anon_sym_PLUS2;
	v->a[235054] = state(2836);
	v->a[235055] = 9;
	v->a[235056] = sym_subscript;
	v->a[235057] = sym__arithmetic_expression;
	v->a[235058] = sym__arithmetic_literal;
	v->a[235059] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11753(v);
}

void	small_parse_table_11753(t_small_parse_table_array *v)
{
	v->a[235060] = sym_string;
	v->a[235061] = sym_number;
	v->a[235062] = sym_simple_expansion;
	v->a[235063] = sym_expansion;
	v->a[235064] = sym_command_substitution;
	v->a[235065] = 21;
	v->a[235066] = actions(71);
	v->a[235067] = 1;
	v->a[235068] = sym_comment;
	v->a[235069] = actions(9364);
	v->a[235070] = 1;
	v->a[235071] = anon_sym_LPAREN;
	v->a[235072] = actions(9366);
	v->a[235073] = 1;
	v->a[235074] = anon_sym_BANG;
	v->a[235075] = actions(9372);
	v->a[235076] = 1;
	v->a[235077] = anon_sym_TILDE;
	v->a[235078] = actions(9374);
	v->a[235079] = 1;
	small_parse_table_11754(v);
}

void	small_parse_table_11754(t_small_parse_table_array *v)
{
	v->a[235080] = anon_sym_DOLLAR;
	v->a[235081] = actions(9376);
	v->a[235082] = 1;
	v->a[235083] = anon_sym_DQUOTE;
	v->a[235084] = actions(9378);
	v->a[235085] = 1;
	v->a[235086] = aux_sym_number_token1;
	v->a[235087] = actions(9380);
	v->a[235088] = 1;
	v->a[235089] = aux_sym_number_token2;
	v->a[235090] = actions(9382);
	v->a[235091] = 1;
	v->a[235092] = anon_sym_DOLLAR_LBRACE;
	v->a[235093] = actions(9384);
	v->a[235094] = 1;
	v->a[235095] = anon_sym_DOLLAR_LPAREN;
	v->a[235096] = actions(9386);
	v->a[235097] = 1;
	v->a[235098] = anon_sym_BQUOTE;
	v->a[235099] = actions(9388);
	small_parse_table_11755(v);
}

/* EOF small_parse_table_2350.c */
