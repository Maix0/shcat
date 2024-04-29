/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parser_tree.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:37:41 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:49:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSER_TREE_H
# define TYPES_PARSER_TREE_H

# include "me/types.h"
# include "parser/types/types_language.h"
# include "parser/types/types_parser_range.h"
# include "parser/types/types_parser_subtree.h"

typedef struct s_parser_tree
{
	t_parser_subtree	root;
	const t_language	*language;
	t_parser_range		*included_ranges;
	t_i32				included_range_count;
}						t_parser_tree;

#endif /* TYPES_PARSER_TREE_H */
