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
	v->a[56800] = actions(1436);
	v->a[56801] = 1;
	v->a[56802] = sym_comment;
	v->a[56803] = actions(2942);
	v->a[56804] = 1;
	v->a[56805] = anon_sym_PIPE;
	v->a[56806] = actions(2944);
	v->a[56807] = 1;
	v->a[56808] = anon_sym_RPAREN;
	v->a[56809] = state(1492);
	v->a[56810] = 1;
	v->a[56811] = aux_sym_concatenation_repeat1;
	v->a[56812] = state(1523);
	v->a[56813] = 1;
	v->a[56814] = aux_sym__case_item_last_repeat1;
	v->a[56815] = actions(2946);
	v->a[56816] = 2;
	v->a[56817] = sym__concat;
	v->a[56818] = aux_sym_concatenation_token1;
	v->a[56819] = 3;
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = actions(3);
	v->a[56821] = 1;
	v->a[56822] = sym_comment;
	v->a[56823] = actions(1126);
	v->a[56824] = 2;
	v->a[56825] = sym_regex;
	v->a[56826] = aux_sym__expansion_regex_token1;
	v->a[56827] = actions(1124);
	v->a[56828] = 4;
	v->a[56829] = anon_sym_RPAREN;
	v->a[56830] = anon_sym_RBRACE;
	v->a[56831] = anon_sym_DQUOTE;
	v->a[56832] = sym_raw_string;
	v->a[56833] = 6;
	v->a[56834] = actions(1436);
	v->a[56835] = 1;
	v->a[56836] = sym_comment;
	v->a[56837] = actions(2942);
	v->a[56838] = 1;
	v->a[56839] = anon_sym_PIPE;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = actions(2948);
	v->a[56841] = 1;
	v->a[56842] = anon_sym_RPAREN;
	v->a[56843] = state(1492);
	v->a[56844] = 1;
	v->a[56845] = aux_sym_concatenation_repeat1;
	v->a[56846] = state(1541);
	v->a[56847] = 1;
	v->a[56848] = aux_sym__case_item_last_repeat1;
	v->a[56849] = actions(2946);
	v->a[56850] = 2;
	v->a[56851] = sym__concat;
	v->a[56852] = aux_sym_concatenation_token1;
	v->a[56853] = 6;
	v->a[56854] = actions(1436);
	v->a[56855] = 1;
	v->a[56856] = sym_comment;
	v->a[56857] = actions(2942);
	v->a[56858] = 1;
	v->a[56859] = anon_sym_PIPE;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = actions(2950);
	v->a[56861] = 1;
	v->a[56862] = anon_sym_RPAREN;
	v->a[56863] = state(1492);
	v->a[56864] = 1;
	v->a[56865] = aux_sym_concatenation_repeat1;
	v->a[56866] = state(1539);
	v->a[56867] = 1;
	v->a[56868] = aux_sym__case_item_last_repeat1;
	v->a[56869] = actions(2946);
	v->a[56870] = 2;
	v->a[56871] = sym__concat;
	v->a[56872] = aux_sym_concatenation_token1;
	v->a[56873] = 6;
	v->a[56874] = actions(1436);
	v->a[56875] = 1;
	v->a[56876] = sym_comment;
	v->a[56877] = actions(2930);
	v->a[56878] = 1;
	v->a[56879] = anon_sym_elif;
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = actions(2932);
	v->a[56881] = 1;
	v->a[56882] = anon_sym_else;
	v->a[56883] = actions(2952);
	v->a[56884] = 1;
	v->a[56885] = anon_sym_fi;
	v->a[56886] = state(1617);
	v->a[56887] = 1;
	v->a[56888] = sym_else_clause;
	v->a[56889] = state(1503);
	v->a[56890] = 2;
	v->a[56891] = sym_elif_clause;
	v->a[56892] = aux_sym_if_statement_repeat1;
	v->a[56893] = 3;
	v->a[56894] = actions(3);
	v->a[56895] = 1;
	v->a[56896] = sym_comment;
	v->a[56897] = actions(1093);
	v->a[56898] = 2;
	v->a[56899] = sym__concat;
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
