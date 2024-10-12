/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:00:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/types.h"

void	hmap_env_clear(t_hashmap_env *self)
{
	t_usize		bucket_id;
	t_entry_env	*cur;
	t_entry_env	*next;

	bucket_id = 0;
	while (bucket_id < self->num_buckets)
	{
		cur = self->buckets[bucket_id];
		while (cur != NULL)
		{
			next = cur->next;
			self->free(cur->kv);
			mem_free(cur);
			cur = next;
		}
		bucket_id++;
	}
}
