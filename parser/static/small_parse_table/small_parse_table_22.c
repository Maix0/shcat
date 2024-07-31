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
	v->a[2200] = sym_command;
	v->a[2201] = sym__variable_assignments;
	v->a[2202] = 30;
	v->a[2203] = actions(3);
	v->a[2204] = 1;
	v->a[2205] = sym_comment;
	v->a[2206] = actions(9);
	v->a[2207] = 1;
	v->a[2208] = anon_sym_for;
	v->a[2209] = actions(13);
	v->a[2210] = 1;
	v->a[2211] = anon_sym_if;
	v->a[2212] = actions(15);
	v->a[2213] = 1;
	v->a[2214] = anon_sym_case;
	v->a[2215] = actions(17);
	v->a[2216] = 1;
	v->a[2217] = anon_sym_LPAREN;
	v->a[2218] = actions(19);
	v->a[2219] = 1;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = anon_sym_LBRACE;
	v->a[2221] = actions(41);
	v->a[2222] = 1;
	v->a[2223] = sym_word;
	v->a[2224] = actions(49);
	v->a[2225] = 1;
	v->a[2226] = anon_sym_BANG;
	v->a[2227] = actions(53);
	v->a[2228] = 1;
	v->a[2229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2230] = actions(55);
	v->a[2231] = 1;
	v->a[2232] = anon_sym_DOLLAR;
	v->a[2233] = actions(57);
	v->a[2234] = 1;
	v->a[2235] = anon_sym_DQUOTE;
	v->a[2236] = actions(61);
	v->a[2237] = 1;
	v->a[2238] = anon_sym_DOLLAR_LBRACE;
	v->a[2239] = actions(63);
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = 1;
	v->a[2241] = anon_sym_DOLLAR_LPAREN;
	v->a[2242] = actions(65);
	v->a[2243] = 1;
	v->a[2244] = anon_sym_BQUOTE;
	v->a[2245] = actions(67);
	v->a[2246] = 1;
	v->a[2247] = sym_variable_name;
	v->a[2248] = state(21);
	v->a[2249] = 1;
	v->a[2250] = aux_sym__terminated_statement;
	v->a[2251] = state(271);
	v->a[2252] = 1;
	v->a[2253] = sym_command_name;
	v->a[2254] = state(291);
	v->a[2255] = 1;
	v->a[2256] = sym_variable_assignment;
	v->a[2257] = state(482);
	v->a[2258] = 1;
	v->a[2259] = aux_sym_command_repeat1;
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = state(600);
	v->a[2261] = 1;
	v->a[2262] = sym_file_redirect;
	v->a[2263] = state(602);
	v->a[2264] = 1;
	v->a[2265] = sym_concatenation;
	v->a[2266] = state(992);
	v->a[2267] = 1;
	v->a[2268] = sym_pipeline;
	v->a[2269] = state(1068);
	v->a[2270] = 1;
	v->a[2271] = aux_sym_redirected_statement_repeat2;
	v->a[2272] = state(1609);
	v->a[2273] = 1;
	v->a[2274] = sym__statement_not_pipeline;
	v->a[2275] = actions(11);
	v->a[2276] = 2;
	v->a[2277] = anon_sym_while;
	v->a[2278] = anon_sym_until;
	v->a[2279] = actions(59);
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = 2;
	v->a[2281] = sym_raw_string;
	v->a[2282] = sym_number;
	v->a[2283] = actions(125);
	v->a[2284] = 3;
	v->a[2285] = anon_sym_fi;
	v->a[2286] = anon_sym_elif;
	v->a[2287] = anon_sym_else;
	v->a[2288] = state(425);
	v->a[2289] = 5;
	v->a[2290] = sym_arithmetic_expansion;
	v->a[2291] = sym_string;
	v->a[2292] = sym_simple_expansion;
	v->a[2293] = sym_expansion;
	v->a[2294] = sym_command_substitution;
	v->a[2295] = actions(51);
	v->a[2296] = 7;
	v->a[2297] = anon_sym_LT;
	v->a[2298] = anon_sym_GT;
	v->a[2299] = anon_sym_GT_GT;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
