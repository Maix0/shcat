/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inner_split_literals.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:33:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/06 18:42:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INNER_SPLIT_LITERALS_H
# define INNER_SPLIT_LITERALS_H

# include "me/string/split_literals.h"
# include "me/types.h"

typedef struct s_booleans
{
	bool	error;
	bool	lit_sq;
	bool	lit_dq;
	bool	esc;
	bool	append;
}			t_booleans;

char		unescape(t_const_str s, t_usize *current_index, bool *did_escape,
				t_error *error);

#endif /* INNER_SPLIT_LITERALS_H */
