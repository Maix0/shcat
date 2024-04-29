/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_field_entry.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:51:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:35:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_FIELD_ENTRY_H
# define TYPES_FIELD_ENTRY_H

# include "parser/types/types_field_id.h"

typedef struct s_field_map_entry
{
	t_field_id	field_id;
	t_u8		child_index;
	bool		inherited;
}				t_field_map_entry;

#endif /* TYPES_FIELD_ENTRY_H */
