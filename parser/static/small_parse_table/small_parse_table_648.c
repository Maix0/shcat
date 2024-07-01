/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_648.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3240(t_small_parse_table_array *v)
{
	v->a[64800] = sym_heredoc_redirect;
	v->a[64801] = aux_sym_redirected_statement_repeat1;
	v->a[64802] = actions(2061);
	v->a[64803] = 6;
	v->a[64804] = anon_sym_LT;
	v->a[64805] = anon_sym_GT;
	v->a[64806] = anon_sym_GT_GT;
	v->a[64807] = anon_sym_LT_AMP;
	v->a[64808] = anon_sym_GT_AMP;
	v->a[64809] = anon_sym_GT_PIPE;
	v->a[64810] = 12;
	v->a[64811] = actions(3);
	v->a[64812] = 1;
	v->a[64813] = sym_comment;
	v->a[64814] = actions(682);
	v->a[64815] = 1;
	v->a[64816] = anon_sym_PIPE;
	v->a[64817] = actions(695);
	v->a[64818] = 1;
	v->a[64819] = anon_sym_SEMI_SEMI;
	small_parse_table_3241(v);
}

void	small_parse_table_3241(t_small_parse_table_array *v)
{
	v->a[64820] = actions(2009);
	v->a[64821] = 1;
	v->a[64822] = aux_sym_heredoc_redirect_token1;
	v->a[64823] = actions(2065);
	v->a[64824] = 1;
	v->a[64825] = sym_file_descriptor;
	v->a[64826] = state(759);
	v->a[64827] = 1;
	v->a[64828] = sym_terminator;
	v->a[64829] = actions(750);
	v->a[64830] = 2;
	v->a[64831] = anon_sym_AMP;
	v->a[64832] = anon_sym_SEMI;
	v->a[64833] = actions(754);
	v->a[64834] = 2;
	v->a[64835] = anon_sym_LT_LT;
	v->a[64836] = anon_sym_LT_LT_DASH;
	v->a[64837] = actions(924);
	v->a[64838] = 2;
	v->a[64839] = anon_sym_AMP_AMP;
	small_parse_table_3242(v);
}

void	small_parse_table_3242(t_small_parse_table_array *v)
{
	v->a[64840] = anon_sym_PIPE_PIPE;
	v->a[64841] = actions(2063);
	v->a[64842] = 2;
	v->a[64843] = anon_sym_LT_AMP_DASH;
	v->a[64844] = anon_sym_GT_AMP_DASH;
	v->a[64845] = state(1268);
	v->a[64846] = 3;
	v->a[64847] = sym_file_redirect;
	v->a[64848] = sym_heredoc_redirect;
	v->a[64849] = aux_sym_redirected_statement_repeat1;
	v->a[64850] = actions(2061);
	v->a[64851] = 6;
	v->a[64852] = anon_sym_LT;
	v->a[64853] = anon_sym_GT;
	v->a[64854] = anon_sym_GT_GT;
	v->a[64855] = anon_sym_LT_AMP;
	v->a[64856] = anon_sym_GT_AMP;
	v->a[64857] = anon_sym_GT_PIPE;
	v->a[64858] = 12;
	v->a[64859] = actions(3);
	small_parse_table_3243(v);
}

void	small_parse_table_3243(t_small_parse_table_array *v)
{
	v->a[64860] = 1;
	v->a[64861] = sym_comment;
	v->a[64862] = actions(682);
	v->a[64863] = 1;
	v->a[64864] = anon_sym_PIPE;
	v->a[64865] = actions(695);
	v->a[64866] = 1;
	v->a[64867] = anon_sym_SEMI_SEMI;
	v->a[64868] = actions(2009);
	v->a[64869] = 1;
	v->a[64870] = aux_sym_heredoc_redirect_token1;
	v->a[64871] = actions(2065);
	v->a[64872] = 1;
	v->a[64873] = sym_file_descriptor;
	v->a[64874] = state(760);
	v->a[64875] = 1;
	v->a[64876] = sym_terminator;
	v->a[64877] = actions(750);
	v->a[64878] = 2;
	v->a[64879] = anon_sym_AMP;
	small_parse_table_3244(v);
}

void	small_parse_table_3244(t_small_parse_table_array *v)
{
	v->a[64880] = anon_sym_SEMI;
	v->a[64881] = actions(754);
	v->a[64882] = 2;
	v->a[64883] = anon_sym_LT_LT;
	v->a[64884] = anon_sym_LT_LT_DASH;
	v->a[64885] = actions(924);
	v->a[64886] = 2;
	v->a[64887] = anon_sym_AMP_AMP;
	v->a[64888] = anon_sym_PIPE_PIPE;
	v->a[64889] = actions(2063);
	v->a[64890] = 2;
	v->a[64891] = anon_sym_LT_AMP_DASH;
	v->a[64892] = anon_sym_GT_AMP_DASH;
	v->a[64893] = state(1268);
	v->a[64894] = 3;
	v->a[64895] = sym_file_redirect;
	v->a[64896] = sym_heredoc_redirect;
	v->a[64897] = aux_sym_redirected_statement_repeat1;
	v->a[64898] = actions(2061);
	v->a[64899] = 6;
	small_parse_table_3245(v);
}

/* EOF small_parse_table_648.c */
