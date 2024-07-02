/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_unique_symbols_map.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_UNIQUE_SYMBOLS_MAP_H
# define TYPE_UNIQUE_SYMBOLS_MAP_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_unique_symbols_map_array
{
	t_symbol	a[182];
}	t_unique_symbols_map_array;

#endif // TYPE_UNIQUE_SYMBOLS_MAP_H
