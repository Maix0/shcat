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
	v->a[2010] = 30;
	v->a[2011] = actions(3);
	v->a[2012] = 1;
	v->a[2013] = sym_comment;
	v->a[2014] = actions(123);
	v->a[2015] = 1;
	v->a[2016] = sym_word;
	v->a[2017] = actions(126);
	v->a[2018] = 1;
	v->a[2019] = anon_sym_for;
	small_parse_table_101(v);
}

void	small_parse_table_101(t_small_parse_table_array *v)
{
	v->a[2020] = actions(132);
	v->a[2021] = 1;
	v->a[2022] = anon_sym_if;
	v->a[2023] = actions(137);
	v->a[2024] = 1;
	v->a[2025] = anon_sym_case;
	v->a[2026] = actions(140);
	v->a[2027] = 1;
	v->a[2028] = anon_sym_LPAREN;
	v->a[2029] = actions(143);
	v->a[2030] = 1;
	v->a[2031] = anon_sym_LBRACE;
	v->a[2032] = actions(146);
	v->a[2033] = 1;
	v->a[2034] = anon_sym_BANG;
	v->a[2035] = actions(152);
	v->a[2036] = 1;
	v->a[2037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2038] = actions(155);
	v->a[2039] = 1;
	small_parse_table_102(v);
}

void	small_parse_table_102(t_small_parse_table_array *v)
{
	v->a[2040] = anon_sym_DOLLAR;
	v->a[2041] = actions(158);
	v->a[2042] = 1;
	v->a[2043] = anon_sym_DQUOTE;
	v->a[2044] = actions(164);
	v->a[2045] = 1;
	v->a[2046] = anon_sym_DOLLAR_LBRACE;
	v->a[2047] = actions(167);
	v->a[2048] = 1;
	v->a[2049] = anon_sym_DOLLAR_LPAREN;
	v->a[2050] = actions(170);
	v->a[2051] = 1;
	v->a[2052] = anon_sym_BQUOTE;
	v->a[2053] = actions(173);
	v->a[2054] = 1;
	v->a[2055] = sym_variable_name;
	v->a[2056] = state(19);
	v->a[2057] = 1;
	v->a[2058] = aux_sym__terminated_statement;
	v->a[2059] = state(185);
	small_parse_table_103(v);
}

void	small_parse_table_103(t_small_parse_table_array *v)
{
	v->a[2060] = 1;
	v->a[2061] = sym_command_name;
	v->a[2062] = state(231);
	v->a[2063] = 1;
	v->a[2064] = sym_variable_assignment;
	v->a[2065] = state(411);
	v->a[2066] = 1;
	v->a[2067] = aux_sym_command_repeat1;
	v->a[2068] = state(551);
	v->a[2069] = 1;
	v->a[2070] = sym_file_redirect;
	v->a[2071] = state(555);
	v->a[2072] = 1;
	v->a[2073] = sym_concatenation;
	v->a[2074] = state(1070);
	v->a[2075] = 1;
	v->a[2076] = sym_pipeline;
	v->a[2077] = state(1126);
	v->a[2078] = 1;
	v->a[2079] = aux_sym_redirected_statement_repeat2;
	small_parse_table_104(v);
}

void	small_parse_table_104(t_small_parse_table_array *v)
{
	v->a[2080] = state(1561);
	v->a[2081] = 1;
	v->a[2082] = sym__statement_not_pipeline;
	v->a[2083] = actions(129);
	v->a[2084] = 2;
	v->a[2085] = anon_sym_while;
	v->a[2086] = anon_sym_until;
	v->a[2087] = actions(161);
	v->a[2088] = 2;
	v->a[2089] = sym_raw_string;
	v->a[2090] = sym_number;
	v->a[2091] = actions(135);
	v->a[2092] = 3;
	v->a[2093] = anon_sym_fi;
	v->a[2094] = anon_sym_elif;
	v->a[2095] = anon_sym_else;
	v->a[2096] = actions(149);
	v->a[2097] = 3;
	v->a[2098] = anon_sym_LT;
	v->a[2099] = anon_sym_GT;
	small_parse_table_105(v);
}

/* EOF small_parse_table_20.c */
