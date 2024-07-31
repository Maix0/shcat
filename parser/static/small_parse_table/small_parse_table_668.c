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
	v->a[66800] = sym_simple_heredoc_body;
	v->a[66801] = state(1685);
	v->a[66802] = 1;
	v->a[66803] = sym_heredoc_body;
	v->a[66804] = state(1003);
	v->a[66805] = 2;
	v->a[66806] = sym__heredoc_body;
	v->a[66807] = sym__simple_heredoc_body;
	v->a[66808] = 2;
	v->a[66809] = actions(407);
	v->a[66810] = 1;
	v->a[66811] = sym_comment;
	v->a[66812] = actions(469);
	v->a[66813] = 5;
	v->a[66814] = sym__concat;
	v->a[66815] = anon_sym_PIPE;
	v->a[66816] = anon_sym_RPAREN;
	v->a[66817] = anon_sym_RBRACE;
	v->a[66818] = aux_sym_concatenation_token1;
	v->a[66819] = 6;
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = actions(407);
	v->a[66821] = 1;
	v->a[66822] = sym_comment;
	v->a[66823] = actions(3023);
	v->a[66824] = 1;
	v->a[66825] = sym__heredoc_body_beginning;
	v->a[66826] = actions(3036);
	v->a[66827] = 1;
	v->a[66828] = sym_simple_heredoc_body;
	v->a[66829] = state(1020);
	v->a[66830] = 1;
	v->a[66831] = sym__heredoc_body;
	v->a[66832] = state(1037);
	v->a[66833] = 1;
	v->a[66834] = sym__simple_heredoc_body;
	v->a[66835] = state(1685);
	v->a[66836] = 1;
	v->a[66837] = sym_heredoc_body;
	v->a[66838] = 6;
	v->a[66839] = actions(407);
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = 1;
	v->a[66841] = sym_comment;
	v->a[66842] = actions(3023);
	v->a[66843] = 1;
	v->a[66844] = sym__heredoc_body_beginning;
	v->a[66845] = actions(3025);
	v->a[66846] = 1;
	v->a[66847] = sym_simple_heredoc_body;
	v->a[66848] = state(1342);
	v->a[66849] = 1;
	v->a[66850] = sym__heredoc_body;
	v->a[66851] = state(1418);
	v->a[66852] = 1;
	v->a[66853] = sym__simple_heredoc_body;
	v->a[66854] = state(1778);
	v->a[66855] = 1;
	v->a[66856] = sym_heredoc_body;
	v->a[66857] = 6;
	v->a[66858] = actions(407);
	v->a[66859] = 1;
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = sym_comment;
	v->a[66861] = actions(3023);
	v->a[66862] = 1;
	v->a[66863] = sym__heredoc_body_beginning;
	v->a[66864] = actions(3036);
	v->a[66865] = 1;
	v->a[66866] = sym_simple_heredoc_body;
	v->a[66867] = state(976);
	v->a[66868] = 1;
	v->a[66869] = sym__simple_heredoc_body;
	v->a[66870] = state(977);
	v->a[66871] = 1;
	v->a[66872] = sym__heredoc_body;
	v->a[66873] = state(1685);
	v->a[66874] = 1;
	v->a[66875] = sym_heredoc_body;
	v->a[66876] = 2;
	v->a[66877] = actions(407);
	v->a[66878] = 1;
	v->a[66879] = sym_comment;
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = actions(1147);
	v->a[66881] = 5;
	v->a[66882] = sym__concat;
	v->a[66883] = anon_sym_PIPE;
	v->a[66884] = anon_sym_RPAREN;
	v->a[66885] = anon_sym_RBRACE;
	v->a[66886] = aux_sym_concatenation_token1;
	v->a[66887] = 4;
	v->a[66888] = actions(407);
	v->a[66889] = 1;
	v->a[66890] = sym_comment;
	v->a[66891] = state(1536);
	v->a[66892] = 1;
	v->a[66893] = aux_sym_concatenation_repeat1;
	v->a[66894] = actions(3003);
	v->a[66895] = 2;
	v->a[66896] = sym__concat;
	v->a[66897] = aux_sym_concatenation_token1;
	v->a[66898] = actions(3038);
	v->a[66899] = 2;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */
