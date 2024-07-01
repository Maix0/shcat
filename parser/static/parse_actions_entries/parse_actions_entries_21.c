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
	v->a[2100] = reduce(sym_for_statement, 6, 0, 49);
	v->a[2101] = entry(1, false);
	v->a[2102] = reduce(sym_for_statement, 6, 0, 49);
	v->a[2103] = entry(1, true);
	v->a[2104] = shift(2056);
	v->a[2105] = entry(1, true);
	v->a[2106] = reduce(sym_case_statement, 4, 0, 35);
	v->a[2107] = entry(1, false);
	v->a[2108] = reduce(sym_case_statement, 4, 0, 35);
	v->a[2109] = entry(1, false);
	v->a[2110] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2111] = entry(1, true);
	v->a[2112] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2113] = entry(1, true);
	v->a[2114] = shift(1776);
	v->a[2115] = entry(1, true);
	v->a[2116] = reduce(sym_do_group, 3, 0, 20);
	v->a[2117] = entry(1, false);
	v->a[2118] = reduce(sym_do_group, 3, 0, 20);
	v->a[2119] = entry(2, false);
	parse_actions_entries_106(v);
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2121] = shift_repeat(1785);
	v->a[2122] = entry(2, false);
	v->a[2123] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2124] = shift_repeat(1303);
	v->a[2125] = entry(2, false);
	v->a[2126] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2127] = shift_repeat(719);
	v->a[2128] = entry(2, false);
	v->a[2129] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2130] = shift_repeat(1648);
	v->a[2131] = entry(2, false);
	v->a[2132] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2133] = shift_repeat(1649);
	v->a[2134] = entry(2, false);
	v->a[2135] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2136] = shift_repeat(1528);
	v->a[2137] = entry(2, false);
	v->a[2138] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2139] = shift_repeat(39);
	parse_actions_entries_107(v);
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = entry(2, false);
	v->a[2141] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2142] = shift_repeat(82);
	v->a[2143] = entry(2, true);
	v->a[2144] = reduce(aux_sym_case_statement_repeat1, 2, 0, 47);
	v->a[2145] = shift_repeat(1727);
	v->a[2146] = entry(1, true);
	v->a[2147] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2148] = entry(1, false);
	v->a[2149] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2150] = entry(1, true);
	v->a[2151] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2152] = entry(1, false);
	v->a[2153] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2154] = entry(1, true);
	v->a[2155] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2156] = entry(1, false);
	v->a[2157] = reduce(sym_while_statement, 3, 0, 19);
	v->a[2158] = entry(1, true);
	v->a[2159] = reduce(sym_heredoc_redirect, 6, 0, 70);
	parse_actions_entries_108(v);
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = entry(1, false);
	v->a[2161] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2162] = entry(2, false);
	v->a[2163] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2164] = shift_repeat(1412);
	v->a[2165] = entry(2, true);
	v->a[2166] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2167] = shift_repeat(1758);
	v->a[2168] = entry(1, true);
	v->a[2169] = reduce(sym_command, 2, 0, 3);
	v->a[2170] = entry(1, false);
	v->a[2171] = reduce(sym_command, 2, 0, 3);
	v->a[2172] = entry(1, true);
	v->a[2173] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2174] = entry(1, false);
	v->a[2175] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2176] = entry(1, true);
	v->a[2177] = shift(1774);
	v->a[2178] = entry(1, true);
	v->a[2179] = reduce(sym_heredoc_redirect, 5, 0, 58);
	parse_actions_entries_109(v);
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = entry(1, false);
	v->a[2181] = reduce(sym_heredoc_redirect, 5, 0, 58);
	v->a[2182] = entry(1, true);
	v->a[2183] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2184] = entry(1, false);
	v->a[2185] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2186] = entry(2, false);
	v->a[2187] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2188] = shift_repeat(1374);
	v->a[2189] = entry(2, true);
	v->a[2190] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2191] = shift_repeat(1723);
	v->a[2192] = entry(1, true);
	v->a[2193] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2194] = entry(1, false);
	v->a[2195] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2196] = entry(2, false);
	v->a[2197] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2198] = shift_repeat(1366);
	v->a[2199] = entry(2, true);
	parse_actions_entries_110(v);
}

/* EOF parse_actions_entries_21.c */
