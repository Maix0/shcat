/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3128.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15640(t_small_parse_table_array *v)
{
	v->a[312800] = 1;
	v->a[312801] = sym__heredoc_body_beginning;
	v->a[312802] = actions(14712);
	v->a[312803] = 1;
	v->a[312804] = sym_simple_heredoc_body;
	v->a[312805] = state(5630);
	v->a[312806] = 1;
	v->a[312807] = sym__simple_heredoc_body;
	v->a[312808] = state(5631);
	v->a[312809] = 1;
	v->a[312810] = sym__heredoc_body;
	v->a[312811] = state(7466);
	v->a[312812] = 1;
	v->a[312813] = sym_heredoc_body;
	v->a[312814] = 3;
	v->a[312815] = actions(71);
	v->a[312816] = 1;
	v->a[312817] = sym_comment;
	v->a[312818] = actions(14714);
	v->a[312819] = 1;
	small_parse_table_15641(v);
}

void	small_parse_table_15641(t_small_parse_table_array *v)
{
	v->a[312820] = sym__concat;
	v->a[312821] = actions(6836);
	v->a[312822] = 4;
	v->a[312823] = sym__external_expansion_sym_hash;
	v->a[312824] = sym__external_expansion_sym_bang;
	v->a[312825] = sym__external_expansion_sym_equal;
	v->a[312826] = anon_sym_RBRACE3;
	v->a[312827] = 6;
	v->a[312828] = actions(71);
	v->a[312829] = 1;
	v->a[312830] = sym_comment;
	v->a[312831] = actions(14710);
	v->a[312832] = 1;
	v->a[312833] = sym__heredoc_body_beginning;
	v->a[312834] = actions(14712);
	v->a[312835] = 1;
	v->a[312836] = sym_simple_heredoc_body;
	v->a[312837] = state(5641);
	v->a[312838] = 1;
	v->a[312839] = sym__simple_heredoc_body;
	small_parse_table_15642(v);
}

void	small_parse_table_15642(t_small_parse_table_array *v)
{
	v->a[312840] = state(5642);
	v->a[312841] = 1;
	v->a[312842] = sym__heredoc_body;
	v->a[312843] = state(7466);
	v->a[312844] = 1;
	v->a[312845] = sym_heredoc_body;
	v->a[312846] = 5;
	v->a[312847] = actions(71);
	v->a[312848] = 1;
	v->a[312849] = sym_comment;
	v->a[312850] = actions(14716);
	v->a[312851] = 1;
	v->a[312852] = anon_sym_SLASH;
	v->a[312853] = actions(14718);
	v->a[312854] = 1;
	v->a[312855] = anon_sym_RBRACE3;
	v->a[312856] = state(6475);
	v->a[312857] = 1;
	v->a[312858] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[312859] = actions(14590);
	small_parse_table_15643(v);
}

void	small_parse_table_15643(t_small_parse_table_array *v)
{
	v->a[312860] = 2;
	v->a[312861] = sym__concat;
	v->a[312862] = aux_sym_concatenation_token1;
	v->a[312863] = 5;
	v->a[312864] = actions(71);
	v->a[312865] = 1;
	v->a[312866] = sym_comment;
	v->a[312867] = actions(14568);
	v->a[312868] = 1;
	v->a[312869] = aux_sym_concatenation_token1;
	v->a[312870] = actions(14720);
	v->a[312871] = 1;
	v->a[312872] = sym__concat;
	v->a[312873] = state(6419);
	v->a[312874] = 1;
	v->a[312875] = aux_sym_concatenation_repeat1;
	v->a[312876] = actions(1267);
	v->a[312877] = 2;
	v->a[312878] = anon_sym_PIPE;
	v->a[312879] = anon_sym_RPAREN;
	small_parse_table_15644(v);
}

void	small_parse_table_15644(t_small_parse_table_array *v)
{
	v->a[312880] = 4;
	v->a[312881] = actions(3);
	v->a[312882] = 1;
	v->a[312883] = sym_comment;
	v->a[312884] = actions(14419);
	v->a[312885] = 1;
	v->a[312886] = anon_sym_in;
	v->a[312887] = actions(14423);
	v->a[312888] = 1;
	v->a[312889] = aux_sym_heredoc_redirect_token1;
	v->a[312890] = actions(14421);
	v->a[312891] = 3;
	v->a[312892] = anon_sym_SEMI;
	v->a[312893] = anon_sym_AMP;
	v->a[312894] = anon_sym_SEMI_SEMI;
	v->a[312895] = 5;
	v->a[312896] = actions(71);
	v->a[312897] = 1;
	v->a[312898] = sym_comment;
	v->a[312899] = actions(14710);
	small_parse_table_15645(v);
}

/* EOF small_parse_table_3128.c */
