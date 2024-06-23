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
	v->a[2000] = 1;
	v->a[2001] = anon_sym_DOLLAR_LBRACE;
	v->a[2002] = actions(119);
	v->a[2003] = 1;
	v->a[2004] = anon_sym_DOLLAR_LPAREN;
	v->a[2005] = actions(121);
	v->a[2006] = 1;
	v->a[2007] = anon_sym_BQUOTE;
	v->a[2008] = actions(123);
	v->a[2009] = 1;
	v->a[2010] = sym_file_descriptor;
	v->a[2011] = actions(125);
	v->a[2012] = 1;
	v->a[2013] = sym_variable_name;
	v->a[2014] = state(129);
	v->a[2015] = 1;
	v->a[2016] = aux_sym__statements_repeat1;
	v->a[2017] = state(182);
	v->a[2018] = 1;
	v->a[2019] = sym_command_name;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = state(271);
	v->a[2021] = 1;
	v->a[2022] = sym_variable_assignment;
	v->a[2023] = state(621);
	v->a[2024] = 1;
	v->a[2025] = sym_concatenation;
	v->a[2026] = state(692);
	v->a[2027] = 1;
	v->a[2028] = sym_file_redirect;
	v->a[2029] = state(767);
	v->a[2030] = 1;
	v->a[2031] = aux_sym__case_item_last_repeat2;
	v->a[2032] = state(810);
	v->a[2033] = 1;
	v->a[2034] = aux_sym_command_repeat1;
	v->a[2035] = state(1321);
	v->a[2036] = 1;
	v->a[2037] = sym_pipeline;
	v->a[2038] = state(1432);
	v->a[2039] = 1;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = aux_sym_redirected_statement_repeat2;
	v->a[2041] = state(2254);
	v->a[2042] = 1;
	v->a[2043] = sym__statement_not_pipeline;
	v->a[2044] = state(2259);
	v->a[2045] = 1;
	v->a[2046] = sym__statements;
	v->a[2047] = actions(93);
	v->a[2048] = 2;
	v->a[2049] = anon_sym_while;
	v->a[2050] = anon_sym_until;
	v->a[2051] = actions(107);
	v->a[2052] = 2;
	v->a[2053] = anon_sym_LT_AMP_DASH;
	v->a[2054] = anon_sym_GT_AMP_DASH;
	v->a[2055] = actions(115);
	v->a[2056] = 2;
	v->a[2057] = sym_raw_string;
	v->a[2058] = sym_number;
	v->a[2059] = state(282);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 5;
	v->a[2061] = sym_arithmetic_expansion;
	v->a[2062] = sym_string;
	v->a[2063] = sym_simple_expansion;
	v->a[2064] = sym_expansion;
	v->a[2065] = sym_command_substitution;
	v->a[2066] = actions(105);
	v->a[2067] = 8;
	v->a[2068] = anon_sym_LT;
	v->a[2069] = anon_sym_GT;
	v->a[2070] = anon_sym_GT_GT;
	v->a[2071] = anon_sym_AMP_GT;
	v->a[2072] = anon_sym_AMP_GT_GT;
	v->a[2073] = anon_sym_LT_AMP;
	v->a[2074] = anon_sym_GT_AMP;
	v->a[2075] = anon_sym_GT_PIPE;
	v->a[2076] = state(1296);
	v->a[2077] = 12;
	v->a[2078] = sym_redirected_statement;
	v->a[2079] = sym_for_statement;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = sym_while_statement;
	v->a[2081] = sym_if_statement;
	v->a[2082] = sym_case_statement;
	v->a[2083] = sym_function_definition;
	v->a[2084] = sym_compound_statement;
	v->a[2085] = sym_subshell;
	v->a[2086] = sym_list;
	v->a[2087] = sym_negated_command;
	v->a[2088] = sym_command;
	v->a[2089] = sym__variable_assignments;
	v->a[2090] = 34;
	v->a[2091] = actions(3);
	v->a[2092] = 1;
	v->a[2093] = sym_comment;
	v->a[2094] = actions(9);
	v->a[2095] = 1;
	v->a[2096] = anon_sym_for;
	v->a[2097] = actions(13);
	v->a[2098] = 1;
	v->a[2099] = anon_sym_if;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
