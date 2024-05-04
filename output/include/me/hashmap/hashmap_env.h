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

#ifndef HASHMAP_ENV_H
#define HASHMAP_ENV_H

#define DEFAULT_BUCKETS 750



#include "me/hash/hasher.h"
#include "me/types.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_kv_env
{
	t_str key;
	t_str val;
} t_kv_env;

typedef void (*t_hash_env_fn)(t_hasher *hasher, t_str *key);
typedef void (*t_drop_env_fn)(t_kv_env val);
typedef bool (*t_eq_env_fn)(t_str *lhs, t_str *rhs);

typedef struct s_entry_env
{
	t_usize						hash_id;
	t_kv_env			kv;
	struct s_entry_env *next;
} t_entry_env;

typedef struct s_hashmap_env
{
	t_entry_env **buckets;
	t_usize				  num_buckets;
	t_hasher			  hasher;
	t_hash_env_fn hfunc;
	t_eq_env_fn	  cfunc;
	t_drop_env_fn drop;
} t_hashmap_env;

t_hashmap_env *new_hashmap_env(t_hash_env_fn hash,
											   t_eq_env_fn	 cmp,
											   t_drop_env_fn drop);
t_hashmap_env *new_hashmap_with_buckets_env(
	t_hash_env_fn hash, t_eq_env_fn cmp,
	t_drop_env_fn drop, size_t cap);

void drop_hashmap_env(t_hashmap_env *hmap);

void insert_hashmap_env(t_hashmap_env *hmap, t_str key,
								t_str value);

t_str *get_hashmap_env(t_hashmap_env *hmap,
									  t_str			*key);
void remove_hashmap_env(t_hashmap_env *hmap, t_str *key);

t_entry_env *hashmap_get_entry_env(t_hashmap_env *hmap,
												   t_usize				  hash,
												   t_str			 *key,
												   t_entry_env	**prev);

t_error hashmap_env_iter(t_hashmap_env *self,
								 t_error (*func)(t_usize			 idx,
												 const t_str *key,
												 t_str *val, void *ctx),
								 void *ctx);

#endif
