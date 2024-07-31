/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_18.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_90(t_lex_modes_array *v)
{
	v->a[1800] = lex_mode_normal(208);
	v->a[1801] = lex_mode_normal(151);
	v->a[1802] = lex_mode_normal(208);
	v->a[1803] = lex_mode_normal(151);
	v->a[1804] = lex_mode_normal(151);
}

/* EOF lex_modes_18.c */
