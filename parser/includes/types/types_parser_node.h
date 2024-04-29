/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parser_node.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:36:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:37:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSER_NODE_H
# define TYPES_PARSER_NODE_H

# include "me/types.h"
# include "parser/types/types_parser_tree.h"

typedef struct s_parser_node
{
	t_u32				context[4];
	const void			*id;
	const t_parser_tree	*tree;
}						t_parser_node;

#endif /* TYPES_PARSER_NODE_H */
