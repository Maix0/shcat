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
	v->a[2100] = shift(825);
	v->a[2101] = entry(2, false);
	v->a[2102] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2103] = shift_repeat(807);
	v->a[2104] = entry(1, true);
	v->a[2105] = reduce(sym_heredoc_redirect, 5, 0, 62);
	v->a[2106] = entry(1, false);
	v->a[2107] = reduce(sym_heredoc_redirect, 5, 0, 62);
	v->a[2108] = entry(1, false);
	v->a[2109] = reduce(aux_sym__heredoc_command, 1, 0, 10);
	v->a[2110] = entry(1, false);
	v->a[2111] = shift(1484);
	v->a[2112] = entry(1, false);
	v->a[2113] = shift(1470);
	v->a[2114] = entry(1, false);
	v->a[2115] = shift(816);
	v->a[2116] = entry(2, false);
	v->a[2117] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2118] = shift_repeat(798);
	v->a[2119] = entry(1, true);
	return (parse_actions_entries_106(v));
}

void	parse_actions_entries_106(t_parse_actions_entries_array *v)
{
	v->a[2120] = reduce(sym_heredoc_redirect, 5, 0, 63);
	v->a[2121] = entry(1, false);
	v->a[2122] = reduce(sym_heredoc_redirect, 5, 0, 63);
	v->a[2123] = entry(1, true);
	v->a[2124] = reduce(sym_do_group, 3, 0, 18);
	v->a[2125] = entry(1, false);
	v->a[2126] = reduce(sym_do_group, 3, 0, 18);
	v->a[2127] = entry(1, false);
	v->a[2128] = shift(477);
	v->a[2129] = entry(1, true);
	v->a[2130] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2131] = entry(1, false);
	v->a[2132] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2133] = entry(1, true);
	v->a[2134] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2135] = entry(1, false);
	v->a[2136] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2137] = entry(1, true);
	v->a[2138] = reduce(sym_if_statement, 5, 0, 47);
	v->a[2139] = entry(1, false);
	return (parse_actions_entries_107(v));
}

void	parse_actions_entries_107(t_parse_actions_entries_array *v)
{
	v->a[2140] = reduce(sym_if_statement, 5, 0, 47);
	v->a[2141] = entry(1, true);
	v->a[2142] = reduce(sym_case_statement, 6, 0, 58);
	v->a[2143] = entry(1, false);
	v->a[2144] = reduce(sym_case_statement, 6, 0, 58);
	v->a[2145] = entry(1, false);
	v->a[2146] = shift(1461);
	v->a[2147] = entry(1, true);
	v->a[2148] = shift(752);
	v->a[2149] = entry(1, true);
	v->a[2150] = reduce(sym_case_statement, 5, 0, 48);
	v->a[2151] = entry(1, false);
	v->a[2152] = reduce(sym_case_statement, 5, 0, 48);
	v->a[2153] = entry(1, true);
	v->a[2154] = reduce(sym_case_statement, 5, 0, 34);
	v->a[2155] = entry(1, false);
	v->a[2156] = reduce(sym_case_statement, 5, 0, 34);
	v->a[2157] = entry(1, false);
	v->a[2158] = shift(808);
	v->a[2159] = entry(1, false);
	return (parse_actions_entries_108(v));
}

void	parse_actions_entries_108(t_parse_actions_entries_array *v)
{
	v->a[2160] = shift(796);
	v->a[2161] = entry(2, false);
	v->a[2162] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2163] = shift_repeat(810);
	v->a[2164] = entry(1, false);
	v->a[2165] = shift(1549);
	v->a[2166] = entry(1, false);
	v->a[2167] = shift(1526);
	v->a[2168] = entry(2, false);
	v->a[2169] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2170] = shift_repeat(801);
	v->a[2171] = entry(1, false);
	v->a[2172] = shift(513);
	v->a[2173] = entry(1, false);
	v->a[2174] = shift(625);
	v->a[2175] = entry(1, true);
	v->a[2176] = reduce(sym_heredoc_redirect, 4, 0, 19);
	v->a[2177] = entry(1, false);
	v->a[2178] = reduce(sym_heredoc_redirect, 4, 0, 19);
	v->a[2179] = entry(1, false);
	return (parse_actions_entries_109(v));
}

void	parse_actions_entries_109(t_parse_actions_entries_array *v)
{
	v->a[2180] = shift(636);
	v->a[2181] = entry(1, false);
	v->a[2182] = shift(930);
	v->a[2183] = entry(1, false);
	v->a[2184] = shift(496);
	v->a[2185] = entry(1, false);
	v->a[2186] = shift(926);
	v->a[2187] = entry(1, false);
	v->a[2188] = shift(351);
	v->a[2189] = entry(1, false);
	v->a[2190] = shift(334);
	v->a[2191] = entry(1, true);
	v->a[2192] = reduce(sym_if_statement, 6, 0, 55);
	v->a[2193] = entry(1, false);
	v->a[2194] = reduce(sym_if_statement, 6, 0, 55);
	v->a[2195] = entry(1, false);
	v->a[2196] = shift(1291);
	v->a[2197] = entry(1, false);
	v->a[2198] = shift(339);
	v->a[2199] = entry(1, false);
	return (parse_actions_entries_110(v));
}

/* EOF parse_actions_entries_21.c */
