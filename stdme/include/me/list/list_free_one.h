/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free_one.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:30:20 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:29:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_FREE_ONE_H
# define LIST_FREE_ONE_H

# include "me/types.h"

void	list_free_one(t_list *lst, void (*del)(void *));

#endif
