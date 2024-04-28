/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2300.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11500(t_small_parse_table_array *v)
{
	v->a[230000] = 1;
	v->a[230001] = aux_sym_number_token1;
	v->a[230002] = actions(9294);
	v->a[230003] = 1;
	v->a[230004] = aux_sym_number_token2;
	v->a[230005] = actions(9296);
	v->a[230006] = 1;
	v->a[230007] = anon_sym_DOLLAR_LBRACE;
	v->a[230008] = actions(9298);
	v->a[230009] = 1;
	v->a[230010] = anon_sym_DOLLAR_LPAREN;
	v->a[230011] = actions(9300);
	v->a[230012] = 1;
	v->a[230013] = anon_sym_BQUOTE;
	v->a[230014] = actions(9302);
	v->a[230015] = 1;
	v->a[230016] = anon_sym_DOLLAR_BQUOTE;
	v->a[230017] = actions(10890);
	v->a[230018] = 1;
	v->a[230019] = aux_sym__simple_variable_name_token1;
	small_parse_table_11501(v);
}

void	small_parse_table_11501(t_small_parse_table_array *v)
{
	v->a[230020] = state(2801);
	v->a[230021] = 1;
	v->a[230022] = sym__arithmetic_binary_expression;
	v->a[230023] = state(2803);
	v->a[230024] = 1;
	v->a[230025] = sym__arithmetic_ternary_expression;
	v->a[230026] = state(2809);
	v->a[230027] = 1;
	v->a[230028] = sym__arithmetic_unary_expression;
	v->a[230029] = state(2825);
	v->a[230030] = 1;
	v->a[230031] = sym__arithmetic_postfix_expression;
	v->a[230032] = actions(9282);
	v->a[230033] = 2;
	v->a[230034] = anon_sym_PLUS_PLUS2;
	v->a[230035] = anon_sym_DASH_DASH2;
	v->a[230036] = actions(9284);
	v->a[230037] = 2;
	v->a[230038] = anon_sym_DASH2;
	v->a[230039] = anon_sym_PLUS2;
	small_parse_table_11502(v);
}

void	small_parse_table_11502(t_small_parse_table_array *v)
{
	v->a[230040] = state(2917);
	v->a[230041] = 9;
	v->a[230042] = sym_subscript;
	v->a[230043] = sym__arithmetic_expression;
	v->a[230044] = sym__arithmetic_literal;
	v->a[230045] = sym__arithmetic_parenthesized_expression;
	v->a[230046] = sym_string;
	v->a[230047] = sym_number;
	v->a[230048] = sym_simple_expansion;
	v->a[230049] = sym_expansion;
	v->a[230050] = sym_command_substitution;
	v->a[230051] = 21;
	v->a[230052] = actions(71);
	v->a[230053] = 1;
	v->a[230054] = sym_comment;
	v->a[230055] = actions(9364);
	v->a[230056] = 1;
	v->a[230057] = anon_sym_LPAREN;
	v->a[230058] = actions(9366);
	v->a[230059] = 1;
	small_parse_table_11503(v);
}

void	small_parse_table_11503(t_small_parse_table_array *v)
{
	v->a[230060] = anon_sym_BANG;
	v->a[230061] = actions(9372);
	v->a[230062] = 1;
	v->a[230063] = anon_sym_TILDE;
	v->a[230064] = actions(9374);
	v->a[230065] = 1;
	v->a[230066] = anon_sym_DOLLAR;
	v->a[230067] = actions(9376);
	v->a[230068] = 1;
	v->a[230069] = anon_sym_DQUOTE;
	v->a[230070] = actions(9378);
	v->a[230071] = 1;
	v->a[230072] = aux_sym_number_token1;
	v->a[230073] = actions(9380);
	v->a[230074] = 1;
	v->a[230075] = aux_sym_number_token2;
	v->a[230076] = actions(9382);
	v->a[230077] = 1;
	v->a[230078] = anon_sym_DOLLAR_LBRACE;
	v->a[230079] = actions(9384);
	small_parse_table_11504(v);
}

void	small_parse_table_11504(t_small_parse_table_array *v)
{
	v->a[230080] = 1;
	v->a[230081] = anon_sym_DOLLAR_LPAREN;
	v->a[230082] = actions(9386);
	v->a[230083] = 1;
	v->a[230084] = anon_sym_BQUOTE;
	v->a[230085] = actions(9388);
	v->a[230086] = 1;
	v->a[230087] = anon_sym_DOLLAR_BQUOTE;
	v->a[230088] = actions(9392);
	v->a[230089] = 1;
	v->a[230090] = sym_variable_name;
	v->a[230091] = actions(10892);
	v->a[230092] = 1;
	v->a[230093] = aux_sym__simple_variable_name_token1;
	v->a[230094] = state(3391);
	v->a[230095] = 1;
	v->a[230096] = sym__arithmetic_binary_expression;
	v->a[230097] = state(3396);
	v->a[230098] = 1;
	v->a[230099] = sym__arithmetic_ternary_expression;
	small_parse_table_11505(v);
}

/* EOF small_parse_table_2300.c */
