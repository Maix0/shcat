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
[17] = {.index = 27, .length = 4},
[18] = {.index = 31, .length = 2},
[19] = {.index = 33, .length = 1},
[20] = {.index = 34, .length = 1},
[22] = {.index = 35, .length = 3},
[23] = {.index = 35, .length = 3},
[24] = {.index = 38, .length = 2},
[25] = {.index = 38, .length = 2},
[26] = {.index = 40, .length = 4},
[27] = {.index = 44, .length = 1},
[28] = {.index = 45, .length = 3},
[29] = {.index = 48, .length = 2},
[30] = {.index = 50, .length = 4},
[31] = {.index = 54, .length = 3},
[32] = {.index = 57, .length = 2},
[33] = {.index = 59, .length = 3},
[34] = {.index = 62, .length = 1},
[35] = {.index = 63, .length = 1},
[36] = {.index = 64, .length = 3},
[40] = {.index = 67, .length = 2},
[41] = {.index = 69, .length = 4},
[42] = {.index = 69, .length = 4},
[43] = {.index = 73, .length = 2},
[44] = {.index = 75, .length = 3},
[45] = {.index = 78, .length = 6},
[46] = {.index = 84, .length = 4},
[47] = {.index = 88, .length = 4},
[48] = {.index = 92, .length = 6},
[49] = {.index = 98, .length = 2},
[51] = {.index = 100, .length = 2},
[52] = {.index = 102, .length = 3},
[53] = {.index = 105, .length = 7},
[54] = {.index = 112, .length = 7},
[55] = {.index = 119, .length = 5},
[56] = {.index = 124, .length = 4},
[57] = {.index = 128, .length = 2},
[58] = {.index = 130, .length = 6},
[59] = {.index = 136, .length = 7},
[60] = {.index = 143, .length = 3},
[62] = {.index = 146, .length = 3},
[63] = {.index = 149, .length = 2},
[64] = {.index = 151, .length = 2},
[65] = {.index = 153, .length = 8},
[66] = {.index = 161, .length = 4},
[67] = {.index = 165, .length = 4},
[68] = {.index = 169, .length = 5},
[69] = {.index = 174, .length = 7},
[70] = {.index = 181, .length = 6},
[71] = {.index = 187, .length = 4},
[72] = {.index = 191, .length = 4},
[73] = {.index = 195, .length = 5},
[74] = {.index = 200, .length = 5},
[75] = {.index = 205, .length = 7},
[76] = {.index = 212, .length = 5},
}};

const t_field_map_slices_array	*create_field_map_slices(void)
{
	return (&g_t_field_map_slices_array);
}
