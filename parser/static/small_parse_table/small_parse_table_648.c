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
	v->a[64800] = actions(1071);
	v->a[64801] = 2;
	v->a[64802] = sym_file_descriptor;
	v->a[64803] = aux_sym_heredoc_redirect_token1;
	v->a[64804] = state(1050);
	v->a[64805] = 3;
	v->a[64806] = sym_file_redirect;
	v->a[64807] = sym_heredoc_redirect;
	v->a[64808] = aux_sym_redirected_statement_repeat1;
	v->a[64809] = actions(1004);
	v->a[64810] = 19;
	v->a[64811] = anon_sym_PIPE;
	v->a[64812] = anon_sym_RPAREN;
	v->a[64813] = anon_sym_SEMI_SEMI;
	v->a[64814] = anon_sym_AMP_AMP;
	v->a[64815] = anon_sym_PIPE_PIPE;
	v->a[64816] = anon_sym_LT;
	v->a[64817] = anon_sym_GT;
	v->a[64818] = anon_sym_GT_GT;
	v->a[64819] = anon_sym_AMP_GT;
	small_parse_table_3241(v);
}

void	small_parse_table_3241(t_small_parse_table_array *v)
{
	v->a[64820] = anon_sym_AMP_GT_GT;
	v->a[64821] = anon_sym_LT_AMP;
	v->a[64822] = anon_sym_GT_AMP;
	v->a[64823] = anon_sym_GT_PIPE;
	v->a[64824] = anon_sym_LT_AMP_DASH;
	v->a[64825] = anon_sym_GT_AMP_DASH;
	v->a[64826] = anon_sym_LT_LT;
	v->a[64827] = anon_sym_LT_LT_DASH;
	v->a[64828] = anon_sym_AMP;
	v->a[64829] = anon_sym_SEMI;
	v->a[64830] = 8;
	v->a[64831] = actions(3);
	v->a[64832] = 1;
	v->a[64833] = sym_comment;
	v->a[64834] = actions(2341);
	v->a[64835] = 1;
	v->a[64836] = aux_sym_heredoc_redirect_token1;
	v->a[64837] = actions(2343);
	v->a[64838] = 1;
	v->a[64839] = sym_file_descriptor;
	small_parse_table_3242(v);
}

void	small_parse_table_3242(t_small_parse_table_array *v)
{
	v->a[64840] = actions(2335);
	v->a[64841] = 2;
	v->a[64842] = anon_sym_LT_AMP_DASH;
	v->a[64843] = anon_sym_GT_AMP_DASH;
	v->a[64844] = actions(2338);
	v->a[64845] = 2;
	v->a[64846] = anon_sym_LT_LT;
	v->a[64847] = anon_sym_LT_LT_DASH;
	v->a[64848] = state(1055);
	v->a[64849] = 3;
	v->a[64850] = sym_file_redirect;
	v->a[64851] = sym_heredoc_redirect;
	v->a[64852] = aux_sym_redirected_statement_repeat1;
	v->a[64853] = actions(2330);
	v->a[64854] = 7;
	v->a[64855] = anon_sym_PIPE;
	v->a[64856] = anon_sym_RPAREN;
	v->a[64857] = anon_sym_SEMI_SEMI;
	v->a[64858] = anon_sym_AMP_AMP;
	v->a[64859] = anon_sym_PIPE_PIPE;
	small_parse_table_3243(v);
}

void	small_parse_table_3243(t_small_parse_table_array *v)
{
	v->a[64860] = anon_sym_AMP;
	v->a[64861] = anon_sym_SEMI;
	v->a[64862] = actions(2332);
	v->a[64863] = 8;
	v->a[64864] = anon_sym_LT;
	v->a[64865] = anon_sym_GT;
	v->a[64866] = anon_sym_GT_GT;
	v->a[64867] = anon_sym_AMP_GT;
	v->a[64868] = anon_sym_AMP_GT_GT;
	v->a[64869] = anon_sym_LT_AMP;
	v->a[64870] = anon_sym_GT_AMP;
	v->a[64871] = anon_sym_GT_PIPE;
	v->a[64872] = 6;
	v->a[64873] = actions(3);
	v->a[64874] = 1;
	v->a[64875] = sym_comment;
	v->a[64876] = actions(2261);
	v->a[64877] = 1;
	v->a[64878] = aux_sym_concatenation_token1;
	v->a[64879] = actions(2263);
	small_parse_table_3244(v);
}

void	small_parse_table_3244(t_small_parse_table_array *v)
{
	v->a[64880] = 1;
	v->a[64881] = sym__concat;
	v->a[64882] = state(1046);
	v->a[64883] = 1;
	v->a[64884] = aux_sym_concatenation_repeat1;
	v->a[64885] = actions(555);
	v->a[64886] = 2;
	v->a[64887] = sym_file_descriptor;
	v->a[64888] = aux_sym_heredoc_redirect_token1;
	v->a[64889] = actions(553);
	v->a[64890] = 19;
	v->a[64891] = anon_sym_PIPE;
	v->a[64892] = anon_sym_SEMI_SEMI;
	v->a[64893] = anon_sym_AMP_AMP;
	v->a[64894] = anon_sym_PIPE_PIPE;
	v->a[64895] = anon_sym_LT;
	v->a[64896] = anon_sym_GT;
	v->a[64897] = anon_sym_GT_GT;
	v->a[64898] = anon_sym_AMP_GT;
	v->a[64899] = anon_sym_AMP_GT_GT;
	small_parse_table_3245(v);
}

/* EOF small_parse_table_648.c */
