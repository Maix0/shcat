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
	v->a[2200] = state(639);
	v->a[2201] = 1;
	v->a[2202] = aux_sym_command_repeat1;
	v->a[2203] = state(644);
	v->a[2204] = 1;
	v->a[2205] = sym_file_redirect;
	v->a[2206] = state(1171);
	v->a[2207] = 1;
	v->a[2208] = sym_pipeline;
	v->a[2209] = state(1196);
	v->a[2210] = 1;
	v->a[2211] = aux_sym_redirected_statement_repeat2;
	v->a[2212] = state(1910);
	v->a[2213] = 1;
	v->a[2214] = sym__statement_not_pipeline;
	v->a[2215] = state(2021);
	v->a[2216] = 1;
	v->a[2217] = sym__statements;
	v->a[2218] = actions(11);
	v->a[2219] = 2;
	small_parse_table_111(v);
}

void	small_parse_table_111(t_small_parse_table_array *v)
{
	v->a[2220] = anon_sym_while;
	v->a[2221] = anon_sym_until;
	v->a[2222] = actions(61);
	v->a[2223] = 2;
	v->a[2224] = sym_raw_string;
	v->a[2225] = sym_number;
	v->a[2226] = state(436);
	v->a[2227] = 5;
	v->a[2228] = sym_arithmetic_expansion;
	v->a[2229] = sym_string;
	v->a[2230] = sym_simple_expansion;
	v->a[2231] = sym_expansion;
	v->a[2232] = sym_command_substitution;
	v->a[2233] = actions(53);
	v->a[2234] = 7;
	v->a[2235] = anon_sym_LT;
	v->a[2236] = anon_sym_GT;
	v->a[2237] = anon_sym_GT_GT;
	v->a[2238] = anon_sym_LT_AMP;
	v->a[2239] = anon_sym_GT_AMP;
	small_parse_table_112(v);
}

void	small_parse_table_112(t_small_parse_table_array *v)
{
	v->a[2240] = anon_sym_GT_PIPE;
	v->a[2241] = anon_sym_LT_GT;
	v->a[2242] = state(1046);
	v->a[2243] = 12;
	v->a[2244] = sym_redirected_statement;
	v->a[2245] = sym_for_statement;
	v->a[2246] = sym_while_statement;
	v->a[2247] = sym_if_statement;
	v->a[2248] = sym_case_statement;
	v->a[2249] = sym_function_definition;
	v->a[2250] = sym_compound_statement;
	v->a[2251] = sym_subshell;
	v->a[2252] = sym_list;
	v->a[2253] = sym_negated_command;
	v->a[2254] = sym_command;
	v->a[2255] = sym__variable_assignments;
	v->a[2256] = 33;
	v->a[2257] = actions(3);
	v->a[2258] = 1;
	v->a[2259] = sym_comment;
	small_parse_table_113(v);
}

void	small_parse_table_113(t_small_parse_table_array *v)
{
	v->a[2260] = actions(85);
	v->a[2261] = 1;
	v->a[2262] = anon_sym_LF;
	v->a[2263] = actions(87);
	v->a[2264] = 1;
	v->a[2265] = sym_word;
	v->a[2266] = actions(89);
	v->a[2267] = 1;
	v->a[2268] = anon_sym_for;
	v->a[2269] = actions(93);
	v->a[2270] = 1;
	v->a[2271] = anon_sym_if;
	v->a[2272] = actions(95);
	v->a[2273] = 1;
	v->a[2274] = anon_sym_case;
	v->a[2275] = actions(97);
	v->a[2276] = 1;
	v->a[2277] = anon_sym_LPAREN;
	v->a[2278] = actions(101);
	v->a[2279] = 1;
	small_parse_table_114(v);
}

void	small_parse_table_114(t_small_parse_table_array *v)
{
	v->a[2280] = anon_sym_LBRACE;
	v->a[2281] = actions(103);
	v->a[2282] = 1;
	v->a[2283] = anon_sym_BANG;
	v->a[2284] = actions(107);
	v->a[2285] = 1;
	v->a[2286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2287] = actions(109);
	v->a[2288] = 1;
	v->a[2289] = anon_sym_DOLLAR;
	v->a[2290] = actions(111);
	v->a[2291] = 1;
	v->a[2292] = anon_sym_DQUOTE;
	v->a[2293] = actions(115);
	v->a[2294] = 1;
	v->a[2295] = anon_sym_DOLLAR_LBRACE;
	v->a[2296] = actions(117);
	v->a[2297] = 1;
	v->a[2298] = anon_sym_DOLLAR_LPAREN;
	v->a[2299] = actions(119);
	small_parse_table_115(v);
}

/* EOF small_parse_table_22.c */
