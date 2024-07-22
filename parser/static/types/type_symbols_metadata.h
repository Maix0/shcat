/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_symbols_metadata.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_SYMBOLS_METADATA_H
# define TYPE_SYMBOLS_METADATA_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_symbols_metadata_array
{
	t_symbol_metadata	a[181];
}	t_symbols_metadata_array;

#endif // TYPE_SYMBOLS_METADATA_H
