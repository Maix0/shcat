/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_448.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2240(t_small_parse_table_array *v)
{
	v->a[44800] = sym_file_redirect;
	v->a[44801] = sym_heredoc_redirect;
	v->a[44802] = aux_sym_redirected_statement_repeat1;
	v->a[44803] = 10;
	v->a[44804] = actions(3);
	v->a[44805] = 1;
	v->a[44806] = sym_comment;
	v->a[44807] = actions(580);
	v->a[44808] = 1;
	v->a[44809] = anon_sym_PIPE;
	v->a[44810] = actions(591);
	v->a[44811] = 1;
	v->a[44812] = anon_sym_SEMI_SEMI;
	v->a[44813] = actions(593);
	v->a[44814] = 1;
	v->a[44815] = anon_sym_SEMI;
	v->a[44816] = actions(597);
	v->a[44817] = 1;
	v->a[44818] = anon_sym_LT_LT;
	v->a[44819] = actions(1870);
	small_parse_table_2241(v);
}

void	small_parse_table_2241(t_small_parse_table_array *v)
{
	v->a[44820] = 1;
	v->a[44821] = aux_sym_heredoc_redirect_token1;
	v->a[44822] = state(382);
	v->a[44823] = 1;
	v->a[44824] = sym_terminator;
	v->a[44825] = actions(769);
	v->a[44826] = 2;
	v->a[44827] = anon_sym_AMP_AMP;
	v->a[44828] = anon_sym_PIPE_PIPE;
	v->a[44829] = actions(1924);
	v->a[44830] = 3;
	v->a[44831] = anon_sym_LT;
	v->a[44832] = anon_sym_GT;
	v->a[44833] = anon_sym_GT_GT;
	v->a[44834] = state(1040);
	v->a[44835] = 3;
	v->a[44836] = sym_file_redirect;
	v->a[44837] = sym_heredoc_redirect;
	v->a[44838] = aux_sym_redirected_statement_repeat1;
	v->a[44839] = 10;
	small_parse_table_2242(v);
}

void	small_parse_table_2242(t_small_parse_table_array *v)
{
	v->a[44840] = actions(3);
	v->a[44841] = 1;
	v->a[44842] = sym_comment;
	v->a[44843] = actions(580);
	v->a[44844] = 1;
	v->a[44845] = anon_sym_PIPE;
	v->a[44846] = actions(591);
	v->a[44847] = 1;
	v->a[44848] = anon_sym_SEMI_SEMI;
	v->a[44849] = actions(593);
	v->a[44850] = 1;
	v->a[44851] = anon_sym_SEMI;
	v->a[44852] = actions(597);
	v->a[44853] = 1;
	v->a[44854] = anon_sym_LT_LT;
	v->a[44855] = actions(1870);
	v->a[44856] = 1;
	v->a[44857] = aux_sym_heredoc_redirect_token1;
	v->a[44858] = state(380);
	v->a[44859] = 1;
	small_parse_table_2243(v);
}

void	small_parse_table_2243(t_small_parse_table_array *v)
{
	v->a[44860] = sym_terminator;
	v->a[44861] = actions(769);
	v->a[44862] = 2;
	v->a[44863] = anon_sym_AMP_AMP;
	v->a[44864] = anon_sym_PIPE_PIPE;
	v->a[44865] = actions(1924);
	v->a[44866] = 3;
	v->a[44867] = anon_sym_LT;
	v->a[44868] = anon_sym_GT;
	v->a[44869] = anon_sym_GT_GT;
	v->a[44870] = state(1040);
	v->a[44871] = 3;
	v->a[44872] = sym_file_redirect;
	v->a[44873] = sym_heredoc_redirect;
	v->a[44874] = aux_sym_redirected_statement_repeat1;
	v->a[44875] = 10;
	v->a[44876] = actions(3);
	v->a[44877] = 1;
	v->a[44878] = sym_comment;
	v->a[44879] = actions(580);
	small_parse_table_2244(v);
}

void	small_parse_table_2244(t_small_parse_table_array *v)
{
	v->a[44880] = 1;
	v->a[44881] = anon_sym_PIPE;
	v->a[44882] = actions(591);
	v->a[44883] = 1;
	v->a[44884] = anon_sym_SEMI_SEMI;
	v->a[44885] = actions(593);
	v->a[44886] = 1;
	v->a[44887] = anon_sym_SEMI;
	v->a[44888] = actions(597);
	v->a[44889] = 1;
	v->a[44890] = anon_sym_LT_LT;
	v->a[44891] = actions(1870);
	v->a[44892] = 1;
	v->a[44893] = aux_sym_heredoc_redirect_token1;
	v->a[44894] = state(379);
	v->a[44895] = 1;
	v->a[44896] = sym_terminator;
	v->a[44897] = actions(769);
	v->a[44898] = 2;
	v->a[44899] = anon_sym_AMP_AMP;
	small_parse_table_2245(v);
}

/* EOF small_parse_table_448.c */
