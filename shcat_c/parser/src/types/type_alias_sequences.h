/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_alias_sequences.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_ALIAS_SEQUENCES_H
# define TYPE_ALIAS_SEQUENCES_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_alias_sequences_array
{
	t_symbol	a[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH];
}	t_alias_sequences_array;

#endif // TYPE_ALIAS_SEQUENCES_H
