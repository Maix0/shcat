/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_external_scanner_states.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_EXTERNAL_SCANNER_STATES_H
# define TYPE_EXTERNAL_SCANNER_STATES_H

# include "../../parse_types.h"
# include "../headers/symbols.h"
# include "../headers/external_scanner_symbol_identifiers.h"
# include "../headers/field_identifiers.h"
# include "../headers/constants.h"

typedef struct s_external_scanner_states_array
{
	bool	a[86][EXTERNAL_TOKEN_COUNT];
}	t_external_scanner_states_array;

#endif // TYPE_EXTERNAL_SCANNER_STATES_H
