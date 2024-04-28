/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:40:24 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:30:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_MAP_H
# define LIST_MAP_H

# include "me/types.h"

t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif