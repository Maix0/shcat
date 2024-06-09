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
	v->a[2000] = state(1145);
	v->a[2001] = 1;
	v->a[2002] = aux_sym_redirected_statement_repeat2;
	v->a[2003] = state(1190);
	v->a[2004] = 1;
	v->a[2005] = sym_pipeline;
	v->a[2006] = state(2040);
	v->a[2007] = 1;
	v->a[2008] = sym__statement_not_pipeline;
	v->a[2009] = state(2048);
	v->a[2010] = 1;
	v->a[2011] = sym__statements;
	v->a[2012] = actions(99);
	v->a[2013] = 2;
	v->a[2014] = anon_sym_while;
	v->a[2015] = anon_sym_until;
	v->a[2016] = actions(115);
	v->a[2017] = 2;
	v->a[2018] = anon_sym_LT_AMP_DASH;
	v->a[2019] = anon_sym_GT_AMP_DASH;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = state(282);
	v->a[2021] = 6;
	v->a[2022] = sym_arithmetic_expansion;
	v->a[2023] = sym_string;
	v->a[2024] = sym_number;
	v->a[2025] = sym_simple_expansion;
	v->a[2026] = sym_expansion;
	v->a[2027] = sym_command_substitution;
	v->a[2028] = actions(113);
	v->a[2029] = 8;
	v->a[2030] = anon_sym_LT;
	v->a[2031] = anon_sym_GT;
	v->a[2032] = anon_sym_GT_GT;
	v->a[2033] = anon_sym_AMP_GT;
	v->a[2034] = anon_sym_AMP_GT_GT;
	v->a[2035] = anon_sym_LT_AMP;
	v->a[2036] = anon_sym_GT_AMP;
	v->a[2037] = anon_sym_GT_PIPE;
	v->a[2038] = state(1048);
	v->a[2039] = 12;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = sym_redirected_statement;
	v->a[2041] = sym_for_statement;
	v->a[2042] = sym_while_statement;
	v->a[2043] = sym_if_statement;
	v->a[2044] = sym_case_statement;
	v->a[2045] = sym_function_definition;
	v->a[2046] = sym_compound_statement;
	v->a[2047] = sym_subshell;
	v->a[2048] = sym_list;
	v->a[2049] = sym_negated_command;
	v->a[2050] = sym_command;
	v->a[2051] = sym_variable_assignments;
	v->a[2052] = 36;
	v->a[2053] = actions(3);
	v->a[2054] = 1;
	v->a[2055] = sym_comment;
	v->a[2056] = actions(9);
	v->a[2057] = 1;
	v->a[2058] = anon_sym_for;
	v->a[2059] = actions(13);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 1;
	v->a[2061] = anon_sym_if;
	v->a[2062] = actions(15);
	v->a[2063] = 1;
	v->a[2064] = anon_sym_case;
	v->a[2065] = actions(17);
	v->a[2066] = 1;
	v->a[2067] = anon_sym_LPAREN;
	v->a[2068] = actions(19);
	v->a[2069] = 1;
	v->a[2070] = anon_sym_LBRACE;
	v->a[2071] = actions(49);
	v->a[2072] = 1;
	v->a[2073] = sym_word;
	v->a[2074] = actions(57);
	v->a[2075] = 1;
	v->a[2076] = anon_sym_BANG;
	v->a[2077] = actions(63);
	v->a[2078] = 1;
	v->a[2079] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = actions(65);
	v->a[2081] = 1;
	v->a[2082] = anon_sym_DOLLAR;
	v->a[2083] = actions(67);
	v->a[2084] = 1;
	v->a[2085] = anon_sym_DQUOTE;
	v->a[2086] = actions(69);
	v->a[2087] = 1;
	v->a[2088] = sym_raw_string;
	v->a[2089] = actions(71);
	v->a[2090] = 1;
	v->a[2091] = aux_sym_number_token1;
	v->a[2092] = actions(73);
	v->a[2093] = 1;
	v->a[2094] = aux_sym_number_token2;
	v->a[2095] = actions(75);
	v->a[2096] = 1;
	v->a[2097] = anon_sym_DOLLAR_LBRACE;
	v->a[2098] = actions(77);
	v->a[2099] = 1;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
