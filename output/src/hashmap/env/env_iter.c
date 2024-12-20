/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:00:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hashmap/hashmap_env.h"

t_error	hmap_env_iter(t_hashmap_env *self, t_error (*func)(t_usize idx,
			const t_str *key, t_str *val, void *ctx), void *ctx)
{
	t_usize		bucket_id;
	t_usize		all_id;
	t_entry_env	*cur;

	bucket_id = 0;
	all_id = 0;
	while (bucket_id < self->num_buckets)
	{
		cur = self->buckets[bucket_id];
		while (cur != NULL)
		{
			if (func(all_id++, &cur->kv.key, &cur->kv.val, ctx))
				return (ERROR);
			cur = cur->next;
		}
		bucket_id++;
	}
	return (NO_ERROR);
}
