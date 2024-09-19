/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language_getters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:42:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 17:43:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "parser/language.h"

t_u32	ts_language_symbol_count(const t_language *self)
{
	return (self->symbol_count + self->alias_count);
}

t_u32	ts_language_state_count(const t_language *self)
{
	return (self->state_count);
}

t_u32	ts_language_version(const t_language *self)
{
	return (self->version);
}

t_u32	ts_language_field_count(const t_language *self)
{
	return (self->field_count);
}
