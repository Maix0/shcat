/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_590.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2950(t_small_parse_table_array *v)
{
	v->a[59000] = anon_sym_LPAREN;
	v->a[59001] = actions(1981);
	v->a[59002] = 1;
	v->a[59003] = anon_sym_BANG;
	v->a[59004] = actions(1989);
	v->a[59005] = 1;
	v->a[59006] = anon_sym_TILDE;
	v->a[59007] = actions(1991);
	v->a[59008] = 1;
	v->a[59009] = anon_sym_DOLLAR;
	v->a[59010] = actions(1993);
	v->a[59011] = 1;
	v->a[59012] = anon_sym_DQUOTE;
	v->a[59013] = actions(1995);
	v->a[59014] = 1;
	v->a[59015] = aux_sym_number_token1;
	v->a[59016] = actions(1997);
	v->a[59017] = 1;
	v->a[59018] = aux_sym_number_token2;
	v->a[59019] = actions(1999);
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = 1;
	v->a[59021] = anon_sym_DOLLAR_LBRACE;
	v->a[59022] = actions(2001);
	v->a[59023] = 1;
	v->a[59024] = anon_sym_DOLLAR_LPAREN;
	v->a[59025] = actions(2003);
	v->a[59026] = 1;
	v->a[59027] = anon_sym_BQUOTE;
	v->a[59028] = actions(2005);
	v->a[59029] = 1;
	v->a[59030] = aux_sym__simple_variable_name_token1;
	v->a[59031] = actions(2007);
	v->a[59032] = 1;
	v->a[59033] = sym_variable_name;
	v->a[59034] = actions(1985);
	v->a[59035] = 2;
	v->a[59036] = anon_sym_PLUS_PLUS;
	v->a[59037] = anon_sym_DASH_DASH;
	v->a[59038] = actions(1987);
	v->a[59039] = 2;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = anon_sym_DASH2;
	v->a[59041] = anon_sym_PLUS2;
	v->a[59042] = state(530);
	v->a[59043] = 4;
	v->a[59044] = sym_string;
	v->a[59045] = sym_number;
	v->a[59046] = sym_simple_expansion;
	v->a[59047] = sym_expansion;
	v->a[59048] = state(617);
	v->a[59049] = 8;
	v->a[59050] = sym__arithmetic_expression;
	v->a[59051] = sym_arithmetic_literal;
	v->a[59052] = sym_arithmetic_binary_expression;
	v->a[59053] = sym_arithmetic_ternary_expression;
	v->a[59054] = sym_arithmetic_unary_expression;
	v->a[59055] = sym_arithmetic_postfix_expression;
	v->a[59056] = sym_arithmetic_parenthesized_expression;
	v->a[59057] = sym_command_substitution;
	v->a[59058] = 17;
	v->a[59059] = actions(1404);
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = 1;
	v->a[59061] = sym_comment;
	v->a[59062] = actions(2077);
	v->a[59063] = 1;
	v->a[59064] = anon_sym_LPAREN;
	v->a[59065] = actions(2079);
	v->a[59066] = 1;
	v->a[59067] = anon_sym_BANG;
	v->a[59068] = actions(2085);
	v->a[59069] = 1;
	v->a[59070] = anon_sym_TILDE;
	v->a[59071] = actions(2087);
	v->a[59072] = 1;
	v->a[59073] = anon_sym_DOLLAR;
	v->a[59074] = actions(2089);
	v->a[59075] = 1;
	v->a[59076] = anon_sym_DQUOTE;
	v->a[59077] = actions(2091);
	v->a[59078] = 1;
	v->a[59079] = aux_sym_number_token1;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = actions(2093);
	v->a[59081] = 1;
	v->a[59082] = aux_sym_number_token2;
	v->a[59083] = actions(2095);
	v->a[59084] = 1;
	v->a[59085] = anon_sym_DOLLAR_LBRACE;
	v->a[59086] = actions(2097);
	v->a[59087] = 1;
	v->a[59088] = anon_sym_DOLLAR_LPAREN;
	v->a[59089] = actions(2099);
	v->a[59090] = 1;
	v->a[59091] = anon_sym_BQUOTE;
	v->a[59092] = actions(2101);
	v->a[59093] = 1;
	v->a[59094] = aux_sym__simple_variable_name_token1;
	v->a[59095] = actions(2103);
	v->a[59096] = 1;
	v->a[59097] = sym_variable_name;
	v->a[59098] = actions(2081);
	v->a[59099] = 2;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
