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
	v->a[4] = fmap_slice(2, 1);
	v->a[5] = fmap_slice(3, 1);
	v->a[6] = fmap_slice(3, 1);
	v->a[7] = fmap_slice(4, 3);
	v->a[8] = fmap_slice(7, 3);
	v->a[9] = fmap_slice(10, 1);
	v->a[12] = fmap_slice(11, 2);
	v->a[13] = fmap_slice(13, 1);
	v->a[14] = fmap_slice(14, 2);
	v->a[15] = fmap_slice(13, 1);
	v->a[16] = fmap_slice(16, 2);
	v->a[17] = fmap_slice(18, 2);
	v->a[18] = fmap_slice(20, 2);
	v->a[19] = fmap_slice(20, 2);
	v->a[20] = fmap_slice(22, 2);
	v->a[21] = fmap_slice(22, 2);
	v->a[23] = fmap_slice(24, 2);
	v->a[24] = fmap_slice(26, 2);
	field_map_slices_1(v);
}

void	field_map_slices_1(t_field_map_slices_array *v)
{
	v->a[25] = fmap_slice(28, 1);
	v->a[26] = fmap_slice(29, 1);
	v->a[27] = fmap_slice(30, 1);
	v->a[28] = fmap_slice(30, 1);
	v->a[29] = fmap_slice(31, 1);
	v->a[30] = fmap_slice(32, 2);
	v->a[31] = fmap_slice(34, 3);
	v->a[32] = fmap_slice(37, 2);
	v->a[33] = fmap_slice(39, 1);
	v->a[34] = fmap_slice(40, 1);
	v->a[35] = fmap_slice(40, 1);
	v->a[36] = fmap_slice(41, 3);
	v->a[37] = fmap_slice(44, 3);
	v->a[39] = fmap_slice(47, 2);
	v->a[40] = fmap_slice(49, 1);
	v->a[41] = fmap_slice(49, 1);
	v->a[42] = fmap_slice(50, 2);
	v->a[43] = fmap_slice(52, 3);
	v->a[44] = fmap_slice(55, 2);
	v->a[45] = fmap_slice(57, 3);
	field_map_slices_2(v);
}

void	field_map_slices_2(t_field_map_slices_array *v)
{
	v->a[46] = fmap_slice(60, 2);
	v->a[47] = fmap_slice(62, 2);
	v->a[48] = fmap_slice(64, 2);
	v->a[49] = fmap_slice(66, 2);
	v->a[50] = fmap_slice(60, 2);
	v->a[51] = fmap_slice(62, 2);
	v->a[52] = fmap_slice(64, 2);
	v->a[53] = fmap_slice(68, 3);
	v->a[54] = fmap_slice(71, 3);
	v->a[55] = fmap_slice(74, 2);
	v->a[56] = fmap_slice(76, 1);
	v->a[57] = fmap_slice(77, 1);
	v->a[58] = fmap_slice(78, 2);
	v->a[59] = fmap_slice(80, 2);
	v->a[60] = fmap_slice(82, 3);
	v->a[61] = fmap_slice(85, 3);
	v->a[62] = fmap_slice(88, 2);
	v->a[63] = fmap_slice(90, 2);
	v->a[64] = fmap_slice(92, 2);
	v->a[65] = fmap_slice(88, 2);
	field_map_slices_3(v);
}

void	field_map_slices_3(t_field_map_slices_array *v)
{
	v->a[66] = fmap_slice(90, 2);
	v->a[67] = fmap_slice(92, 2);
	v->a[68] = fmap_slice(78, 2);
	v->a[69] = fmap_slice(80, 2);
	v->a[70] = fmap_slice(82, 3);
	v->a[71] = fmap_slice(85, 3);
	v->a[72] = fmap_slice(94, 3);
	v->a[73] = fmap_slice(97, 2);
	v->a[74] = fmap_slice(99, 2);
	v->a[75] = fmap_slice(101, 3);
	v->a[76] = fmap_slice(104, 3);
	v->a[77] = fmap_slice(107, 3);
	v->a[78] = fmap_slice(110, 2);
	v->a[79] = fmap_slice(112, 2);
	v->a[80] = fmap_slice(114, 3);
	v->a[81] = fmap_slice(117, 3);
	v->a[82] = fmap_slice(110, 2);
	v->a[83] = fmap_slice(112, 2);
	v->a[84] = fmap_slice(114, 3);
	v->a[85] = fmap_slice(117, 3);
	field_map_slices_4(v);
}

void	field_map_slices_4(t_field_map_slices_array *v)
{
	v->a[86] = fmap_slice(104, 3);
	v->a[87] = fmap_slice(107, 3);
	v->a[88] = fmap_slice(120, 4);
	v->a[89] = fmap_slice(124, 3);
	v->a[90] = fmap_slice(127, 3);
	v->a[91] = fmap_slice(124, 3);
	v->a[92] = fmap_slice(127, 3);
}

/* EOF field_map_slices_0.c */
