/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptypes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:08:11 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/02 20:20:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTYPES_H
#define PTYPES_H

#include "me/types.h"
#include "parser/inner/length_inner.h"
#include "parser/inner/point_inner.h"

typedef t_u16					   TSStateId;
typedef t_u16					   TSSymbol;
typedef t_u16					   TSFieldId;
typedef struct TSLanguage		   TSLanguage;
typedef struct TSParser			   TSParser;
typedef struct s_tree			   TSTree;

typedef enum TSSymbolType
{
	TSSymbolTypeRegular,
	TSSymbolTypeAnonymous,
	TSSymbolTypeAuxiliary,
} TSSymbolType;

typedef struct s_srange
{
	TSPoint start_point;
	TSPoint end_point;
	t_u32	start_byte;
	t_u32	end_byte;
} TSRange;

typedef struct t_input 
{
	void *payload;
	const t_u8 *(*read)(void *payload, t_u32 byte_index, TSPoint position, t_u32 *bytes_read);
} TSInput;

typedef struct t_parse_node
{
	t_u32		  start_byte;
	t_u32		  start_row;
	t_u32		  start_col;
	t_u32		  alias;
	const void	 *id;
	const TSTree *tree;
} TSNode;

typedef TSNode	   t_parse_node;
typedef TSSymbol   t_symbol;
typedef TSParser   t_first_parser;
typedef TSLanguage t_language;
typedef TSTree	   t_first_tree;
#endif /* PTYPES_H */
