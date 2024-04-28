/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free_all.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:35:20 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:28:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_FREE_ALL_H
# define LIST_FREE_ALL_H

# include "me/types.h"

void	list_free_all(t_list **lst, void (*del)(void *));

#endif
