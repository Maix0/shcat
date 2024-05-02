/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_primary_state_ids.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_PRIMARY_STATE_IDS_H
# define TYPE_PRIMARY_STATE_IDS_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_primary_state_ids_array
{
	t_state_id	a[STATE_COUNT];
}	t_primary_state_ids_array;

#endif
