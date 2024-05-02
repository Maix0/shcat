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
	static t_char_range	val[12] = {{0, 0x08}, {0x0e, 0x1f}, \
		{'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', ':'}, {'=', \
		'='}, {'?', 'Z'}, {'\\', '\\'}, {'^', '_'}, {'a', 'z'}, \
		{'~', 0x10ffff}};

	return (val);
}

static inline t_char_range	*sym_word_character_set_1(void)
{
	static t_char_range	val[11] = {{0, 0x08}, {0x0e, 0x1f}, \
		{'!', '!'}, {'%', '%'}, {'*', ':'}, {'=', '='}, {'?', \
		'Z'}, {'\\', '\\'}, {'^', '_'}, {'a', 'z'}, {'~', \
		0x10ffff}};

	return (val);
}

#endif
