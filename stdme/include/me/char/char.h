/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:11:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

# include "me/types.h"

/// @brief Check if a character is alphanumeric
/// @param chr char to check
/// @return chr is a alphanumeric
bool	me_isalnum(char chr);

/// @brief Check if a character is alphabetic
/// @param chr char to check
/// @return chr is a alphabetic
bool	me_isalpha(char chr);

/// @brief Check if a character is a digit
/// @param chr
/// @return chr is a digit
bool	me_isdigit(char chr);

/// @brief Check if a character is in the ascii range
/// @param chr char to check
/// @return chr is a ascii character
bool	me_isascii(signed char chr);

/// @brief Check if a character is lowercase
/// @param chr char to check
/// @return  chr is a lowercase letter
bool	me_islower(char chr);

/// @brief Check if a character is uppercase
/// @param chr char to check
/// @return chr is a uppercase letter
bool	me_isupper(char chr);

/// @brief Check if a character is a whitespace
/// @param chr char to check
/// @return chr is a whitespace
bool	me_isspace(char chr);

/// @brief Set the character to lowercase if it's uppercase
/// @param chr char to convert
/// @return uppercase chr or chr if not a lowercase letter
char	me_tolower(char chr);

/// @brief Set the character to uppercase if it's lowercase
/// @param chr char to convert
/// @return lowercase chr or chr if not a uppercase letter
char	me_toupper(char chr);

#endif /* CHAR_H */
