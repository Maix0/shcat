/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redef_alloc.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:15:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/22 15:16:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDEF_ALLOC_H
#define REDEF_ALLOC_H

#include "me/mem/mem.h"

#undef malloc
#undef calloc
#undef realloc
#undef free

#define malloc(s) mem_alloc((s))
#define calloc(s, l) mem_alloc_array((s), (l))
#define realloc(p, t) mem_realloc((p), (t))
#define free(p) mem_free((p))

#endif /* REDEF_ALLOC_H */
