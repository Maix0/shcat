/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:30:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "me/types.h"
# include "me/vec/vec_str.h"
/// @brief Get the length of a string
/// @param str the string
/// @return the length of the string
t_usize		str_len(t_const_str str);

/// @brief Clone a string
/// @param source the string to clone
/// @return the cloned string
t_str		str_clone(t_const_str source);

/// @brief Get a substring of a string
/// @param str the string to operate on
/// @param start the start index of the substring
/// @param len the length of the substring
/// @return the substring
t_str		str_substring(t_const_str str, t_usize start, t_usize len);

/// @brief Compare two strings
/// @param lhs left hand side string
/// @param rhs right hand side string
/// @return true if the strings are equal, false otherwise
bool		str_compare(t_const_str lhs, t_const_str rhs);

/// @brief Compare two strings up to n characters
/// @param lhs left hand side string
/// @param rhs right hand side string
/// @param n the maximum number of characters to compare
/// @return true if the strings are equal, false otherwise
bool		str_n_compare(t_const_str lhs, t_const_str rhs, t_usize n);

/// @brief Find a character in a string
/// @param str the string to search in
/// @param chr the character to find
/// @return a pointer to the first occurence of the character,
/// 	or NULL if not found
char		*str_find_chr(t_const_str str, char chr);

/// @brief Find a character in a string, starting from the end
/// @param str the string to search in
/// @param chr the character to find
/// @return a pointer to the last occurence of the character,
/// 	or NULL if not found
char		*str_find_rev_chr(t_const_str str, char chr);
/// @brief Find a string in a string
/// @param str the string to be searched
/// @param to_find the string to find
/// @return a pointer to the first occurence of the string, or NULL if not found
const char	*str_find_str(t_const_str str, t_const_str to_find);
/// @brief Find a string in a string, up to n characters
/// @param str the string to be searched
/// @param to_find the string to find
/// @param len the maximum number of characters to search
/// @return a pointer to the first occurence of the string, or NULL if not found
const char	*str_n_find_str(t_const_str str, t_const_str to_find, t_usize len);

/// @brief Join two string together
/// @param s1 First string
/// @param s2 Second string
/// @return the joined string
t_str		str_join(t_const_str s1, t_const_str s2);

/// @brief Concatenate two strings
/// @param dest the destination string
/// @param src the source string
/// @param buffer_size the size of the destination buffer
/// @return the length of the concatenated string
t_usize		str_l_cat(t_str dest, t_const_str src, t_usize buffer_size);

/// @brief Copy a string
/// @param dest the destination string
/// @param src the source string
/// @param buffer_size the size of the destination buffer
/// @return the length of the copied string
t_usize		str_l_copy(t_str dest, t_const_str src, t_usize buffer_size);

/// @brief run a function over each character of a string
/// @param s the string to iterate over
/// @param f the function to run over each character
void		str_iter(t_str s, void (*f)(t_usize, char *));

/// @brief run a function over each character of a string
/// @param s the string to iterate over
/// @param f the function to run over each character
/// @return the mapped string
t_str		str_map(t_const_str s, char (*f)(t_usize, char));

/// @brief Split a string into a vector of strings
/// @param str the string to be split
/// @param chr the list of chars to be used as word delimiter
/// @param out[out] the returned value, a vector of words
/// @return True in case of error, false otherwise
t_error		str_split(t_const_str str, t_const_str chrs, t_vec_str *out);

/// @brief Remove consecutive leading and trailing characters from a string
/// @param str the string to trim
/// @param charset the characters to remove
/// @return the trimmed string
t_str		str_trim(t_const_str str, t_const_str charset);

/// @brief Remove consecutive leading and trailing characters from a string
/// @param str the string to free
static inline void	str_free(t_str str)
{
	void	mem_free(void *ptr);

	mem_free(str);
}

#endif /* STR_H */
