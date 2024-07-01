/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_568.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2840(t_small_parse_table_array *v)
{
	v->a[56800] = actions(736);
	v->a[56801] = 1;
	v->a[56802] = anon_sym_PIPE;
	v->a[56803] = actions(842);
	v->a[56804] = 1;
	v->a[56805] = anon_sym_RPAREN;
	v->a[56806] = actions(1865);
	v->a[56807] = 1;
	v->a[56808] = aux_sym_heredoc_redirect_token1;
	v->a[56809] = actions(1881);
	v->a[56810] = 1;
	v->a[56811] = sym_file_descriptor;
	v->a[56812] = state(659);
	v->a[56813] = 1;
	v->a[56814] = sym_terminator;
	v->a[56815] = actions(742);
	v->a[56816] = 2;
	v->a[56817] = anon_sym_AMP_AMP;
	v->a[56818] = anon_sym_PIPE_PIPE;
	v->a[56819] = actions(744);
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = 2;
	v->a[56821] = anon_sym_LT_LT;
	v->a[56822] = anon_sym_LT_LT_DASH;
	v->a[56823] = actions(740);
	v->a[56824] = 3;
	v->a[56825] = anon_sym_SEMI_SEMI;
	v->a[56826] = anon_sym_AMP;
	v->a[56827] = anon_sym_SEMI;
	v->a[56828] = state(1080);
	v->a[56829] = 3;
	v->a[56830] = sym_file_redirect;
	v->a[56831] = sym_heredoc_redirect;
	v->a[56832] = aux_sym_redirected_statement_repeat1;
	v->a[56833] = actions(1879);
	v->a[56834] = 7;
	v->a[56835] = anon_sym_LT;
	v->a[56836] = anon_sym_GT;
	v->a[56837] = anon_sym_GT_GT;
	v->a[56838] = anon_sym_LT_AMP;
	v->a[56839] = anon_sym_GT_AMP;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = anon_sym_GT_PIPE;
	v->a[56841] = anon_sym_LT_GT;
	v->a[56842] = 11;
	v->a[56843] = actions(3);
	v->a[56844] = 1;
	v->a[56845] = sym_comment;
	v->a[56846] = actions(736);
	v->a[56847] = 1;
	v->a[56848] = anon_sym_PIPE;
	v->a[56849] = actions(842);
	v->a[56850] = 1;
	v->a[56851] = anon_sym_RPAREN;
	v->a[56852] = actions(1865);
	v->a[56853] = 1;
	v->a[56854] = aux_sym_heredoc_redirect_token1;
	v->a[56855] = actions(1881);
	v->a[56856] = 1;
	v->a[56857] = sym_file_descriptor;
	v->a[56858] = state(655);
	v->a[56859] = 1;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = sym_terminator;
	v->a[56861] = actions(742);
	v->a[56862] = 2;
	v->a[56863] = anon_sym_AMP_AMP;
	v->a[56864] = anon_sym_PIPE_PIPE;
	v->a[56865] = actions(744);
	v->a[56866] = 2;
	v->a[56867] = anon_sym_LT_LT;
	v->a[56868] = anon_sym_LT_LT_DASH;
	v->a[56869] = actions(740);
	v->a[56870] = 3;
	v->a[56871] = anon_sym_SEMI_SEMI;
	v->a[56872] = anon_sym_AMP;
	v->a[56873] = anon_sym_SEMI;
	v->a[56874] = state(1080);
	v->a[56875] = 3;
	v->a[56876] = sym_file_redirect;
	v->a[56877] = sym_heredoc_redirect;
	v->a[56878] = aux_sym_redirected_statement_repeat1;
	v->a[56879] = actions(1879);
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = 7;
	v->a[56881] = anon_sym_LT;
	v->a[56882] = anon_sym_GT;
	v->a[56883] = anon_sym_GT_GT;
	v->a[56884] = anon_sym_LT_AMP;
	v->a[56885] = anon_sym_GT_AMP;
	v->a[56886] = anon_sym_GT_PIPE;
	v->a[56887] = anon_sym_LT_GT;
	v->a[56888] = 11;
	v->a[56889] = actions(3);
	v->a[56890] = 1;
	v->a[56891] = sym_comment;
	v->a[56892] = actions(736);
	v->a[56893] = 1;
	v->a[56894] = anon_sym_PIPE;
	v->a[56895] = actions(738);
	v->a[56896] = 1;
	v->a[56897] = anon_sym_RPAREN;
	v->a[56898] = actions(1865);
	v->a[56899] = 1;
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
