/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_external_scanner_symbol_map.h                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_EXTERNAL_SCANNER_SYMBOL_MAP_H
# define TYPE_EXTERNAL_SCANNER_SYMBOL_MAP_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_external_scanner_symbol_map_array
{
	t_symbol	a[EXTERNAL_TOKEN_COUNT];
}	t_external_scanner_symbol_map_array;

#endif // TYPE_EXTERNAL_SCANNER_SYMBOL_MAP_H
