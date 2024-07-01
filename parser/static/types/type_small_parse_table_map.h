/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_small_parse_table_map.h                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_SMALL_PARSE_TABLE_MAP_H
# define TYPE_SMALL_PARSE_TABLE_MAP_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_small_parse_table_map_array
{
	uint32_t	a[2116];
}	t_small_parse_table_map_array;

#endif // TYPE_SMALL_PARSE_TABLE_MAP_H
