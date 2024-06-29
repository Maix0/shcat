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
	v->a[59000] = anon_sym_GT;
	v->a[59001] = anon_sym_GT_GT;
	v->a[59002] = anon_sym_AMP_GT;
	v->a[59003] = anon_sym_AMP_GT_GT;
	v->a[59004] = anon_sym_LT_AMP;
	v->a[59005] = anon_sym_GT_AMP;
	v->a[59006] = anon_sym_GT_PIPE;
	v->a[59007] = anon_sym_LT_AMP_DASH;
	v->a[59008] = anon_sym_GT_AMP_DASH;
	v->a[59009] = anon_sym_LT_LT;
	v->a[59010] = anon_sym_LT_LT_DASH;
	v->a[59011] = anon_sym_AMP;
	v->a[59012] = aux_sym_concatenation_token1;
	v->a[59013] = anon_sym_BQUOTE;
	v->a[59014] = anon_sym_SEMI;
	v->a[59015] = 15;
	v->a[59016] = actions(1074);
	v->a[59017] = 1;
	v->a[59018] = sym_comment;
	v->a[59019] = actions(1831);
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = 1;
	v->a[59021] = anon_sym_LPAREN;
	v->a[59022] = actions(1833);
	v->a[59023] = 1;
	v->a[59024] = anon_sym_BANG;
	v->a[59025] = actions(1841);
	v->a[59026] = 1;
	v->a[59027] = anon_sym_TILDE;
	v->a[59028] = actions(1843);
	v->a[59029] = 1;
	v->a[59030] = anon_sym_DOLLAR;
	v->a[59031] = actions(1845);
	v->a[59032] = 1;
	v->a[59033] = anon_sym_DQUOTE;
	v->a[59034] = actions(1849);
	v->a[59035] = 1;
	v->a[59036] = anon_sym_DOLLAR_LBRACE;
	v->a[59037] = actions(1851);
	v->a[59038] = 1;
	v->a[59039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = actions(1853);
	v->a[59041] = 1;
	v->a[59042] = anon_sym_BQUOTE;
	v->a[59043] = actions(1855);
	v->a[59044] = 1;
	v->a[59045] = sym_variable_name;
	v->a[59046] = actions(1837);
	v->a[59047] = 2;
	v->a[59048] = anon_sym_PLUS_PLUS;
	v->a[59049] = anon_sym_DASH_DASH;
	v->a[59050] = actions(1839);
	v->a[59051] = 2;
	v->a[59052] = anon_sym_DASH2;
	v->a[59053] = anon_sym_PLUS2;
	v->a[59054] = actions(1847);
	v->a[59055] = 2;
	v->a[59056] = sym_number;
	v->a[59057] = aux_sym__simple_variable_name_token1;
	v->a[59058] = state(370);
	v->a[59059] = 3;
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = sym_string;
	v->a[59061] = sym_simple_expansion;
	v->a[59062] = sym_expansion;
	v->a[59063] = state(413);
	v->a[59064] = 8;
	v->a[59065] = sym__arithmetic_expression;
	v->a[59066] = sym_arithmetic_literal;
	v->a[59067] = sym_arithmetic_binary_expression;
	v->a[59068] = sym_arithmetic_ternary_expression;
	v->a[59069] = sym_arithmetic_unary_expression;
	v->a[59070] = sym_arithmetic_postfix_expression;
	v->a[59071] = sym_arithmetic_parenthesized_expression;
	v->a[59072] = sym_command_substitution;
	v->a[59073] = 15;
	v->a[59074] = actions(1074);
	v->a[59075] = 1;
	v->a[59076] = sym_comment;
	v->a[59077] = actions(1831);
	v->a[59078] = 1;
	v->a[59079] = anon_sym_LPAREN;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = actions(1833);
	v->a[59081] = 1;
	v->a[59082] = anon_sym_BANG;
	v->a[59083] = actions(1841);
	v->a[59084] = 1;
	v->a[59085] = anon_sym_TILDE;
	v->a[59086] = actions(1843);
	v->a[59087] = 1;
	v->a[59088] = anon_sym_DOLLAR;
	v->a[59089] = actions(1845);
	v->a[59090] = 1;
	v->a[59091] = anon_sym_DQUOTE;
	v->a[59092] = actions(1849);
	v->a[59093] = 1;
	v->a[59094] = anon_sym_DOLLAR_LBRACE;
	v->a[59095] = actions(1851);
	v->a[59096] = 1;
	v->a[59097] = anon_sym_DOLLAR_LPAREN;
	v->a[59098] = actions(1853);
	v->a[59099] = 1;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
