/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1208.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6040(t_small_parse_table_array *v)
{
	v->a[120800] = actions(3);
	v->a[120801] = 1;
	v->a[120802] = sym_comment;
	v->a[120803] = actions(5407);
	v->a[120804] = 1;
	v->a[120805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120806] = actions(5413);
	v->a[120807] = 1;
	v->a[120808] = anon_sym_DQUOTE;
	v->a[120809] = actions(5417);
	v->a[120810] = 1;
	v->a[120811] = aux_sym_number_token1;
	v->a[120812] = actions(5419);
	v->a[120813] = 1;
	v->a[120814] = aux_sym_number_token2;
	v->a[120815] = actions(5421);
	v->a[120816] = 1;
	v->a[120817] = anon_sym_DOLLAR_LBRACE;
	v->a[120818] = actions(5423);
	v->a[120819] = 1;
	small_parse_table_6041(v);
}

void	small_parse_table_6041(t_small_parse_table_array *v)
{
	v->a[120820] = anon_sym_DOLLAR_LPAREN;
	v->a[120821] = actions(5425);
	v->a[120822] = 1;
	v->a[120823] = anon_sym_BQUOTE;
	v->a[120824] = actions(5427);
	v->a[120825] = 1;
	v->a[120826] = anon_sym_DOLLAR_BQUOTE;
	v->a[120827] = actions(5433);
	v->a[120828] = 1;
	v->a[120829] = sym__brace_start;
	v->a[120830] = actions(6625);
	v->a[120831] = 1;
	v->a[120832] = sym_word;
	v->a[120833] = actions(6627);
	v->a[120834] = 1;
	v->a[120835] = sym__special_character;
	v->a[120836] = actions(6631);
	v->a[120837] = 1;
	v->a[120838] = sym__comment_word;
	v->a[120839] = actions(7023);
	small_parse_table_6042(v);
}

void	small_parse_table_6042(t_small_parse_table_array *v)
{
	v->a[120840] = 1;
	v->a[120841] = anon_sym_DOLLAR;
	v->a[120842] = actions(6629);
	v->a[120843] = 3;
	v->a[120844] = sym_test_operator;
	v->a[120845] = sym__bare_dollar;
	v->a[120846] = sym_raw_string;
	v->a[120847] = state(1903);
	v->a[120848] = 7;
	v->a[120849] = sym_arithmetic_expansion;
	v->a[120850] = sym_brace_expression;
	v->a[120851] = sym_string;
	v->a[120852] = sym_number;
	v->a[120853] = sym_simple_expansion;
	v->a[120854] = sym_expansion;
	v->a[120855] = sym_command_substitution;
	v->a[120856] = 16;
	v->a[120857] = actions(3);
	v->a[120858] = 1;
	v->a[120859] = sym_comment;
	small_parse_table_6043(v);
}

void	small_parse_table_6043(t_small_parse_table_array *v)
{
	v->a[120860] = actions(2362);
	v->a[120861] = 1;
	v->a[120862] = aux_sym_number_token1;
	v->a[120863] = actions(2364);
	v->a[120864] = 1;
	v->a[120865] = aux_sym_number_token2;
	v->a[120866] = actions(2368);
	v->a[120867] = 1;
	v->a[120868] = anon_sym_DOLLAR_LPAREN;
	v->a[120869] = actions(2376);
	v->a[120870] = 1;
	v->a[120871] = sym__brace_start;
	v->a[120872] = actions(6811);
	v->a[120873] = 1;
	v->a[120874] = sym_word;
	v->a[120875] = actions(6813);
	v->a[120876] = 1;
	v->a[120877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120878] = actions(6815);
	v->a[120879] = 1;
	small_parse_table_6044(v);
}

void	small_parse_table_6044(t_small_parse_table_array *v)
{
	v->a[120880] = sym__special_character;
	v->a[120881] = actions(6817);
	v->a[120882] = 1;
	v->a[120883] = anon_sym_DQUOTE;
	v->a[120884] = actions(6821);
	v->a[120885] = 1;
	v->a[120886] = anon_sym_DOLLAR_LBRACE;
	v->a[120887] = actions(6823);
	v->a[120888] = 1;
	v->a[120889] = anon_sym_BQUOTE;
	v->a[120890] = actions(6825);
	v->a[120891] = 1;
	v->a[120892] = anon_sym_DOLLAR_BQUOTE;
	v->a[120893] = actions(6827);
	v->a[120894] = 1;
	v->a[120895] = sym__comment_word;
	v->a[120896] = actions(7025);
	v->a[120897] = 1;
	v->a[120898] = anon_sym_DOLLAR;
	v->a[120899] = actions(6819);
	small_parse_table_6045(v);
}

/* EOF small_parse_table_1208.c */
