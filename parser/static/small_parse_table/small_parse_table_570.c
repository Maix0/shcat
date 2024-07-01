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
	v->a[57000] = 1;
	v->a[57001] = anon_sym_DOLLAR_LPAREN;
	v->a[57002] = actions(1941);
	v->a[57003] = 1;
	v->a[57004] = anon_sym_BQUOTE;
	v->a[57005] = actions(1943);
	v->a[57006] = 1;
	v->a[57007] = sym_variable_name;
	v->a[57008] = actions(1925);
	v->a[57009] = 2;
	v->a[57010] = anon_sym_PLUS_PLUS;
	v->a[57011] = anon_sym_DASH_DASH;
	v->a[57012] = actions(1927);
	v->a[57013] = 2;
	v->a[57014] = anon_sym_DASH2;
	v->a[57015] = anon_sym_PLUS2;
	v->a[57016] = actions(1935);
	v->a[57017] = 2;
	v->a[57018] = sym_number;
	v->a[57019] = aux_sym__simple_variable_name_token1;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = state(334);
	v->a[57021] = 3;
	v->a[57022] = sym_string;
	v->a[57023] = sym_simple_expansion;
	v->a[57024] = sym_expansion;
	v->a[57025] = state(351);
	v->a[57026] = 8;
	v->a[57027] = sym__arithmetic_expression;
	v->a[57028] = sym_arithmetic_literal;
	v->a[57029] = sym_arithmetic_binary_expression;
	v->a[57030] = sym_arithmetic_ternary_expression;
	v->a[57031] = sym_arithmetic_unary_expression;
	v->a[57032] = sym_arithmetic_postfix_expression;
	v->a[57033] = sym_arithmetic_parenthesized_expression;
	v->a[57034] = sym_command_substitution;
	v->a[57035] = 15;
	v->a[57036] = actions(870);
	v->a[57037] = 1;
	v->a[57038] = sym_comment;
	v->a[57039] = actions(1921);
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = 1;
	v->a[57041] = anon_sym_LPAREN;
	v->a[57042] = actions(1923);
	v->a[57043] = 1;
	v->a[57044] = anon_sym_BANG;
	v->a[57045] = actions(1929);
	v->a[57046] = 1;
	v->a[57047] = anon_sym_TILDE;
	v->a[57048] = actions(1931);
	v->a[57049] = 1;
	v->a[57050] = anon_sym_DOLLAR;
	v->a[57051] = actions(1933);
	v->a[57052] = 1;
	v->a[57053] = anon_sym_DQUOTE;
	v->a[57054] = actions(1937);
	v->a[57055] = 1;
	v->a[57056] = anon_sym_DOLLAR_LBRACE;
	v->a[57057] = actions(1939);
	v->a[57058] = 1;
	v->a[57059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = actions(1941);
	v->a[57061] = 1;
	v->a[57062] = anon_sym_BQUOTE;
	v->a[57063] = actions(1943);
	v->a[57064] = 1;
	v->a[57065] = sym_variable_name;
	v->a[57066] = actions(1925);
	v->a[57067] = 2;
	v->a[57068] = anon_sym_PLUS_PLUS;
	v->a[57069] = anon_sym_DASH_DASH;
	v->a[57070] = actions(1927);
	v->a[57071] = 2;
	v->a[57072] = anon_sym_DASH2;
	v->a[57073] = anon_sym_PLUS2;
	v->a[57074] = actions(1935);
	v->a[57075] = 2;
	v->a[57076] = sym_number;
	v->a[57077] = aux_sym__simple_variable_name_token1;
	v->a[57078] = state(334);
	v->a[57079] = 3;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = sym_string;
	v->a[57081] = sym_simple_expansion;
	v->a[57082] = sym_expansion;
	v->a[57083] = state(350);
	v->a[57084] = 8;
	v->a[57085] = sym__arithmetic_expression;
	v->a[57086] = sym_arithmetic_literal;
	v->a[57087] = sym_arithmetic_binary_expression;
	v->a[57088] = sym_arithmetic_ternary_expression;
	v->a[57089] = sym_arithmetic_unary_expression;
	v->a[57090] = sym_arithmetic_postfix_expression;
	v->a[57091] = sym_arithmetic_parenthesized_expression;
	v->a[57092] = sym_command_substitution;
	v->a[57093] = 15;
	v->a[57094] = actions(870);
	v->a[57095] = 1;
	v->a[57096] = sym_comment;
	v->a[57097] = actions(1921);
	v->a[57098] = 1;
	v->a[57099] = anon_sym_LPAREN;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
