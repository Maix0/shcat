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
	v->a[2200] = sym__statement_not_pipeline;
	v->a[2201] = state(1754);
	v->a[2202] = 1;
	v->a[2203] = sym__statements;
	v->a[2204] = actions(11);
	v->a[2205] = 2;
	v->a[2206] = anon_sym_while;
	v->a[2207] = anon_sym_until;
	v->a[2208] = actions(59);
	v->a[2209] = 2;
	v->a[2210] = sym_raw_string;
	v->a[2211] = sym_number;
	v->a[2212] = actions(51);
	v->a[2213] = 3;
	v->a[2214] = anon_sym_LT;
	v->a[2215] = anon_sym_GT;
	v->a[2216] = anon_sym_GT_GT;
	v->a[2217] = state(401);
	v->a[2218] = 5;
	v->a[2219] = sym_arithmetic_expansion;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = sym_string;
	v->a[2221] = sym_simple_expansion;
	v->a[2222] = sym_expansion;
	v->a[2223] = sym_command_substitution;
	v->a[2224] = state(972);
	v->a[2225] = 12;
	v->a[2226] = sym_redirected_statement;
	v->a[2227] = sym_for_statement;
	v->a[2228] = sym_while_statement;
	v->a[2229] = sym_if_statement;
	v->a[2230] = sym_case_statement;
	v->a[2231] = sym_function_definition;
	v->a[2232] = sym_compound_statement;
	v->a[2233] = sym_subshell;
	v->a[2234] = sym_list;
	v->a[2235] = sym_negated_command;
	v->a[2236] = sym_command;
	v->a[2237] = sym__variable_assignments;
	v->a[2238] = 32;
	v->a[2239] = actions(3);
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = 1;
	v->a[2241] = sym_comment;
	v->a[2242] = actions(9);
	v->a[2243] = 1;
	v->a[2244] = anon_sym_for;
	v->a[2245] = actions(13);
	v->a[2246] = 1;
	v->a[2247] = anon_sym_if;
	v->a[2248] = actions(15);
	v->a[2249] = 1;
	v->a[2250] = anon_sym_case;
	v->a[2251] = actions(17);
	v->a[2252] = 1;
	v->a[2253] = anon_sym_LPAREN;
	v->a[2254] = actions(19);
	v->a[2255] = 1;
	v->a[2256] = anon_sym_LBRACE;
	v->a[2257] = actions(41);
	v->a[2258] = 1;
	v->a[2259] = sym_word;
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = actions(49);
	v->a[2261] = 1;
	v->a[2262] = anon_sym_BANG;
	v->a[2263] = actions(53);
	v->a[2264] = 1;
	v->a[2265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2266] = actions(55);
	v->a[2267] = 1;
	v->a[2268] = anon_sym_DOLLAR;
	v->a[2269] = actions(57);
	v->a[2270] = 1;
	v->a[2271] = anon_sym_DQUOTE;
	v->a[2272] = actions(61);
	v->a[2273] = 1;
	v->a[2274] = anon_sym_DOLLAR_LBRACE;
	v->a[2275] = actions(63);
	v->a[2276] = 1;
	v->a[2277] = anon_sym_DOLLAR_LPAREN;
	v->a[2278] = actions(65);
	v->a[2279] = 1;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = anon_sym_BQUOTE;
	v->a[2281] = actions(67);
	v->a[2282] = 1;
	v->a[2283] = sym_variable_name;
	v->a[2284] = actions(176);
	v->a[2285] = 1;
	v->a[2286] = anon_sym_LF;
	v->a[2287] = state(11);
	v->a[2288] = 1;
	v->a[2289] = aux_sym__case_item_last_repeat2;
	v->a[2290] = state(118);
	v->a[2291] = 1;
	v->a[2292] = aux_sym__statements_repeat1;
	v->a[2293] = state(185);
	v->a[2294] = 1;
	v->a[2295] = sym_command_name;
	v->a[2296] = state(216);
	v->a[2297] = 1;
	v->a[2298] = sym_variable_assignment;
	v->a[2299] = state(411);
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
