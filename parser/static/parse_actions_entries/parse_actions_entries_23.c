/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_23.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_115(t_parse_actions_entries_array *v)
{
	v->a[2300] = shift_repeat(258);
	v->a[2301] = entry(2, true);
	v->a[2302] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2303] = shift_repeat(1951);
	v->a[2304] = entry(1, true);
	v->a[2305] = shift(1949);
	v->a[2306] = entry(1, true);
	v->a[2307] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2308] = entry(1, false);
	v->a[2309] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2310] = entry(1, true);
	v->a[2311] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2312] = entry(1, false);
	v->a[2313] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2314] = entry(1, true);
	v->a[2315] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2316] = entry(1, false);
	v->a[2317] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2318] = entry(1, true);
	v->a[2319] = reduce(sym_case_statement, 4, 0, 36);
	parse_actions_entries_116(v);
}

void	parse_actions_entries_116(t_parse_actions_entries_array *v)
{
	v->a[2320] = entry(1, false);
	v->a[2321] = reduce(sym_case_statement, 4, 0, 36);
	v->a[2322] = entry(1, true);
	v->a[2323] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2324] = entry(1, false);
	v->a[2325] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2326] = entry(1, true);
	v->a[2327] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2328] = entry(1, false);
	v->a[2329] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2330] = entry(1, true);
	v->a[2331] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2332] = entry(1, false);
	v->a[2333] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2334] = entry(1, true);
	v->a[2335] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2336] = entry(1, false);
	v->a[2337] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2338] = entry(1, true);
	v->a[2339] = reduce(sym_heredoc_redirect, 5, 0, 60);
	parse_actions_entries_117(v);
}

void	parse_actions_entries_117(t_parse_actions_entries_array *v)
{
	v->a[2340] = entry(1, false);
	v->a[2341] = reduce(sym_heredoc_redirect, 5, 0, 60);
	v->a[2342] = entry(1, true);
	v->a[2343] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2344] = entry(1, false);
	v->a[2345] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2346] = entry(1, true);
	v->a[2347] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2348] = entry(1, false);
	v->a[2349] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2350] = entry(1, false);
	v->a[2351] = reduce(sym_function_definition, 4, 0, 42);
	v->a[2352] = entry(1, true);
	v->a[2353] = reduce(sym_function_definition, 4, 0, 42);
	v->a[2354] = entry(1, true);
	v->a[2355] = reduce(sym_case_statement, 7, 0, 66);
	v->a[2356] = entry(1, false);
	v->a[2357] = reduce(sym_case_statement, 7, 0, 66);
	v->a[2358] = entry(1, true);
	v->a[2359] = reduce(sym_case_statement, 7, 0, 67);
	parse_actions_entries_118(v);
}

void	parse_actions_entries_118(t_parse_actions_entries_array *v)
{
	v->a[2360] = entry(1, false);
	v->a[2361] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2362] = entry(1, true);
	v->a[2363] = shift(1549);
	v->a[2364] = entry(1, true);
	v->a[2365] = reduce(sym_case_statement, 5, 0, 36);
	v->a[2366] = entry(1, false);
	v->a[2367] = reduce(sym_case_statement, 5, 0, 36);
	v->a[2368] = entry(1, true);
	v->a[2369] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2370] = entry(1, false);
	v->a[2371] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2372] = entry(1, true);
	v->a[2373] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2374] = entry(1, false);
	v->a[2375] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2376] = entry(1, true);
	v->a[2377] = reduce(sym_heredoc_redirect, 6, 0, 68);
	v->a[2378] = entry(1, false);
	v->a[2379] = reduce(sym_heredoc_redirect, 6, 0, 68);
	parse_actions_entries_119(v);
}

void	parse_actions_entries_119(t_parse_actions_entries_array *v)
{
	v->a[2380] = entry(1, true);
	v->a[2381] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2382] = entry(1, false);
	v->a[2383] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2384] = entry(1, true);
	v->a[2385] = reduce(sym_for_statement, 4, 0, 34);
	v->a[2386] = entry(1, false);
	v->a[2387] = reduce(sym_for_statement, 4, 0, 34);
	v->a[2388] = entry(1, true);
	v->a[2389] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2390] = entry(1, false);
	v->a[2391] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2392] = entry(1, true);
	v->a[2393] = reduce(sym_do_group, 3, 0, 22);
	v->a[2394] = entry(1, false);
	v->a[2395] = reduce(sym_do_group, 3, 0, 22);
	v->a[2396] = entry(1, true);
	v->a[2397] = reduce(sym_command, 2, 0, 4);
	v->a[2398] = entry(1, false);
	v->a[2399] = reduce(sym_command, 2, 0, 4);
	parse_actions_entries_120(v);
}

/* EOF parse_actions_entries_23.c */
