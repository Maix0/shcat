/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_20.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_100(t_small_parse_table_array *v)
{
	v->a[2000] = aux_sym_heredoc_redirect_token1;
	v->a[2001] = state(790);
	v->a[2002] = 7;
	v->a[2003] = sym_arithmetic_expansion;
	v->a[2004] = sym_brace_expression;
	v->a[2005] = sym_string;
	v->a[2006] = sym_number;
	v->a[2007] = sym_simple_expansion;
	v->a[2008] = sym_expansion;
	v->a[2009] = sym_command_substitution;
	v->a[2010] = actions(691);
	v->a[2011] = 19;
	v->a[2012] = anon_sym_PIPE;
	v->a[2013] = anon_sym_SEMI_SEMI;
	v->a[2014] = anon_sym_PIPE_AMP;
	v->a[2015] = anon_sym_AMP_AMP;
	v->a[2016] = anon_sym_PIPE_PIPE;
	v->a[2017] = anon_sym_LT;
	v->a[2018] = anon_sym_GT;
	v->a[2019] = anon_sym_GT_GT;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = anon_sym_AMP_GT;
	v->a[2021] = anon_sym_AMP_GT_GT;
	v->a[2022] = anon_sym_LT_AMP;
	v->a[2023] = anon_sym_GT_AMP;
	v->a[2024] = anon_sym_GT_PIPE;
	v->a[2025] = anon_sym_LT_AMP_DASH;
	v->a[2026] = anon_sym_GT_AMP_DASH;
	v->a[2027] = anon_sym_LT_LT;
	v->a[2028] = anon_sym_LT_LT_DASH;
	v->a[2029] = anon_sym_AMP;
	v->a[2030] = anon_sym_SEMI;
	v->a[2031] = 6;
	v->a[2032] = actions(3);
	v->a[2033] = 1;
	v->a[2034] = sym_comment;
	v->a[2035] = actions(1178);
	v->a[2036] = 1;
	v->a[2037] = sym_variable_name;
	v->a[2038] = actions(1176);
	v->a[2039] = 2;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = aux_sym__simple_variable_name_token1;
	v->a[2041] = aux_sym__multiline_variable_name_token1;
	v->a[2042] = actions(816);
	v->a[2043] = 4;
	v->a[2044] = sym_file_descriptor;
	v->a[2045] = sym_test_operator;
	v->a[2046] = sym__bare_dollar;
	v->a[2047] = sym__brace_start;
	v->a[2048] = actions(1174);
	v->a[2049] = 9;
	v->a[2050] = anon_sym_BANG;
	v->a[2051] = anon_sym_DASH;
	v->a[2052] = anon_sym_STAR;
	v->a[2053] = anon_sym_QMARK;
	v->a[2054] = anon_sym_DOLLAR;
	v->a[2055] = anon_sym_POUND;
	v->a[2056] = anon_sym_AT;
	v->a[2057] = anon_sym_0;
	v->a[2058] = anon_sym__;
	v->a[2059] = actions(810);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 33;
	v->a[2061] = anon_sym_LPAREN;
	v->a[2062] = anon_sym_PIPE;
	v->a[2063] = anon_sym_RPAREN;
	v->a[2064] = anon_sym_SEMI_SEMI;
	v->a[2065] = anon_sym_PIPE_AMP;
	v->a[2066] = anon_sym_AMP_AMP;
	v->a[2067] = anon_sym_PIPE_PIPE;
	v->a[2068] = anon_sym_LT;
	v->a[2069] = anon_sym_GT;
	v->a[2070] = anon_sym_GT_GT;
	v->a[2071] = anon_sym_AMP_GT;
	v->a[2072] = anon_sym_AMP_GT_GT;
	v->a[2073] = anon_sym_LT_AMP;
	v->a[2074] = anon_sym_GT_AMP;
	v->a[2075] = anon_sym_GT_PIPE;
	v->a[2076] = anon_sym_LT_AMP_DASH;
	v->a[2077] = anon_sym_GT_AMP_DASH;
	v->a[2078] = anon_sym_LT_LT;
	v->a[2079] = anon_sym_LT_LT_DASH;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = aux_sym_heredoc_redirect_token1;
	v->a[2081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2082] = anon_sym_AMP;
	v->a[2083] = sym__special_character;
	v->a[2084] = anon_sym_DQUOTE;
	v->a[2085] = sym_raw_string;
	v->a[2086] = aux_sym_number_token1;
	v->a[2087] = aux_sym_number_token2;
	v->a[2088] = anon_sym_DOLLAR_LBRACE;
	v->a[2089] = anon_sym_DOLLAR_LPAREN;
	v->a[2090] = anon_sym_BQUOTE;
	v->a[2091] = anon_sym_DOLLAR_BQUOTE;
	v->a[2092] = sym_word;
	v->a[2093] = anon_sym_SEMI;
	v->a[2094] = 6;
	v->a[2095] = actions(3);
	v->a[2096] = 1;
	v->a[2097] = sym_comment;
	v->a[2098] = state(864);
	v->a[2099] = 1;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
