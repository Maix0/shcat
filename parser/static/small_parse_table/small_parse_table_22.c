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
	v->a[2201] = sym_file_redirect;
	v->a[2202] = state(1141);
	v->a[2203] = 1;
	v->a[2204] = sym_pipeline;
	v->a[2205] = state(1198);
	v->a[2206] = 1;
	v->a[2207] = aux_sym_redirected_statement_repeat2;
	v->a[2208] = state(1901);
	v->a[2209] = 1;
	v->a[2210] = sym__statement_not_pipeline;
	v->a[2211] = state(2097);
	v->a[2212] = 1;
	v->a[2213] = sym__statements;
	v->a[2214] = actions(11);
	v->a[2215] = 2;
	v->a[2216] = anon_sym_while;
	v->a[2217] = anon_sym_until;
	v->a[2218] = actions(61);
	v->a[2219] = 2;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = sym_raw_string;
	v->a[2221] = sym_number;
	v->a[2222] = state(455);
	v->a[2223] = 5;
	v->a[2224] = sym_arithmetic_expansion;
	v->a[2225] = sym_string;
	v->a[2226] = sym_simple_expansion;
	v->a[2227] = sym_expansion;
	v->a[2228] = sym_command_substitution;
	v->a[2229] = actions(53);
	v->a[2230] = 7;
	v->a[2231] = anon_sym_LT;
	v->a[2232] = anon_sym_GT;
	v->a[2233] = anon_sym_GT_GT;
	v->a[2234] = anon_sym_LT_AMP;
	v->a[2235] = anon_sym_GT_AMP;
	v->a[2236] = anon_sym_GT_PIPE;
	v->a[2237] = anon_sym_LT_GT;
	v->a[2238] = state(1091);
	v->a[2239] = 12;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = sym_redirected_statement;
	v->a[2241] = sym_for_statement;
	v->a[2242] = sym_while_statement;
	v->a[2243] = sym_if_statement;
	v->a[2244] = sym_case_statement;
	v->a[2245] = sym_function_definition;
	v->a[2246] = sym_compound_statement;
	v->a[2247] = sym_subshell;
	v->a[2248] = sym_list;
	v->a[2249] = sym_negated_command;
	v->a[2250] = sym_command;
	v->a[2251] = sym__variable_assignments;
	v->a[2252] = 33;
	v->a[2253] = actions(3);
	v->a[2254] = 1;
	v->a[2255] = sym_comment;
	v->a[2256] = actions(9);
	v->a[2257] = 1;
	v->a[2258] = anon_sym_for;
	v->a[2259] = actions(13);
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = 1;
	v->a[2261] = anon_sym_if;
	v->a[2262] = actions(15);
	v->a[2263] = 1;
	v->a[2264] = anon_sym_case;
	v->a[2265] = actions(17);
	v->a[2266] = 1;
	v->a[2267] = anon_sym_LPAREN;
	v->a[2268] = actions(19);
	v->a[2269] = 1;
	v->a[2270] = anon_sym_LBRACE;
	v->a[2271] = actions(43);
	v->a[2272] = 1;
	v->a[2273] = sym_word;
	v->a[2274] = actions(51);
	v->a[2275] = 1;
	v->a[2276] = anon_sym_BANG;
	v->a[2277] = actions(55);
	v->a[2278] = 1;
	v->a[2279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = actions(57);
	v->a[2281] = 1;
	v->a[2282] = anon_sym_DOLLAR;
	v->a[2283] = actions(59);
	v->a[2284] = 1;
	v->a[2285] = anon_sym_DQUOTE;
	v->a[2286] = actions(63);
	v->a[2287] = 1;
	v->a[2288] = anon_sym_DOLLAR_LBRACE;
	v->a[2289] = actions(65);
	v->a[2290] = 1;
	v->a[2291] = anon_sym_DOLLAR_LPAREN;
	v->a[2292] = actions(67);
	v->a[2293] = 1;
	v->a[2294] = anon_sym_BQUOTE;
	v->a[2295] = actions(69);
	v->a[2296] = 1;
	v->a[2297] = sym_file_descriptor;
	v->a[2298] = actions(71);
	v->a[2299] = 1;
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
