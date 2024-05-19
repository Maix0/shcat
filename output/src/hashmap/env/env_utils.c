/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_env_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:20 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 15:35:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/sip.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <stdlib.h>

t_str *hmap_get_env(t_hashmap_env *hmap,
									  t_str			*key)
{
	t_usize				 hashed_key;
	t_entry_env *entry;
	t_entry_env *prev;

	hmap->hfunc(&hmap->hasher, key);
	hashed_key = hasher_reset_and_finish(&hmap->hasher);
	entry = hmap_get_entry_env(hmap, hashed_key, key, &prev);
	if (entry == NULL)
		return (NULL);
	return (&entry->kv.val);
}

void hmap_remove_env(t_hashmap_env *hmap, t_str *key)
{
	t_usize				 hashed_key;
	t_entry_env *prev;
	t_entry_env *entry;

	hmap->hfunc(&hmap->hasher, key);
	hashed_key = hasher_reset_and_finish(&hmap->hasher);
	hmap->hasher = hasher_sip13_new();
	prev = NULL;
	entry = hmap_get_entry_env(hmap, hashed_key, key, &prev);
	if (entry == NULL)
		return;
	if (prev == NULL)
		hmap->buckets[hashed_key % hmap->num_buckets] = entry->next;
	else
		prev->next = entry->next;
	hmap->drop(entry->kv);
	mem_free(entry);
	hmap->buckets[hashed_key % hmap->num_buckets] = NULL;
}
