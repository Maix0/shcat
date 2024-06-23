/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_non_terminal_alias_map.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/23 18:43:22 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_NON_TERMINAL_ALIAS_MAP_H
# define TYPE_NON_TERMINAL_ALIAS_MAP_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_non_terminal_alias_map_array
{
	uint16_t	a[9];
}	t_non_terminal_alias_map_array;

#endif // TYPE_NON_TERMINAL_ALIAS_MAP_H
