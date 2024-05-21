/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_env.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:20 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 15:32:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/hasher.h"
#include "me/hash/sip.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <stdlib.h>

t_hashmap_env *hmap_env_new(t_hash_env_fn hfunc,
											t_eq_env_fn	  cfunc,
											t_drop_env_fn drop)
{
	return (
		hmap_env_new_with_buckets(hfunc, cfunc, drop, DEFAULT_BUCKETS));
}

t_hashmap_env *hmap_env_new_with_buckets(
	t_hash_env_fn hfunc, t_eq_env_fn cfunc,
	t_drop_env_fn drop, t_usize buckets)
{
	t_hashmap_env *hmap;

	hmap = mem_alloc(sizeof(*hmap));
	if (hmap == NULL)
		return (NULL);
	hmap->buckets = mem_alloc_array(buckets, sizeof(t_entry_env *));
	hmap->num_buckets = buckets;
	hmap->hasher = hasher_sip13_new();
	hmap->hfunc = hfunc;
	hmap->cfunc = cfunc;
	hmap->drop = drop;
	if (hmap->buckets == NULL)
		return ((void)mem_free(hmap), NULL);
	return (hmap);
}

void hmap_env_free(t_hashmap_env *hmap)
{
	t_usize index;
	t_entry_env *entry;
	t_entry_env *tmp;

	index = 0;
	while (index < hmap->num_buckets)
	{
		entry = hmap->buckets[index];
		while (entry != NULL)
		{
			hmap->drop(entry->kv);
			tmp = entry->next;
			mem_free(entry);
			entry = tmp;
		}
		index++;
	}
	hasher_finish(&hmap->hasher);
	mem_free(hmap->buckets);
	mem_free(hmap);
}

t_entry_env *hmap_env_get_entry(t_hashmap_env *hmap,
												t_usize		  hashed_key,
												t_str *key,
												t_entry_env **prev)
{
	t_entry_env *entry;

	entry = hmap->buckets[hashed_key % hmap->num_buckets];
	while (entry != NULL)
	{
		if (!hmap->cfunc(&entry->kv.key, key))
		{
			*prev = entry;
			entry = entry->next;
		}
		else
		{
			return (entry);
		}
	}
	return (NULL);
}

bool hmap_env_insert(t_hashmap_env *hmap, t_str key,
							 t_str value)
{
	t_usize				 hashed_key;
	t_entry_env *prev;
	t_entry_env *entry;

	hmap->hfunc(&hmap->hasher, &key);
	hashed_key = hasher_reset_and_finish(&hmap->hasher);
	prev = NULL;
	entry = hmap_env_get_entry(hmap, hashed_key, &key, &prev);
	if (entry == NULL)
	{
		entry = mem_alloc(sizeof(t_entry_env));
		entry->hash_id = hashed_key;
		entry->kv = (t_kv_env){.key = key, .val = value};
		entry->next = NULL;
		if (prev == NULL)
			hmap->buckets[hashed_key % hmap->num_buckets] = entry;
		else
			prev->next = entry;
		return (false);
	}
	else
	{
		hmap->drop(entry->kv);
		entry->kv.key = key;
		entry->kv.val = value;
		return (true);
	}
}