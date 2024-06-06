/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1168.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5840(t_small_parse_table_array *v)
{
	v->a[116800] = actions(49);
	v->a[116801] = 1;
	v->a[116802] = anon_sym_DOLLAR_LBRACE;
	v->a[116803] = actions(51);
	v->a[116804] = 1;
	v->a[116805] = anon_sym_DOLLAR_LPAREN;
	v->a[116806] = actions(53);
	v->a[116807] = 1;
	v->a[116808] = anon_sym_BQUOTE;
	v->a[116809] = actions(55);
	v->a[116810] = 1;
	v->a[116811] = anon_sym_DOLLAR_BQUOTE;
	v->a[116812] = actions(63);
	v->a[116813] = 1;
	v->a[116814] = sym__brace_start;
	v->a[116815] = actions(6605);
	v->a[116816] = 1;
	v->a[116817] = sym_word;
	v->a[116818] = actions(6609);
	v->a[116819] = 1;
	small_parse_table_5841(v);
}

void	small_parse_table_5841(t_small_parse_table_array *v)
{
	v->a[116820] = sym__special_character;
	v->a[116821] = actions(6613);
	v->a[116822] = 1;
	v->a[116823] = sym__comment_word;
	v->a[116824] = actions(6865);
	v->a[116825] = 1;
	v->a[116826] = anon_sym_DOLLAR;
	v->a[116827] = actions(6611);
	v->a[116828] = 3;
	v->a[116829] = sym_test_operator;
	v->a[116830] = sym__bare_dollar;
	v->a[116831] = sym_raw_string;
	v->a[116832] = state(796);
	v->a[116833] = 7;
	v->a[116834] = sym_arithmetic_expansion;
	v->a[116835] = sym_brace_expression;
	v->a[116836] = sym_string;
	v->a[116837] = sym_number;
	v->a[116838] = sym_simple_expansion;
	v->a[116839] = sym_expansion;
	small_parse_table_5842(v);
}

void	small_parse_table_5842(t_small_parse_table_array *v)
{
	v->a[116840] = sym_command_substitution;
	v->a[116841] = 16;
	v->a[116842] = actions(3);
	v->a[116843] = 1;
	v->a[116844] = sym_comment;
	v->a[116845] = actions(5371);
	v->a[116846] = 1;
	v->a[116847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116848] = actions(5377);
	v->a[116849] = 1;
	v->a[116850] = anon_sym_DQUOTE;
	v->a[116851] = actions(5381);
	v->a[116852] = 1;
	v->a[116853] = aux_sym_number_token1;
	v->a[116854] = actions(5383);
	v->a[116855] = 1;
	v->a[116856] = aux_sym_number_token2;
	v->a[116857] = actions(5385);
	v->a[116858] = 1;
	v->a[116859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5843(v);
}

void	small_parse_table_5843(t_small_parse_table_array *v)
{
	v->a[116860] = actions(5387);
	v->a[116861] = 1;
	v->a[116862] = anon_sym_DOLLAR_LPAREN;
	v->a[116863] = actions(5389);
	v->a[116864] = 1;
	v->a[116865] = anon_sym_BQUOTE;
	v->a[116866] = actions(5391);
	v->a[116867] = 1;
	v->a[116868] = anon_sym_DOLLAR_BQUOTE;
	v->a[116869] = actions(5397);
	v->a[116870] = 1;
	v->a[116871] = sym__brace_start;
	v->a[116872] = actions(6414);
	v->a[116873] = 1;
	v->a[116874] = sym_word;
	v->a[116875] = actions(6416);
	v->a[116876] = 1;
	v->a[116877] = sym__special_character;
	v->a[116878] = actions(6420);
	v->a[116879] = 1;
	small_parse_table_5844(v);
}

void	small_parse_table_5844(t_small_parse_table_array *v)
{
	v->a[116880] = sym__comment_word;
	v->a[116881] = actions(6867);
	v->a[116882] = 1;
	v->a[116883] = anon_sym_DOLLAR;
	v->a[116884] = actions(6418);
	v->a[116885] = 3;
	v->a[116886] = sym_test_operator;
	v->a[116887] = sym__bare_dollar;
	v->a[116888] = sym_raw_string;
	v->a[116889] = state(1907);
	v->a[116890] = 7;
	v->a[116891] = sym_arithmetic_expansion;
	v->a[116892] = sym_brace_expression;
	v->a[116893] = sym_string;
	v->a[116894] = sym_number;
	v->a[116895] = sym_simple_expansion;
	v->a[116896] = sym_expansion;
	v->a[116897] = sym_command_substitution;
	v->a[116898] = 7;
	v->a[116899] = actions(3);
	small_parse_table_5845(v);
}

/* EOF small_parse_table_1168.c */
