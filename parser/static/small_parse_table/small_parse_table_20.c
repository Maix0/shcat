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
	v->a[2000] = aux_sym_command_repeat1;
	v->a[2001] = state(1227);
	v->a[2002] = 1;
	v->a[2003] = sym_pipeline;
	v->a[2004] = state(1333);
	v->a[2005] = 1;
	v->a[2006] = aux_sym_redirected_statement_repeat2;
	v->a[2007] = state(2103);
	v->a[2008] = 1;
	v->a[2009] = sym__statement_not_pipeline;
	v->a[2010] = state(2172);
	v->a[2011] = 1;
	v->a[2012] = sym__statements;
	v->a[2013] = actions(11);
	v->a[2014] = 2;
	v->a[2015] = anon_sym_while;
	v->a[2016] = anon_sym_until;
	v->a[2017] = actions(57);
	v->a[2018] = 2;
	v->a[2019] = anon_sym_LT_AMP_DASH;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = anon_sym_GT_AMP_DASH;
	v->a[2021] = actions(65);
	v->a[2022] = 2;
	v->a[2023] = sym_raw_string;
	v->a[2024] = sym_number;
	v->a[2025] = state(443);
	v->a[2026] = 5;
	v->a[2027] = sym_arithmetic_expansion;
	v->a[2028] = sym_string;
	v->a[2029] = sym_simple_expansion;
	v->a[2030] = sym_expansion;
	v->a[2031] = sym_command_substitution;
	v->a[2032] = actions(55);
	v->a[2033] = 6;
	v->a[2034] = anon_sym_LT;
	v->a[2035] = anon_sym_GT;
	v->a[2036] = anon_sym_GT_GT;
	v->a[2037] = anon_sym_LT_AMP;
	v->a[2038] = anon_sym_GT_AMP;
	v->a[2039] = anon_sym_GT_PIPE;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = state(1179);
	v->a[2041] = 12;
	v->a[2042] = sym_redirected_statement;
	v->a[2043] = sym_for_statement;
	v->a[2044] = sym_while_statement;
	v->a[2045] = sym_if_statement;
	v->a[2046] = sym_case_statement;
	v->a[2047] = sym_function_definition;
	v->a[2048] = sym_compound_statement;
	v->a[2049] = sym_subshell;
	v->a[2050] = sym_list;
	v->a[2051] = sym_negated_command;
	v->a[2052] = sym_command;
	v->a[2053] = sym__variable_assignments;
	v->a[2054] = 34;
	v->a[2055] = actions(3);
	v->a[2056] = 1;
	v->a[2057] = sym_comment;
	v->a[2058] = actions(87);
	v->a[2059] = 1;
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = anon_sym_LF;
	v->a[2061] = actions(156);
	v->a[2062] = 1;
	v->a[2063] = sym_word;
	v->a[2064] = actions(158);
	v->a[2065] = 1;
	v->a[2066] = anon_sym_for;
	v->a[2067] = actions(162);
	v->a[2068] = 1;
	v->a[2069] = anon_sym_if;
	v->a[2070] = actions(164);
	v->a[2071] = 1;
	v->a[2072] = anon_sym_case;
	v->a[2073] = actions(166);
	v->a[2074] = 1;
	v->a[2075] = anon_sym_LPAREN;
	v->a[2076] = actions(168);
	v->a[2077] = 1;
	v->a[2078] = anon_sym_LBRACE;
	v->a[2079] = actions(170);
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = 1;
	v->a[2081] = anon_sym_BANG;
	v->a[2082] = actions(176);
	v->a[2083] = 1;
	v->a[2084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2085] = actions(178);
	v->a[2086] = 1;
	v->a[2087] = anon_sym_DOLLAR;
	v->a[2088] = actions(180);
	v->a[2089] = 1;
	v->a[2090] = anon_sym_DQUOTE;
	v->a[2091] = actions(184);
	v->a[2092] = 1;
	v->a[2093] = anon_sym_DOLLAR_LBRACE;
	v->a[2094] = actions(186);
	v->a[2095] = 1;
	v->a[2096] = anon_sym_DOLLAR_LPAREN;
	v->a[2097] = actions(188);
	v->a[2098] = 1;
	v->a[2099] = anon_sym_BQUOTE;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
