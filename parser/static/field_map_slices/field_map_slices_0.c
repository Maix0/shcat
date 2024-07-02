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
	v->a[1] = fmap_slice(0, 2);
	v->a[2] = fmap_slice(2, 1);
	v->a[3] = fmap_slice(3, 1);
	v->a[4] = fmap_slice(4, 1);
	v->a[5] = fmap_slice(5, 2);
	v->a[7] = fmap_slice(3, 1);
	v->a[8] = fmap_slice(7, 2);
	v->a[9] = fmap_slice(9, 2);
	v->a[10] = fmap_slice(11, 1);
	v->a[11] = fmap_slice(11, 1);
	v->a[12] = fmap_slice(12, 2);
	v->a[13] = fmap_slice(14, 3);
	v->a[14] = fmap_slice(17, 4);
	v->a[15] = fmap_slice(21, 2);
	v->a[16] = fmap_slice(23, 2);
	v->a[17] = fmap_slice(25, 3);
	v->a[18] = fmap_slice(28, 2);
	v->a[19] = fmap_slice(30, 4);
	v->a[20] = fmap_slice(34, 2);
	v->a[21] = fmap_slice(36, 1);
	field_map_slices_1(v);
}

void	field_map_slices_1(t_field_map_slices_array *v)
{
	v->a[22] = fmap_slice(37, 1);
	v->a[24] = fmap_slice(36, 1);
	v->a[25] = fmap_slice(38, 3);
	v->a[26] = fmap_slice(38, 3);
	v->a[27] = fmap_slice(41, 2);
	v->a[28] = fmap_slice(41, 2);
	v->a[29] = fmap_slice(43, 4);
	v->a[30] = fmap_slice(47, 1);
	v->a[31] = fmap_slice(48, 3);
	v->a[32] = fmap_slice(51, 2);
	v->a[33] = fmap_slice(53, 4);
	v->a[34] = fmap_slice(57, 3);
	v->a[35] = fmap_slice(60, 2);
	v->a[36] = fmap_slice(62, 3);
	v->a[37] = fmap_slice(65, 1);
	v->a[38] = fmap_slice(66, 1);
	v->a[39] = fmap_slice(67, 3);
	v->a[43] = fmap_slice(70, 2);
	v->a[44] = fmap_slice(72, 4);
	v->a[45] = fmap_slice(72, 4);
	field_map_slices_2(v);
}

void	field_map_slices_2(t_field_map_slices_array *v)
{
	v->a[46] = fmap_slice(76, 2);
	v->a[47] = fmap_slice(78, 3);
	v->a[48] = fmap_slice(81, 6);
	v->a[49] = fmap_slice(87, 4);
	v->a[50] = fmap_slice(91, 4);
	v->a[51] = fmap_slice(95, 4);
	v->a[52] = fmap_slice(99, 2);
	v->a[54] = fmap_slice(101, 2);
	v->a[55] = fmap_slice(103, 3);
	v->a[56] = fmap_slice(106, 7);
	v->a[57] = fmap_slice(113, 7);
	v->a[58] = fmap_slice(120, 5);
	v->a[59] = fmap_slice(125, 4);
	v->a[60] = fmap_slice(129, 2);
	v->a[61] = fmap_slice(131, 4);
	v->a[62] = fmap_slice(135, 5);
	v->a[63] = fmap_slice(140, 3);
	v->a[65] = fmap_slice(143, 2);
	v->a[66] = fmap_slice(145, 3);
	v->a[67] = fmap_slice(148, 2);
	field_map_slices_3(v);
}

void	field_map_slices_3(t_field_map_slices_array *v)
{
	v->a[68] = fmap_slice(150, 2);
	v->a[69] = fmap_slice(152, 8);
	v->a[70] = fmap_slice(160, 4);
	v->a[71] = fmap_slice(164, 4);
	v->a[72] = fmap_slice(168, 5);
	v->a[73] = fmap_slice(173, 5);
	v->a[74] = fmap_slice(178, 4);
	v->a[75] = fmap_slice(182, 4);
	v->a[76] = fmap_slice(186, 3);
	v->a[77] = fmap_slice(189, 3);
	v->a[78] = fmap_slice(192, 4);
	v->a[79] = fmap_slice(196, 4);
	v->a[80] = fmap_slice(200, 5);
	v->a[81] = fmap_slice(205, 5);
	v->a[82] = fmap_slice(210, 5);
	v->a[83] = fmap_slice(215, 5);
	v->a[84] = fmap_slice(220, 5);
}

/* EOF field_map_slices_0.c */
