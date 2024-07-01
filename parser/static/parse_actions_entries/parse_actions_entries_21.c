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
	v->a[2100] = shift(1521);
	v->a[2101] = entry(1, false);
	v->a[2102] = shift(1318);
	v->a[2103] = entry(1, false);
	v->a[2104] = shift(1701);
	v->a[2105] = entry(2, false);
	v->a[2106] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2107] = shift_repeat(1546);
	v->a[2108] = entry(2, false);
	v->a[2109] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2110] = shift_repeat(248);
	v->a[2111] = entry(2, true);
	v->a[2112] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2113] = shift_repeat(1933);
	v->a[2114] = entry(1, false);
	v->a[2115] = reduce(sym_redirected_statement, 2, -1, 11);
	v->a[2116] = entry(1, true);
	v->a[2117] = reduce(sym_redirected_statement, 2, -1, 11);
	v->a[2118] = entry(2, false);
	v->a[2119] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_106(v);
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = shift_repeat(1503);
	v->a[2121] = entry(2, true);
	v->a[2122] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2123] = shift_repeat(1503);
	v->a[2124] = entry(1, false);
	v->a[2125] = shift(1503);
	v->a[2126] = entry(1, true);
	v->a[2127] = shift(1478);
	v->a[2128] = entry(1, false);
	v->a[2129] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2130] = entry(2, false);
	v->a[2131] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2132] = shift_repeat(1556);
	v->a[2133] = entry(2, false);
	v->a[2134] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2135] = shift_repeat(976);
	v->a[2136] = entry(2, true);
	v->a[2137] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2138] = shift_repeat(1968);
	v->a[2139] = entry(2, true);
	parse_actions_entries_107(v);
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2141] = shift_repeat(2133);
	v->a[2142] = entry(1, true);
	v->a[2143] = shift(1432);
	v->a[2144] = entry(1, true);
	v->a[2145] = shift(1413);
	v->a[2146] = entry(1, true);
	v->a[2147] = shift(1532);
	v->a[2148] = entry(1, true);
	v->a[2149] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[2150] = entry(1, false);
	v->a[2151] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[2152] = entry(1, true);
	v->a[2153] = shift(2173);
	v->a[2154] = entry(1, true);
	v->a[2155] = shift(779);
	v->a[2156] = entry(2, true);
	v->a[2157] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2158] = shift_repeat(2149);
	v->a[2159] = entry(2, false);
	parse_actions_entries_108(v);
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2161] = shift_repeat(1564);
	v->a[2162] = entry(2, false);
	v->a[2163] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2164] = shift_repeat(255);
	v->a[2165] = entry(2, false);
	v->a[2166] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2167] = shift_repeat(2255);
	v->a[2168] = entry(2, true);
	v->a[2169] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2170] = shift_repeat(1935);
	v->a[2171] = entry(1, true);
	v->a[2172] = shift(2301);
	v->a[2173] = entry(2, true);
	v->a[2174] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2175] = shift_repeat(2301);
	v->a[2176] = entry(1, true);
	v->a[2177] = shift(1442);
	v->a[2178] = entry(2, false);
	v->a[2179] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_109(v);
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = shift_repeat(1594);
	v->a[2181] = entry(2, false);
	v->a[2182] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2183] = shift_repeat(357);
	v->a[2184] = entry(2, true);
	v->a[2185] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2186] = shift_repeat(1930);
	v->a[2187] = entry(1, true);
	v->a[2188] = shift(774);
	v->a[2189] = entry(1, true);
	v->a[2190] = shift(788);
	v->a[2191] = entry(1, true);
	v->a[2192] = shift(2149);
	v->a[2193] = entry(1, false);
	v->a[2194] = shift(1342);
	v->a[2195] = entry(2, false);
	v->a[2196] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2197] = shift_repeat(1521);
	v->a[2198] = entry(2, true);
	v->a[2199] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_110(v);
}

/* EOF parse_actions_entries_21.c */
