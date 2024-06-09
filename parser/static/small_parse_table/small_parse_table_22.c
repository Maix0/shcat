/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_22.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_110(t_small_parse_table_array *v)
{
	v->a[2200] = 1;
	v->a[2201] = anon_sym_LPAREN;
	v->a[2202] = actions(19);
	v->a[2203] = 1;
	v->a[2204] = anon_sym_LBRACE;
	v->a[2205] = actions(49);
	v->a[2206] = 1;
	v->a[2207] = sym_word;
	v->a[2208] = actions(57);
	v->a[2209] = 1;
	v->a[2210] = anon_sym_BANG;
	v->a[2211] = actions(63);
	v->a[2212] = 1;
	v->a[2213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2214] = actions(65);
	v->a[2215] = 1;
	v->a[2216] = anon_sym_DOLLAR;
	v->a[2217] = actions(67);
	v->a[2218] = 1;
	v->a[2219] = anon_sym_DQUOTE;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = actions(69);
	v->a[2221] = 1;
	v->a[2222] = sym_raw_string;
	v->a[2223] = actions(71);
	v->a[2224] = 1;
	v->a[2225] = aux_sym_number_token1;
	v->a[2226] = actions(73);
	v->a[2227] = 1;
	v->a[2228] = aux_sym_number_token2;
	v->a[2229] = actions(75);
	v->a[2230] = 1;
	v->a[2231] = anon_sym_DOLLAR_LBRACE;
	v->a[2232] = actions(77);
	v->a[2233] = 1;
	v->a[2234] = anon_sym_DOLLAR_LPAREN;
	v->a[2235] = actions(79);
	v->a[2236] = 1;
	v->a[2237] = anon_sym_BQUOTE;
	v->a[2238] = actions(81);
	v->a[2239] = 1;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = sym_file_descriptor;
	v->a[2241] = actions(83);
	v->a[2242] = 1;
	v->a[2243] = sym_variable_name;
	v->a[2244] = state(23);
	v->a[2245] = 1;
	v->a[2246] = aux_sym__terminated_statement;
	v->a[2247] = state(190);
	v->a[2248] = 1;
	v->a[2249] = sym_command_name;
	v->a[2250] = state(299);
	v->a[2251] = 1;
	v->a[2252] = sym_variable_assignment;
	v->a[2253] = state(582);
	v->a[2254] = 1;
	v->a[2255] = sym_concatenation;
	v->a[2256] = state(587);
	v->a[2257] = 1;
	v->a[2258] = aux_sym_command_repeat1;
	v->a[2259] = state(718);
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = 1;
	v->a[2261] = sym_file_redirect;
	v->a[2262] = state(1212);
	v->a[2263] = 1;
	v->a[2264] = sym_pipeline;
	v->a[2265] = state(1213);
	v->a[2266] = 1;
	v->a[2267] = aux_sym_redirected_statement_repeat2;
	v->a[2268] = state(2035);
	v->a[2269] = 1;
	v->a[2270] = sym__statement_not_pipeline;
	v->a[2271] = actions(11);
	v->a[2272] = 2;
	v->a[2273] = anon_sym_while;
	v->a[2274] = anon_sym_until;
	v->a[2275] = actions(61);
	v->a[2276] = 2;
	v->a[2277] = anon_sym_LT_AMP_DASH;
	v->a[2278] = anon_sym_GT_AMP_DASH;
	v->a[2279] = actions(149);
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = 3;
	v->a[2281] = anon_sym_fi;
	v->a[2282] = anon_sym_elif;
	v->a[2283] = anon_sym_else;
	v->a[2284] = state(397);
	v->a[2285] = 6;
	v->a[2286] = sym_arithmetic_expansion;
	v->a[2287] = sym_string;
	v->a[2288] = sym_number;
	v->a[2289] = sym_simple_expansion;
	v->a[2290] = sym_expansion;
	v->a[2291] = sym_command_substitution;
	v->a[2292] = actions(59);
	v->a[2293] = 8;
	v->a[2294] = anon_sym_LT;
	v->a[2295] = anon_sym_GT;
	v->a[2296] = anon_sym_GT_GT;
	v->a[2297] = anon_sym_AMP_GT;
	v->a[2298] = anon_sym_AMP_GT_GT;
	v->a[2299] = anon_sym_LT_AMP;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
