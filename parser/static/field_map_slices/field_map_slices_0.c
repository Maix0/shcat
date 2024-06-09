/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_map_slices_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./field_map_slices.h"

void	field_map_slices_0(t_field_map_slices_array *v)
{
	v->a[1] = fmap_slice(0, 1);
	v->a[2] = fmap_slice(1, 1);
	v->a[3] = fmap_slice(2, 1);
	v->a[4] = fmap_slice(3, 2);
	v->a[5] = fmap_slice(5, 2);
	v->a[7] = fmap_slice(1, 1);
	v->a[8] = fmap_slice(7, 2);
	v->a[9] = fmap_slice(9, 1);
	v->a[10] = fmap_slice(10, 2);
	v->a[11] = fmap_slice(12, 2);
	v->a[12] = fmap_slice(14, 2);
	v->a[13] = fmap_slice(16, 3);
	v->a[14] = fmap_slice(19, 2);
	v->a[15] = fmap_slice(21, 2);
	v->a[16] = fmap_slice(0, 1);
	v->a[17] = fmap_slice(23, 1);
	v->a[18] = fmap_slice(24, 2);
	v->a[19] = fmap_slice(24, 2);
	v->a[20] = fmap_slice(26, 2);
	v->a[21] = fmap_slice(28, 1);
	field_map_slices_1(v);
}

void	field_map_slices_1(t_field_map_slices_array *v)
{
	v->a[22] = fmap_slice(29, 3);
	v->a[23] = fmap_slice(32, 2);
	v->a[24] = fmap_slice(34, 3);
	v->a[25] = fmap_slice(37, 2);
	v->a[26] = fmap_slice(39, 1);
	v->a[27] = fmap_slice(40, 1);
	v->a[28] = fmap_slice(41, 1);
	v->a[29] = fmap_slice(42, 3);
	v->a[31] = fmap_slice(45, 2);
	v->a[32] = fmap_slice(47, 4);
	v->a[33] = fmap_slice(51, 2);
	v->a[34] = fmap_slice(53, 2);
	v->a[35] = fmap_slice(55, 3);
	v->a[36] = fmap_slice(58, 4);
	v->a[37] = fmap_slice(62, 2);
	v->a[38] = fmap_slice(64, 2);
	v->a[39] = fmap_slice(66, 5);
	v->a[40] = fmap_slice(71, 3);
	v->a[41] = fmap_slice(74, 3);
	v->a[42] = fmap_slice(77, 2);
	field_map_slices_2(v);
}

void	field_map_slices_2(t_field_map_slices_array *v)
{
	v->a[43] = fmap_slice(79, 2);
	v->a[44] = fmap_slice(81, 2);
	v->a[45] = fmap_slice(83, 5);
	v->a[46] = fmap_slice(88, 2);
	v->a[47] = fmap_slice(90, 3);
	v->a[48] = fmap_slice(93, 4);
	v->a[49] = fmap_slice(97, 4);
	v->a[50] = fmap_slice(101, 3);
	v->a[51] = fmap_slice(104, 3);
	v->a[52] = fmap_slice(107, 4);
	v->a[53] = fmap_slice(111, 2);
	v->a[54] = fmap_slice(113, 3);
	v->a[55] = fmap_slice(116, 3);
	v->a[56] = fmap_slice(119, 5);
	v->a[57] = fmap_slice(124, 5);
	v->a[58] = fmap_slice(129, 3);
}

/* EOF field_map_slices_0.c */
