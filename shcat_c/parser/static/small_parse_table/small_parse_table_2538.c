/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2538.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12690(t_small_parse_table_array *v)
{
	v->a[253800] = actions(11305);
	v->a[253801] = 1;
	v->a[253802] = anon_sym_LT_LT_LT;
	v->a[253803] = actions(11414);
	v->a[253804] = 1;
	v->a[253805] = aux_sym_heredoc_redirect_token1;
	v->a[253806] = actions(11564);
	v->a[253807] = 1;
	v->a[253808] = sym_file_descriptor;
	v->a[253809] = actions(11335);
	v->a[253810] = 2;
	v->a[253811] = anon_sym_LT_AMP_DASH;
	v->a[253812] = anon_sym_GT_AMP_DASH;
	v->a[253813] = state(5084);
	v->a[253814] = 2;
	v->a[253815] = sym_file_redirect;
	v->a[253816] = sym_herestring_redirect;
	v->a[253817] = actions(11333);
	v->a[253818] = 8;
	v->a[253819] = anon_sym_LT;
	small_parse_table_12691(v);
}

void	small_parse_table_12691(t_small_parse_table_array *v)
{
	v->a[253820] = anon_sym_GT;
	v->a[253821] = anon_sym_GT_GT;
	v->a[253822] = anon_sym_AMP_GT;
	v->a[253823] = anon_sym_AMP_GT_GT;
	v->a[253824] = anon_sym_LT_AMP;
	v->a[253825] = anon_sym_GT_AMP;
	v->a[253826] = anon_sym_GT_PIPE;
	v->a[253827] = actions(11412);
	v->a[253828] = 11;
	v->a[253829] = anon_sym_SEMI;
	v->a[253830] = anon_sym_PIPE_PIPE;
	v->a[253831] = anon_sym_AMP_AMP;
	v->a[253832] = anon_sym_PIPE;
	v->a[253833] = anon_sym_AMP;
	v->a[253834] = anon_sym_LT_LT;
	v->a[253835] = anon_sym_SEMI_SEMI;
	v->a[253836] = anon_sym_SEMI_AMP;
	v->a[253837] = anon_sym_SEMI_SEMI_AMP;
	v->a[253838] = anon_sym_PIPE_AMP;
	v->a[253839] = anon_sym_LT_LT_DASH;
	small_parse_table_12692(v);
}

void	small_parse_table_12692(t_small_parse_table_array *v)
{
	v->a[253840] = 6;
	v->a[253841] = actions(3);
	v->a[253842] = 1;
	v->a[253843] = sym_comment;
	v->a[253844] = actions(11706);
	v->a[253845] = 1;
	v->a[253846] = sym_variable_name;
	v->a[253847] = state(6758);
	v->a[253848] = 1;
	v->a[253849] = sym_subscript;
	v->a[253850] = actions(11290);
	v->a[253851] = 2;
	v->a[253852] = sym_file_descriptor;
	v->a[253853] = aux_sym_heredoc_redirect_token1;
	v->a[253854] = state(4581);
	v->a[253855] = 2;
	v->a[253856] = sym_variable_assignment;
	v->a[253857] = aux_sym_variable_assignments_repeat1;
	v->a[253858] = actions(11288);
	v->a[253859] = 20;
	small_parse_table_12693(v);
}

void	small_parse_table_12693(t_small_parse_table_array *v)
{
	v->a[253860] = anon_sym_SEMI;
	v->a[253861] = anon_sym_PIPE_PIPE;
	v->a[253862] = anon_sym_AMP_AMP;
	v->a[253863] = anon_sym_PIPE;
	v->a[253864] = anon_sym_AMP;
	v->a[253865] = anon_sym_LT;
	v->a[253866] = anon_sym_GT;
	v->a[253867] = anon_sym_LT_LT;
	v->a[253868] = anon_sym_GT_GT;
	v->a[253869] = anon_sym_SEMI_SEMI;
	v->a[253870] = anon_sym_PIPE_AMP;
	v->a[253871] = anon_sym_AMP_GT;
	v->a[253872] = anon_sym_AMP_GT_GT;
	v->a[253873] = anon_sym_LT_AMP;
	v->a[253874] = anon_sym_GT_AMP;
	v->a[253875] = anon_sym_GT_PIPE;
	v->a[253876] = anon_sym_LT_AMP_DASH;
	v->a[253877] = anon_sym_GT_AMP_DASH;
	v->a[253878] = anon_sym_LT_LT_DASH;
	v->a[253879] = anon_sym_BQUOTE;
	small_parse_table_12694(v);
}

void	small_parse_table_12694(t_small_parse_table_array *v)
{
	v->a[253880] = 6;
	v->a[253881] = actions(3);
	v->a[253882] = 1;
	v->a[253883] = sym_comment;
	v->a[253884] = actions(11512);
	v->a[253885] = 1;
	v->a[253886] = aux_sym_concatenation_token1;
	v->a[253887] = actions(11514);
	v->a[253888] = 1;
	v->a[253889] = sym__concat;
	v->a[253890] = state(4591);
	v->a[253891] = 1;
	v->a[253892] = aux_sym_concatenation_repeat1;
	v->a[253893] = actions(2074);
	v->a[253894] = 2;
	v->a[253895] = sym_file_descriptor;
	v->a[253896] = aux_sym_heredoc_redirect_token1;
	v->a[253897] = actions(2072);
	v->a[253898] = 21;
	v->a[253899] = anon_sym_SEMI;
	small_parse_table_12695(v);
}

/* EOF small_parse_table_2538.c */
