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
	v->a[80800] = 2;
	v->a[80801] = sym__heredoc_body;
	v->a[80802] = sym__simple_heredoc_body;
	v->a[80803] = 6;
	v->a[80804] = actions(501);
	v->a[80805] = 1;
	v->a[80806] = sym_comment;
	v->a[80807] = actions(3630);
	v->a[80808] = 1;
	v->a[80809] = sym__heredoc_body_beginning;
	v->a[80810] = actions(3645);
	v->a[80811] = 1;
	v->a[80812] = sym_simple_heredoc_body;
	v->a[80813] = state(1321);
	v->a[80814] = 1;
	v->a[80815] = sym__heredoc_body;
	v->a[80816] = state(1322);
	v->a[80817] = 1;
	v->a[80818] = sym__simple_heredoc_body;
	v->a[80819] = state(1937);
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = 1;
	v->a[80821] = sym_heredoc_body;
	v->a[80822] = 4;
	v->a[80823] = actions(501);
	v->a[80824] = 1;
	v->a[80825] = sym_comment;
	v->a[80826] = state(1817);
	v->a[80827] = 1;
	v->a[80828] = aux_sym_concatenation_repeat1;
	v->a[80829] = actions(3600);
	v->a[80830] = 2;
	v->a[80831] = sym__concat;
	v->a[80832] = aux_sym_concatenation_token1;
	v->a[80833] = actions(3652);
	v->a[80834] = 2;
	v->a[80835] = anon_sym_PIPE;
	v->a[80836] = anon_sym_RPAREN;
	v->a[80837] = 6;
	v->a[80838] = actions(501);
	v->a[80839] = 1;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = sym_comment;
	v->a[80841] = actions(3628);
	v->a[80842] = 1;
	v->a[80843] = sym_simple_heredoc_body;
	v->a[80844] = actions(3630);
	v->a[80845] = 1;
	v->a[80846] = sym__heredoc_body_beginning;
	v->a[80847] = state(1165);
	v->a[80848] = 1;
	v->a[80849] = sym__simple_heredoc_body;
	v->a[80850] = state(1166);
	v->a[80851] = 1;
	v->a[80852] = sym__heredoc_body;
	v->a[80853] = state(2113);
	v->a[80854] = 1;
	v->a[80855] = sym_heredoc_body;
	v->a[80856] = 6;
	v->a[80857] = actions(501);
	v->a[80858] = 1;
	v->a[80859] = sym_comment;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = actions(3630);
	v->a[80861] = 1;
	v->a[80862] = sym__heredoc_body_beginning;
	v->a[80863] = actions(3645);
	v->a[80864] = 1;
	v->a[80865] = sym_simple_heredoc_body;
	v->a[80866] = state(1335);
	v->a[80867] = 1;
	v->a[80868] = sym__heredoc_body;
	v->a[80869] = state(1337);
	v->a[80870] = 1;
	v->a[80871] = sym__simple_heredoc_body;
	v->a[80872] = state(1937);
	v->a[80873] = 1;
	v->a[80874] = sym_heredoc_body;
	v->a[80875] = 5;
	v->a[80876] = actions(501);
	v->a[80877] = 1;
	v->a[80878] = sym_comment;
	v->a[80879] = actions(3628);
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = 1;
	v->a[80881] = sym_simple_heredoc_body;
	v->a[80882] = actions(3630);
	v->a[80883] = 1;
	v->a[80884] = sym__heredoc_body_beginning;
	v->a[80885] = state(2113);
	v->a[80886] = 1;
	v->a[80887] = sym_heredoc_body;
	v->a[80888] = state(1178);
	v->a[80889] = 2;
	v->a[80890] = sym__heredoc_body;
	v->a[80891] = sym__simple_heredoc_body;
	v->a[80892] = 2;
	v->a[80893] = actions(501);
	v->a[80894] = 1;
	v->a[80895] = sym_comment;
	v->a[80896] = actions(539);
	v->a[80897] = 5;
	v->a[80898] = sym__concat;
	v->a[80899] = anon_sym_PIPE;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
