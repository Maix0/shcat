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
	v->a[2300] = shift(1394);
	v->a[2301] = entry(1, false);
	v->a[2302] = shift(1094);
	v->a[2303] = entry(1, false);
	v->a[2304] = shift(76);
	v->a[2305] = entry(1, false);
	v->a[2306] = shift(75);
	v->a[2307] = entry(1, true);
	v->a[2308] = shift(1378);
	v->a[2309] = entry(1, false);
	v->a[2310] = shift(1087);
	v->a[2311] = entry(1, false);
	v->a[2312] = shift(1298);
	v->a[2313] = entry(1, false);
	v->a[2314] = shift(1086);
	v->a[2315] = entry(1, false);
	v->a[2316] = shift(350);
	v->a[2317] = entry(1, false);
	v->a[2318] = shift(1080);
	v->a[2319] = entry(1, false);
	return (parse_actions_entries_116(v));
}

void	parse_actions_entries_116(t_parse_actions_entries_array *v)
{
	v->a[2320] = shift(321);
	v->a[2321] = entry(1, false);
	v->a[2322] = shift(1073);
	v->a[2323] = entry(1, false);
	v->a[2324] = shift(696);
	v->a[2325] = entry(1, true);
	v->a[2326] = shift(1473);
	v->a[2327] = entry(1, false);
	v->a[2328] = shift(1078);
	v->a[2329] = entry(1, false);
	v->a[2330] = shift(347);
	v->a[2331] = entry(1, false);
	v->a[2332] = shift(1072);
	v->a[2333] = entry(1, false);
	v->a[2334] = shift(666);
	v->a[2335] = entry(1, true);
	v->a[2336] = shift(389);
	v->a[2337] = entry(1, false);
	v->a[2338] = shift(1071);
	v->a[2339] = entry(1, false);
	return (parse_actions_entries_117(v));
}

void	parse_actions_entries_117(t_parse_actions_entries_array *v)
{
	v->a[2340] = shift(683);
	v->a[2341] = entry(1, false);
	v->a[2342] = shift(1055);
	v->a[2343] = entry(1, false);
	v->a[2344] = shift(421);
	v->a[2345] = entry(1, true);
	v->a[2346] = shift(423);
	v->a[2347] = entry(1, true);
	v->a[2348] = shift(482);
	v->a[2349] = entry(1, false);
	v->a[2350] = shift(1060);
	v->a[2351] = entry(1, false);
	v->a[2352] = shift(445);
	v->a[2353] = entry(1, false);
	v->a[2354] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2355] = entry(1, false);
	v->a[2356] = shift(126);
	v->a[2357] = entry(1, true);
	v->a[2358] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2359] = entry(2, false);
	return (parse_actions_entries_118(v));
}

void	parse_actions_entries_118(t_parse_actions_entries_array *v)
{
	v->a[2360] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2361] = shift_repeat(810);
	v->a[2362] = entry(1, true);
	v->a[2363] = shift(413);
	v->a[2364] = entry(1, false);
	v->a[2365] = shift(1077);
	v->a[2366] = entry(1, false);
	v->a[2367] = shift(418);
	v->a[2368] = entry(1, false);
	v->a[2369] = shift(1058);
	v->a[2370] = entry(1, false);
	v->a[2371] = shift(442);
	v->a[2372] = entry(1, false);
	v->a[2373] = reduce(sym_case_item, 6, 0, 72);
	v->a[2374] = entry(1, false);
	v->a[2375] = reduce(sym__case_item_last, 6, 0, 72);
	v->a[2376] = entry(1, true);
	v->a[2377] = reduce(sym_case_item, 6, 0, 72);
	v->a[2378] = entry(1, false);
	v->a[2379] = shift(1075);
	return (parse_actions_entries_119(v));
}

void	parse_actions_entries_119(t_parse_actions_entries_array *v)
{
	v->a[2380] = entry(1, false);
	v->a[2381] = shift(655);
	v->a[2382] = entry(1, false);
	v->a[2383] = shift(1046);
	v->a[2384] = entry(1, false);
	v->a[2385] = shift(499);
	v->a[2386] = entry(1, false);
	v->a[2387] = shift(1054);
	v->a[2388] = entry(1, false);
	v->a[2389] = shift(1299);
	v->a[2390] = entry(1, true);
	v->a[2391] = shift(437);
	v->a[2392] = entry(1, false);
	v->a[2393] = shift(1048);
	v->a[2394] = entry(1, false);
	v->a[2395] = shift(404);
	v->a[2396] = entry(1, false);
	v->a[2397] = reduce(sym_case_item, 6, 0, 73);
	v->a[2398] = entry(1, false);
	v->a[2399] = reduce(sym__case_item_last, 6, 0, 73);
	return (parse_actions_entries_120(v));
}

/* EOF parse_actions_entries_23.c */
