/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charset_inline.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/22 16:31:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARSET_INLINE_H
# define CHARSET_INLINE_H
# include "../../parse_types.h"
# include <stdint.h>

static inline t_char_range	*sym__comment_word_character_set_1(void)
{
	#ifdef static 
	#undef static
	#define static__REAPPLY
	#endif
	static t_char_range	val[10] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', ':'}, {'=', \
		'='}, {'?', '_'}, {'a', '{'}, {'}', 0x10ffff}};
	#ifdef static__REAPPLY 
	#define static
	#undef static__REAPPLY
	#endif

	return (val);
}

static inline t_char_range	*sym_word_character_set_1(void)
{
	#ifdef static 
	#undef static
	#define static__REAPPLY
	#endif
	static t_char_range	val[9] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'%', '%'}, {'*', ':'}, {'=', '='}, {'?', \
		'_'}, {'a', '{'}, {'}', 0x10ffff}};
	#ifdef static__REAPPLY 
	#define static
	#undef static__REAPPLY
	#endif

	return (val);
}

static inline t_char_range	*aux_sym__word_no_brace_token1_character_set_2(void)
{
	#ifdef static 
	#undef static
	#define static__REAPPLY
	#endif
	static t_char_range	val[10] = {{0, 0x08}, {0x0b, 0x1f}, \
		{'!', '!'}, {'#', '#'}, {'%', '%'}, {'*', ':'}, {'=', \
		'='}, {'?', '_'}, {'a', 'z'}, {'~', 0x10ffff}};
	#ifdef static__REAPPLY 
	#define static
	#undef static__REAPPLY
	#endif

	return (val);
}

#endif // CHARSET_INLINE_H
