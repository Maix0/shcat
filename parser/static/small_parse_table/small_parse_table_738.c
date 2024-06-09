/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_738.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3690(t_small_parse_table_array *v)
{
	v->a[73800] = anon_sym_GT_AMP;
	v->a[73801] = anon_sym_GT_PIPE;
	v->a[73802] = 8;
	v->a[73803] = actions(3);
	v->a[73804] = 1;
	v->a[73805] = sym_comment;
	v->a[73806] = actions(2341);
	v->a[73807] = 1;
	v->a[73808] = aux_sym_heredoc_redirect_token1;
	v->a[73809] = actions(2773);
	v->a[73810] = 1;
	v->a[73811] = sym_file_descriptor;
	v->a[73812] = actions(2338);
	v->a[73813] = 2;
	v->a[73814] = anon_sym_LT_LT;
	v->a[73815] = anon_sym_LT_LT_DASH;
	v->a[73816] = actions(2770);
	v->a[73817] = 2;
	v->a[73818] = anon_sym_LT_AMP_DASH;
	v->a[73819] = anon_sym_GT_AMP_DASH;
	small_parse_table_3691(v);
}

void	small_parse_table_3691(t_small_parse_table_array *v)
{
	v->a[73820] = actions(2330);
	v->a[73821] = 3;
	v->a[73822] = anon_sym_PIPE;
	v->a[73823] = anon_sym_AMP_AMP;
	v->a[73824] = anon_sym_PIPE_PIPE;
	v->a[73825] = state(1305);
	v->a[73826] = 3;
	v->a[73827] = sym_file_redirect;
	v->a[73828] = sym_heredoc_redirect;
	v->a[73829] = aux_sym_redirected_statement_repeat1;
	v->a[73830] = actions(2767);
	v->a[73831] = 8;
	v->a[73832] = anon_sym_LT;
	v->a[73833] = anon_sym_GT;
	v->a[73834] = anon_sym_GT_GT;
	v->a[73835] = anon_sym_AMP_GT;
	v->a[73836] = anon_sym_AMP_GT_GT;
	v->a[73837] = anon_sym_LT_AMP;
	v->a[73838] = anon_sym_GT_AMP;
	v->a[73839] = anon_sym_GT_PIPE;
	small_parse_table_3692(v);
}

void	small_parse_table_3692(t_small_parse_table_array *v)
{
	v->a[73840] = 4;
	v->a[73841] = actions(3);
	v->a[73842] = 1;
	v->a[73843] = sym_comment;
	v->a[73844] = actions(1071);
	v->a[73845] = 2;
	v->a[73846] = sym_file_descriptor;
	v->a[73847] = aux_sym_heredoc_redirect_token1;
	v->a[73848] = state(1302);
	v->a[73849] = 3;
	v->a[73850] = sym_file_redirect;
	v->a[73851] = sym_heredoc_redirect;
	v->a[73852] = aux_sym_redirected_statement_repeat1;
	v->a[73853] = actions(1004);
	v->a[73854] = 15;
	v->a[73855] = anon_sym_PIPE;
	v->a[73856] = anon_sym_AMP_AMP;
	v->a[73857] = anon_sym_PIPE_PIPE;
	v->a[73858] = anon_sym_LT;
	v->a[73859] = anon_sym_GT;
	small_parse_table_3693(v);
}

void	small_parse_table_3693(t_small_parse_table_array *v)
{
	v->a[73860] = anon_sym_GT_GT;
	v->a[73861] = anon_sym_AMP_GT;
	v->a[73862] = anon_sym_AMP_GT_GT;
	v->a[73863] = anon_sym_LT_AMP;
	v->a[73864] = anon_sym_GT_AMP;
	v->a[73865] = anon_sym_GT_PIPE;
	v->a[73866] = anon_sym_LT_AMP_DASH;
	v->a[73867] = anon_sym_GT_AMP_DASH;
	v->a[73868] = anon_sym_LT_LT;
	v->a[73869] = anon_sym_LT_LT_DASH;
	v->a[73870] = 5;
	v->a[73871] = actions(1404);
	v->a[73872] = 1;
	v->a[73873] = sym_comment;
	v->a[73874] = state(1307);
	v->a[73875] = 1;
	v->a[73876] = aux_sym_concatenation_repeat1;
	v->a[73877] = actions(2776);
	v->a[73878] = 2;
	v->a[73879] = sym__concat;
	small_parse_table_3694(v);
}

void	small_parse_table_3694(t_small_parse_table_array *v)
{
	v->a[73880] = aux_sym_concatenation_token1;
	v->a[73881] = actions(1114);
	v->a[73882] = 7;
	v->a[73883] = anon_sym_PIPE;
	v->a[73884] = anon_sym_LT;
	v->a[73885] = anon_sym_GT;
	v->a[73886] = anon_sym_AMP_GT;
	v->a[73887] = anon_sym_LT_AMP;
	v->a[73888] = anon_sym_GT_AMP;
	v->a[73889] = anon_sym_LT_LT;
	v->a[73890] = actions(1112);
	v->a[73891] = 10;
	v->a[73892] = sym_file_descriptor;
	v->a[73893] = sym_variable_name;
	v->a[73894] = anon_sym_AMP_AMP;
	v->a[73895] = anon_sym_PIPE_PIPE;
	v->a[73896] = anon_sym_GT_GT;
	v->a[73897] = anon_sym_AMP_GT_GT;
	v->a[73898] = anon_sym_GT_PIPE;
	v->a[73899] = anon_sym_LT_AMP_DASH;
	small_parse_table_3695(v);
}

/* EOF small_parse_table_738.c */
