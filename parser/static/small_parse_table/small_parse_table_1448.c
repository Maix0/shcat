/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1448.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7240(t_small_parse_table_array *v)
{
	v->a[144800] = actions(8637);
	v->a[144801] = 1;
	v->a[144802] = sym__heredoc_body_beginning;
	v->a[144803] = actions(8653);
	v->a[144804] = 1;
	v->a[144805] = sym_simple_heredoc_body;
	v->a[144806] = state(2746);
	v->a[144807] = 1;
	v->a[144808] = sym__simple_heredoc_body;
	v->a[144809] = state(2748);
	v->a[144810] = 1;
	v->a[144811] = sym__heredoc_body;
	v->a[144812] = state(3836);
	v->a[144813] = 1;
	v->a[144814] = sym_heredoc_body;
	v->a[144815] = 6;
	v->a[144816] = actions(57);
	v->a[144817] = 1;
	v->a[144818] = sym_comment;
	v->a[144819] = actions(8637);
	small_parse_table_7241(v);
}

void	small_parse_table_7241(t_small_parse_table_array *v)
{
	v->a[144820] = 1;
	v->a[144821] = sym__heredoc_body_beginning;
	v->a[144822] = actions(8655);
	v->a[144823] = 1;
	v->a[144824] = sym_simple_heredoc_body;
	v->a[144825] = state(2271);
	v->a[144826] = 1;
	v->a[144827] = sym__heredoc_body;
	v->a[144828] = state(2272);
	v->a[144829] = 1;
	v->a[144830] = sym__simple_heredoc_body;
	v->a[144831] = state(3977);
	v->a[144832] = 1;
	v->a[144833] = sym_heredoc_body;
	v->a[144834] = 5;
	v->a[144835] = actions(57);
	v->a[144836] = 1;
	v->a[144837] = sym_comment;
	v->a[144838] = actions(8637);
	v->a[144839] = 1;
	small_parse_table_7242(v);
}

void	small_parse_table_7242(t_small_parse_table_array *v)
{
	v->a[144840] = sym__heredoc_body_beginning;
	v->a[144841] = actions(8639);
	v->a[144842] = 1;
	v->a[144843] = sym_simple_heredoc_body;
	v->a[144844] = state(3852);
	v->a[144845] = 1;
	v->a[144846] = sym_heredoc_body;
	v->a[144847] = state(2269);
	v->a[144848] = 2;
	v->a[144849] = sym__heredoc_body;
	v->a[144850] = sym__simple_heredoc_body;
	v->a[144851] = 6;
	v->a[144852] = actions(57);
	v->a[144853] = 1;
	v->a[144854] = sym_comment;
	v->a[144855] = actions(8637);
	v->a[144856] = 1;
	v->a[144857] = sym__heredoc_body_beginning;
	v->a[144858] = actions(8655);
	v->a[144859] = 1;
	small_parse_table_7243(v);
}

void	small_parse_table_7243(t_small_parse_table_array *v)
{
	v->a[144860] = sym_simple_heredoc_body;
	v->a[144861] = state(2266);
	v->a[144862] = 1;
	v->a[144863] = sym__heredoc_body;
	v->a[144864] = state(2267);
	v->a[144865] = 1;
	v->a[144866] = sym__simple_heredoc_body;
	v->a[144867] = state(3977);
	v->a[144868] = 1;
	v->a[144869] = sym_heredoc_body;
	v->a[144870] = 5;
	v->a[144871] = actions(57);
	v->a[144872] = 1;
	v->a[144873] = sym_comment;
	v->a[144874] = actions(8637);
	v->a[144875] = 1;
	v->a[144876] = sym__heredoc_body_beginning;
	v->a[144877] = actions(8655);
	v->a[144878] = 1;
	v->a[144879] = sym_simple_heredoc_body;
	small_parse_table_7244(v);
}

void	small_parse_table_7244(t_small_parse_table_array *v)
{
	v->a[144880] = state(3977);
	v->a[144881] = 1;
	v->a[144882] = sym_heredoc_body;
	v->a[144883] = state(2264);
	v->a[144884] = 2;
	v->a[144885] = sym__heredoc_body;
	v->a[144886] = sym__simple_heredoc_body;
	v->a[144887] = 6;
	v->a[144888] = actions(57);
	v->a[144889] = 1;
	v->a[144890] = sym_comment;
	v->a[144891] = actions(8637);
	v->a[144892] = 1;
	v->a[144893] = sym__heredoc_body_beginning;
	v->a[144894] = actions(8653);
	v->a[144895] = 1;
	v->a[144896] = sym_simple_heredoc_body;
	v->a[144897] = state(2761);
	v->a[144898] = 1;
	v->a[144899] = sym__simple_heredoc_body;
	small_parse_table_7245(v);
}

/* EOF small_parse_table_1448.c */
