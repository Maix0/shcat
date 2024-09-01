/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_heredoc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:59:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/30 17:59:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include <stdlib.h>

t_heredoc *vec_heredoc_get(t_vec_heredoc *vec, t_usize i)
{
	if (vec->len >= i)
		return (NULL);
	return (&vec->buffer[i]);
}

t_heredoc *vec_heredoc_last(t_vec_heredoc *vec)
{
	if (vec->len == 0)
		return (NULL);
	return (&vec->buffer[vec->len - 1]);
}
