/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:32:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "me/types.h"
/// @brief Allocate [size] bytes of memory
/// @param size number of bytes to allocate
/// @return a pointer of at least [size] bytes
/// @remark will abort if unable to allocate
void	*mem_alloc(t_usize size);

/// @brief Allocate [size] * [count] bytes of memory
/// @param size number of elements
/// @param count number of bytes of each element
/// @return a pointer of at least [size] * [count] bytes
/// @remark will abort if unable to allocate, or if the multiplication overflows
void	*mem_alloc_array(t_usize size, t_usize count);

/// @brief Extend or Reallocate [size] bytes
/// @param ptr pointer to the memory block
/// @param size number of bytes required
/// @return a pointer of at least [size] bytes,
/// 	it may be the same pointer as [ptr] if it was able to be extended
/// @remark will abort if unable to allocate
/// @remark Will be equal to an `mem_alloc` if [ptr] == NULL
void	*mem_realloc(void *ptr, t_usize size);

/// @brief Extend or Reallocate [size] * [count] bytes
/// @param ptr pointer to the memory block
/// @param size size of each element in bytes
/// @param count number of elements
/// @return a pointer of at least [size] * [count] bytes,
/// 	it may be the same pointer as [ptr] if it was able to be extended
/// @remark will abort if unable to allocate
/// @remark Will be equal to an `mem_alloc_array` if [ptr] == NULL
void	*mem_realloc_array(void *ptr, t_usize size, t_usize count);

/// @brief Set the memory block assigned at [ptr] as unsued
/// @param ptr the memory block to free
void	mem_free(void *ptr);

/// @brief Set [count] bytes to zero at the pointer [buf]
/// @param buf start of at least [count] bytes
/// @param count number of bytes to set to zero
void	mem_set_zero(void *buf, t_usize count);

/// @brief Set [count] bytes to [byte] at the pointer [buf]
/// @param buf start of at least [count] bytes
/// @param byte byte to set
/// @param count number of bytes to set to [byte]
void	mem_set(void *buf, t_u8 byte, t_usize count);

/// @brief Copy [count] bytes from [source] to [destination]
/// @param destination pointer to at least [count] bytes
/// @param source pointer to at least [count] bytes
/// @param count number of bytes to copy
/// @return [destination]
void	*mem_move(void *destination, const void *source, t_usize count);

/// @brief Copy [count] bytes from [source] to [destination]
/// @param destination pointer to at least [count] bytes
/// @param source pointer to at least [count] bytes
/// @param count number of bytes to copy
/// @return [destination]
void	*mem_copy(void *destination, const void *source, t_usize count);

/// @brief find a byte [find] in the buffer [buf] of size [count]
/// @param buf the buffer to search in
/// @param find the byte to find
/// @param count the number of bytes to search
/// @return the pointer to the first occurence of [find] or NULL if not found
void	*mem_find(void *buf, t_u8 find, t_usize count);

/// @brief find bytes [find][.find_count] in the buffer [buf] of size [count]
/// @param buf the buffer to search in
/// @param find pointer to the bytes to find
/// @param find_count number of the bytes to find
/// @param count the number of bytes to search
/// @return the pointer to the first occurence of [find] or NULL if not found
void	*mem_find_bytes(void *buf, t_u8 *find, t_usize find_count,
			t_usize count);

/// @brief compare [count] bytes from [lhs] to [rhs]
/// @param lhs bytes to compare
/// @param rhs bytes to compare
/// @param count number of bytes to compare
/// @return true if the bytes are equal for [count] bytes, false otherwise
bool	mem_compare(const void *lhs, const void *rhs, t_usize count);

#endif /* MEM_H */
