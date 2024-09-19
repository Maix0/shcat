/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptypes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:08:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:45:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTYPES_H
#define PTYPES_H

#include "me/types.h"
#include "parser/inner/length_inner.h"
#include "parser/inner/point_inner.h"

typedef t_u16					   t_state_id;
typedef t_u16					   t_symbol;
typedef t_u16					   t_field_id;
typedef struct s_language		   t_language;
typedef struct s_parser			   t_parser;
typedef struct s_tree			   t_tree;

typedef enum e_symbol_type
{
	t_symbol_typeRegular,
	t_symbol_typeAnonymous,
	t_symbol_typeAuxiliary,
} t_symbol_type;

typedef struct s_srange
{
	t_point start_point;
	t_point end_point;
	t_u32	start_byte;
	t_u32	end_byte;
} t_range;

typedef struct s_input 
{
	void *payload;
	const t_u8 *(*read)(void *payload, t_u32 byte_index, t_point position, t_u32 *bytes_read);
} t_input;

typedef struct s_node
{
	t_u32		  start_byte;
	t_u32		  start_row;
	t_u32		  start_col;
	t_u32		  alias;
	const void	 *id;
	const t_tree *tree;
} t_node;

#endif /* PTYPES_H */
