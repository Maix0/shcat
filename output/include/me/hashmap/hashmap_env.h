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

/// @struct A key-value pair for the hashmap
typedef struct s_kv_env
{
	t_str key;
	t_str val;
} t_kv_env;

/// @typedef A function that hashes a key
typedef void (*t_hash_env_fn)(t_hasher *hasher, t_str *key);
/// @typedef A function that drops a key-value pair
typedef void (*t_drop_env_fn)(t_kv_env val);
/// @typedef A function that compares two keys and returns true if they are equal
typedef bool (*t_eq_env_fn)(t_str *lhs, t_str *rhs);


/// @struct A single entry in the hashmap
/// @var hash_id The hash of the key
/// @var kv The key-value pair
/// @var next The next entry in the bucket
typedef struct s_entry_env
{
	t_usize						hash_id;
	t_kv_env			kv;
	struct s_entry_env *next;
} t_entry_env;

/// @struct A hashmap of keys t_str and values t_str
/// @var buckets The array of buckets
/// @var num_buckets The number of buckets
/// @var hasher The hasher function
/// @var hfunc The hash function
/// @var cfunc The comparison function
/// @var drop The drop function
typedef struct s_hashmap_env
{
	t_entry_env **buckets;
	t_usize				  num_buckets;
	t_hasher			  hasher;
	t_hash_env_fn hfunc;
	t_eq_env_fn	  cfunc;
	t_drop_env_fn drop;
} t_hashmap_env;

/// @brief Creates a new hashmap with the given hash, comparison, and drop functions
/// @param hash The hash function
/// @param cmp The comparison function
/// @param drop The drop function
/// @return A new hashmap
t_hashmap_env *hmap_new_env(t_hash_env_fn hash, t_eq_env_fn	cmp, t_drop_env_fn drop);

/// @brief Creates a new hashmap with the given hash, comparison, and drop functions
/// @param hash The hash function
/// @param cmp The comparison function
/// @param drop The drop function
/// @param cap The number of buckets
/// @return A new hashmap
t_hashmap_env *hmap_new_with_buckets_env(t_hash_env_fn hash, t_eq_env_fn cmp, t_drop_env_fn drop, size_t cap);

/// @brief Drops the hashmap and all of its entries
/// @param hmap The hashmap to drop
void hmap_free_env(t_hashmap_env *hmap);

/// @brief Inserts a key-value pair into the hashmap
/// @param hmap The hashmap
/// @param key The key
/// @param value The value
void hmap_insert_env(t_hashmap_env *hmap, t_str key, t_str value);

/// @brief Gets the value associated with the key
/// @param hmap The hashmap
/// @param key The key
/// @return The value associated with the key, or NULL if the key is not in the hashmap
t_str *hmap_get_env(t_hashmap_env *hmap, t_str *key);
/// @brief Removes the key-value pair from the hashmap
/// @param hmap The hashmap
/// @param key The key
void hmap_remove_env(t_hashmap_env *hmap, t_str *key);

/// @brief Get an entry from the hashmap
/// @param hmap The hashmap
/// @param hash The hash of the key
/// @param key The key
/// @param prev The previous entry in the bucket
/// @return The entry, or NULL if the key is not in the hashmap
/// @note this is an internal function
t_entry_env *hmap_get_entry_env(t_hashmap_env *hmap, t_usize hash, t_str *key, t_entry_env	**prev);

/// @brief Iterates over the hashmap and calls the given function for each key-value pair
/// @param self The hashmap
/// @param func The function to call
/// @param ctx The context to pass to the function
/// @return An error code
/// @note The iteration can be stopped by returning an error code from the function
t_error hmap_env_iter(t_hashmap_env *self, t_error (*func)(t_usize idx, const t_str *key, t_str *val, void *ctx), void *ctx);

#endif
