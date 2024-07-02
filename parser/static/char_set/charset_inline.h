/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charset_inline.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARSET_INLINE_H
# define CHARSET_INLINE_H
# include "../../parse_types.h"
# include <stdint.h>

static inline t_char_range	*sym__comment_word_character_set_1(void)
{
	static t_char_range	val[10] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', ':'}, {'=', \
		'='}, {'?', '_'}, {'a', '{'}, {'}', 0x10ffff}};

	return (val);
}

static inline t_char_range	*sym_word_character_set_1(void)
{
	static t_char_range	val[9] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'%', '%'}, {'*', ':'}, {'=', '='}, {'?', \
		'_'}, {'a', '{'}, {'}', 0x10ffff}};

	return (val);
}

static inline t_char_range	*aux_sym__word_no_brace_token1_character_set_2(void)
{
	static t_char_range	val[10] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', ':'}, {'=', \
		'='}, {'?', '_'}, {'a', 'z'}, {'~', 0x10ffff}};

	return (val);
}

#endif // CHARSET_INLINE_H
