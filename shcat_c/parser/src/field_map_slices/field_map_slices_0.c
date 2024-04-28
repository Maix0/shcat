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
	v->a[2] = fmap_slice(0, 1);
	v->a[3] = fmap_slice(1, 1);
	v->a[4] = fmap_slice(2, 1);
	v->a[5] = fmap_slice(3, 3);
	v->a[6] = fmap_slice(6, 3);
	v->a[7] = fmap_slice(9, 1);
	v->a[8] = fmap_slice(10, 1);
	v->a[9] = fmap_slice(10, 1);
	v->a[12] = fmap_slice(11, 1);
	v->a[14] = fmap_slice(12, 2);
	v->a[15] = fmap_slice(14, 1);
	v->a[16] = fmap_slice(15, 1);
	v->a[17] = fmap_slice(15, 1);
	v->a[18] = fmap_slice(16, 3);
	v->a[19] = fmap_slice(19, 2);
	v->a[20] = fmap_slice(21, 2);
	v->a[21] = fmap_slice(23, 2);
	v->a[22] = fmap_slice(23, 2);
	v->a[23] = fmap_slice(2, 1);
	v->a[24] = fmap_slice(25, 2);
	field_map_slices_1(v);
}

void	field_map_slices_1(t_field_map_slices_array *v)
{
	v->a[25] = fmap_slice(25, 2);
	v->a[26] = fmap_slice(27, 2);
	v->a[27] = fmap_slice(29, 1);
	v->a[28] = fmap_slice(30, 2);
	v->a[29] = fmap_slice(32, 2);
	v->a[30] = fmap_slice(34, 3);
	v->a[31] = fmap_slice(37, 1);
	v->a[32] = fmap_slice(37, 1);
	v->a[33] = fmap_slice(11, 1);
	v->a[34] = fmap_slice(38, 2);
	v->a[35] = fmap_slice(40, 1);
	v->a[36] = fmap_slice(41, 2);
	v->a[37] = fmap_slice(41, 2);
	v->a[38] = fmap_slice(43, 4);
	v->a[39] = fmap_slice(47, 4);
	v->a[40] = fmap_slice(51, 2);
	v->a[41] = fmap_slice(51, 2);
	v->a[42] = fmap_slice(53, 2);
	v->a[43] = fmap_slice(55, 3);
	v->a[44] = fmap_slice(58, 1);
	field_map_slices_2(v);
}

void	field_map_slices_2(t_field_map_slices_array *v)
{
	v->a[45] = fmap_slice(59, 1);
	v->a[46] = fmap_slice(59, 1);
	v->a[47] = fmap_slice(60, 3);
	v->a[49] = fmap_slice(63, 2);
	v->a[50] = fmap_slice(65, 2);
	v->a[51] = fmap_slice(67, 2);
	v->a[52] = fmap_slice(69, 2);
	v->a[53] = fmap_slice(69, 2);
	v->a[54] = fmap_slice(71, 2);
	v->a[55] = fmap_slice(25, 2);
	v->a[56] = fmap_slice(73, 4);
	v->a[57] = fmap_slice(77, 1);
	v->a[58] = fmap_slice(78, 1);
	v->a[59] = fmap_slice(79, 1);
	v->a[60] = fmap_slice(79, 1);
	v->a[61] = fmap_slice(80, 2);
	v->a[62] = fmap_slice(63, 2);
	v->a[63] = fmap_slice(82, 3);
	v->a[64] = fmap_slice(85, 3);
	v->a[65] = fmap_slice(88, 3);
	field_map_slices_3(v);
}

void	field_map_slices_3(t_field_map_slices_array *v)
{
	v->a[66] = fmap_slice(91, 2);
	v->a[67] = fmap_slice(93, 2);
	v->a[68] = fmap_slice(95, 4);
	v->a[69] = fmap_slice(99, 2);
	v->a[70] = fmap_slice(101, 2);
	v->a[71] = fmap_slice(103, 2);
	v->a[72] = fmap_slice(105, 2);
	v->a[73] = fmap_slice(107, 2);
	v->a[74] = fmap_slice(109, 2);
	v->a[75] = fmap_slice(111, 3);
	v->a[76] = fmap_slice(114, 3);
	v->a[77] = fmap_slice(117, 2);
	v->a[78] = fmap_slice(119, 2);
	v->a[79] = fmap_slice(121, 2);
	v->a[80] = fmap_slice(123, 2);
	v->a[81] = fmap_slice(117, 2);
	v->a[82] = fmap_slice(119, 2);
	v->a[83] = fmap_slice(121, 2);
	v->a[84] = fmap_slice(125, 3);
	v->a[85] = fmap_slice(67, 2);
	field_map_slices_4(v);
}

void	field_map_slices_4(t_field_map_slices_array *v)
{
	v->a[86] = fmap_slice(128, 3);
	v->a[87] = fmap_slice(128, 3);
	v->a[88] = fmap_slice(63, 2);
	v->a[89] = fmap_slice(131, 2);
	v->a[90] = fmap_slice(133, 3);
	v->a[91] = fmap_slice(136, 3);
	v->a[92] = fmap_slice(139, 4);
	v->a[93] = fmap_slice(143, 2);
	v->a[94] = fmap_slice(145, 1);
	v->a[95] = fmap_slice(146, 1);
	v->a[96] = fmap_slice(147, 3);
	v->a[97] = fmap_slice(150, 3);
	v->a[98] = fmap_slice(153, 3);
	v->a[99] = fmap_slice(156, 3);
	v->a[100] = fmap_slice(159, 3);
	v->a[101] = fmap_slice(162, 3);
	v->a[102] = fmap_slice(165, 3);
	v->a[103] = fmap_slice(168, 2);
	v->a[104] = fmap_slice(170, 2);
	v->a[105] = fmap_slice(172, 3);
	field_map_slices_5(v);
}

/* EOF field_map_slices_0.c */
