/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _tuple_expanded_str.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/30 18:22:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TUPLE_EXPANDED_STR_H
# define _TUPLE_EXPANDED_STR_H

# include "me/types.h"

typedef struct s_expandable_str	t_expandable_str;

struct s_expandable_str
{
	t_str	value;
	bool	do_expand;
};

static inline void	free_expandable_str(t_expandable_str self)
{
	void	mem_free(void *str);

	mem_free(self.value);
}

#endif /* _TUPLE_EXPANDED_STR_H */
