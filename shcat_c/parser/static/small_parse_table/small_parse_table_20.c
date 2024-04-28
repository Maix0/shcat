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
	v->a[2000] = sym_translated_string;
	v->a[2001] = sym_number;
	v->a[2002] = sym_simple_expansion;
	v->a[2003] = sym_expansion;
	v->a[2004] = sym_command_substitution;
	v->a[2005] = sym_process_substitution;
	v->a[2006] = actions(1440);
	v->a[2007] = 19;
	v->a[2008] = anon_sym_SEMI;
	v->a[2009] = anon_sym_PIPE_PIPE;
	v->a[2010] = anon_sym_AMP_AMP;
	v->a[2011] = anon_sym_PIPE;
	v->a[2012] = anon_sym_AMP;
	v->a[2013] = anon_sym_LT;
	v->a[2014] = anon_sym_GT;
	v->a[2015] = anon_sym_LT_LT;
	v->a[2016] = anon_sym_GT_GT;
	v->a[2017] = anon_sym_SEMI_SEMI;
	v->a[2018] = anon_sym_PIPE_AMP;
	v->a[2019] = anon_sym_AMP_GT;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = anon_sym_AMP_GT_GT;
	v->a[2021] = anon_sym_LT_AMP;
	v->a[2022] = anon_sym_GT_AMP;
	v->a[2023] = anon_sym_GT_PIPE;
	v->a[2024] = anon_sym_LT_AMP_DASH;
	v->a[2025] = anon_sym_GT_AMP_DASH;
	v->a[2026] = anon_sym_LT_LT_DASH;
	v->a[2027] = 24;
	v->a[2028] = actions(3);
	v->a[2029] = 1;
	v->a[2030] = sym_comment;
	v->a[2031] = actions(1706);
	v->a[2032] = 1;
	v->a[2033] = anon_sym_DOLLAR_LBRACK;
	v->a[2034] = actions(1709);
	v->a[2035] = 1;
	v->a[2036] = anon_sym_DOLLAR;
	v->a[2037] = actions(1712);
	v->a[2038] = 1;
	v->a[2039] = sym__special_character;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = actions(1715);
	v->a[2041] = 1;
	v->a[2042] = anon_sym_DQUOTE;
	v->a[2043] = actions(1718);
	v->a[2044] = 1;
	v->a[2045] = aux_sym_number_token1;
	v->a[2046] = actions(1721);
	v->a[2047] = 1;
	v->a[2048] = aux_sym_number_token2;
	v->a[2049] = actions(1724);
	v->a[2050] = 1;
	v->a[2051] = anon_sym_DOLLAR_LBRACE;
	v->a[2052] = actions(1727);
	v->a[2053] = 1;
	v->a[2054] = anon_sym_DOLLAR_LPAREN;
	v->a[2055] = actions(1730);
	v->a[2056] = 1;
	v->a[2057] = anon_sym_BQUOTE;
	v->a[2058] = actions(1733);
	v->a[2059] = 1;
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = anon_sym_DOLLAR_BQUOTE;
	v->a[2061] = actions(1739);
	v->a[2062] = 1;
	v->a[2063] = aux_sym__simple_variable_name_token1;
	v->a[2064] = actions(1742);
	v->a[2065] = 1;
	v->a[2066] = sym_variable_name;
	v->a[2067] = actions(1745);
	v->a[2068] = 1;
	v->a[2069] = sym_test_operator;
	v->a[2070] = actions(1748);
	v->a[2071] = 1;
	v->a[2072] = sym__brace_start;
	v->a[2073] = state(1368);
	v->a[2074] = 1;
	v->a[2075] = aux_sym__literal_repeat1;
	v->a[2076] = state(6750);
	v->a[2077] = 1;
	v->a[2078] = sym_subscript;
	v->a[2079] = actions(1699);
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = 2;
	v->a[2081] = anon_sym_LPAREN_LPAREN;
	v->a[2082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2083] = actions(1704);
	v->a[2084] = 2;
	v->a[2085] = sym_file_descriptor;
	v->a[2086] = aux_sym_heredoc_redirect_token1;
	v->a[2087] = actions(1736);
	v->a[2088] = 2;
	v->a[2089] = anon_sym_LT_LPAREN;
	v->a[2090] = anon_sym_GT_LPAREN;
	v->a[2091] = actions(1696);
	v->a[2092] = 3;
	v->a[2093] = sym_raw_string;
	v->a[2094] = sym_ansi_c_string;
	v->a[2095] = sym_word;
	v->a[2096] = state(546);
	v->a[2097] = 3;
	v->a[2098] = sym_variable_assignment;
	v->a[2099] = sym_concatenation;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
