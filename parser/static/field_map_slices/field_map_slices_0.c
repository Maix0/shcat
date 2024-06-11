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
	v->a[2] = fmap_slice(1, 2);
	v->a[3] = fmap_slice(3, 1);
	v->a[4] = fmap_slice(4, 1);
	v->a[5] = fmap_slice(5, 1);
	v->a[6] = fmap_slice(6, 2);
	v->a[7] = fmap_slice(8, 2);
	v->a[9] = fmap_slice(4, 1);
	v->a[10] = fmap_slice(10, 2);
	v->a[11] = fmap_slice(12, 2);
	v->a[12] = fmap_slice(14, 1);
	v->a[13] = fmap_slice(14, 1);
	v->a[14] = fmap_slice(15, 2);
	v->a[15] = fmap_slice(17, 3);
	v->a[16] = fmap_slice(20, 4);
	v->a[17] = fmap_slice(24, 2);
	v->a[18] = fmap_slice(26, 2);
	v->a[19] = fmap_slice(28, 3);
	v->a[20] = fmap_slice(31, 2);
	v->a[21] = fmap_slice(33, 4);
	field_map_slices_1(v);
}

void	field_map_slices_1(t_field_map_slices_array *v)
{
	v->a[22] = fmap_slice(37, 2);
	v->a[23] = fmap_slice(0, 1);
	v->a[24] = fmap_slice(39, 1);
	v->a[26] = fmap_slice(40, 2);
	v->a[27] = fmap_slice(40, 2);
	v->a[28] = fmap_slice(42, 2);
	v->a[29] = fmap_slice(44, 1);
	v->a[30] = fmap_slice(45, 3);
	v->a[31] = fmap_slice(48, 2);
	v->a[32] = fmap_slice(50, 4);
	v->a[33] = fmap_slice(54, 3);
	v->a[34] = fmap_slice(57, 2);
	v->a[35] = fmap_slice(59, 3);
	v->a[36] = fmap_slice(62, 1);
	v->a[37] = fmap_slice(63, 1);
	v->a[38] = fmap_slice(64, 3);
	v->a[42] = fmap_slice(67, 2);
	v->a[43] = fmap_slice(69, 3);
	v->a[44] = fmap_slice(72, 6);
	v->a[45] = fmap_slice(78, 4);
	field_map_slices_2(v);
}

void	field_map_slices_2(t_field_map_slices_array *v)
{
	v->a[46] = fmap_slice(82, 4);
	v->a[47] = fmap_slice(86, 4);
	v->a[48] = fmap_slice(90, 2);
	v->a[49] = fmap_slice(92, 2);
	v->a[50] = fmap_slice(94, 3);
	v->a[51] = fmap_slice(97, 7);
	v->a[52] = fmap_slice(104, 7);
	v->a[53] = fmap_slice(111, 5);
	v->a[54] = fmap_slice(116, 4);
	v->a[55] = fmap_slice(120, 4);
	v->a[56] = fmap_slice(124, 2);
	v->a[57] = fmap_slice(126, 5);
	v->a[58] = fmap_slice(131, 3);
	v->a[59] = fmap_slice(134, 3);
	v->a[60] = fmap_slice(137, 2);
	v->a[61] = fmap_slice(139, 2);
	v->a[62] = fmap_slice(141, 8);
	v->a[63] = fmap_slice(149, 4);
	v->a[64] = fmap_slice(153, 5);
	v->a[65] = fmap_slice(158, 4);
	field_map_slices_3(v);
}

void	field_map_slices_3(t_field_map_slices_array *v)
{
	v->a[66] = fmap_slice(162, 5);
	v->a[67] = fmap_slice(167, 4);
	v->a[68] = fmap_slice(171, 4);
	v->a[69] = fmap_slice(175, 3);
	v->a[70] = fmap_slice(178, 3);
	v->a[71] = fmap_slice(181, 4);
	v->a[72] = fmap_slice(185, 4);
	v->a[73] = fmap_slice(189, 5);
	v->a[74] = fmap_slice(194, 5);
	v->a[75] = fmap_slice(199, 5);
	v->a[76] = fmap_slice(204, 5);
	v->a[77] = fmap_slice(209, 5);
}

/* EOF field_map_slices_0.c */
