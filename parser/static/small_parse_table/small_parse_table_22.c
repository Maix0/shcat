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
	v->a[2201] = sym_word;
	v->a[2202] = actions(53);
	v->a[2203] = 1;
	v->a[2204] = anon_sym_BANG;
	v->a[2205] = actions(59);
	v->a[2206] = 1;
	v->a[2207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2208] = actions(61);
	v->a[2209] = 1;
	v->a[2210] = anon_sym_DOLLAR;
	v->a[2211] = actions(63);
	v->a[2212] = 1;
	v->a[2213] = anon_sym_DQUOTE;
	v->a[2214] = actions(67);
	v->a[2215] = 1;
	v->a[2216] = anon_sym_DOLLAR_LBRACE;
	v->a[2217] = actions(69);
	v->a[2218] = 1;
	v->a[2219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = actions(71);
	v->a[2221] = 1;
	v->a[2222] = anon_sym_BQUOTE;
	v->a[2223] = actions(73);
	v->a[2224] = 1;
	v->a[2225] = sym_file_descriptor;
	v->a[2226] = actions(75);
	v->a[2227] = 1;
	v->a[2228] = sym_variable_name;
	v->a[2229] = actions(87);
	v->a[2230] = 1;
	v->a[2231] = anon_sym_LF;
	v->a[2232] = state(135);
	v->a[2233] = 1;
	v->a[2234] = aux_sym__statements_repeat1;
	v->a[2235] = state(189);
	v->a[2236] = 1;
	v->a[2237] = sym_command_name;
	v->a[2238] = state(303);
	v->a[2239] = 1;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = sym_variable_assignment;
	v->a[2241] = state(650);
	v->a[2242] = 1;
	v->a[2243] = sym_concatenation;
	v->a[2244] = state(678);
	v->a[2245] = 1;
	v->a[2246] = aux_sym__case_item_last_repeat2;
	v->a[2247] = state(712);
	v->a[2248] = 1;
	v->a[2249] = sym_file_redirect;
	v->a[2250] = state(713);
	v->a[2251] = 1;
	v->a[2252] = aux_sym_command_repeat1;
	v->a[2253] = state(1227);
	v->a[2254] = 1;
	v->a[2255] = sym_pipeline;
	v->a[2256] = state(1333);
	v->a[2257] = 1;
	v->a[2258] = aux_sym_redirected_statement_repeat2;
	v->a[2259] = state(2103);
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = 1;
	v->a[2261] = sym__statement_not_pipeline;
	v->a[2262] = state(2167);
	v->a[2263] = 1;
	v->a[2264] = sym__statements;
	v->a[2265] = actions(11);
	v->a[2266] = 2;
	v->a[2267] = anon_sym_while;
	v->a[2268] = anon_sym_until;
	v->a[2269] = actions(57);
	v->a[2270] = 2;
	v->a[2271] = anon_sym_LT_AMP_DASH;
	v->a[2272] = anon_sym_GT_AMP_DASH;
	v->a[2273] = actions(65);
	v->a[2274] = 2;
	v->a[2275] = sym_raw_string;
	v->a[2276] = sym_number;
	v->a[2277] = state(443);
	v->a[2278] = 5;
	v->a[2279] = sym_arithmetic_expansion;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = sym_string;
	v->a[2281] = sym_simple_expansion;
	v->a[2282] = sym_expansion;
	v->a[2283] = sym_command_substitution;
	v->a[2284] = actions(55);
	v->a[2285] = 6;
	v->a[2286] = anon_sym_LT;
	v->a[2287] = anon_sym_GT;
	v->a[2288] = anon_sym_GT_GT;
	v->a[2289] = anon_sym_LT_AMP;
	v->a[2290] = anon_sym_GT_AMP;
	v->a[2291] = anon_sym_GT_PIPE;
	v->a[2292] = state(1179);
	v->a[2293] = 12;
	v->a[2294] = sym_redirected_statement;
	v->a[2295] = sym_for_statement;
	v->a[2296] = sym_while_statement;
	v->a[2297] = sym_if_statement;
	v->a[2298] = sym_case_statement;
	v->a[2299] = sym_function_definition;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
