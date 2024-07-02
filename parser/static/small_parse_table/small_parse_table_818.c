/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_818.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4090(t_small_parse_table_array *v)
{
	v->a[81800] = 1;
	v->a[81801] = sym_simple_heredoc_body;
	v->a[81802] = state(1549);
	v->a[81803] = 1;
	v->a[81804] = sym__simple_heredoc_body;
	v->a[81805] = state(1550);
	v->a[81806] = 1;
	v->a[81807] = sym__heredoc_body;
	v->a[81808] = state(2018);
	v->a[81809] = 1;
	v->a[81810] = sym_heredoc_body;
	v->a[81811] = 6;
	v->a[81812] = actions(680);
	v->a[81813] = 1;
	v->a[81814] = sym_comment;
	v->a[81815] = actions(3636);
	v->a[81816] = 1;
	v->a[81817] = sym__heredoc_body_beginning;
	v->a[81818] = actions(3638);
	v->a[81819] = 1;
	small_parse_table_4091(v);
}

void	small_parse_table_4091(t_small_parse_table_array *v)
{
	v->a[81820] = sym_simple_heredoc_body;
	v->a[81821] = state(1547);
	v->a[81822] = 1;
	v->a[81823] = sym__simple_heredoc_body;
	v->a[81824] = state(1548);
	v->a[81825] = 1;
	v->a[81826] = sym__heredoc_body;
	v->a[81827] = state(2018);
	v->a[81828] = 1;
	v->a[81829] = sym_heredoc_body;
	v->a[81830] = 5;
	v->a[81831] = actions(680);
	v->a[81832] = 1;
	v->a[81833] = sym_comment;
	v->a[81834] = actions(3636);
	v->a[81835] = 1;
	v->a[81836] = sym__heredoc_body_beginning;
	v->a[81837] = actions(3638);
	v->a[81838] = 1;
	v->a[81839] = sym_simple_heredoc_body;
	small_parse_table_4092(v);
}

void	small_parse_table_4092(t_small_parse_table_array *v)
{
	v->a[81840] = state(2018);
	v->a[81841] = 1;
	v->a[81842] = sym_heredoc_body;
	v->a[81843] = state(1557);
	v->a[81844] = 2;
	v->a[81845] = sym__heredoc_body;
	v->a[81846] = sym__simple_heredoc_body;
	v->a[81847] = 5;
	v->a[81848] = actions(680);
	v->a[81849] = 1;
	v->a[81850] = sym_comment;
	v->a[81851] = actions(3634);
	v->a[81852] = 1;
	v->a[81853] = sym_simple_heredoc_body;
	v->a[81854] = actions(3636);
	v->a[81855] = 1;
	v->a[81856] = sym__heredoc_body_beginning;
	v->a[81857] = state(2017);
	v->a[81858] = 1;
	v->a[81859] = sym_heredoc_body;
	small_parse_table_4093(v);
}

void	small_parse_table_4093(t_small_parse_table_array *v)
{
	v->a[81860] = state(1228);
	v->a[81861] = 2;
	v->a[81862] = sym__heredoc_body;
	v->a[81863] = sym__simple_heredoc_body;
	v->a[81864] = 4;
	v->a[81865] = actions(680);
	v->a[81866] = 1;
	v->a[81867] = sym_comment;
	v->a[81868] = actions(3654);
	v->a[81869] = 1;
	v->a[81870] = anon_sym_RBRACE;
	v->a[81871] = state(1866);
	v->a[81872] = 1;
	v->a[81873] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81874] = actions(3656);
	v->a[81875] = 2;
	v->a[81876] = sym__concat;
	v->a[81877] = aux_sym_concatenation_token1;
	v->a[81878] = 4;
	v->a[81879] = actions(680);
	small_parse_table_4094(v);
}

void	small_parse_table_4094(t_small_parse_table_array *v)
{
	v->a[81880] = 1;
	v->a[81881] = sym_comment;
	v->a[81882] = actions(3654);
	v->a[81883] = 1;
	v->a[81884] = anon_sym_RBRACE;
	v->a[81885] = state(1869);
	v->a[81886] = 1;
	v->a[81887] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81888] = actions(3656);
	v->a[81889] = 2;
	v->a[81890] = sym__concat;
	v->a[81891] = aux_sym_concatenation_token1;
	v->a[81892] = 4;
	v->a[81893] = actions(680);
	v->a[81894] = 1;
	v->a[81895] = sym_comment;
	v->a[81896] = actions(3658);
	v->a[81897] = 1;
	v->a[81898] = anon_sym_RBRACE;
	v->a[81899] = state(1865);
	small_parse_table_4095(v);
}

/* EOF small_parse_table_818.c */
