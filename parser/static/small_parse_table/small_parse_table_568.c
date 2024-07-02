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
	v->a[56800] = anon_sym_RPAREN;
	v->a[56801] = anon_sym_SEMI_SEMI;
	v->a[56802] = anon_sym_AMP_AMP;
	v->a[56803] = anon_sym_PIPE_PIPE;
	v->a[56804] = anon_sym_LT;
	v->a[56805] = anon_sym_GT;
	v->a[56806] = anon_sym_GT_GT;
	v->a[56807] = anon_sym_LT_AMP;
	v->a[56808] = anon_sym_GT_AMP;
	v->a[56809] = anon_sym_GT_PIPE;
	v->a[56810] = anon_sym_LT_GT;
	v->a[56811] = anon_sym_LT_LT;
	v->a[56812] = anon_sym_LT_LT_DASH;
	v->a[56813] = anon_sym_AMP;
	v->a[56814] = anon_sym_SEMI;
	v->a[56815] = 11;
	v->a[56816] = actions(3);
	v->a[56817] = 1;
	v->a[56818] = sym_comment;
	v->a[56819] = actions(692);
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = 1;
	v->a[56821] = anon_sym_PIPE;
	v->a[56822] = actions(1900);
	v->a[56823] = 1;
	v->a[56824] = aux_sym_heredoc_redirect_token1;
	v->a[56825] = actions(1902);
	v->a[56826] = 1;
	v->a[56827] = sym_file_descriptor;
	v->a[56828] = state(668);
	v->a[56829] = 1;
	v->a[56830] = sym_terminator;
	v->a[56831] = actions(694);
	v->a[56832] = 2;
	v->a[56833] = anon_sym_esac;
	v->a[56834] = anon_sym_SEMI_SEMI;
	v->a[56835] = actions(759);
	v->a[56836] = 2;
	v->a[56837] = anon_sym_AMP_AMP;
	v->a[56838] = anon_sym_PIPE_PIPE;
	v->a[56839] = actions(761);
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = 2;
	v->a[56841] = anon_sym_LT_LT;
	v->a[56842] = anon_sym_LT_LT_DASH;
	v->a[56843] = actions(763);
	v->a[56844] = 2;
	v->a[56845] = anon_sym_AMP;
	v->a[56846] = anon_sym_SEMI;
	v->a[56847] = state(1059);
	v->a[56848] = 3;
	v->a[56849] = sym_file_redirect;
	v->a[56850] = sym_heredoc_redirect;
	v->a[56851] = aux_sym_redirected_statement_repeat1;
	v->a[56852] = actions(1898);
	v->a[56853] = 7;
	v->a[56854] = anon_sym_LT;
	v->a[56855] = anon_sym_GT;
	v->a[56856] = anon_sym_GT_GT;
	v->a[56857] = anon_sym_LT_AMP;
	v->a[56858] = anon_sym_GT_AMP;
	v->a[56859] = anon_sym_GT_PIPE;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = anon_sym_LT_GT;
	v->a[56861] = 6;
	v->a[56862] = actions(3);
	v->a[56863] = 1;
	v->a[56864] = sym_comment;
	v->a[56865] = actions(1881);
	v->a[56866] = 1;
	v->a[56867] = aux_sym_concatenation_token1;
	v->a[56868] = actions(1904);
	v->a[56869] = 1;
	v->a[56870] = sym__concat;
	v->a[56871] = state(993);
	v->a[56872] = 1;
	v->a[56873] = aux_sym_concatenation_repeat1;
	v->a[56874] = actions(1158);
	v->a[56875] = 3;
	v->a[56876] = sym_file_descriptor;
	v->a[56877] = sym_variable_name;
	v->a[56878] = aux_sym_heredoc_redirect_token1;
	v->a[56879] = actions(1154);
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = 16;
	v->a[56881] = anon_sym_PIPE;
	v->a[56882] = anon_sym_SEMI_SEMI;
	v->a[56883] = anon_sym_AMP_AMP;
	v->a[56884] = anon_sym_PIPE_PIPE;
	v->a[56885] = anon_sym_LT;
	v->a[56886] = anon_sym_GT;
	v->a[56887] = anon_sym_GT_GT;
	v->a[56888] = anon_sym_LT_AMP;
	v->a[56889] = anon_sym_GT_AMP;
	v->a[56890] = anon_sym_GT_PIPE;
	v->a[56891] = anon_sym_LT_GT;
	v->a[56892] = anon_sym_LT_LT;
	v->a[56893] = anon_sym_LT_LT_DASH;
	v->a[56894] = anon_sym_AMP;
	v->a[56895] = anon_sym_BQUOTE;
	v->a[56896] = anon_sym_SEMI;
	v->a[56897] = 11;
	v->a[56898] = actions(3);
	v->a[56899] = 1;
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
