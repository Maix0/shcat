/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include_token_workaround.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:44:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 15:44:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_TOKEN_WORKAROUND_H
# define INCLUDE_TOKEN_WORKAROUND_H

# include "me/types.h"

typedef struct s_token		t_token;

/// @brief A function that free an t_token
typedef void				(*t_free_token_item)(t_token elem);

/// @brief A dynamic array of t_token
typedef struct s_vec_token	t_vec_token;

struct						s_vec_token
{
	t_free_token_item		free_func;
	t_usize					len;
	t_usize					capacity;
	t_token					*buffer;
};

#endif /* INCLUDE_TOKEN_WORKAROUND_H */
