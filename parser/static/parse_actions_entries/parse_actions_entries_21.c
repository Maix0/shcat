/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_21.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_105(t_parse_actions_entries_array *v)
{
	v->a[2100] = shift_repeat(1791);
	v->a[2101] = entry(2, false);
	v->a[2102] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2103] = shift_repeat(1329);
	v->a[2104] = entry(2, false);
	v->a[2105] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2106] = shift_repeat(749);
	v->a[2107] = entry(2, false);
	v->a[2108] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2109] = shift_repeat(1667);
	v->a[2110] = entry(2, false);
	v->a[2111] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2112] = shift_repeat(1668);
	v->a[2113] = entry(2, false);
	v->a[2114] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2115] = shift_repeat(1606);
	v->a[2116] = entry(2, false);
	v->a[2117] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2118] = shift_repeat(107);
	v->a[2119] = entry(2, false);
	parse_actions_entries_106(v);
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2121] = shift_repeat(40);
	v->a[2122] = entry(2, true);
	v->a[2123] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2124] = shift_repeat(1736);
	v->a[2125] = entry(1, true);
	v->a[2126] = reduce(sym_heredoc_redirect, 6, 0, 77);
	v->a[2127] = entry(1, false);
	v->a[2128] = reduce(sym_heredoc_redirect, 6, 0, 77);
	v->a[2129] = entry(1, true);
	v->a[2130] = reduce(sym_do_group, 3, 0, 20);
	v->a[2131] = entry(1, false);
	v->a[2132] = reduce(sym_do_group, 3, 0, 20);
	v->a[2133] = entry(1, true);
	v->a[2134] = reduce(sym_heredoc_redirect, 6, 0, 78);
	v->a[2135] = entry(1, false);
	v->a[2136] = reduce(sym_heredoc_redirect, 6, 0, 78);
	v->a[2137] = entry(1, true);
	v->a[2138] = reduce(sym_function_definition, 4, 0, 46);
	v->a[2139] = entry(1, false);
	parse_actions_entries_107(v);
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = reduce(sym_function_definition, 4, 0, 46);
	v->a[2141] = entry(1, true);
	v->a[2142] = reduce(sym_command, 2, 0, 3);
	v->a[2143] = entry(1, false);
	v->a[2144] = reduce(sym_command, 2, 0, 3);
	v->a[2145] = entry(1, true);
	v->a[2146] = reduce(sym_case_statement, 6, 0, 62);
	v->a[2147] = entry(1, false);
	v->a[2148] = reduce(sym_case_statement, 6, 0, 62);
	v->a[2149] = entry(1, true);
	v->a[2150] = reduce(sym_case_statement, 8, 0, 82);
	v->a[2151] = entry(1, false);
	v->a[2152] = reduce(sym_case_statement, 8, 0, 82);
	v->a[2153] = entry(1, true);
	v->a[2154] = reduce(sym_heredoc_redirect, 7, 0, 83);
	v->a[2155] = entry(1, false);
	v->a[2156] = reduce(sym_heredoc_redirect, 7, 0, 83);
	v->a[2157] = entry(2, false);
	v->a[2158] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2159] = shift_repeat(1377);
	parse_actions_entries_108(v);
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = entry(2, true);
	v->a[2161] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2162] = shift_repeat(1772);
	v->a[2163] = entry(1, true);
	v->a[2164] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[2165] = entry(1, false);
	v->a[2166] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[2167] = entry(1, true);
	v->a[2168] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2169] = entry(1, false);
	v->a[2170] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2171] = entry(1, true);
	v->a[2172] = reduce(sym_subshell, 3, 0, 20);
	v->a[2173] = entry(1, false);
	v->a[2174] = reduce(sym_subshell, 3, 0, 20);
	v->a[2175] = entry(1, true);
	v->a[2176] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2177] = entry(1, false);
	v->a[2178] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2179] = entry(2, false);
	parse_actions_entries_109(v);
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2181] = shift_repeat(1367);
	v->a[2182] = entry(2, true);
	v->a[2183] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2184] = shift_repeat(1730);
	v->a[2185] = entry(1, true);
	v->a[2186] = reduce(sym_if_statement, 6, 0, 56);
	v->a[2187] = entry(1, false);
	v->a[2188] = reduce(sym_if_statement, 6, 0, 56);
	v->a[2189] = entry(1, true);
	v->a[2190] = shift(1755);
	v->a[2191] = entry(1, true);
	v->a[2192] = shift(1783);
	v->a[2193] = entry(2, true);
	v->a[2194] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2195] = shift_repeat(2075);
	v->a[2196] = entry(2, false);
	v->a[2197] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2198] = shift_repeat(1416);
	v->a[2199] = entry(2, true);
	parse_actions_entries_110(v);
}

/* EOF parse_actions_entries_21.c */
