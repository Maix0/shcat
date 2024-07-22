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
	v->a[56800] = 15;
	v->a[56801] = actions(3);
	v->a[56802] = 1;
	v->a[56803] = sym_comment;
	v->a[56804] = actions(1720);
	v->a[56805] = 1;
	v->a[56806] = anon_sym_LPAREN;
	v->a[56807] = actions(1724);
	v->a[56808] = 1;
	v->a[56809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56810] = actions(1726);
	v->a[56811] = 1;
	v->a[56812] = anon_sym_DOLLAR;
	v->a[56813] = actions(1728);
	v->a[56814] = 1;
	v->a[56815] = anon_sym_DQUOTE;
	v->a[56816] = actions(1730);
	v->a[56817] = 1;
	v->a[56818] = anon_sym_DOLLAR_LBRACE;
	v->a[56819] = actions(1732);
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = 1;
	v->a[56821] = anon_sym_DOLLAR_LPAREN;
	v->a[56822] = actions(1734);
	v->a[56823] = 1;
	v->a[56824] = anon_sym_BQUOTE;
	v->a[56825] = actions(1736);
	v->a[56826] = 1;
	v->a[56827] = sym_extglob_pattern;
	v->a[56828] = state(1050);
	v->a[56829] = 1;
	v->a[56830] = aux_sym_case_statement_repeat1;
	v->a[56831] = state(1682);
	v->a[56832] = 1;
	v->a[56833] = sym_case_item;
	v->a[56834] = state(1991);
	v->a[56835] = 1;
	v->a[56836] = sym__case_item_last;
	v->a[56837] = state(1877);
	v->a[56838] = 2;
	v->a[56839] = sym_concatenation;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = sym__extglob_blob;
	v->a[56841] = actions(1716);
	v->a[56842] = 3;
	v->a[56843] = sym_raw_string;
	v->a[56844] = sym_number;
	v->a[56845] = sym_word;
	v->a[56846] = state(1772);
	v->a[56847] = 5;
	v->a[56848] = sym_arithmetic_expansion;
	v->a[56849] = sym_string;
	v->a[56850] = sym_simple_expansion;
	v->a[56851] = sym_expansion;
	v->a[56852] = sym_command_substitution;
	v->a[56853] = 15;
	v->a[56854] = actions(3);
	v->a[56855] = 1;
	v->a[56856] = sym_comment;
	v->a[56857] = actions(1720);
	v->a[56858] = 1;
	v->a[56859] = anon_sym_LPAREN;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = actions(1724);
	v->a[56861] = 1;
	v->a[56862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56863] = actions(1726);
	v->a[56864] = 1;
	v->a[56865] = anon_sym_DOLLAR;
	v->a[56866] = actions(1728);
	v->a[56867] = 1;
	v->a[56868] = anon_sym_DQUOTE;
	v->a[56869] = actions(1730);
	v->a[56870] = 1;
	v->a[56871] = anon_sym_DOLLAR_LBRACE;
	v->a[56872] = actions(1732);
	v->a[56873] = 1;
	v->a[56874] = anon_sym_DOLLAR_LPAREN;
	v->a[56875] = actions(1734);
	v->a[56876] = 1;
	v->a[56877] = anon_sym_BQUOTE;
	v->a[56878] = actions(1736);
	v->a[56879] = 1;
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = sym_extglob_pattern;
	v->a[56881] = state(1050);
	v->a[56882] = 1;
	v->a[56883] = aux_sym_case_statement_repeat1;
	v->a[56884] = state(1682);
	v->a[56885] = 1;
	v->a[56886] = sym_case_item;
	v->a[56887] = state(2091);
	v->a[56888] = 1;
	v->a[56889] = sym__case_item_last;
	v->a[56890] = state(1877);
	v->a[56891] = 2;
	v->a[56892] = sym_concatenation;
	v->a[56893] = sym__extglob_blob;
	v->a[56894] = actions(1716);
	v->a[56895] = 3;
	v->a[56896] = sym_raw_string;
	v->a[56897] = sym_number;
	v->a[56898] = sym_word;
	v->a[56899] = state(1772);
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
