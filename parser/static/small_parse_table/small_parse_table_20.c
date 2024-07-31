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
	v->a[2001] = anon_sym_DOLLAR_LPAREN;
	v->a[2002] = actions(111);
	v->a[2003] = 1;
	v->a[2004] = anon_sym_BQUOTE;
	v->a[2005] = actions(113);
	v->a[2006] = 1;
	v->a[2007] = sym_variable_name;
	v->a[2008] = actions(115);
	v->a[2009] = 1;
	v->a[2010] = anon_sym_LF;
	v->a[2011] = state(112);
	v->a[2012] = 1;
	v->a[2013] = aux_sym__statements_repeat1;
	v->a[2014] = state(185);
	v->a[2015] = 1;
	v->a[2016] = sym_command_name;
	v->a[2017] = state(255);
	v->a[2018] = 1;
	v->a[2019] = sym_variable_assignment;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = state(491);
	v->a[2021] = 1;
	v->a[2022] = aux_sym_command_repeat1;
	v->a[2023] = state(511);
	v->a[2024] = 1;
	v->a[2025] = aux_sym__case_item_last_repeat2;
	v->a[2026] = state(599);
	v->a[2027] = 1;
	v->a[2028] = sym_concatenation;
	v->a[2029] = state(615);
	v->a[2030] = 1;
	v->a[2031] = sym_file_redirect;
	v->a[2032] = state(941);
	v->a[2033] = 1;
	v->a[2034] = sym_pipeline;
	v->a[2035] = state(1015);
	v->a[2036] = 1;
	v->a[2037] = aux_sym_redirected_statement_repeat2;
	v->a[2038] = state(1610);
	v->a[2039] = 1;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = sym__statement_not_pipeline;
	v->a[2041] = state(1616);
	v->a[2042] = 1;
	v->a[2043] = sym__statements;
	v->a[2044] = actions(83);
	v->a[2045] = 2;
	v->a[2046] = anon_sym_while;
	v->a[2047] = anon_sym_until;
	v->a[2048] = actions(105);
	v->a[2049] = 2;
	v->a[2050] = sym_raw_string;
	v->a[2051] = sym_number;
	v->a[2052] = state(341);
	v->a[2053] = 5;
	v->a[2054] = sym_arithmetic_expansion;
	v->a[2055] = sym_string;
	v->a[2056] = sym_simple_expansion;
	v->a[2057] = sym_expansion;
	v->a[2058] = sym_command_substitution;
	v->a[2059] = actions(97);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 7;
	v->a[2061] = anon_sym_LT;
	v->a[2062] = anon_sym_GT;
	v->a[2063] = anon_sym_GT_GT;
	v->a[2064] = anon_sym_LT_AMP;
	v->a[2065] = anon_sym_GT_AMP;
	v->a[2066] = anon_sym_GT_PIPE;
	v->a[2067] = anon_sym_LT_GT;
	v->a[2068] = state(819);
	v->a[2069] = 12;
	v->a[2070] = sym_redirected_statement;
	v->a[2071] = sym_for_statement;
	v->a[2072] = sym_while_statement;
	v->a[2073] = sym_if_statement;
	v->a[2074] = sym_case_statement;
	v->a[2075] = sym_function_definition;
	v->a[2076] = sym_compound_statement;
	v->a[2077] = sym_subshell;
	v->a[2078] = sym_list;
	v->a[2079] = sym_negated_command;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = sym_command;
	v->a[2081] = sym__variable_assignments;
	v->a[2082] = 32;
	v->a[2083] = actions(3);
	v->a[2084] = 1;
	v->a[2085] = sym_comment;
	v->a[2086] = actions(9);
	v->a[2087] = 1;
	v->a[2088] = anon_sym_for;
	v->a[2089] = actions(13);
	v->a[2090] = 1;
	v->a[2091] = anon_sym_if;
	v->a[2092] = actions(15);
	v->a[2093] = 1;
	v->a[2094] = anon_sym_case;
	v->a[2095] = actions(17);
	v->a[2096] = 1;
	v->a[2097] = anon_sym_LPAREN;
	v->a[2098] = actions(19);
	v->a[2099] = 1;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
