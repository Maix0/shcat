/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_small_parse_table.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/30 17:22:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_SMALL_PARSE_TABLE_H
# define TYPE_SMALL_PARSE_TABLE_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_small_parse_table_array
{
	uint16_t	a[96671];
}	t_small_parse_table_array;

#endif // TYPE_SMALL_PARSE_TABLE_H
