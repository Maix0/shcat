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
	v->a[2100] = entry(2, true);
	v->a[2101] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2102] = shift_repeat(1622);
	v->a[2103] = entry(1, true);
	v->a[2104] = shift(1710);
	v->a[2105] = entry(1, true);
	v->a[2106] = shift(1698);
	v->a[2107] = entry(1, false);
	v->a[2108] = shift(669);
	v->a[2109] = entry(1, true);
	v->a[2110] = shift(670);
	v->a[2111] = entry(1, false);
	v->a[2112] = shift(671);
	v->a[2113] = entry(1, false);
	v->a[2114] = shift(672);
	v->a[2115] = entry(1, false);
	v->a[2116] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2117] = entry(1, true);
	v->a[2118] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2119] = entry(2, true);
	parse_actions_entries_106(v);
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2121] = shift_repeat(2451);
	v->a[2122] = entry(1, false);
	v->a[2123] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[2124] = entry(1, true);
	v->a[2125] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[2126] = entry(1, true);
	v->a[2127] = shift(2451);
	v->a[2128] = entry(1, false);
	v->a[2129] = shift(1654);
	v->a[2130] = entry(1, true);
	v->a[2131] = shift(1654);
	v->a[2132] = entry(2, true);
	v->a[2133] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2134] = shift_repeat(2286);
	v->a[2135] = entry(1, true);
	v->a[2136] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2137] = entry(1, false);
	v->a[2138] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2139] = entry(2, false);
	parse_actions_entries_107(v);
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2141] = shift_repeat(1783);
	v->a[2142] = entry(2, false);
	v->a[2143] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2144] = shift_repeat(264);
	v->a[2145] = entry(2, false);
	v->a[2146] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2147] = shift_repeat(2379);
	v->a[2148] = entry(2, true);
	v->a[2149] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2150] = shift_repeat(2048);
	v->a[2151] = entry(2, true);
	v->a[2152] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2153] = shift_repeat(2446);
	v->a[2154] = entry(1, true);
	v->a[2155] = shift(2446);
	v->a[2156] = entry(1, true);
	v->a[2157] = shift(837);
	v->a[2158] = entry(1, false);
	v->a[2159] = shift(1821);
	parse_actions_entries_108(v);
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = entry(1, false);
	v->a[2161] = shift(287);
	v->a[2162] = entry(1, true);
	v->a[2163] = shift(954);
	v->a[2164] = entry(1, true);
	v->a[2165] = shift(1962);
	v->a[2166] = entry(1, false);
	v->a[2167] = shift(666);
	v->a[2168] = entry(1, true);
	v->a[2169] = shift(749);
	v->a[2170] = entry(1, false);
	v->a[2171] = shift(748);
	v->a[2172] = entry(1, false);
	v->a[2173] = shift(747);
	v->a[2174] = entry(1, true);
	v->a[2175] = shift(1647);
	v->a[2176] = entry(1, false);
	v->a[2177] = reduce(sym_redirected_statement, 2, -1, 11);
	v->a[2178] = entry(1, false);
	v->a[2179] = shift(1740);
	parse_actions_entries_109(v);
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = entry(1, false);
	v->a[2181] = shift(250);
	v->a[2182] = entry(1, true);
	v->a[2183] = reduce(sym_redirected_statement, 2, -1, 11);
	v->a[2184] = entry(1, true);
	v->a[2185] = shift(1979);
	v->a[2186] = entry(1, false);
	v->a[2187] = shift(781);
	v->a[2188] = entry(1, true);
	v->a[2189] = shift(779);
	v->a[2190] = entry(1, false);
	v->a[2191] = shift(778);
	v->a[2192] = entry(1, false);
	v->a[2193] = shift(777);
	v->a[2194] = entry(1, true);
	v->a[2195] = shift(2294);
	v->a[2196] = entry(1, true);
	v->a[2197] = shift(722);
	v->a[2198] = entry(1, false);
	v->a[2199] = shift(721);
	parse_actions_entries_110(v);
}

/* EOF parse_actions_entries_21.c */
