/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_668.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3340(t_small_parse_table_array *v)
{
	v->a[66800] = anon_sym_GT_AMP_DASH;
	v->a[66801] = state(1256);
	v->a[66802] = 3;
	v->a[66803] = sym_file_redirect;
	v->a[66804] = sym_heredoc_redirect;
	v->a[66805] = aux_sym_redirected_statement_repeat1;
	v->a[66806] = actions(2062);
	v->a[66807] = 8;
	v->a[66808] = anon_sym_LT;
	v->a[66809] = anon_sym_GT;
	v->a[66810] = anon_sym_GT_GT;
	v->a[66811] = anon_sym_AMP_GT;
	v->a[66812] = anon_sym_AMP_GT_GT;
	v->a[66813] = anon_sym_LT_AMP;
	v->a[66814] = anon_sym_GT_AMP;
	v->a[66815] = anon_sym_GT_PIPE;
	v->a[66816] = 12;
	v->a[66817] = actions(3);
	v->a[66818] = 1;
	v->a[66819] = sym_comment;
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = actions(764);
	v->a[66821] = 1;
	v->a[66822] = anon_sym_SEMI_SEMI;
	v->a[66823] = actions(766);
	v->a[66824] = 1;
	v->a[66825] = anon_sym_PIPE;
	v->a[66826] = actions(2031);
	v->a[66827] = 1;
	v->a[66828] = aux_sym_heredoc_redirect_token1;
	v->a[66829] = actions(2066);
	v->a[66830] = 1;
	v->a[66831] = sym_file_descriptor;
	v->a[66832] = state(750);
	v->a[66833] = 1;
	v->a[66834] = sym_terminator;
	v->a[66835] = actions(800);
	v->a[66836] = 2;
	v->a[66837] = anon_sym_AMP;
	v->a[66838] = anon_sym_SEMI;
	v->a[66839] = actions(804);
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = 2;
	v->a[66841] = anon_sym_LT_LT;
	v->a[66842] = anon_sym_LT_LT_DASH;
	v->a[66843] = actions(893);
	v->a[66844] = 2;
	v->a[66845] = anon_sym_AMP_AMP;
	v->a[66846] = anon_sym_PIPE_PIPE;
	v->a[66847] = actions(2064);
	v->a[66848] = 2;
	v->a[66849] = anon_sym_LT_AMP_DASH;
	v->a[66850] = anon_sym_GT_AMP_DASH;
	v->a[66851] = state(1256);
	v->a[66852] = 3;
	v->a[66853] = sym_file_redirect;
	v->a[66854] = sym_heredoc_redirect;
	v->a[66855] = aux_sym_redirected_statement_repeat1;
	v->a[66856] = actions(2062);
	v->a[66857] = 8;
	v->a[66858] = anon_sym_LT;
	v->a[66859] = anon_sym_GT;
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = anon_sym_GT_GT;
	v->a[66861] = anon_sym_AMP_GT;
	v->a[66862] = anon_sym_AMP_GT_GT;
	v->a[66863] = anon_sym_LT_AMP;
	v->a[66864] = anon_sym_GT_AMP;
	v->a[66865] = anon_sym_GT_PIPE;
	v->a[66866] = 5;
	v->a[66867] = actions(3);
	v->a[66868] = 1;
	v->a[66869] = sym_comment;
	v->a[66870] = actions(2151);
	v->a[66871] = 1;
	v->a[66872] = sym_variable_name;
	v->a[66873] = actions(2057);
	v->a[66874] = 2;
	v->a[66875] = sym_file_descriptor;
	v->a[66876] = aux_sym_heredoc_redirect_token1;
	v->a[66877] = state(1148);
	v->a[66878] = 2;
	v->a[66879] = sym_variable_assignment;
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = aux_sym__variable_assignments_repeat1;
	v->a[66881] = actions(2055);
	v->a[66882] = 19;
	v->a[66883] = anon_sym_PIPE;
	v->a[66884] = anon_sym_SEMI_SEMI;
	v->a[66885] = anon_sym_AMP_AMP;
	v->a[66886] = anon_sym_PIPE_PIPE;
	v->a[66887] = anon_sym_LT;
	v->a[66888] = anon_sym_GT;
	v->a[66889] = anon_sym_GT_GT;
	v->a[66890] = anon_sym_AMP_GT;
	v->a[66891] = anon_sym_AMP_GT_GT;
	v->a[66892] = anon_sym_LT_AMP;
	v->a[66893] = anon_sym_GT_AMP;
	v->a[66894] = anon_sym_GT_PIPE;
	v->a[66895] = anon_sym_LT_AMP_DASH;
	v->a[66896] = anon_sym_GT_AMP_DASH;
	v->a[66897] = anon_sym_LT_LT;
	v->a[66898] = anon_sym_LT_LT_DASH;
	v->a[66899] = anon_sym_AMP;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */
