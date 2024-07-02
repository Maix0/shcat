/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_20.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_100(t_lex_modes_array *v)
{
	v->a[2000] = lex_mode_normal(232);
	v->a[2001] = lex_mode_normal(173);
	v->a[2002] = lex_mode_external(232, 61);
	v->a[2003] = lex_mode_normal(232);
	v->a[2004] = lex_mode_external(232, 60);
	v->a[2005] = lex_mode_external(232, 60);
	v->a[2006] = lex_mode_normal(232);
	v->a[2007] = lex_mode_normal(232);
	v->a[2008] = lex_mode_normal(173);
	v->a[2009] = lex_mode_normal(232);
	v->a[2010] = lex_mode_normal(232);
	v->a[2011] = lex_mode_normal(232);
	v->a[2012] = lex_mode_normal(232);
	v->a[2013] = lex_mode_normal(232);
	v->a[2014] = lex_mode_normal(232);
	v->a[2015] = lex_mode_normal(232);
	v->a[2016] = lex_mode_external(232, 62);
	v->a[2017] = lex_mode_external(232, 62);
	v->a[2018] = lex_mode_external(232, 62);
	v->a[2019] = lex_mode_external(232, 60);
	lex_modes_101(v);
}

void	lex_modes_101(t_lex_modes_array *v)
{
	v->a[2020] = lex_mode_external(232, 60);
	v->a[2021] = lex_mode_normal(173);
	v->a[2022] = lex_mode_normal(232);
	v->a[2023] = lex_mode_normal(232);
	v->a[2024] = lex_mode_normal(232);
	v->a[2025] = lex_mode_normal(232);
	v->a[2026] = lex_mode_normal(232);
	v->a[2027] = lex_mode_normal(175);
	v->a[2028] = lex_mode_external(232, 60);
	v->a[2029] = lex_mode_external(232, 60);
	v->a[2030] = lex_mode_normal(232);
	v->a[2031] = lex_mode_normal(232);
	v->a[2032] = lex_mode_normal(175);
	v->a[2033] = lex_mode_normal(232);
	v->a[2034] = lex_mode_normal(232);
	v->a[2035] = lex_mode_normal(232);
	v->a[2036] = lex_mode_normal(173);
	v->a[2037] = lex_mode_normal(232);
	v->a[2038] = lex_mode_normal(173);
	v->a[2039] = lex_mode_external(232, 61);
	lex_modes_102(v);
}

void	lex_modes_102(t_lex_modes_array *v)
{
	v->a[2040] = lex_mode_normal(232);
	v->a[2041] = lex_mode_external(232, 61);
	v->a[2042] = lex_mode_external(220, 47);
	v->a[2043] = lex_mode_normal(232);
	v->a[2044] = lex_mode_normal(173);
	v->a[2045] = lex_mode_external(220, 47);
	v->a[2046] = lex_mode_normal(173);
	v->a[2047] = lex_mode_external(220, 47);
	v->a[2048] = lex_mode_normal(232);
	v->a[2049] = lex_mode_normal(173);
	v->a[2050] = lex_mode_normal(232);
	v->a[2051] = lex_mode_normal(232);
	v->a[2052] = lex_mode_external(232, 61);
	v->a[2053] = lex_mode_external(232, 60);
	v->a[2054] = lex_mode_normal(232);
	v->a[2055] = lex_mode_normal(173);
	v->a[2056] = lex_mode_normal(232);
	v->a[2057] = lex_mode_normal(173);
	v->a[2058] = lex_mode_normal(173);
	v->a[2059] = lex_mode_external(232, 60);
	lex_modes_103(v);
}

void	lex_modes_103(t_lex_modes_array *v)
{
	v->a[2060] = lex_mode_normal(232);
	v->a[2061] = lex_mode_external(232, 60);
	v->a[2062] = lex_mode_normal(173);
	v->a[2063] = lex_mode_normal(232);
	v->a[2064] = lex_mode_normal(173);
	v->a[2065] = lex_mode_normal(232);
	v->a[2066] = lex_mode_normal(232);
	v->a[2067] = lex_mode_external(220, 47);
	v->a[2068] = lex_mode_external(220, 47);
	v->a[2069] = lex_mode_normal(232);
	v->a[2070] = lex_mode_external(220, 47);
	v->a[2071] = lex_mode_normal(173);
	v->a[2072] = lex_mode_normal(173);
	v->a[2073] = lex_mode_normal(232);
	v->a[2074] = lex_mode_normal(175);
	v->a[2075] = lex_mode_normal(175);
	v->a[2076] = lex_mode_normal(173);
	v->a[2077] = lex_mode_external(232, 60);
	v->a[2078] = lex_mode_external(220, 47);
	v->a[2079] = lex_mode_external(232, 61);
	lex_modes_104(v);
}

void	lex_modes_104(t_lex_modes_array *v)
{
	v->a[2080] = lex_mode_normal(173);
	v->a[2081] = lex_mode_external(232, 61);
	v->a[2082] = lex_mode_external(220, 47);
	v->a[2083] = lex_mode_external(232, 60);
	v->a[2084] = lex_mode_normal(232);
	v->a[2085] = lex_mode_normal(173);
	v->a[2086] = lex_mode_normal(173);
	v->a[2087] = lex_mode_normal(232);
	v->a[2088] = lex_mode_normal(232);
	v->a[2089] = lex_mode_normal(232);
	v->a[2090] = lex_mode_normal(232);
	v->a[2091] = lex_mode_external(232, 60);
	v->a[2092] = lex_mode_normal(173);
	v->a[2093] = lex_mode_normal(232);
	v->a[2094] = lex_mode_normal(173);
	v->a[2095] = lex_mode_external(232, 62);
	v->a[2096] = lex_mode_external(232, 62);
	v->a[2097] = lex_mode_normal(232);
	v->a[2098] = lex_mode_external(220, 47);
	v->a[2099] = lex_mode_normal(232);
	lex_modes_105(v);
}

/* EOF lex_modes_20.c */
