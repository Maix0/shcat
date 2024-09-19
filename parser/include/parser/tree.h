/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:18:46 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
#define TREE_H

#include "me/types.h"
#include "parser/subtree.h"

struct s_tree
{
	t_subtree			  root;
	const t_language *language;
};

t_tree *ts_tree_new(t_subtree root, const t_language *language);
t_node	ts_node_new(const t_tree *, const t_subtree *, t_length, t_symbol);

#endif // TREE_H
