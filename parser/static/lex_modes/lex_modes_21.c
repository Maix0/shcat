/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_21.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_105(t_lex_modes_array *v)
{
	v->a[2100] = lex_mode_normal(232);
	v->a[2101] = lex_mode_normal(232);
	v->a[2102] = lex_mode_normal(173);
	v->a[2103] = lex_mode_normal(173);
	v->a[2104] = lex_mode_normal(232);
	v->a[2105] = lex_mode_normal(232);
	v->a[2106] = lex_mode_normal(173);
	v->a[2107] = lex_mode_external(232, 62);
	v->a[2108] = lex_mode_external(220, 47);
	v->a[2109] = lex_mode_normal(232);
	v->a[2110] = lex_mode_normal(232);
	v->a[2111] = lex_mode_normal(173);
	v->a[2112] = lex_mode_normal(173);
	v->a[2113] = lex_mode_normal(232);
	v->a[2114] = lex_mode_normal(175);
	v->a[2115] = lex_mode_normal(175);
	v->a[2116] = lex_mode_external(220, 47);
	v->a[2117] = lex_mode_normal(232);
	v->a[2118] = lex_mode_normal(173);
	v->a[2119] = lex_mode_normal(175);
	lex_modes_106(v);
}

void	lex_modes_106(t_lex_modes_array *v)
{
	v->a[2120] = lex_mode_normal(232);
	v->a[2121] = lex_mode_normal(232);
	v->a[2122] = lex_mode_normal(175);
	v->a[2123] = lex_mode_external(220, 47);
	v->a[2124] = lex_mode_external(232, 60);
	v->a[2125] = lex_mode_normal(232);
	v->a[2126] = lex_mode_normal(173);
	v->a[2127] = lex_mode_normal(232);
	v->a[2128] = lex_mode_normal(232);
	v->a[2129] = lex_mode_external(232, 60);
	v->a[2130] = lex_mode_normal(175);
	v->a[2131] = lex_mode_normal(173);
	v->a[2132] = lex_mode_normal(232);
	v->a[2133] = lex_mode_normal(232);
	v->a[2134] = lex_mode_normal(232);
	v->a[2135] = lex_mode_external(232, 60);
	v->a[2136] = lex_mode_normal(232);
}

/* EOF lex_modes_21.c */
