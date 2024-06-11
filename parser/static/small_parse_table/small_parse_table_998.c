/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_998.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4990(t_small_parse_table_array *v)
{
	v->a[99800] = 1;
	v->a[99801] = sym__simple_heredoc_body;
	v->a[99802] = state(1537);
	v->a[99803] = 1;
	v->a[99804] = sym__heredoc_body;
	v->a[99805] = state(2439);
	v->a[99806] = 1;
	v->a[99807] = sym_heredoc_body;
	v->a[99808] = 6;
	v->a[99809] = actions(1094);
	v->a[99810] = 1;
	v->a[99811] = sym_comment;
	v->a[99812] = actions(4464);
	v->a[99813] = 1;
	v->a[99814] = sym__heredoc_body_beginning;
	v->a[99815] = actions(4470);
	v->a[99816] = 1;
	v->a[99817] = sym_simple_heredoc_body;
	v->a[99818] = state(1341);
	v->a[99819] = 1;
	small_parse_table_4991(v);
}

void	small_parse_table_4991(t_small_parse_table_array *v)
{
	v->a[99820] = sym__heredoc_body;
	v->a[99821] = state(1345);
	v->a[99822] = 1;
	v->a[99823] = sym__simple_heredoc_body;
	v->a[99824] = state(2390);
	v->a[99825] = 1;
	v->a[99826] = sym_heredoc_body;
	v->a[99827] = 2;
	v->a[99828] = actions(1094);
	v->a[99829] = 1;
	v->a[99830] = sym_comment;
	v->a[99831] = actions(1076);
	v->a[99832] = 5;
	v->a[99833] = sym__concat;
	v->a[99834] = anon_sym_PIPE;
	v->a[99835] = anon_sym_RPAREN;
	v->a[99836] = anon_sym_RBRACE;
	v->a[99837] = aux_sym_concatenation_token1;
	v->a[99838] = 6;
	v->a[99839] = actions(1094);
	small_parse_table_4992(v);
}

void	small_parse_table_4992(t_small_parse_table_array *v)
{
	v->a[99840] = 1;
	v->a[99841] = sym_comment;
	v->a[99842] = actions(4462);
	v->a[99843] = 1;
	v->a[99844] = sym_simple_heredoc_body;
	v->a[99845] = actions(4464);
	v->a[99846] = 1;
	v->a[99847] = sym__heredoc_body_beginning;
	v->a[99848] = state(1535);
	v->a[99849] = 1;
	v->a[99850] = sym__heredoc_body;
	v->a[99851] = state(1536);
	v->a[99852] = 1;
	v->a[99853] = sym__simple_heredoc_body;
	v->a[99854] = state(2439);
	v->a[99855] = 1;
	v->a[99856] = sym_heredoc_body;
	v->a[99857] = 5;
	v->a[99858] = actions(1094);
	v->a[99859] = 1;
	small_parse_table_4993(v);
}

void	small_parse_table_4993(t_small_parse_table_array *v)
{
	v->a[99860] = sym_comment;
	v->a[99861] = actions(4464);
	v->a[99862] = 1;
	v->a[99863] = sym__heredoc_body_beginning;
	v->a[99864] = actions(4466);
	v->a[99865] = 1;
	v->a[99866] = sym_simple_heredoc_body;
	v->a[99867] = state(2281);
	v->a[99868] = 1;
	v->a[99869] = sym_heredoc_body;
	v->a[99870] = state(1812);
	v->a[99871] = 2;
	v->a[99872] = sym__heredoc_body;
	v->a[99873] = sym__simple_heredoc_body;
	v->a[99874] = 6;
	v->a[99875] = actions(1094);
	v->a[99876] = 1;
	v->a[99877] = sym_comment;
	v->a[99878] = actions(4464);
	v->a[99879] = 1;
	small_parse_table_4994(v);
}

void	small_parse_table_4994(t_small_parse_table_array *v)
{
	v->a[99880] = sym__heredoc_body_beginning;
	v->a[99881] = actions(4470);
	v->a[99882] = 1;
	v->a[99883] = sym_simple_heredoc_body;
	v->a[99884] = state(1326);
	v->a[99885] = 1;
	v->a[99886] = sym__heredoc_body;
	v->a[99887] = state(1369);
	v->a[99888] = 1;
	v->a[99889] = sym__simple_heredoc_body;
	v->a[99890] = state(2390);
	v->a[99891] = 1;
	v->a[99892] = sym_heredoc_body;
	v->a[99893] = 4;
	v->a[99894] = actions(3);
	v->a[99895] = 1;
	v->a[99896] = sym_comment;
	v->a[99897] = actions(4482);
	v->a[99898] = 1;
	v->a[99899] = anon_sym_in;
	small_parse_table_4995(v);
}

/* EOF small_parse_table_998.c */
