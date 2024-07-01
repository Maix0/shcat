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
	v->a[2000] = sym_while_statement;
	v->a[2001] = sym_if_statement;
	v->a[2002] = sym_case_statement;
	v->a[2003] = sym_function_definition;
	v->a[2004] = sym_compound_statement;
	v->a[2005] = sym_subshell;
	v->a[2006] = sym_list;
	v->a[2007] = sym_negated_command;
	v->a[2008] = sym_command;
	v->a[2009] = sym__variable_assignments;
	v->a[2010] = 33;
	v->a[2011] = actions(3);
	v->a[2012] = 1;
	v->a[2013] = sym_comment;
	v->a[2014] = actions(85);
	v->a[2015] = 1;
	v->a[2016] = anon_sym_LF;
	v->a[2017] = actions(87);
	v->a[2018] = 1;
	v->a[2019] = sym_word;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = actions(89);
	v->a[2021] = 1;
	v->a[2022] = anon_sym_for;
	v->a[2023] = actions(93);
	v->a[2024] = 1;
	v->a[2025] = anon_sym_if;
	v->a[2026] = actions(95);
	v->a[2027] = 1;
	v->a[2028] = anon_sym_case;
	v->a[2029] = actions(97);
	v->a[2030] = 1;
	v->a[2031] = anon_sym_LPAREN;
	v->a[2032] = actions(101);
	v->a[2033] = 1;
	v->a[2034] = anon_sym_LBRACE;
	v->a[2035] = actions(103);
	v->a[2036] = 1;
	v->a[2037] = anon_sym_BANG;
	v->a[2038] = actions(107);
	v->a[2039] = 1;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2041] = actions(109);
	v->a[2042] = 1;
	v->a[2043] = anon_sym_DOLLAR;
	v->a[2044] = actions(111);
	v->a[2045] = 1;
	v->a[2046] = anon_sym_DQUOTE;
	v->a[2047] = actions(115);
	v->a[2048] = 1;
	v->a[2049] = anon_sym_DOLLAR_LBRACE;
	v->a[2050] = actions(117);
	v->a[2051] = 1;
	v->a[2052] = anon_sym_DOLLAR_LPAREN;
	v->a[2053] = actions(119);
	v->a[2054] = 1;
	v->a[2055] = anon_sym_BQUOTE;
	v->a[2056] = actions(121);
	v->a[2057] = 1;
	v->a[2058] = sym_file_descriptor;
	v->a[2059] = actions(123);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 1;
	v->a[2061] = sym_variable_name;
	v->a[2062] = state(127);
	v->a[2063] = 1;
	v->a[2064] = aux_sym__statements_repeat1;
	v->a[2065] = state(178);
	v->a[2066] = 1;
	v->a[2067] = sym_command_name;
	v->a[2068] = state(228);
	v->a[2069] = 1;
	v->a[2070] = sym_variable_assignment;
	v->a[2071] = state(592);
	v->a[2072] = 1;
	v->a[2073] = sym_concatenation;
	v->a[2074] = state(641);
	v->a[2075] = 1;
	v->a[2076] = sym_file_redirect;
	v->a[2077] = state(657);
	v->a[2078] = 1;
	v->a[2079] = aux_sym__case_item_last_repeat2;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = state(662);
	v->a[2081] = 1;
	v->a[2082] = aux_sym_command_repeat1;
	v->a[2083] = state(1017);
	v->a[2084] = 1;
	v->a[2085] = sym_pipeline;
	v->a[2086] = state(1168);
	v->a[2087] = 1;
	v->a[2088] = aux_sym_redirected_statement_repeat2;
	v->a[2089] = state(1901);
	v->a[2090] = 1;
	v->a[2091] = sym__statement_not_pipeline;
	v->a[2092] = state(1908);
	v->a[2093] = 1;
	v->a[2094] = sym__statements;
	v->a[2095] = actions(91);
	v->a[2096] = 2;
	v->a[2097] = anon_sym_while;
	v->a[2098] = anon_sym_until;
	v->a[2099] = actions(113);
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
