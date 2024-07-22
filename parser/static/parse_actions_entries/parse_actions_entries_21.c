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
	v->a[2100] = reduce(sym_for_statement, 6, 0, 55);
	v->a[2101] = entry(1, false);
	v->a[2102] = reduce(sym_for_statement, 6, 0, 55);
	v->a[2103] = entry(2, false);
	v->a[2104] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2105] = shift_repeat(1424);
	v->a[2106] = entry(2, false);
	v->a[2107] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2108] = shift_repeat(666);
	v->a[2109] = entry(2, false);
	v->a[2110] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2111] = shift_repeat(1697);
	v->a[2112] = entry(2, false);
	v->a[2113] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2114] = shift_repeat(1631);
	v->a[2115] = entry(2, false);
	v->a[2116] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2117] = shift_repeat(1638);
	v->a[2118] = entry(2, false);
	v->a[2119] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_106(v);
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = shift_repeat(69);
	v->a[2121] = entry(2, false);
	v->a[2122] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2123] = shift_repeat(76);
	v->a[2124] = entry(1, true);
	v->a[2125] = reduce(sym_heredoc_redirect, 6, 0, 65);
	v->a[2126] = entry(1, false);
	v->a[2127] = reduce(sym_heredoc_redirect, 6, 0, 65);
	v->a[2128] = entry(2, true);
	v->a[2129] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2130] = shift_repeat(2075);
	v->a[2131] = entry(1, true);
	v->a[2132] = reduce(sym_case_statement, 5, 0, 37);
	v->a[2133] = entry(1, false);
	v->a[2134] = reduce(sym_case_statement, 5, 0, 37);
	v->a[2135] = entry(1, true);
	v->a[2136] = reduce(sym_case_statement, 4, 0, 37);
	v->a[2137] = entry(1, false);
	v->a[2138] = reduce(sym_case_statement, 4, 0, 37);
	v->a[2139] = entry(1, true);
	parse_actions_entries_107(v);
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = shift(2075);
	v->a[2141] = entry(1, true);
	v->a[2142] = reduce(sym_heredoc_redirect, 6, 0, 76);
	v->a[2143] = entry(1, false);
	v->a[2144] = reduce(sym_heredoc_redirect, 6, 0, 76);
	v->a[2145] = entry(1, true);
	v->a[2146] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2147] = entry(1, false);
	v->a[2148] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2149] = entry(1, true);
	v->a[2150] = reduce(sym_subshell, 3, 0, 20);
	v->a[2151] = entry(1, false);
	v->a[2152] = reduce(sym_subshell, 3, 0, 20);
	v->a[2153] = entry(1, true);
	v->a[2154] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2155] = entry(1, false);
	v->a[2156] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2157] = entry(1, true);
	v->a[2158] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2159] = entry(1, false);
	parse_actions_entries_108(v);
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2161] = entry(2, false);
	v->a[2162] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2163] = shift_repeat(1373);
	v->a[2164] = entry(2, true);
	v->a[2165] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2166] = shift_repeat(1768);
	v->a[2167] = entry(2, false);
	v->a[2168] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2169] = shift_repeat(1384);
	v->a[2170] = entry(2, true);
	v->a[2171] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2172] = shift_repeat(1765);
	v->a[2173] = entry(1, true);
	v->a[2174] = reduce(sym_if_statement, 6, 0, 57);
	v->a[2175] = entry(1, false);
	v->a[2176] = reduce(sym_if_statement, 6, 0, 57);
	v->a[2177] = entry(2, false);
	v->a[2178] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2179] = shift_repeat(1416);
	parse_actions_entries_109(v);
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = entry(2, true);
	v->a[2181] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2182] = shift_repeat(1753);
	v->a[2183] = entry(1, true);
	v->a[2184] = reduce(sym_if_statement, 6, 0, 58);
	v->a[2185] = entry(1, false);
	v->a[2186] = reduce(sym_if_statement, 6, 0, 58);
	v->a[2187] = entry(1, true);
	v->a[2188] = reduce(sym_case_statement, 5, 0, 51);
	v->a[2189] = entry(1, false);
	v->a[2190] = reduce(sym_case_statement, 5, 0, 51);
	v->a[2191] = entry(1, true);
	v->a[2192] = reduce(sym_case_statement, 6, 0, 61);
	v->a[2193] = entry(1, false);
	v->a[2194] = reduce(sym_case_statement, 6, 0, 61);
	v->a[2195] = entry(1, true);
	v->a[2196] = reduce(sym_heredoc_redirect, 6, 0, 77);
	v->a[2197] = entry(1, false);
	v->a[2198] = reduce(sym_heredoc_redirect, 6, 0, 77);
	v->a[2199] = entry(1, true);
	parse_actions_entries_110(v);
}

/* EOF parse_actions_entries_21.c */
