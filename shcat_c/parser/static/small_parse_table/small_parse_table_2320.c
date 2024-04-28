/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2320.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11600(t_small_parse_table_array *v)
{
	v->a[232000] = 1;
	v->a[232001] = anon_sym_DOLLAR_BQUOTE;
	v->a[232002] = actions(9392);
	v->a[232003] = 1;
	v->a[232004] = sym_variable_name;
	v->a[232005] = actions(10974);
	v->a[232006] = 1;
	v->a[232007] = aux_sym__simple_variable_name_token1;
	v->a[232008] = state(3391);
	v->a[232009] = 1;
	v->a[232010] = sym__arithmetic_binary_expression;
	v->a[232011] = state(3396);
	v->a[232012] = 1;
	v->a[232013] = sym__arithmetic_ternary_expression;
	v->a[232014] = state(3398);
	v->a[232015] = 1;
	v->a[232016] = sym__arithmetic_unary_expression;
	v->a[232017] = state(3400);
	v->a[232018] = 1;
	v->a[232019] = sym__arithmetic_postfix_expression;
	small_parse_table_11601(v);
}

void	small_parse_table_11601(t_small_parse_table_array *v)
{
	v->a[232020] = actions(9368);
	v->a[232021] = 2;
	v->a[232022] = anon_sym_PLUS_PLUS2;
	v->a[232023] = anon_sym_DASH_DASH2;
	v->a[232024] = actions(9370);
	v->a[232025] = 2;
	v->a[232026] = anon_sym_DASH2;
	v->a[232027] = anon_sym_PLUS2;
	v->a[232028] = state(3268);
	v->a[232029] = 9;
	v->a[232030] = sym_subscript;
	v->a[232031] = sym__arithmetic_expression;
	v->a[232032] = sym__arithmetic_literal;
	v->a[232033] = sym__arithmetic_parenthesized_expression;
	v->a[232034] = sym_string;
	v->a[232035] = sym_number;
	v->a[232036] = sym_simple_expansion;
	v->a[232037] = sym_expansion;
	v->a[232038] = sym_command_substitution;
	v->a[232039] = 18;
	small_parse_table_11602(v);
}

void	small_parse_table_11602(t_small_parse_table_array *v)
{
	v->a[232040] = actions(3);
	v->a[232041] = 1;
	v->a[232042] = sym_comment;
	v->a[232043] = actions(4502);
	v->a[232044] = 1;
	v->a[232045] = anon_sym_DOLLAR_LBRACK;
	v->a[232046] = actions(4508);
	v->a[232047] = 1;
	v->a[232048] = anon_sym_DQUOTE;
	v->a[232049] = actions(4512);
	v->a[232050] = 1;
	v->a[232051] = aux_sym_number_token1;
	v->a[232052] = actions(4514);
	v->a[232053] = 1;
	v->a[232054] = aux_sym_number_token2;
	v->a[232055] = actions(4516);
	v->a[232056] = 1;
	v->a[232057] = anon_sym_DOLLAR_LBRACE;
	v->a[232058] = actions(4518);
	v->a[232059] = 1;
	small_parse_table_11603(v);
}

void	small_parse_table_11603(t_small_parse_table_array *v)
{
	v->a[232060] = anon_sym_DOLLAR_LPAREN;
	v->a[232061] = actions(4520);
	v->a[232062] = 1;
	v->a[232063] = anon_sym_BQUOTE;
	v->a[232064] = actions(4522);
	v->a[232065] = 1;
	v->a[232066] = anon_sym_DOLLAR_BQUOTE;
	v->a[232067] = actions(4528);
	v->a[232068] = 1;
	v->a[232069] = sym__brace_start;
	v->a[232070] = actions(10256);
	v->a[232071] = 1;
	v->a[232072] = sym_word;
	v->a[232073] = actions(10262);
	v->a[232074] = 1;
	v->a[232075] = sym__comment_word;
	v->a[232076] = actions(10976);
	v->a[232077] = 1;
	v->a[232078] = anon_sym_DOLLAR;
	v->a[232079] = actions(4500);
	small_parse_table_11604(v);
}

void	small_parse_table_11604(t_small_parse_table_array *v)
{
	v->a[232080] = 2;
	v->a[232081] = anon_sym_LPAREN_LPAREN;
	v->a[232082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232083] = actions(4524);
	v->a[232084] = 2;
	v->a[232085] = anon_sym_LT_LPAREN;
	v->a[232086] = anon_sym_GT_LPAREN;
	v->a[232087] = actions(10258);
	v->a[232088] = 2;
	v->a[232089] = sym_test_operator;
	v->a[232090] = sym__special_character;
	v->a[232091] = actions(10260);
	v->a[232092] = 3;
	v->a[232093] = sym__bare_dollar;
	v->a[232094] = sym_raw_string;
	v->a[232095] = sym_ansi_c_string;
	v->a[232096] = state(2450);
	v->a[232097] = 9;
	v->a[232098] = sym_arithmetic_expansion;
	v->a[232099] = sym_brace_expression;
	small_parse_table_11605(v);
}

/* EOF small_parse_table_2320.c */
