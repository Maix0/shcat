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
	v->a[2300] = entry(2, false);
	v->a[2301] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2302] = shift_repeat(1564);
	v->a[2303] = entry(2, false);
	v->a[2304] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2305] = shift_repeat(255);
	v->a[2306] = entry(2, true);
	v->a[2307] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2308] = shift_repeat(1965);
	v->a[2309] = entry(1, true);
	v->a[2310] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2311] = entry(1, false);
	v->a[2312] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2313] = entry(1, true);
	v->a[2314] = reduce(sym_command, 3, 0, 17);
	v->a[2315] = entry(1, false);
	v->a[2316] = reduce(sym_command, 3, 0, 17);
	v->a[2317] = entry(1, true);
	v->a[2318] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2319] = entry(1, false);
	parse_actions_entries_116(v);
}

void	parse_actions_entries_116(t_parse_actions_entries_array *v)
{
	v->a[2320] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2321] = entry(1, true);
	v->a[2322] = shift(1949);
	v->a[2323] = entry(1, true);
	v->a[2324] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2325] = entry(1, false);
	v->a[2326] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2327] = entry(1, true);
	v->a[2328] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2329] = entry(1, false);
	v->a[2330] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2331] = entry(1, true);
	v->a[2332] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2333] = entry(1, false);
	v->a[2334] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2335] = entry(1, true);
	v->a[2336] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2337] = entry(1, false);
	v->a[2338] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2339] = entry(2, false);
	parse_actions_entries_117(v);
}

void	parse_actions_entries_117(t_parse_actions_entries_array *v)
{
	v->a[2340] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2341] = shift_repeat(1573);
	v->a[2342] = entry(2, false);
	v->a[2343] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2344] = shift_repeat(270);
	v->a[2345] = entry(2, true);
	v->a[2346] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2347] = shift_repeat(1953);
	v->a[2348] = entry(2, false);
	v->a[2349] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2350] = shift_repeat(1546);
	v->a[2351] = entry(2, false);
	v->a[2352] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2353] = shift_repeat(248);
	v->a[2354] = entry(2, true);
	v->a[2355] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2356] = shift_repeat(1949);
	v->a[2357] = entry(1, true);
	v->a[2358] = reduce(sym_while_statement, 3, 0, 21);
	v->a[2359] = entry(1, false);
	parse_actions_entries_118(v);
}

void	parse_actions_entries_118(t_parse_actions_entries_array *v)
{
	v->a[2360] = reduce(sym_while_statement, 3, 0, 21);
	v->a[2361] = entry(1, true);
	v->a[2362] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2363] = entry(1, false);
	v->a[2364] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2365] = entry(1, true);
	v->a[2366] = reduce(sym_subshell, 3, 0, 22);
	v->a[2367] = entry(1, false);
	v->a[2368] = reduce(sym_subshell, 3, 0, 22);
	v->a[2369] = entry(1, true);
	v->a[2370] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2371] = entry(1, false);
	v->a[2372] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2373] = entry(1, true);
	v->a[2374] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2375] = entry(1, false);
	v->a[2376] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2377] = entry(1, true);
	v->a[2378] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2379] = entry(1, false);
	parse_actions_entries_119(v);
}

void	parse_actions_entries_119(t_parse_actions_entries_array *v)
{
	v->a[2380] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2381] = entry(1, true);
	v->a[2382] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2383] = entry(1, false);
	v->a[2384] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2385] = entry(1, true);
	v->a[2386] = reduce(sym_heredoc_redirect, 6, 0, 68);
	v->a[2387] = entry(1, false);
	v->a[2388] = reduce(sym_heredoc_redirect, 6, 0, 68);
	v->a[2389] = entry(1, true);
	v->a[2390] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2391] = entry(1, false);
	v->a[2392] = reduce(sym_heredoc_redirect, 6, 0, 6);
	v->a[2393] = entry(1, true);
	v->a[2394] = reduce(sym_case_statement, 7, 0, 66);
	v->a[2395] = entry(1, false);
	v->a[2396] = reduce(sym_case_statement, 7, 0, 66);
	v->a[2397] = entry(1, true);
	v->a[2398] = shift(2251);
	v->a[2399] = entry(1, true);
	parse_actions_entries_120(v);
}

/* EOF parse_actions_entries_23.c */
