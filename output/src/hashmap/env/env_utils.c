/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/hash/sip.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include <stdlib.h>

t_str	*hmap_env_get(t_hashmap_env *hmap, t_str *key)
{
	t_usize		hashed_key;
	t_entry_env	*entry;
	t_entry_env	*prev;

	hmap->hfunc(&hmap->hasher, key);
	hashed_key = hasher_reset_and_finish(&hmap->hasher);
	entry = hmap_env_get_entry(hmap, hashed_key, key, &prev);
	if (entry == NULL)
		return (NULL);
	return (&entry->kv.val);
}

void	hmap_env_remove(t_hashmap_env *hmap, t_str *key)
{
	t_usize		hashed_key;
	t_entry_env	*prev;
	t_entry_env	*entry;

	hmap->hfunc(&hmap->hasher, key);
	hashed_key = hasher_reset_and_finish(&hmap->hasher);
	prev = NULL;
	entry = hmap_env_get_entry(hmap, hashed_key, key, &prev);
	if (entry == NULL)
		return ;
	if (prev == NULL)
		hmap->buckets[hashed_key % hmap->num_buckets] = entry->next;
	else
		prev->next = entry->next;
	hmap->free(entry->kv);
	mem_free(entry);
	hmap->buckets[hashed_key % hmap->num_buckets] = NULL;
}
