/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_env.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:00:22 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 15:24:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"

#include "me/hashmap/hashmap_env.h"



t_error hmap_env_clone(t_hashmap_env *self,
								t_error (*clone)(const t_kv_env *val, void *ctx, t_kv_env *out),
								void *ctx,
								t_hashmap_env **out)
{
	t_usize					bucket_id;
	t_entry_env		*cur;
	t_kv_env		kv;
	t_hashmap_env	*ret;

	bucket_id = 0;
	ret = hmap_env_new_with_buckets(self->hfunc, self->cfunc, self->drop, self->num_buckets);
	if (ret == NULL)
		return (ERROR);
	while (bucket_id < self->num_buckets)
	{
		cur = self->buckets[bucket_id];
		while (cur != NULL)
		{
			if (clone(&cur->kv, ctx, &kv))
				return (hmap_env_free(ret),ERROR);
			hmap_env_insert(ret, kv.key, kv.val);
			cur = cur->next;
		}
		bucket_id++;
	}
	*out = ret;
	return (NO_ERROR);
}
