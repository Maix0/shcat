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
	v->a[64800] = 1;
	v->a[64801] = sym_comment;
	v->a[64802] = actions(2003);
	v->a[64803] = 1;
	v->a[64804] = aux_sym_heredoc_redirect_token1;
	v->a[64805] = actions(2005);
	v->a[64806] = 1;
	v->a[64807] = sym_file_descriptor;
	v->a[64808] = state(688);
	v->a[64809] = 1;
	v->a[64810] = sym_terminator;
	v->a[64811] = actions(768);
	v->a[64812] = 2;
	v->a[64813] = anon_sym_AMP_AMP;
	v->a[64814] = anon_sym_PIPE_PIPE;
	v->a[64815] = actions(770);
	v->a[64816] = 2;
	v->a[64817] = anon_sym_LT_LT;
	v->a[64818] = anon_sym_LT_LT_DASH;
	v->a[64819] = actions(772);
	small_parse_table_3241(v);
}

void	small_parse_table_3241(t_small_parse_table_array *v)
{
	v->a[64820] = 2;
	v->a[64821] = anon_sym_AMP;
	v->a[64822] = anon_sym_SEMI;
	v->a[64823] = actions(809);
	v->a[64824] = 2;
	v->a[64825] = anon_sym_esac;
	v->a[64826] = anon_sym_SEMI_SEMI;
	v->a[64827] = actions(2001);
	v->a[64828] = 2;
	v->a[64829] = anon_sym_LT_AMP_DASH;
	v->a[64830] = anon_sym_GT_AMP_DASH;
	v->a[64831] = state(1123);
	v->a[64832] = 3;
	v->a[64833] = sym_file_redirect;
	v->a[64834] = sym_heredoc_redirect;
	v->a[64835] = aux_sym_redirected_statement_repeat1;
	v->a[64836] = actions(1999);
	v->a[64837] = 8;
	v->a[64838] = anon_sym_LT;
	v->a[64839] = anon_sym_GT;
	small_parse_table_3242(v);
}

void	small_parse_table_3242(t_small_parse_table_array *v)
{
	v->a[64840] = anon_sym_GT_GT;
	v->a[64841] = anon_sym_AMP_GT;
	v->a[64842] = anon_sym_AMP_GT_GT;
	v->a[64843] = anon_sym_LT_AMP;
	v->a[64844] = anon_sym_GT_AMP;
	v->a[64845] = anon_sym_GT_PIPE;
	v->a[64846] = 4;
	v->a[64847] = actions(3);
	v->a[64848] = 1;
	v->a[64849] = sym_comment;
	v->a[64850] = actions(927);
	v->a[64851] = 2;
	v->a[64852] = sym_file_descriptor;
	v->a[64853] = aux_sym_heredoc_redirect_token1;
	v->a[64854] = state(1123);
	v->a[64855] = 3;
	v->a[64856] = sym_file_redirect;
	v->a[64857] = sym_heredoc_redirect;
	v->a[64858] = aux_sym_redirected_statement_repeat1;
	v->a[64859] = actions(900);
	small_parse_table_3243(v);
}

void	small_parse_table_3243(t_small_parse_table_array *v)
{
	v->a[64860] = 19;
	v->a[64861] = anon_sym_esac;
	v->a[64862] = anon_sym_PIPE;
	v->a[64863] = anon_sym_SEMI_SEMI;
	v->a[64864] = anon_sym_AMP_AMP;
	v->a[64865] = anon_sym_PIPE_PIPE;
	v->a[64866] = anon_sym_LT;
	v->a[64867] = anon_sym_GT;
	v->a[64868] = anon_sym_GT_GT;
	v->a[64869] = anon_sym_AMP_GT;
	v->a[64870] = anon_sym_AMP_GT_GT;
	v->a[64871] = anon_sym_LT_AMP;
	v->a[64872] = anon_sym_GT_AMP;
	v->a[64873] = anon_sym_GT_PIPE;
	v->a[64874] = anon_sym_LT_AMP_DASH;
	v->a[64875] = anon_sym_GT_AMP_DASH;
	v->a[64876] = anon_sym_LT_LT;
	v->a[64877] = anon_sym_LT_LT_DASH;
	v->a[64878] = anon_sym_AMP;
	v->a[64879] = anon_sym_SEMI;
	small_parse_table_3244(v);
}

void	small_parse_table_3244(t_small_parse_table_array *v)
{
	v->a[64880] = 8;
	v->a[64881] = actions(3);
	v->a[64882] = 1;
	v->a[64883] = sym_comment;
	v->a[64884] = actions(2079);
	v->a[64885] = 1;
	v->a[64886] = aux_sym_heredoc_redirect_token1;
	v->a[64887] = actions(2081);
	v->a[64888] = 1;
	v->a[64889] = sym_file_descriptor;
	v->a[64890] = actions(2073);
	v->a[64891] = 2;
	v->a[64892] = anon_sym_LT_AMP_DASH;
	v->a[64893] = anon_sym_GT_AMP_DASH;
	v->a[64894] = actions(2076);
	v->a[64895] = 2;
	v->a[64896] = anon_sym_LT_LT;
	v->a[64897] = anon_sym_LT_LT_DASH;
	v->a[64898] = state(1098);
	v->a[64899] = 3;
	small_parse_table_3245(v);
}

/* EOF small_parse_table_648.c */
