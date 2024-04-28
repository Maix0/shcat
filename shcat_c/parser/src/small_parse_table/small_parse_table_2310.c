/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2310.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11550(t_small_parse_table_array *v)
{
	v->a[231000] = 1;
	v->a[231001] = anon_sym_BQUOTE;
	v->a[231002] = actions(9302);
	v->a[231003] = 1;
	v->a[231004] = anon_sym_DOLLAR_BQUOTE;
	v->a[231005] = actions(10916);
	v->a[231006] = 1;
	v->a[231007] = aux_sym__simple_variable_name_token1;
	v->a[231008] = state(2801);
	v->a[231009] = 1;
	v->a[231010] = sym__arithmetic_binary_expression;
	v->a[231011] = state(2803);
	v->a[231012] = 1;
	v->a[231013] = sym__arithmetic_ternary_expression;
	v->a[231014] = state(2809);
	v->a[231015] = 1;
	v->a[231016] = sym__arithmetic_unary_expression;
	v->a[231017] = state(2825);
	v->a[231018] = 1;
	v->a[231019] = sym__arithmetic_postfix_expression;
	small_parse_table_11551(v);
}

void	small_parse_table_11551(t_small_parse_table_array *v)
{
	v->a[231020] = actions(9282);
	v->a[231021] = 2;
	v->a[231022] = anon_sym_PLUS_PLUS2;
	v->a[231023] = anon_sym_DASH_DASH2;
	v->a[231024] = actions(9284);
	v->a[231025] = 2;
	v->a[231026] = anon_sym_DASH2;
	v->a[231027] = anon_sym_PLUS2;
	v->a[231028] = state(2894);
	v->a[231029] = 9;
	v->a[231030] = sym_subscript;
	v->a[231031] = sym__arithmetic_expression;
	v->a[231032] = sym__arithmetic_literal;
	v->a[231033] = sym__arithmetic_parenthesized_expression;
	v->a[231034] = sym_string;
	v->a[231035] = sym_number;
	v->a[231036] = sym_simple_expansion;
	v->a[231037] = sym_expansion;
	v->a[231038] = sym_command_substitution;
	v->a[231039] = 18;
	small_parse_table_11552(v);
}

void	small_parse_table_11552(t_small_parse_table_array *v)
{
	v->a[231040] = actions(3);
	v->a[231041] = 1;
	v->a[231042] = sym_comment;
	v->a[231043] = actions(8571);
	v->a[231044] = 1;
	v->a[231045] = anon_sym_DOLLAR_LBRACK;
	v->a[231046] = actions(8577);
	v->a[231047] = 1;
	v->a[231048] = anon_sym_DQUOTE;
	v->a[231049] = actions(8581);
	v->a[231050] = 1;
	v->a[231051] = aux_sym_number_token1;
	v->a[231052] = actions(8583);
	v->a[231053] = 1;
	v->a[231054] = aux_sym_number_token2;
	v->a[231055] = actions(8585);
	v->a[231056] = 1;
	v->a[231057] = anon_sym_DOLLAR_LBRACE;
	v->a[231058] = actions(8587);
	v->a[231059] = 1;
	small_parse_table_11553(v);
}

void	small_parse_table_11553(t_small_parse_table_array *v)
{
	v->a[231060] = anon_sym_DOLLAR_LPAREN;
	v->a[231061] = actions(8589);
	v->a[231062] = 1;
	v->a[231063] = anon_sym_BQUOTE;
	v->a[231064] = actions(8591);
	v->a[231065] = 1;
	v->a[231066] = anon_sym_DOLLAR_BQUOTE;
	v->a[231067] = actions(8597);
	v->a[231068] = 1;
	v->a[231069] = sym__brace_start;
	v->a[231070] = actions(10014);
	v->a[231071] = 1;
	v->a[231072] = sym_word;
	v->a[231073] = actions(10020);
	v->a[231074] = 1;
	v->a[231075] = sym__comment_word;
	v->a[231076] = actions(10918);
	v->a[231077] = 1;
	v->a[231078] = anon_sym_DOLLAR;
	v->a[231079] = actions(8567);
	small_parse_table_11554(v);
}

void	small_parse_table_11554(t_small_parse_table_array *v)
{
	v->a[231080] = 2;
	v->a[231081] = anon_sym_LPAREN_LPAREN;
	v->a[231082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231083] = actions(8593);
	v->a[231084] = 2;
	v->a[231085] = anon_sym_LT_LPAREN;
	v->a[231086] = anon_sym_GT_LPAREN;
	v->a[231087] = actions(10016);
	v->a[231088] = 2;
	v->a[231089] = sym_test_operator;
	v->a[231090] = sym__special_character;
	v->a[231091] = actions(10018);
	v->a[231092] = 3;
	v->a[231093] = sym__bare_dollar;
	v->a[231094] = sym_raw_string;
	v->a[231095] = sym_ansi_c_string;
	v->a[231096] = state(5199);
	v->a[231097] = 9;
	v->a[231098] = sym_arithmetic_expansion;
	v->a[231099] = sym_brace_expression;
	small_parse_table_11555(v);
}

/* EOF small_parse_table_2310.c */
