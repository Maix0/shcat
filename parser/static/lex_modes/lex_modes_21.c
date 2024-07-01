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
	v->a[2100] = lex_mode_normal(176);
	v->a[2101] = lex_mode_normal(231);
	v->a[2102] = lex_mode_external(231, 60);
	v->a[2103] = lex_mode_normal(176);
	v->a[2104] = lex_mode_normal(231);
	v->a[2105] = lex_mode_normal(176);
	v->a[2106] = lex_mode_normal(231);
	v->a[2107] = lex_mode_normal(231);
	v->a[2108] = lex_mode_external(231, 60);
	v->a[2109] = lex_mode_normal(174);
	v->a[2110] = lex_mode_normal(231);
	v->a[2111] = lex_mode_normal(174);
	v->a[2112] = lex_mode_normal(231);
	v->a[2113] = lex_mode_normal(174);
	v->a[2114] = lex_mode_normal(231);
	v->a[2115] = lex_mode_normal(231);
	v->a[2116] = lex_mode_normal(231);
	v->a[2117] = lex_mode_normal(174);
}

/* EOF lex_modes_21.c */
