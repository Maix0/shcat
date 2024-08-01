/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_388.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1940(t_small_parse_table_array *v)
{
	v->a[38800] = actions(659);
	v->a[38801] = 1;
	v->a[38802] = anon_sym_DQUOTE;
	v->a[38803] = actions(661);
	v->a[38804] = 1;
	v->a[38805] = anon_sym_DOLLAR_LBRACE;
	v->a[38806] = actions(663);
	v->a[38807] = 1;
	v->a[38808] = anon_sym_DOLLAR_LPAREN;
	v->a[38809] = actions(665);
	v->a[38810] = 1;
	v->a[38811] = anon_sym_BQUOTE;
	v->a[38812] = actions(1786);
	v->a[38813] = 1;
	v->a[38814] = aux_sym_heredoc_redirect_token1;
	v->a[38815] = state(742);
	v->a[38816] = 1;
	v->a[38817] = aux_sym__heredoc_command;
	v->a[38818] = state(1296);
	v->a[38819] = 1;
	small_parse_table_1941(v);
}

void	small_parse_table_1941(t_small_parse_table_array *v)
{
	v->a[38820] = sym_concatenation;
	v->a[38821] = actions(645);
	v->a[38822] = 3;
	v->a[38823] = sym_raw_string;
	v->a[38824] = sym_number;
	v->a[38825] = sym_word;
	v->a[38826] = state(1011);
	v->a[38827] = 5;
	v->a[38828] = sym_arithmetic_expansion;
	v->a[38829] = sym_string;
	v->a[38830] = sym_simple_expansion;
	v->a[38831] = sym_expansion;
	v->a[38832] = sym_command_substitution;
	v->a[38833] = 10;
	v->a[38834] = actions(3);
	v->a[38835] = 1;
	v->a[38836] = sym_comment;
	v->a[38837] = actions(1643);
	v->a[38838] = 1;
	v->a[38839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1942(v);
}

void	small_parse_table_1942(t_small_parse_table_array *v)
{
	v->a[38840] = actions(1647);
	v->a[38841] = 1;
	v->a[38842] = anon_sym_DQUOTE;
	v->a[38843] = actions(1649);
	v->a[38844] = 1;
	v->a[38845] = anon_sym_DOLLAR_LBRACE;
	v->a[38846] = actions(1651);
	v->a[38847] = 1;
	v->a[38848] = anon_sym_DOLLAR_LPAREN;
	v->a[38849] = actions(1653);
	v->a[38850] = 1;
	v->a[38851] = anon_sym_BQUOTE;
	v->a[38852] = actions(1655);
	v->a[38853] = 1;
	v->a[38854] = sym__bare_dollar;
	v->a[38855] = actions(1788);
	v->a[38856] = 1;
	v->a[38857] = anon_sym_DOLLAR;
	v->a[38858] = actions(1641);
	v->a[38859] = 5;
	small_parse_table_1943(v);
}

void	small_parse_table_1943(t_small_parse_table_array *v)
{
	v->a[38860] = aux_sym_concatenation_token1;
	v->a[38861] = sym_raw_string;
	v->a[38862] = sym_number;
	v->a[38863] = sym__comment_word;
	v->a[38864] = sym_word;
	v->a[38865] = state(827);
	v->a[38866] = 5;
	v->a[38867] = sym_arithmetic_expansion;
	v->a[38868] = sym_string;
	v->a[38869] = sym_simple_expansion;
	v->a[38870] = sym_expansion;
	v->a[38871] = sym_command_substitution;
	v->a[38872] = 10;
	v->a[38873] = actions(3);
	v->a[38874] = 1;
	v->a[38875] = sym_comment;
	v->a[38876] = actions(1479);
	v->a[38877] = 1;
	v->a[38878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38879] = actions(1483);
	small_parse_table_1944(v);
}

void	small_parse_table_1944(t_small_parse_table_array *v)
{
	v->a[38880] = 1;
	v->a[38881] = anon_sym_DQUOTE;
	v->a[38882] = actions(1485);
	v->a[38883] = 1;
	v->a[38884] = anon_sym_DOLLAR_LBRACE;
	v->a[38885] = actions(1487);
	v->a[38886] = 1;
	v->a[38887] = anon_sym_DOLLAR_LPAREN;
	v->a[38888] = actions(1489);
	v->a[38889] = 1;
	v->a[38890] = anon_sym_BQUOTE;
	v->a[38891] = actions(1491);
	v->a[38892] = 1;
	v->a[38893] = sym__bare_dollar;
	v->a[38894] = actions(1790);
	v->a[38895] = 1;
	v->a[38896] = anon_sym_DOLLAR;
	v->a[38897] = actions(1477);
	v->a[38898] = 5;
	v->a[38899] = aux_sym_concatenation_token1;
	small_parse_table_1945(v);
}

/* EOF small_parse_table_388.c */
