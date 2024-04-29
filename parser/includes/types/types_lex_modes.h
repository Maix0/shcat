/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_lex_modes.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:01:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 15:01:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_LEX_MODES_H
# define TYPES_LEX_MODES_H

# include "me/types.h"

typedef struct s_lex_modes
{
	t_u16	lex_state;
	t_u16	external_lex_state;
}			t_lex_modes;

#endif /* TYPES_LEX_MODES_H */
