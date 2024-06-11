/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_24.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_120(t_lex_modes_array *v)
{
	v->a[2400] = lex_mode_external(254, 60);
	v->a[2401] = lex_mode_external(254, 58);
	v->a[2402] = lex_mode_external(254, 60);
	v->a[2403] = lex_mode_normal(254);
	v->a[2404] = lex_mode_normal(196);
	v->a[2405] = lex_mode_normal(254);
	v->a[2406] = lex_mode_normal(196);
	v->a[2407] = lex_mode_normal(254);
	v->a[2408] = lex_mode_normal(254);
	v->a[2409] = lex_mode_normal(254);
	v->a[2410] = lex_mode_normal(196);
	v->a[2411] = lex_mode_normal(254);
	v->a[2412] = lex_mode_external(243, 45);
	v->a[2413] = lex_mode_normal(254);
	v->a[2414] = lex_mode_normal(196);
	v->a[2415] = lex_mode_normal(254);
	v->a[2416] = lex_mode_normal(254);
	v->a[2417] = lex_mode_normal(254);
	v->a[2418] = lex_mode_normal(196);
	v->a[2419] = lex_mode_external(243, 45);
	lex_modes_121(v);
}

void	lex_modes_121(t_lex_modes_array *v)
{
	v->a[2420] = lex_mode_normal(196);
	v->a[2421] = lex_mode_normal(254);
	v->a[2422] = lex_mode_normal(196);
	v->a[2423] = lex_mode_normal(254);
	v->a[2424] = lex_mode_normal(254);
	v->a[2425] = lex_mode_normal(196);
	v->a[2426] = lex_mode_normal(254);
	v->a[2427] = lex_mode_external(254, 58);
	v->a[2428] = lex_mode_normal(254);
	v->a[2429] = lex_mode_external(254, 58);
	v->a[2430] = lex_mode_external(254, 58);
	v->a[2431] = lex_mode_normal(196);
	v->a[2432] = lex_mode_normal(254);
	v->a[2433] = lex_mode_normal(254);
	v->a[2434] = lex_mode_external(254, 58);
	v->a[2435] = lex_mode_normal(196);
	v->a[2436] = lex_mode_normal(196);
	v->a[2437] = lex_mode_normal(254);
	v->a[2438] = lex_mode_normal(254);
	v->a[2439] = lex_mode_external(254, 59);
	lex_modes_122(v);
}

void	lex_modes_122(t_lex_modes_array *v)
{
	v->a[2440] = lex_mode_external(254, 59);
	v->a[2441] = lex_mode_normal(254);
	v->a[2442] = lex_mode_normal(196);
	v->a[2443] = lex_mode_normal(254);
	v->a[2444] = lex_mode_normal(254);
	v->a[2445] = lex_mode_normal(198);
	v->a[2446] = lex_mode_normal(198);
	v->a[2447] = lex_mode_external(254, 58);
	v->a[2448] = lex_mode_external(254, 58);
	v->a[2449] = lex_mode_external(254, 58);
	v->a[2450] = lex_mode_normal(254);
	v->a[2451] = lex_mode_normal(198);
	v->a[2452] = lex_mode_external(254, 58);
	v->a[2453] = lex_mode_normal(254);
	v->a[2454] = lex_mode_normal(196);
	v->a[2455] = lex_mode_normal(254);
	v->a[2456] = lex_mode_normal(198);
	v->a[2457] = lex_mode_normal(254);
	v->a[2458] = lex_mode_normal(196);
	v->a[2459] = lex_mode_normal(196);
	lex_modes_123(v);
}

void	lex_modes_123(t_lex_modes_array *v)
{
	v->a[2460] = lex_mode_normal(254);
	v->a[2461] = lex_mode_external(254, 58);
	v->a[2462] = lex_mode_normal(254);
	v->a[2463] = lex_mode_normal(254);
	v->a[2464] = lex_mode_normal(254);
	v->a[2465] = lex_mode_normal(254);
	v->a[2466] = lex_mode_normal(254);
	v->a[2467] = lex_mode_normal(196);
	v->a[2468] = lex_mode_normal(254);
	v->a[2469] = lex_mode_normal(254);
	v->a[2470] = lex_mode_normal(196);
	v->a[2471] = lex_mode_normal(254);
	v->a[2472] = lex_mode_normal(254);
	v->a[2473] = lex_mode_normal(196);
	v->a[2474] = lex_mode_normal(254);
	v->a[2475] = lex_mode_normal(196);
	v->a[2476] = lex_mode_normal(196);
	v->a[2477] = lex_mode_normal(198);
	v->a[2478] = lex_mode_external(254, 58);
	v->a[2479] = lex_mode_normal(254);
	lex_modes_124(v);
}

void	lex_modes_124(t_lex_modes_array *v)
{
	v->a[2480] = lex_mode_normal(196);
	v->a[2481] = lex_mode_normal(254);
	v->a[2482] = lex_mode_normal(254);
	v->a[2483] = lex_mode_normal(254);
	v->a[2484] = lex_mode_normal(196);
}

/* EOF lex_modes_24.c */
