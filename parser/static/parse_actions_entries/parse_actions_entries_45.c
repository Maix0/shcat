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
	v->a[4501] = shift(1369);
	v->a[4502] = entry(1, true);
	v->a[4503] = shift(888);
	v->a[4504] = entry(1, true);
	v->a[4505] = shift(941);
	v->a[4506] = entry(1, true);
	v->a[4507] = shift(875);
	v->a[4508] = entry(1, true);
	v->a[4509] = shift(924);
	v->a[4510] = entry(1, true);
	v->a[4511] = shift(268);
	v->a[4512] = entry(1, true);
	v->a[4513] = shift(2081);
	v->a[4514] = entry(1, true);
	v->a[4515] = shift(161);
	v->a[4516] = entry(1, true);
	v->a[4517] = shift(406);
	v->a[4518] = entry(1, true);
	v->a[4519] = shift(402);
	parse_actions_entries_226(v);
}

void	parse_actions_entries_226(t_parse_actions_entries_array *v)
{
	v->a[4520] = entry(1, true);
	v->a[4521] = shift(878);
	v->a[4522] = entry(1, true);
	v->a[4523] = shift(441);
	v->a[4524] = entry(1, true);
	v->a[4525] = shift(1372);
	v->a[4526] = entry(1, true);
	v->a[4527] = shift(850);
	v->a[4528] = entry(1, true);
	v->a[4529] = shift(829);
	v->a[4530] = entry(1, true);
	v->a[4531] = shift(1285);
	v->a[4532] = entry(1, true);
	v->a[4533] = shift(474);
	v->a[4534] = entry(1, true);
	v->a[4535] = shift(478);
	v->a[4536] = entry(1, true);
	v->a[4537] = shift(479);
	v->a[4538] = entry(1, true);
	v->a[4539] = shift(995);
	parse_actions_entries_227(v);
}

void	parse_actions_entries_227(t_parse_actions_entries_array *v)
{
	v->a[4540] = entry(1, true);
	v->a[4541] = reduce(sym_program, 1, 0, 2);
	v->a[4542] = entry(1, true);
	v->a[4543] = shift(1652);
	v->a[4544] = entry(1, true);
	v->a[4545] = accept();
	v->a[4546] = entry(1, true);
	v->a[4547] = shift(1064);
	v->a[4548] = entry(1, true);
	v->a[4549] = shift(1649);
	v->a[4550] = entry(1, true);
	v->a[4551] = shift(1647);
	v->a[4552] = entry(1, true);
	v->a[4553] = shift(2016);
	v->a[4554] = entry(1, true);
	v->a[4555] = shift(1456);
}

/* EOF parse_actions_entries_45.c */
