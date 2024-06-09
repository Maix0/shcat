/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_22.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_110(t_lex_modes_array *v)
{
	v->a[2200] = lex_mode_normal(250);
	v->a[2201] = lex_mode_normal(250);
	v->a[2202] = lex_mode_normal(193);
	v->a[2203] = lex_mode_normal(250);
	v->a[2204] = lex_mode_external(250, 58);
	v->a[2205] = lex_mode_normal(250);
	v->a[2206] = lex_mode_normal(193);
	v->a[2207] = lex_mode_normal(250);
	v->a[2208] = lex_mode_normal(193);
	v->a[2209] = lex_mode_normal(193);
	v->a[2210] = lex_mode_normal(250);
	v->a[2211] = lex_mode_normal(250);
	v->a[2212] = lex_mode_external(250, 60);
	v->a[2213] = lex_mode_normal(193);
	v->a[2214] = lex_mode_normal(250);
	v->a[2215] = lex_mode_normal(193);
	v->a[2216] = lex_mode_normal(250);
	v->a[2217] = lex_mode_normal(250);
	v->a[2218] = lex_mode_external(250, 58);
	v->a[2219] = lex_mode_normal(250);
	lex_modes_111(v);
}

void	lex_modes_111(t_lex_modes_array *v)
{
	v->a[2220] = lex_mode_normal(193);
	v->a[2221] = lex_mode_normal(250);
	v->a[2222] = lex_mode_normal(250);
	v->a[2223] = lex_mode_normal(195);
	v->a[2224] = lex_mode_normal(195);
	v->a[2225] = lex_mode_normal(193);
	v->a[2226] = lex_mode_normal(250);
	v->a[2227] = lex_mode_normal(250);
	v->a[2228] = lex_mode_normal(250);
	v->a[2229] = lex_mode_normal(195);
	v->a[2230] = lex_mode_normal(250);
	v->a[2231] = lex_mode_normal(193);
	v->a[2232] = lex_mode_external(250, 60);
	v->a[2233] = lex_mode_normal(193);
	v->a[2234] = lex_mode_normal(195);
	v->a[2235] = lex_mode_normal(193);
	v->a[2236] = lex_mode_normal(250);
	v->a[2237] = lex_mode_normal(193);
	v->a[2238] = lex_mode_normal(250);
	v->a[2239] = lex_mode_normal(250);
	lex_modes_112(v);
}

void	lex_modes_112(t_lex_modes_array *v)
{
	v->a[2240] = lex_mode_external(250, 59);
	v->a[2241] = lex_mode_external(250, 59);
	v->a[2242] = lex_mode_normal(193);
	v->a[2243] = lex_mode_normal(250);
	v->a[2244] = lex_mode_normal(193);
	v->a[2245] = lex_mode_normal(250);
	v->a[2246] = lex_mode_normal(193);
	v->a[2247] = lex_mode_external(250, 58);
	v->a[2248] = lex_mode_external(250, 58);
	v->a[2249] = lex_mode_external(250, 58);
	v->a[2250] = lex_mode_normal(250);
	v->a[2251] = lex_mode_normal(193);
	v->a[2252] = lex_mode_normal(250);
	v->a[2253] = lex_mode_normal(250);
	v->a[2254] = lex_mode_normal(250);
	v->a[2255] = lex_mode_normal(193);
	v->a[2256] = lex_mode_normal(250);
	v->a[2257] = lex_mode_external(250, 58);
	v->a[2258] = lex_mode_normal(250);
	v->a[2259] = lex_mode_external(250, 58);
	lex_modes_113(v);
}

void	lex_modes_113(t_lex_modes_array *v)
{
	v->a[2260] = lex_mode_external(250, 58);
	v->a[2261] = lex_mode_normal(193);
	v->a[2262] = lex_mode_normal(195);
}

/* EOF lex_modes_22.c */
