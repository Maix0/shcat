/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_parse_table.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_PARSE_TABLE_H
# define TYPE_PARSE_TABLE_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_parse_table_array
{
	uint16_t	a[LARGE_STATE_COUNT][SYMBOL_COUNT];
}	t_parse_table_array;

#endif // TYPE_PARSE_TABLE_H
