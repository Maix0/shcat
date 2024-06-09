/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_570.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2850(t_small_parse_table_array *v)
{
	v->a[57000] = anon_sym_DASH2;
	v->a[57001] = anon_sym_PLUS2;
	v->a[57002] = state(530);
	v->a[57003] = 4;
	v->a[57004] = sym_string;
	v->a[57005] = sym_number;
	v->a[57006] = sym_simple_expansion;
	v->a[57007] = sym_expansion;
	v->a[57008] = state(409);
	v->a[57009] = 8;
	v->a[57010] = sym__arithmetic_expression;
	v->a[57011] = sym_arithmetic_literal;
	v->a[57012] = sym_arithmetic_binary_expression;
	v->a[57013] = sym_arithmetic_ternary_expression;
	v->a[57014] = sym_arithmetic_unary_expression;
	v->a[57015] = sym_arithmetic_postfix_expression;
	v->a[57016] = sym_arithmetic_parenthesized_expression;
	v->a[57017] = sym_command_substitution;
	v->a[57018] = 17;
	v->a[57019] = actions(1404);
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = 1;
	v->a[57021] = sym_comment;
	v->a[57022] = actions(2077);
	v->a[57023] = 1;
	v->a[57024] = anon_sym_LPAREN;
	v->a[57025] = actions(2079);
	v->a[57026] = 1;
	v->a[57027] = anon_sym_BANG;
	v->a[57028] = actions(2085);
	v->a[57029] = 1;
	v->a[57030] = anon_sym_TILDE;
	v->a[57031] = actions(2087);
	v->a[57032] = 1;
	v->a[57033] = anon_sym_DOLLAR;
	v->a[57034] = actions(2089);
	v->a[57035] = 1;
	v->a[57036] = anon_sym_DQUOTE;
	v->a[57037] = actions(2091);
	v->a[57038] = 1;
	v->a[57039] = aux_sym_number_token1;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = actions(2093);
	v->a[57041] = 1;
	v->a[57042] = aux_sym_number_token2;
	v->a[57043] = actions(2095);
	v->a[57044] = 1;
	v->a[57045] = anon_sym_DOLLAR_LBRACE;
	v->a[57046] = actions(2097);
	v->a[57047] = 1;
	v->a[57048] = anon_sym_DOLLAR_LPAREN;
	v->a[57049] = actions(2099);
	v->a[57050] = 1;
	v->a[57051] = anon_sym_BQUOTE;
	v->a[57052] = actions(2101);
	v->a[57053] = 1;
	v->a[57054] = aux_sym__simple_variable_name_token1;
	v->a[57055] = actions(2103);
	v->a[57056] = 1;
	v->a[57057] = sym_variable_name;
	v->a[57058] = actions(2081);
	v->a[57059] = 2;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = anon_sym_PLUS_PLUS;
	v->a[57061] = anon_sym_DASH_DASH;
	v->a[57062] = actions(2083);
	v->a[57063] = 2;
	v->a[57064] = anon_sym_DASH2;
	v->a[57065] = anon_sym_PLUS2;
	v->a[57066] = state(588);
	v->a[57067] = 4;
	v->a[57068] = sym_string;
	v->a[57069] = sym_number;
	v->a[57070] = sym_simple_expansion;
	v->a[57071] = sym_expansion;
	v->a[57072] = state(646);
	v->a[57073] = 8;
	v->a[57074] = sym__arithmetic_expression;
	v->a[57075] = sym_arithmetic_literal;
	v->a[57076] = sym_arithmetic_binary_expression;
	v->a[57077] = sym_arithmetic_ternary_expression;
	v->a[57078] = sym_arithmetic_unary_expression;
	v->a[57079] = sym_arithmetic_postfix_expression;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = sym_arithmetic_parenthesized_expression;
	v->a[57081] = sym_command_substitution;
	v->a[57082] = 6;
	v->a[57083] = actions(3);
	v->a[57084] = 1;
	v->a[57085] = sym_comment;
	v->a[57086] = actions(413);
	v->a[57087] = 1;
	v->a[57088] = sym_file_descriptor;
	v->a[57089] = actions(2109);
	v->a[57090] = 1;
	v->a[57091] = sym_variable_name;
	v->a[57092] = actions(2107);
	v->a[57093] = 2;
	v->a[57094] = aux_sym__simple_variable_name_token1;
	v->a[57095] = aux_sym__multiline_variable_name_token1;
	v->a[57096] = actions(2105);
	v->a[57097] = 9;
	v->a[57098] = anon_sym_BANG;
	v->a[57099] = anon_sym_DASH;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
