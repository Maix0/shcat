/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_slices.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_field_map_slices.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_field_map_slices_array	g_t_field_map_slices_array = {.a = {
[1] = {.index = 0, .length = 2},
[2] = {.index = 2, .length = 1},
[3] = {.index = 3, .length = 1},
[4] = {.index = 4, .length = 1},
[5] = {.index = 5, .length = 2},
[7] = {.index = 3, .length = 1},
[8] = {.index = 7, .length = 2},
[9] = {.index = 9, .length = 2},
[10] = {.index = 11, .length = 1},
[11] = {.index = 12, .length = 2},
[12] = {.index = 14, .length = 3},
[13] = {.index = 17, .length = 4},
[14] = {.index = 21, .length = 2},
[15] = {.index = 23, .length = 2},
[16] = {.index = 25, .length = 2},
[17] = {.index = 27, .length = 2},
[18] = {.index = 29, .length = 1},
[19] = {.index = 30, .length = 1},
[21] = {.index = 31, .length = 3},
[22] = {.index = 31, .length = 3},
[23] = {.index = 34, .length = 2},
[24] = {.index = 34, .length = 2},
[25] = {.index = 36, .length = 4},
[26] = {.index = 40, .length = 1},
[27] = {.index = 41, .length = 3},
[28] = {.index = 44, .length = 2},
[29] = {.index = 46, .length = 2},
[30] = {.index = 48, .length = 4},
[31] = {.index = 52, .length = 3},
[32] = {.index = 55, .length = 3},
[36] = {.index = 58, .length = 2},
[37] = {.index = 60, .length = 4},
[38] = {.index = 60, .length = 4},
[40] = {.index = 64, .length = 3},
}};

const t_field_map_slices_array	*create_field_map_slices(void)
{
	return (&g_t_field_map_slices_array);
}
