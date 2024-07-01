/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_41.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_205(t_parse_actions_entries_array *v)
{
	v->a[4100] = reduce(sym__expansion_body, 2, 0, 26);
	v->a[4101] = entry(1, true);
	v->a[4102] = shift(1332);
	v->a[4103] = entry(1, true);
	v->a[4104] = shift(730);
	v->a[4105] = entry(1, true);
	v->a[4106] = shift(861);
	v->a[4107] = entry(1, true);
	v->a[4108] = shift(351);
	v->a[4109] = entry(1, true);
	v->a[4110] = shift(155);
	v->a[4111] = entry(1, true);
	v->a[4112] = shift(380);
	v->a[4113] = entry(1, true);
	v->a[4114] = shift(426);
	v->a[4115] = entry(1, true);
	v->a[4116] = shift(400);
	v->a[4117] = entry(1, true);
	v->a[4118] = shift(1178);
	v->a[4119] = entry(1, true);
	parse_actions_entries_206(v);
}

void	parse_actions_entries_206(t_parse_actions_entries_array *v)
{
	v->a[4120] = shift(414);
	v->a[4121] = entry(1, true);
	v->a[4122] = reduce(sym_program, 1, 0, 1);
	v->a[4123] = entry(1, true);
	v->a[4124] = accept();
	v->a[4125] = entry(1, true);
	v->a[4126] = shift(1799);
}

/* EOF parse_actions_entries_41.c */
