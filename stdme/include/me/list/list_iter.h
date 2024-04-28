/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_iter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:39:05 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:29:51 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_ITER_H
# define LIST_ITER_H

# include "me/types.h"

void	list_iter(t_list *list, void (*f)(void *));

#endif
