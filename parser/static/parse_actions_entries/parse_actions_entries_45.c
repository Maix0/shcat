/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_45.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_225(t_parse_actions_entries_array *v)
{
	v->a[4500] = entry(1, true);
	v->a[4501] = shift(273);
	v->a[4502] = entry(1, true);
	v->a[4503] = shift(2023);
	v->a[4504] = entry(1, true);
	v->a[4505] = shift(159);
	v->a[4506] = entry(1, true);
	v->a[4507] = shift(397);
	v->a[4508] = entry(1, true);
	v->a[4509] = shift(395);
	v->a[4510] = entry(1, true);
	v->a[4511] = shift(393);
	v->a[4512] = entry(1, true);
	v->a[4513] = shift(1389);
	v->a[4514] = entry(1, true);
	v->a[4515] = shift(2020);
	v->a[4516] = entry(1, true);
	v->a[4517] = shift(485);
	v->a[4518] = entry(1, true);
	v->a[4519] = shift(483);
	parse_actions_entries_226(v);
}

void	parse_actions_entries_226(t_parse_actions_entries_array *v)
{
	v->a[4520] = entry(1, true);
	v->a[4521] = shift(640);
	v->a[4522] = entry(1, true);
	v->a[4523] = shift(1985);
	v->a[4524] = entry(1, true);
	v->a[4525] = shift(1196);
	v->a[4526] = entry(1, true);
	v->a[4527] = shift(643);
	v->a[4528] = entry(1, true);
	v->a[4529] = shift(644);
	v->a[4530] = entry(1, true);
	v->a[4531] = shift(1692);
	v->a[4532] = entry(1, true);
	v->a[4533] = shift(1689);
	v->a[4534] = entry(1, true);
	v->a[4535] = shift(1687);
	v->a[4536] = entry(1, true);
	v->a[4537] = reduce(sym_program, 1, 0, 2);
	v->a[4538] = entry(1, true);
	v->a[4539] = accept();
	parse_actions_entries_227(v);
}

void	parse_actions_entries_227(t_parse_actions_entries_array *v)
{
	v->a[4540] = entry(1, true);
	v->a[4541] = shift(1979);
	v->a[4542] = entry(1, true);
	v->a[4543] = shift(1075);
	v->a[4544] = entry(1, true);
	v->a[4545] = shift(1078);
	v->a[4546] = entry(1, true);
	v->a[4547] = shift(1079);
	v->a[4548] = entry(1, true);
	v->a[4549] = shift(635);
	v->a[4550] = entry(1, true);
	v->a[4551] = shift(158);
	v->a[4552] = entry(1, true);
	v->a[4553] = shift(1990);
	v->a[4554] = entry(1, true);
	v->a[4555] = shift(1551);
}

/* EOF parse_actions_entries_45.c */
