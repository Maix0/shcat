/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = actions(815);
	v->a[80801] = 5;
	v->a[80802] = sym__concat;
	v->a[80803] = anon_sym_PIPE;
	v->a[80804] = anon_sym_RPAREN;
	v->a[80805] = anon_sym_RBRACE;
	v->a[80806] = aux_sym_concatenation_token1;
	v->a[80807] = 6;
	v->a[80808] = actions(664);
	v->a[80809] = 1;
	v->a[80810] = sym_comment;
	v->a[80811] = actions(3611);
	v->a[80812] = 1;
	v->a[80813] = sym_simple_heredoc_body;
	v->a[80814] = actions(3613);
	v->a[80815] = 1;
	v->a[80816] = sym__heredoc_body_beginning;
	v->a[80817] = state(1260);
	v->a[80818] = 1;
	v->a[80819] = sym__heredoc_body;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = state(1261);
	v->a[80821] = 1;
	v->a[80822] = sym__simple_heredoc_body;
	v->a[80823] = state(1927);
	v->a[80824] = 1;
	v->a[80825] = sym_heredoc_body;
	v->a[80826] = 5;
	v->a[80827] = actions(664);
	v->a[80828] = 1;
	v->a[80829] = sym_comment;
	v->a[80830] = actions(3611);
	v->a[80831] = 1;
	v->a[80832] = sym_simple_heredoc_body;
	v->a[80833] = actions(3613);
	v->a[80834] = 1;
	v->a[80835] = sym__heredoc_body_beginning;
	v->a[80836] = state(1927);
	v->a[80837] = 1;
	v->a[80838] = sym_heredoc_body;
	v->a[80839] = state(1262);
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = 2;
	v->a[80841] = sym__heredoc_body;
	v->a[80842] = sym__simple_heredoc_body;
	v->a[80843] = 5;
	v->a[80844] = actions(664);
	v->a[80845] = 1;
	v->a[80846] = sym_comment;
	v->a[80847] = actions(3611);
	v->a[80848] = 1;
	v->a[80849] = sym_simple_heredoc_body;
	v->a[80850] = actions(3613);
	v->a[80851] = 1;
	v->a[80852] = sym__heredoc_body_beginning;
	v->a[80853] = state(1927);
	v->a[80854] = 1;
	v->a[80855] = sym_heredoc_body;
	v->a[80856] = state(1233);
	v->a[80857] = 2;
	v->a[80858] = sym__heredoc_body;
	v->a[80859] = sym__simple_heredoc_body;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = 5;
	v->a[80861] = actions(664);
	v->a[80862] = 1;
	v->a[80863] = sym_comment;
	v->a[80864] = actions(3611);
	v->a[80865] = 1;
	v->a[80866] = sym_simple_heredoc_body;
	v->a[80867] = actions(3613);
	v->a[80868] = 1;
	v->a[80869] = sym__heredoc_body_beginning;
	v->a[80870] = state(1927);
	v->a[80871] = 1;
	v->a[80872] = sym_heredoc_body;
	v->a[80873] = state(1242);
	v->a[80874] = 2;
	v->a[80875] = sym__heredoc_body;
	v->a[80876] = sym__simple_heredoc_body;
	v->a[80877] = 6;
	v->a[80878] = actions(664);
	v->a[80879] = 1;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = sym_comment;
	v->a[80881] = actions(3611);
	v->a[80882] = 1;
	v->a[80883] = sym_simple_heredoc_body;
	v->a[80884] = actions(3613);
	v->a[80885] = 1;
	v->a[80886] = sym__heredoc_body_beginning;
	v->a[80887] = state(1236);
	v->a[80888] = 1;
	v->a[80889] = sym__heredoc_body;
	v->a[80890] = state(1249);
	v->a[80891] = 1;
	v->a[80892] = sym__simple_heredoc_body;
	v->a[80893] = state(1927);
	v->a[80894] = 1;
	v->a[80895] = sym_heredoc_body;
	v->a[80896] = 4;
	v->a[80897] = actions(664);
	v->a[80898] = 1;
	v->a[80899] = sym_comment;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
